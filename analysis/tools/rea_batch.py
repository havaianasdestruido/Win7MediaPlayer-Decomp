#!/usr/bin/env python3
"""rea_batch.py — reproducible REA evidence collection for every input in `bin/`.

Purpose
-------
Drive the [REA](https://github.com/morluto/rea) CLI over the project's input
artifacts and archive the raw, digest-bound Evidence JSON it returns.  REA is
used here for the operations its *verified* local configuration actually
supports:

* ``inspect-with-objdump`` (provider ``gnu.objdump``) — ``file_headers``,
  ``section_headers``, ``symbols``, ``relocations`` and (for small modules)
  ``disassemble_all``.  This is the authoritative disassembly/symbol lane in
  this environment because no Ghidra/Hopper/IDA provider is installed and
  GitHub release downloads are blocked (see ``analysis/report/methodology.md``).
* ``inspect-pe-resources`` (provider ``rea-pe-resources``) — PE32/PE32+
  resource type/name/language inventory with payload offsets, sizes and hashes.
* ``inspect-artifact`` / ``extract-artifact`` (provider
  ``rea-artifact-graph``) — non-PE containers (the ``.wmz`` skin package).

REA's *deep* native provider operations (``analyze``, ``function``,
``decompile``, ``xrefs``, ``instructions``) require Ghidra, Hopper or IDA and
are therefore **not** invoked; ``analysis/report/methodology.md`` records that
limitation and the independent toolchain used instead.

Usage
-----
    python3 analysis/tools/rea_batch.py                 # collect everything
    python3 analysis/tools/rea_batch.py --only wmpnssui  # one module slug
    python3 analysis/tools/rea_batch.py --force         # re-run existing ops
    python3 analysis/tools/rea_batch.py --disasm-max-bytes 0   # skip disassembly

Outputs
-------
* ``analysis/report/rea-evidence/<slug>/<operation>.json`` — raw Evidence
* ``analysis/report/rea-evidence/manifest.json`` — invocation ledger: exact
  argv, exit code, wall time, output digest, REA version, evidence IDs

Dependencies
------------
* ``rea`` 6.5.0 on ``PATH`` (``npm install -g rea-agents@6.5.0``), GNU objdump
  2.40 (Debian binutils) for the objdump lane.

Limitations
-----------
* REA reports ``subject.format: "unknown"`` for PE subjects in the objdump lane
  (observed); the PE identity in this project is therefore taken from the
  project's own parser and from ``inspect-pe-resources`` (which does report
  ``format: pe``).
* The objdump provider cannot know the original toolchain; version strings are
  reported as ``null``.
* ``disassemble_all`` is capped by caller-selected ``--disasm-max-bytes`` to
  keep the evidence tree reviewable; larger modules are disassembled with the
  project's own capstone-based tool, and REA symbol/relocation evidence is
  still collected for them.
"""

from __future__ import annotations

import argparse
import datetime as dt
import gzip
import hashlib
import json
import os
import shutil
import subprocess
import sys
import time

REPO = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))
BIN = os.path.join(REPO, "bin")
OUT = os.path.join(REPO, "analysis", "report", "rea-evidence")
REA = os.environ.get("REA_BIN", "rea")

OBJDUMP_OPS = ["file_headers", "section_headers", "symbols", "relocations"]

# artifact-graph lane (no deep-analysis provider needed)
ARTIFACT_LANE = {"zip"}


def slug_of(rel: str, path: str) -> str:
    name = os.path.basename(rel)
    if name.lower().endswith(".wmz"):
        return "revert_wmz"
    return "".join(ch if ch.isalnum() else "_" for ch in name.lower()).strip("_")


def run_rea(args: list[str]) -> tuple[int, str, str, float]:
    t0 = time.time()
    proc = subprocess.run([REA, *args], capture_output=True, text=True)
    return proc.returncode, proc.stdout, proc.stderr, time.time() - t0


def sha256_bytes(data: bytes) -> str:
    return hashlib.sha256(data).hexdigest()


