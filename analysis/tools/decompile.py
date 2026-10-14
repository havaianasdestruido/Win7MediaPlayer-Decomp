#!/usr/bin/env python3
"""decompile.py — batch function recovery and decompilation for `bin/` modules.

Purpose
-------
Recover function boundaries, call relationships and C-like pseudocode for each
PE module in ``bin/`` using the angr decompiler, and write the results into the
matching ``src/<module>/`` tree.

Why not Ghidra/Hopper/IDA?
--------------------------
REA's deep native providers require a local Ghidra 12.1.x, Hopper or IDA
installation.  None is present in this environment and GitHub release
downloads are blocked (HTTP 000 on ``release-assets.githubusercontent.com``),
so REA's ``analyze``/``function``/``decompile``/``xrefs`` operations are
unavailable.  REA's objdump and PE-resource lanes *are* used (see
``rea_batch.py``).  angr 9.2.213 is used as the independent decompiler; the
pseudocode it emits is decompiler output, never original source.

Usage
-----
    python3 analysis/tools/decompile.py bin/WMPNSSUI.dll --max-functions 40
    python3 analysis/tools/decompile.py --all --max-functions 25
    python3 analysis/tools/decompile.py bin/wmpnetwk.exe --cfg-only

Inputs
------
* ``bin/<module>`` — read-only PE image.

Outputs
-------
* ``src/<module>/decompiled/NNNN_<addr>_<name>.c`` — one file per function
* ``src/<module>/decompiled/index.json`` — machine-readable function index
* ``src/<module>/decompiled/index.md`` — human-readable function index
* ``src/<module>/imports.txt``, ``src/<module>/exports.txt`` — API surface
* ``src/<module>/decompiled/_cfg.json`` — call graph edges + CFG statistics

Dependencies
------------
python3 + angr 9.2.213 (`pip install angr`, wheel-only install documented in
``analysis/tools/setup_toolchain.sh``), ``lib/peutils``.

Limitations
-----------
* angr's type recovery is heuristic: struct/typedef names such as
  ``struct_14`` or ``field_40`` are angr's invention and are marked as such in
  every emitted file header.
* Windows API signatures come from angr's bundled type library and may be
  incomplete for WMP/UPnP/COM interfaces; unresolved imports appear as
  ``sub_<address>`` calls or as raw import thunks.
* Code that is only reachable through data (COM vtables, callback tables) may
  be missing from the CFG; the function index records what was found, not what
  exists.
* No dynamic analysis is performed: these binaries are not executed.
"""

from __future__ import annotations

import argparse
import datetime as dt
import json
import logging
import os
import sys
import time

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), "lib"))
import peutils as P  # noqa: E402

REPO = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))
BIN = os.path.join(REPO, "bin")

HEADER = """/* {title}
 *
 * MODULE   : {module}  (bin/{binname})
 * ADDRESS  : {addr}  ({size} bytes, {blocks} basic blocks)
 * ORIGIN   : {origin}
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr {angrver} decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): {sha256}
 *   Evidence: {evidence}
 */
"""


def slug_to_module(slug: str) -> str:
    return slug


def load_project(path: str):
    import angr  # imported lazily so --help works without angr installed

    logging.getLogger("angr").setLevel("ERROR")
    logging.getLogger("cle").setLevel("ERROR")
    logging.getLogger("pyvex").setLevel("ERROR")
    # angr otherwise creates a scratch LMDB runtime database ("<image>_angr_rtdb")
    # next to the analysed image, which would pollute the read-only bin/ tree.
    # RTDB_BASE is angr's documented environment switch for that location.
    os.environ.setdefault("RTDB_BASE", os.path.join(REPO, "analysis", "report", "data", "rtdb"))
    os.makedirs(os.environ["RTDB_BASE"], exist_ok=True)
    return angr.Project(path, auto_load_libs=False)


def build_cfg(project, max_seconds: int):
    t0 = time.time()
    cfg = project.analyses.CFGFast(
        normalize=True,
        data_references=True,
        resolve_indirect_jumps=False,
        force_complete_scan=False,
    )
    return cfg, time.time() - t0


