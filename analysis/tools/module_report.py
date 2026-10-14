#!/usr/bin/env python3
"""module_report.py — per-module dossier and the aggregate module-analysis report.

Purpose
-------
Every fact gathered about a module is scattered across the per-tool outputs
(PE inventory, resources, strings, type libraries, decompilation index, COM
surface).  This tool joins them into one dossier per module and one aggregate
report, with each claim tagged by how it was obtained:

``[verified]``   read directly from the shipped image (version resource, import
                 table, resource payload, decompiler CFG)
``[inferred]``   a reading of the evidence that a reviewer should re-check
``[unresolved]`` explicitly unknown, with the reason and the remaining work

Usage
-----
    python3 analysis/tools/module_report.py                 # all modules
    python3 analysis/tools/module_report.py wmpnetwk_exe    # one module

Outputs
-------
* ``src/<module>/README.md`` — module dossier (one per PE image in ``bin/``)
* ``analysis/report/module-analysis.md`` — aggregate report

Dependencies
------------
Reads only other tools' outputs; run ``inventory.py``, ``resources.py``,
``strings_scan.py`` and ``decompile.py`` first for full coverage.
"""

from __future__ import annotations

import argparse
import collections
import datetime as dt
import glob
import json
import os

REPO = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))
DATA = os.path.join(REPO, "analysis", "report", "data")
SRC = os.path.join(REPO, "src")

IMPORT_FAMILIES = [
    ("COM/OLE", ("ole32.dll", "oleaut32.dll", "combase.dll", "comctl32.dll", "propsys.dll", "activeds.dll")),
    ("Windows shell/UI", ("shell32.dll", "shlwapi.dll", "user32.dll", "comdlg32.dll", "gdi32.dll",
                          "gdiplus.dll", "uxtheme.dll", "dwmapi.dll")),
    ("Core system", ("kernel32.dll", "ntdll.dll", "advapi32.dll", "msvcrt.dll", "ucrtbase.dll",
                     "vcruntime140.dll", "msvcp_win.dll")),
    ("Networking/UPnP", ("ws2_32.dll", "winhttp.dll", "wininet.dll", "urlmon.dll", "dnsapi.dll",
                         "iphlpapi.dll", "ssdpapi.dll", "upnp.dll", "wsdapi.dll", "nsi.dll")),
    ("Media/AV", ("mfplat.dll", "mf.dll", "avrt.dll", "wintrust.dll", "crypt32.dll", "ncrypt.dll",
                  "wmp.dll", "wmplib.dll")),
    ("Device/UMDF", ("wdfumdfdriver.dll", "wudfplatform.dll", "setupapi.dll", "cfgmgr32.dll")),
    ("Diagnostics/events", ("wevtapi.dll", "tdh.dll", "advapi32.dll", "wintrust.dll")),
]


BUILD = {}


def load(path, default=None):
    try:
        return json.load(open(path))
    except (OSError, ValueError):
        return default if default is not None else {}


def family_of(dll: str) -> str:
    low = dll.lower()
    for name, members in IMPORT_FAMILIES:
        if low in members:
            return name
    return "other"