def store_evidence(dest_json: str, out: str, large_bytes: int) -> tuple[str, str, int]:
    """Write REA stdout, gzip-compressing outputs larger than *large_bytes*.

    Returns ``(stored_path, storage_form, raw_bytes)``.  Raw bytes are always
    written verbatim in content terms: gzip storage is lossless and the raw
    digest is recorded in the manifest, so ``--decompress`` restores a
    byte-identical copy for inspection.
    """
    raw = out.encode()
    if large_bytes and len(raw) > large_bytes:
        dest = dest_json + ".gz"
        with gzip.open(dest, "wb", compresslevel=6) as fh:
            fh.write(raw)
        return dest, "gzip", len(raw)
    with open(dest_json, "w") as fh:
        fh.write(out)
    return dest_json, "json", len(raw)


def collect(entry: dict, force: bool, disasm_max: int, ledger: list[dict], large_bytes: int) -> None:
    slug, rel, path, fmt, size = entry["slug"], entry["rel_path"], entry["path"], entry["format"], entry["size"]
    outdir = os.path.join(OUT, slug)

    ops: list[tuple[str, list[str]]] = []
    if fmt == "pe":
        for op in OBJDUMP_OPS:
            ops.append((f"objdump-{op}", ["inspect-with-objdump", path, op, "--json"]))
        if disasm_max and size <= disasm_max:
            ops.append(("objdump-disassemble_all", ["inspect-with-objdump", path, "disassemble_all", "--json"]))
        ops.append(("pe-resources", ["inspect-pe-resources", path, "--json"]))
    elif fmt in ARTIFACT_LANE:
        ops.append(("inspect-artifact", ["inspect-artifact", path, "--json"]))
    else:
        return  # images / XML: no REA lane applies (documented in methodology.md)

    os.makedirs(outdir, exist_ok=True)

    for op_name, argv in ops:
        dest = os.path.join(outdir, f"{op_name}.json")
        if (os.path.exists(dest) or os.path.exists(dest + ".gz")) and not force:
            stored = dest + ".gz" if os.path.exists(dest + ".gz") else dest
            ledger.append({"slug": slug, "artifact": rel, "operation": op_name, "status": "cached",
                           "evidence_json": os.path.relpath(stored, REPO),
                           "storage": "gzip" if stored.endswith(".gz") else "json"})
            continue
        try:
            code, out, err, secs = run_rea(argv)
        except FileNotFoundError:
            print(f"!! REA executable not found ({REA})", file=sys.stderr)
            raise
        record = {"slug": slug, "artifact": rel, "operation": op_name, "argv": [REA, *argv],
                  "exit_code": code, "seconds": round(secs, 2), "stderr": err.strip()[:4000]}
        if code == 0 and out.strip():
            stored, form, raw_bytes = store_evidence(dest, out, large_bytes)
            record["status"] = "collected"
            record["evidence_json"] = os.path.relpath(stored, REPO)
            record["storage"] = form
            record["evidence_sha256"] = sha256_bytes(out.encode())
            record["evidence_bytes"] = raw_bytes
            try:
                ev = json.loads(out)
                record["evidence_id"] = ev.get("evidence_id")
                record["provider"] = (ev.get("provider") or {}).get("id")
                record["subject_sha256"] = (ev.get("subject") or {}).get("digest", {}).get("sha256")
                cov = (ev.get("normalized_result") or {}).get("coverage") or {}
                if cov:
                    record["coverage"] = cov
                res = (ev.get("normalized_result") or {}).get("resources")
                if isinstance(res, list):
                    record["resource_entries"] = len(res)
            except json.JSONDecodeError:
                record["status"] = "unparseable-json"
        else:
            record["status"] = f"failed(exit={code})"
        ledger.append(record)
        print(f"  {rel:<42} {op_name:<28} {record['status']:<12} {record.get('evidence_id','')[:22]}")


def _load_manifest() -> dict:
    path = os.path.join(OUT, "manifest.json")
    if not os.path.exists(path):
        print("no manifest yet; run a collection pass first", file=sys.stderr)
        raise SystemExit(2)
    return json.load(open(path))