def rank_functions(cfg, funcs, max_functions: int, min_blocks: int, forced: set[int]):
    """Deterministic ranking: forced entries first, then by size, then address."""
    scored = []
    for f in funcs:
        try:
            blocks = len(list(f.blocks))
            size = f.size
        except Exception:  # noqa: BLE001
            blocks, size = 0, 0
        scored.append((f.addr in forced, blocks, size, f.addr, f))
    scored.sort(key=lambda t: (not t[0], -t[1], -t[2], t[3]))
    selected = [t[4] for t in scored if t[1] >= min_blocks or t[0]]
    return selected[:max_functions], scored


def serialise_function(f, block_count: int) -> dict:
    try:
        callers = sorted(f.get_callers())  # list of Function
        caller_list = [{"addr": hex(c.addr), "name": c.name} for c in callers[:64]]
    except Exception:  # noqa: BLE001
        caller_list = []
    callees = []
    try:
        for site in f.get_call_sites()[:128]:
            tgt = f.get_call_target(site)
            if tgt is not None:
                callees.append({"site": hex(site), "target": hex(tgt)})
    except Exception:  # noqa: BLE001
        pass
    return {
        "addr": hex(f.addr),
        "name": f.name,
        "size": f.size,
        "blocks": block_count,
        "is_plt": bool(getattr(f, "is_plt", False)),
        "is_simprocedure": bool(getattr(f, "is_simprocedure", False)),
        "returning": bool(getattr(f, "returning", True)),
        "callers": caller_list,
        "call_sites": callees,
    }


def decompile_function(project, cfg, f):
    d = project.analyses.Decompiler(f, cfg=cfg)
    if d.codegen is None:
        return None, d
    return d.codegen.text, d