def dossier(slug: str, inv_rec: dict, res: dict, strings: dict, dec: dict, com: dict) -> str:
    pe = inv_rec.get("pe") or {}
    L = [f"# `{inv_rec['rel_path']}` — module dossier\n",
         f"> Assembled by `analysis/tools/module_report.py` from the PE inventory, resource",
         f"> extraction, string scan, decompilation index and COM surface. Claims are tagged",
         f"> **[verified]** (read directly from the artifact), **[inferred]** (a reading of the",
         f"> evidence) or **[unresolved]** (unknown, with the remaining work stated).\n"]

    # 1. Identity
    ver = {}
    for r in (res.get("resources") or []):
        if r["type"] == "RT_VERSION" and isinstance(r.get("decoded"), dict):
            ver = dict(r["decoded"])
            # display values as authored where the build stored UTF-8 bytes in a
            # UTF-16 field (see analysis/report/data-formats.md §2.1)
            ver.update(r["decoded"].get("StringFileInfo_utf8") or {})
    L += ["## 1. Identity **[verified]**\n",
          f"* Path: `{inv_rec['rel_path']}`; size {inv_rec['size']:,} bytes.",
          f"* SHA-256: `{inv_rec['hashes']['sha256']}`",
          f"* Format: PE32+ ({pe.get('machine_name')}), subsystem `{pe.get('subsystem_name')}`, "
          f"linker {pe.get('linker')}, image base `{hex(pe.get('image_base', 0))}`, "
          f"entry point RVA `{hex(pe.get('entry_point_rva', 0))}`.",
          f"* Built: {dt.datetime.fromtimestamp(pe.get('timestamp', 0), dt.timezone.utc):%Y-%m-%d %H:%M:%SZ} "
          f"(PE TimeDateStamp {pe.get('timestamp')}).",
          f"* PDB: " + ", ".join(f"`{d.get('pdb')}` (age {d.get('age')})" for d in (pe.get("debug") or []))
          + f"; overlay: {('yes (' + str(pe['overlay'].get('size')) + ' bytes)') if (pe.get('overlay') or {}).get('size') else 'none'}; "
          f"TLS: {'yes' if pe.get('has_tls') else 'no'}; CLR: {'yes' if pe.get('has_clr') else 'no'}.",
          f"* DLL characteristics: {', '.join(pe.get('dll_features') or []) or 'none'}.",
          ""]
    if ver:
        L += ["### Version resource **[verified]**\n"]
        for k in ("CompanyName", "FileDescription", "FileVersion", "ProductName", "ProductVersion",
                  "InternalName", "OriginalFilename", "LegalCopyright", "Language"):
            if ver.get(k):
                L.append(f"* {k}: `{ver[k]}`")
        L.append("")

    # 2. Sections
    L += ["## 2. Sections **[verified]**\n",
          "| Section | RVA | Virtual size | Raw size | Entropy | Flags |",
          "|---|---|---|---|---|---|"]
    for s in pe.get("sections", []):
        L.append(f"| `{s['name']}` | `0x{s['virtual_address']:x}` | {s['virtual_size']:,} | "
                 f"{s['raw_size']:,} | {s.get('entropy', 0):.2f} | {', '.join(s.get('flags', []))} |")
    L.append("")

    # 3. Imports/exports
    imps = pe.get("imports") or []
    fams = collections.defaultdict(list)
    for imp in imps:
        fams[family_of(imp["dll"])].append(imp)
    L += ["## 3. API surface **[verified]**\n",
          f"* Imported DLLs: **{len(imps)}**; imported functions: "
          f"**{sum(i.get('count', 0) for i in imps)}**; delay-loaded DLLs: "
          f"**{len(pe.get('delay_imports') or [])}**; exported symbols: **{len(pe.get('exports') or [])}**.",
          "",
          "| Family | DLLs | Functions |",
          "|---|---|---|"]
    for fam, items in sorted(fams.items()):
        L.append(f"| {fam} | {', '.join(sorted(i['dll'] for i in items))} | "
                 f"{sum(i.get('count', 0) for i in items)} |")
    L.append("")
    if pe.get("exports"):
        L.append("Exports: " + ", ".join(f"`{e.get('name')}`" for e in pe["exports"] if e.get("name")) + ".")
        L.append("")
    L.append("Full per-DLL function listing: [`imports.txt`](imports.txt); "
             "raw objdump symbol evidence: "
             f"`analysis/report/rea-evidence/{slug}/objdump-symbols.json`.\n")

    # 4. Resources
    types = res.get("type_counts") or {}
    if types:
        L += ["## 4. Resources **[verified]**\n",
              f"* Resource entries: **{len(res.get('resources', []))}** "
              f"(raw directory walk; pefile cross-check "
              f"{'agrees' if res.get('walker_cross_check', {}).get('agree') else 'DISAGREES'});"
              f" message strings decoded: {res.get('messages_total', 0)}.",
              f"* Types: " + ", ".join(f"{k}×{v}" for k, v in sorted(types.items())) + ".",
              ""]
        for r in res.get("resources", []):
            d = r.get("decoded") or {}
            if r["type"] == "MUI" and d:
                L.append(f"* `MUI` payload ({r['name']}, {r['language']}): language tag "
                         f"`{d.get('language_tag')}`, declares localised types "
                         f"{d.get('localized_type_ids')} — matches sibling `.mui` file: "
                         f"{d.get('matches_sibling')}.")
            elif r["type"] == "UIFILE" and d:
                L.append(f"* `UIFILE` {r['name']} ({r['size']:,} B): {d.get('format')}; "
                         f"{d.get('lines')} lines, {d.get('resids')} `resid` ids → "
                         f"`{r.get('extracted')}`.")
            elif r["type"] == "REGISTRY" and d:
                L.append(f"* `REGISTRY` {r['name']} ({d.get('bytes')} B): {d.get('format')}, "
                         f"{d.get('statement_lines')} statement lines, GUIDs {d.get('guids')} → "
                         f"`{r.get('extracted')}`.")
            elif r["type"] == "TYPELIB" and d:
                L.append(f"* `TYPELIB` {r['name']}: {d.get('format')}, version field "
                         f"{d.get('version_field')}, LCID {d.get('lcid')}, "
                         f"{d.get('type_count')} type records → decoded into "
                         f"[`typelib/`](typelib/README.md).")
            elif r["type"] == "WEVT_TEMPLATE" and d:
                L.append(f"* `WEVT_TEMPLATE` {r['name']} ({r['size']:,} B): magic `{d.get('magic')}`, "
                         f"declared size {d.get('declared_size')} — {d.get('note')}.")
            elif r["type"] == "RT_DIALOG" and d.get("template"):
                L.append(f"* `RT_DIALOG` {r['name']} ({r['language']}): {d.get('template')}, "
                         f"{d.get('items')} items, {d.get('cx')}×{d.get('cy')} dialog units.")
            elif r["type"] == "IMAGE" and isinstance(d, dict) and d.get("width"):
                L.append(f"* `IMAGE` {r['name']}: TIFF {d.get('width')}×{d.get('height')}, "
                         f"compression {d.get('compression')}, samples/px {d.get('samples_per_pixel')}.")
            elif r["type"] == "RT_MESSAGETABLE":
                L.append(f"* `RT_MESSAGETABLE` {r['name']} ({r['language']}): "
                         f"{d.get('messages', '?')} messages → `{r.get('extracted')}`.")
            elif r["type"] == "RT_STRING":
                L.append(f"* `RT_STRING` {r['name']} ({r['language']}): {d.get('strings')} non-empty "
                         f"strings → `{r.get('extracted')}`.")
            elif r["type"] == "RT_ACCELERATOR" and d:
                L.append(f"* `RT_ACCELERATOR` {r['name']}: {d.get('entry_count')} entries, keys "
                         f"{d.get('keys')} → `{r.get('extracted')}`.")
            elif r["type"] == "RT_MENU" and d:
                L.append(f"* `RT_MENU` {r['name']}: {d.get('item_count')} template items, texts "
                         f"{d.get('texts')} → `{r.get('extracted')}`.")
            elif r["type"] == "RT_MANIFEST" and d:
                L.append(f"* `RT_MANIFEST` {r['name']}: `{d.get('first_line')}`.")
        L.append(f"Per-entry detail: `analysis/report/resources/{slug}/index.json`.\n")

    # 5. Strings
    if strings:
        by = strings.get("by_tag", {})
        L += ["## 5. String and identifier evidence **[verified]**\n",
              f"* Literals: {strings['counts']['ascii']} ASCII, {strings['counts']['utf16']} UTF-16LE "
              f"({strings['counts']['unique']} unique).",
              f"* GUIDs {len(by.get('guid', []))}, URLs {len(by.get('url', []))}, UPnP URNs "
              f"{len(by.get('upnp-urn', []))}, registry paths {len(by.get('registry', []))}, "
              f"referenced modules {len(by.get('module-name', []))}.",
              ""
              ]
        for tag, title in (("url", "URLs"), ("upnp-urn", "UPnP/DLNA identifiers"),
                           ("guid", "GUID literals"), ("registry", "Registry paths")):
            vals = by.get(tag, [])
            if vals:
                shown = ", ".join(f"`{v}`" for v in vals[:10])
                more = f" (+{len(vals)-10} more)" if len(vals) > 10 else ""
                L.append(f"* {title}: {shown}{more}")
        L.append("")
        L.append(f"Curated extract: [`strings/highlights.md`](strings/highlights.md); full data: "
                 f"`analysis/report/data/strings/{slug}.json`.\n")

    # 6. Decompilation
    if dec:
        cov = dec.get("coverage") or {}
        L += ["## 6. Decompiled behaviour **[verified for the emitted functions]**\n",
              f"* Tool: {dec.get('decompiler', {}).get('name')} "
              f"{dec.get('decompiler', {}).get('version')} "
              f"({dec.get('decompiler', {}).get('analysis')}), status "
              f"`{dec.get('status', 'not recorded')}`.",
              f"* CFG: {dec.get('cfg', {}).get('function_count')} functions, "
              f"{dec.get('cfg', {}).get('edge_count')} call edges, built in "
              f"{dec.get('cfg', {}).get('seconds')}s; selection rule: "
              f"{cov.get('selection_rule', 'n/a')}.",
              f"* Emitted pseudocode: {len(dec.get('functions', []))} functions "
              f"({cov.get('functions_decompiled', '?')} decompiled successfully).",
              ""]
        big = sorted([f for f in dec.get("functions", []) if f.get("decompiled")],
                     key=lambda f: -f.get("blocks", 0))[:12]
        if big:
            L += ["| Address | Function | Blocks | Size | File |", "|---|---|---|---|---|"]
            for f in big:
                L.append(f"| `{f['addr']}` | `{f['name']}` | {f['blocks']} | {f['size']} | "
                         f"[`{f['file']}`](decompiled/{f['file']}) |")
            L.append("")
        L.append(f"Index: [`decompiled/index.md`](decompiled/index.md). "
                 "Decompiler output is reconstructed pseudocode, **not** original source.\n")
        if dec.get("note"):
            L.append(f"> {dec['note']}\n")
    else:
        L += ["## 6. Decompiled behaviour **[unresolved]**\n",
              "* No decompilation run recorded for this module in `src/" + slug + "/decompiled/`.\n"]

    # 7. COM surface
    if com:
        tls = com.get("type_libraries") or []
        rgs = com.get("registration_scripts") or []
        L += ["## 7. COM surface **[verified]**\n"]
        if com.get("com_server_exports"):
            L.append("* COM entry points: " + ", ".join(f"`{e}`" for e in com["com_server_exports"]) + ".")
        for t in tls:
            L.append(f"* Type library `{t['library_guid']}`: "
                     + ", ".join(f"{ty['kind'].replace('TKIND_','')} `{ty['name']}` `{ty['guid']}`"
                                 f" ({ty['methods']} methods)" for ty in t["types"]))
            if t.get("guid_cross_check"):
                L.append(f"  * {t['guid_cross_check']}")
        for r in rgs:
            L.append(f"* Registrar script (resource {r['resource_id']}, {r['language']}): "
                     f"`{r['script']}` with GUIDs {r['guids']}")
        L.append("")
    # 8. Reconstruction harness / validation
    L.append("## 8. Reconstruction and validation\n")
    build = load(os.path.join(DATA, "build-results.json"))
    bmod = next((m for m in (build.get("modules") or []) if m.get("slug") == slug), None)
    if os.path.isdir(os.path.join(SRC, slug, "recon")):
        L.append(
            "* Reconstruction harness: `recon/` (generated by `analysis/tools/recon_build.py`) — "
            "`module_facts.h` (sections, resource RVAs, image digest), `guids.h`, `enums.h`, "
            "`interfaces.h`, `compile_check.c`, plus `CMakeLists.txt`.")
        if bmod:
            state = ("compiled and all runtime checks passed" if bmod.get("ran") and bmod.get("exit_code") == 0
                     else "compiled but checks failed" if bmod.get("compiled") else "not built in the last run")
            L.append(f"* Last build validation: target `{bmod['target']}` — {state}.")
        else:
            L.append("* Last build validation: no result recorded for this module in "
                     "`analysis/report/data/build-results.json`.")
        L.append("* The harness re-derives this module's recorded digests and GUIDs from the "
                 "original file at run time; see `analysis/report/validation.md` §3.")
    else:
        L.append("* No reconstruction harness generated for this module.")
    L.append("")
    dec_note = ("`analysis/report/disasm.md` records the instruction-level cross-check "
                "(capstone vs GNU objdump through REA) for this module.")
    L.append(dec_note)
    L.append("")
    L.append("## 9. Interpretation and open items\n")
    L.append(f"* Role **[inferred]**: {ver.get('FileDescription') or 'not stated in the version resource'}"
             + (f" (internal name `{ver.get('InternalName')}`)" if ver.get("InternalName") else ""))
    unresolved = []
    if not dec:
        unresolved.append("decompilation not yet recorded for this module")
    elif dec.get("status") != "complete":
        unresolved.append(f"decompilation status is `{dec.get('status')}` — the function index may be incomplete")
    elif cov.get("functions_decompiled") is not None and \
            cov.get("functions_in_cfg") and cov["functions_decompiled"] < cov["functions_in_cfg"]:
        unresolved.append(f"{cov['functions_in_cfg'] - cov['functions_decompiled']} of "
                          f"{cov['functions_in_cfg']} CFG functions were not selected/decompiled "
                          f"(cap {dec.get('coverage', {}).get('selection_rule')})")
    for r in res.get("resources", []) if res else []:
        d = r.get("decoded") or {}
        if r["type"] in ("MUI",) and d.get("matches_sibling") is None:
            unresolved.append(f"`MUI` payload type-list not recovered (resource {r['name']})")
        if r["type"] == "WEVT_TEMPLATE":
            unresolved.append("`WEVT_TEMPLATE` binary schema (ETW manifest template) not decoded")
        if r["type"] == "IMAGE":
            unresolved.append("`IMAGE` TIFF pixel data not decoded (dimensions/compression only)")
        if r["type"] == "RT_BITMAP":
            unresolved.append("`RT_BITMAP` DIB pixel data not decoded")
        if r.get("truncated"):
            unresolved.append(f"resource {r['name']} payload truncated in the image")
    if not unresolved:
        unresolved.append("nothing outstanding at the recorded depth of analysis")
    for u in unresolved:
        L.append(f"* [unresolved] {u}")
    L.append("")
    return "\n".join(L) + "\n"