def compress_existing(large_bytes: int) -> int:
    """Gzip already-stored oversized Evidence files (idempotent)."""
    man = _load_manifest()
    changed = 0
    for rec in man["operations"]:
        rel = rec.get("evidence_json")
        if not rel:
            continue
        path = os.path.join(REPO, rel)
        if rec.get("storage") == "gzip" or not path.endswith(".json") or not os.path.exists(path):
            continue
        if large_bytes and os.path.getsize(path) > large_bytes:
            raw = open(path, "rb").read()
            with gzip.open(path + ".gz", "wb", compresslevel=6) as fh:
                fh.write(raw)
            os.remove(path)
            rec["evidence_json"] = rel + ".gz"
            rec["storage"] = "gzip"
            rec["evidence_sha256"] = sha256_bytes(raw)
            rec["evidence_bytes"] = len(raw)
            changed += 1
    man["storage_policy"] = {"gzip_over_bytes": large_bytes,
                             "note": "raw REA stdout is preserved verbatim inside the .gz member; "
                                     "use --decompress <slug> to restore .json"}
    with open(os.path.join(OUT, "manifest.json"), "w") as fh:
        json.dump(man, fh, indent=1)
    print(f"compressed {changed} evidence files")
    return 0


def decompress(which: str) -> int:
    """Restore raw ``.json`` evidence from gzip storage for inspection."""
    man = _load_manifest()
    n = 0
    for rec in man["operations"]:
        rel = rec.get("evidence_json") or ""
        if not rel.endswith(".json.gz"):
            continue
        if which != "all" and which.lower() not in rel.lower():
            continue
        src = os.path.join(REPO, rel)
        dst = src[:-3]
        if os.path.exists(dst):
            continue
        shutil.copyfileobj(gzip.open(src, "rb"), open(dst, "wb"))
        n += 1
    print(f"restored {n} evidence files to raw JSON")
    return 0


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--bin-dir", default=BIN)
    ap.add_argument("--only", help="restrict to one module slug or relative path substring")
    ap.add_argument("--force", action="store_true", help="re-run operations that already have evidence")
    ap.add_argument("--disasm-max-bytes", type=int, default=200_000,
                    help="run objdump disassemble_all only for files up to this size (0 disables)")
    ap.add_argument("--dry-run", action="store_true")
    ap.add_argument("--large-bytes", type=int, default=1_000_000,
                    help="gzip-store Evidence JSON larger than this many bytes (0 disables)")
    ap.add_argument("--compress-existing", action="store_true",
                    help="compress already-collected large Evidence files and refresh the manifest")
    ap.add_argument("--decompress", metavar="SLUG", help="restore raw JSON for one slug (or 'all')")
    args = ap.parse_args()

    if args.decompress:
        return decompress(args.decompress)
    if args.compress_existing:
        return compress_existing(args.large_bytes)

    inv_path = os.path.join(REPO, "analysis", "report", "data", "inventory.json")
    if not os.path.exists(inv_path):
        print("run analysis/tools/inventory.py first", file=sys.stderr)
        return 2
    inv = json.load(open(inv_path))

    code, out, _err, _s = run_rea(["--version"])
    rea_version = out.strip() or "unknown"

    ledger: list[dict] = []
    entries = []
    for f in inv["files"]:
        rel = f["rel_path"]
        if args.only and args.only.lower() not in rel.lower():
            continue
        entries.append({
            "slug": slug_of(rel, f["path_from_repo"]),
            "rel_path": rel,
            "path": os.path.join(REPO, f["path_from_repo"]),
            "format": f["format"],
            "size": f["size"],
        })
    print(f"REA evidence collection: {len(entries)} artifacts, rea {rea_version}")
    if args.dry_run:
        for e in entries:
            print("  would process", e["rel_path"], e["format"])
        return 0
    for e in entries:
        collect(e, args.force, args.disasm_max_bytes, ledger, args.large_bytes)

    os.makedirs(OUT, exist_ok=True)
    manifest = {
        "generated_by": "analysis/tools/rea_batch.py",
        "generated_at": dt.datetime.now(dt.timezone.utc).strftime("%Y-%m-%d %H:%M:%SZ"),
        "rea_version": rea_version,
        "rea_executable": REA,
        "rea_limitation": "deep native provider operations (analyze/function/decompile/xrefs/instructions) "
                          "require Ghidra, Hopper or IDA; none available in this environment",
        "operations": ledger,
    }
    with open(os.path.join(OUT, "manifest.json"), "w") as fh:
        json.dump(manifest, fh, indent=1)
    ok = sum(1 for r in ledger if r["status"] in ("collected", "cached"))
    print(f"ledger: {ok}/{len(ledger)} operations available -> analysis/report/rea-evidence/manifest.json")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