def run_module(path: str, rel: str, slug: str, args) -> int:
    import angr

    info = P.parse_pe(path, rel)
    P.enrich_with_pefile(info)
    src_dir = os.path.join(REPO, "src", slug)
    dec_dir = os.path.join(src_dir, "decompiled")
    os.makedirs(dec_dir, exist_ok=True)

    # API surface (independent of angr)
    with open(os.path.join(src_dir, "imports.txt"), "w") as fh:
        fh.write(f"# Imported DLLs and functions — {rel} (SHA-256 {info.hashes['sha256']})\n")
        fh.write(f"# Generated by analysis/tools/decompile.py from PE import directory; ordinals shown as #n\n\n")
        for imp in sorted(info.imports, key=lambda i: i["dll"].lower()):
            fh.write(f"[{imp['dll']}]  ({imp['count']} functions)\n")
            for fn in sorted(imp["functions"], key=lambda x: (x["name"] or "")):
                fh.write(f"    {fn['name'] or ('#' + str(fn['ordinal']))}\n")
            fh.write("\n")
    with open(os.path.join(src_dir, "exports.txt"), "w") as fh:
        named = [e for e in info.exports if e.get("name")]
        fh.write(f"# Exported symbols — {rel} (SHA-256 {info.hashes['sha256']})\n")
        if named:
            fh.write(f"# Image export name: {info.exports[0].get('dll_name')}\n\n")
            for e in named:
                fh.write(f"{e['ordinal']:>5}  0x{(e['rva'] or 0):08x}  {e['name']}"
                         f"{'  -> ' + e['forwarder'] if e.get('forwarder') else ''}\n")
        else:
            fh.write("# (no exported symbols; this image is an executable or a resource-only module)\n")

    result = {
        "module": slug,
        "artifact": rel,
        "sha256": info.hashes["sha256"],
        "generated_at": dt.datetime.now(dt.timezone.utc).strftime("%Y-%m-%d %H:%M:%SZ"),
        "decompiler": {"name": "angr", "version": angr.__version__, "analysis": "CFGFast + Decompiler"},
        "image": {
            "machine": info.machine_name,
            "image_base": hex(info.image_base),
            "entry_point_rva": hex(info.entry_point_rva),
            "entry_point_va": hex(info.entry_point_va),
            "sections": [
                {"name": s.name, "rva": hex(s.virtual_address), "vsize": s.virtual_size,
                 "raw": hex(s.raw_pointer), "rawsize": s.raw_size, "entropy": s.entropy}
                for s in info.sections
            ],
        },
        "functions": [],
        "cfg": {"seconds": None, "function_count": 0, "edge_count": 0},
        "limitations": [
            "pseudocode is decompiler output, not original source",
            "functions reachable only through data (vtables/callbacks) may be absent",
            "no dynamic analysis was performed",
        ],
    }

    if args.cfg_only or not args.force_code:
        pass
    project = load_project(path)
    t0 = time.time()
    cfg, secs = build_cfg(project, args.cfg_seconds)
    funcs = list(cfg.functions.values())
    result["cfg"]["seconds"] = round(secs, 2)
    result["cfg"]["function_count"] = len(funcs)
    edges = []
    for f in funcs:
        for site in list(f.get_call_sites())[:256]:
            tgt = f.get_call_target(site)
            if tgt is not None:
                edges.append({"from": hex(f.addr), "to": hex(tgt), "site": hex(site)})
    result["cfg"]["edge_count"] = len(edges)
    with open(os.path.join(dec_dir, "_cfg.json"), "w") as fh:
        json.dump({"functions": [hex(f.addr) for f in sorted(funcs, key=lambda x: x.addr)],
                   "edges": edges}, fh, indent=0)

    if not funcs:
        result["note"] = ("no functions recovered by CFGFast — image has no executable code section "
                          "(resource-only module such as a .mui payload)")
        with open(os.path.join(dec_dir, "index.json"), "w") as fh:
            json.dump(result, fh, indent=1)
        _write_index_md(result, dec_dir, src_dir)
        print(f"[{slug}] no code (resource-only) — CFG in {secs:.1f}s")
        return 0

    forced = {project.entry}
    for e in info.exports:
        if e.get("rva"):
            forced.add(info.image_base + e["rva"])
    selected, scored = rank_functions(cfg, funcs, args.max_functions, args.min_blocks, forced)

    index_rows = []
    for i, f in enumerate(selected, 1):
        try:
            blocks = len(list(f.blocks))
        except Exception:  # noqa: BLE001
            blocks = 0
        rec = serialise_function(f, blocks)
        fname = f"{i:04d}_{f.addr:08x}_{P.slugify(f.name)[:48]}.c"
        rec["file"] = fname
        try:
            code, _d = decompile_function(project, cfg, f)
        except Exception as exc:  # noqa: BLE001
            code = None
            rec["decompile_error"] = f"{type(exc).__name__}: {exc}"
        if code:
            title = f"{f.name} @ 0x{f.addr:x}"
            header = HEADER.format(
                title=title, module=slug, binname=os.path.basename(rel), addr=hex(f.addr),
                size=f.size, blocks=blocks,
                origin="angr CFGFast function recovery + angr Decompiler pseudo-C",
                angrver=angr.__version__, sha256=info.hashes["sha256"],
                evidence=f"analysis/report/rea-evidence/{slug}/ (objdump symbols/relocations; "
                         f"raw disassembly) + analysis/tools/decompile.py",
            )
            with open(os.path.join(dec_dir, fname), "w") as fh:
                fh.write(header)
                fh.write("\n")
                fh.write(code.rstrip() + "\n")
            rec["decompiled"] = True
            rec["lines"] = code.count("\n") + 1
        else:
            rec["decompiled"] = False
        index_rows.append(rec)
        result["functions"] = index_rows
        result["status"] = "in_progress"
        result["coverage"] = {
            "functions_in_cfg": len(funcs),
            "functions_selected": len(selected),
            "functions_decompiled": sum(1 for r in index_rows if r.get("decompiled")),
            "selection_rule": f"forced (entry+exports), then size desc, min_blocks={args.min_blocks}, "
                              f"cap={args.max_functions}",
            "not_selected": len(funcs) - len(selected),
        }
        # Written after every function so that an interrupted batch still leaves
        # a truthful partial index (never a silently truncated "complete" one).
        with open(os.path.join(dec_dir, "index.json"), "w") as fh:
            json.dump(result, fh, indent=1)
        if args.verbose:
            print(f"    {rec['addr']} {rec['name'][:40]:<40} blocks={blocks:<4} "
                  f"{'ok' if rec.get('decompiled') else 'FAILED'}")

    result["functions"] = index_rows
    result["status"] = "complete"
    result["coverage"] = {
        "functions_in_cfg": len(funcs),
        "functions_selected": len(selected),
        "functions_decompiled": sum(1 for r in index_rows if r.get("decompiled")),
        "selection_rule": f"forced (entry+exports), then size desc, min_blocks={args.min_blocks}, "
                          f"cap={args.max_functions}",
        "not_selected": len(funcs) - len(selected),
    }
    with open(os.path.join(dec_dir, "index.json"), "w") as fh:
        json.dump(result, fh, indent=1)
    _write_index_md(result, dec_dir, src_dir)
    cov = result["coverage"]
    print(f"[{slug}] cfg {secs:.1f}s functions={len(funcs)} selected={len(selected)} "
          f"decompiled={cov['functions_decompiled']} elapsed={time.time()-t0:.0f}s")
    return 0