def render_aggregate(rows: list[dict], date: str) -> str:
    L = ["# Module analysis (generated)\n",
         f"> Generated by `analysis/tools/module_report.py` on {date}. One dossier per module lives",
         "> in `src/<module>/README.md`; this report is the cross-module view. Every module in",
         "> `bin/` appears below — including the resource-only `.mui` payloads and the modules for",
         "> which decompilation has not been completed yet.\n",
         "## 1. Coverage matrix\n",
         "| Module | Kind | Bytes | Build (UTC) | Version | Imports | Resources | Decompiled | Status | Harness |",
         "|---|---|---|---|---|---|---|---|---|"]
    for r in rows:
        L.append(f"| [`{r['artifact']}`](../{r['artifact']}) | {r['kind']} | {r['size']:,} | {r['built']} | "
                 f"{r['version']} | {r['imports']} | {r['resources']} | {r['decompiled']} | {r['status']} | "
                 f"{r.get('harness', '—')} |")
    L.append("\n## 2. What each module is\n")
    L.append("Roles are read from the VersionInfo `FileDescription`/`InternalName` (verified) plus the"
             " import and resource evidence; anything beyond that is marked inferred in the dossier.\n")
    for r in sorted(rows, key=lambda x: x["artifact"]):
        L.append(f"* **`{r['artifact'].split('/')[-1]}`** — {r['description']}")
    L.append("\n## 3. Build clusters\n")
    byc = collections.defaultdict(list)
    for r in rows:
        byc[r["cluster"]].append(r["artifact"].split("/")[-1])
    for c, mods in sorted(byc.items()):
        L.append(f"* {c}: " + ", ".join(sorted(mods)))
    L.append("\n## 4. Cross-module structure\n")
    L.append("* Static import edges between the analysed modules: **0** (see"
             " `analysis/report/dependencies.md`). Cooperation happens through COM class objects,"
             " registry registration, and the UPnP/RPC protocols the modules speak over the network.")
    L.append("* COM surface (interfaces, coclasses, registrar scripts): `analysis/report/com-surface.md`.")
    L.append("* Resource-derived localisation split: base images carry `en-US` resources; the"
             " `bin/pt-BR/*.mui` images carry the Portuguese localisation for the same type ids.")
    L.append("")
    L.append("## 5. Status vocabulary\n")
    L.append("* `complete` — every selected function decompiled and the index is final.")
    L.append("* `partial` — CFG built, decompilation capped by `--max-functions`; more work remains.")
    L.append("* `resource-only` — image carries no code (`.mui` payloads).")
    L.append("* `not started` — no decompilation recorded yet.")
    return "\n".join(L) + "\n"


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("module", nargs="?", help="only this module slug")
    args = ap.parse_args()

    global BUILD
    BUILD = load(os.path.join(DATA, "build-results.json"))
    inv = load(os.path.join(DATA, "inventory.json"))
    resources = {r["module"]: r for r in load(os.path.join(DATA, "resources.json")).get("images", [])}
    com = {m["module"]: m for m in load(os.path.join(DATA, "com-surface.json")).get("modules", [])}
    date = dt.datetime.now(dt.timezone.utc).strftime("%Y-%m-%d %H:%M:%SZ")

    rows = []
    for rec in inv.get("files", []):
        if rec.get("format") != "pe":
            continue
        slug = rec["slug"]
        if args.module and slug != args.module:
            continue
        pe = rec.get("pe") or {}
        res = resources.get(slug, {})
        strings = load(os.path.join(DATA, "strings", f"{slug}.json"))
        dec = load(os.path.join(SRC, slug, "decompiled", "index.json"))
        comrec = com.get(slug, {})
        text = dossier(slug, rec, res, strings, dec, comrec)
        os.makedirs(os.path.join(SRC, slug), exist_ok=True)
        open(os.path.join(SRC, slug, "README.md"), "w").write(text)

        ver = {}
        for r in (res.get("resources") or []):
            if r["type"] == "RT_VERSION" and isinstance(r.get("decoded"), dict):
                ver = dict(r["decoded"])
                # author-intended text where the build stored UTF-8 in a UTF-16 field
                ver.update(r["decoded"].get("StringFileInfo_utf8") or {})
        has_code = bool(dec.get("cfg", {}).get("function_count"))
        if not has_code and dec:
            status = "resource-only"
        elif dec.get("status") == "complete":
            status = "complete"
        elif dec:
            status = "partial"
        else:
            status = "not started"
        cov = dec.get("coverage") or {}
        bmod = next((m for m in (BUILD.get("modules") or []) if m.get("slug") == slug), None)
        if bmod and bmod.get("ran") and bmod.get("exit_code") == 0:
            harness = "pass"
        elif bmod and bmod.get("compiled"):
            harness = "built, checks failed"
        elif bmod:
            harness = "not built"
        else:
            harness = "—"
        rows.append({
            "artifact": rec["rel_path"],
            "module": slug,
            "kind": ("localised MUI image" if "/pt-BR/" in rec["rel_path"] else
                     ("DLL" if rec["name"].lower().endswith(".dll") else "EXE")),
            "size": rec["size"],
            "built": f"{dt.datetime.fromtimestamp(pe.get('timestamp', 0), dt.timezone.utc):%Y-%m-%d}",
            "version": ver.get("FileVersion", "—"),
            "imports": f"{len(pe.get('imports') or [])} DLLs",
            "resources": len(res.get("resources", [])) or "—",
            "decompiled": (f"{len(dec.get('functions', []))}/{dec.get('cfg', {}).get('function_count', 0)}"
                           if dec else "—"),
            "status": status,
            "description": ver.get("FileDescription", "no FileDescription in the version resource")
                           + (" *(localised resources)*" if "/pt-BR/" in rec["rel_path"] else ""),
            "cluster": (f"{dt.datetime.fromtimestamp(pe.get('timestamp', 0), dt.timezone.utc):%Y-%m} build wave"),
            "harness": harness,
        })
        print(f"[module] {rec['rel_path']:<34} status={status:<14} decompiled={rows[-1]['decompiled']}")

    if not args.module:
        rows.sort(key=lambda r: r["artifact"])
        open(os.path.join(REPO, "analysis", "report", "module-analysis.md"), "w").write(
            render_aggregate(rows, date))
        print(f"[module] wrote analysis/report/module-analysis.md ({len(rows)} modules) and "
              f"{len(rows)} dossiers under src/")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