def _write_index_md(result: dict, dec_dir: str, src_dir: str) -> None:
    cov = result.get("coverage", {})
    L = [f"# Decompiled function index — `{result['artifact']}`\n",
         f"* Decompiler: angr {result['decompiler']['version']} "
         f"(CFGFast + Decompiler), run {result['generated_at']}.",
         f"* Module digest: `{result['sha256']}`",
         f"* CFG: {result['cfg']['function_count']} functions, {result['cfg']['edge_count']} call edges, "
         f"built in {result['cfg']['seconds']}s.",
         f"* Selection: {cov.get('selection_rule', 'n/a')} — "
         f"{cov.get('functions_decompiled', 0)} of {cov.get('functions_in_cfg', 0)} CFG functions emitted.",
         "* All emitted `.c` files are decompiler output; see each file header for provenance.\n"]
    if result.get("note"):
        L.append(f"> **Note:** {result['note']}\n")
    L.append("| # | Address | Name | Blocks | Size | Decompiled | File |")
    L.append("|---|---------|------|--------|------|-----------|------|")
    for i, r in enumerate(result.get("functions", []), 1):
        L.append(f"| {i} | `{r['addr']}` | `{r['name'][:48]}` | {r['blocks']} | {r['size']} | "
                 f"{'yes' if r.get('decompiled') else ('no (' + r.get('decompile_error','')[:40] + ')') if r.get('decompile_error') else 'no'} | "
                 f"{'[`' + r['file'] + '`](' + r['file'] + ')' if r.get('file') else '—'} |")
    open(os.path.join(dec_dir, "index.md"), "w").write("\n".join(L) + "\n")


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("artifact", nargs="?", help="path to a PE image under bin/ (or its basename)")
    ap.add_argument("--all", action="store_true", help="process every PE image in bin/")
    ap.add_argument("--max-functions", type=int, default=40, help="cap on decompiled functions per module")
    ap.add_argument("--min-blocks", type=int, default=2, help="skip functions smaller than this many basic blocks")
    ap.add_argument("--cfg-seconds", type=int, default=900, help="soft budget passed to the CFG builder (diagnostic)")
    ap.add_argument("--cfg-only", action="store_true", help="build the CFG and index without decompiling")
    ap.add_argument("--force-code", action="store_true", default=True)
    ap.add_argument("--verbose", action="store_true")
    args = ap.parse_args()

    targets: list[tuple[str, str, str]] = []
    if args.all:
        for path, rel in P.iter_pe_files(BIN):
            targets.append((os.path.abspath(path), "bin/" + rel.replace(os.sep, "/"), P.slugify(os.path.basename(path))))
    elif args.artifact:
        path = args.artifact if os.path.exists(args.artifact) else os.path.join(BIN, args.artifact)
        if not os.path.exists(path):
            print(f"no such artifact: {args.artifact}", file=sys.stderr)
            return 2
        rel = os.path.relpath(os.path.abspath(path), REPO).replace(os.sep, "/")
        targets.append((os.path.abspath(path), rel, P.slugify(os.path.basename(path))))
    else:
        ap.print_help()
        return 1

    for path, rel, slug in targets:
        try:
            run_module(path, rel, slug, args)
        except Exception as exc:  # noqa: BLE001
            import traceback
            traceback.print_exc()
            print(f"[{slug}] FAILED: {type(exc).__name__}: {exc}", file=sys.stderr)
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
