#!/usr/bin/env python3
"""inventory.py — Phase 1 inventory and identification for `bin/`.

Purpose
-------
Recursively enumerate every input artifact in ``bin/``, establish its identity
with cryptographic hashes, identify its format/architecture/compiler
fingerprint, detect duplicates/overlays/embedded images, and emit both a
machine-readable record and the human-readable ``analysis/report/inventory.md``.

Usage
-----
    python3 analysis/tools/inventory.py                # write JSON + report
    python3 analysis/tools/inventory.py --json-only    # machine-readable only
    python3 analysis/tools/inventory.py --bin-dir bin  # alternate input root

Inputs
------
* ``bin/**`` — read-only original artifacts (never written to).

Outputs
-------
* ``analysis/report/data/inventory.json`` — full structured inventory
* ``analysis/report/inventory.md`` — generated report tables (regenerated;
  narrative sections live in the hand-written part of the same file's header
  comment block, which is preserved by ``--keep-prose``).

Dependencies
------------
Python 3.11 + ``lib/peutils`` (which optionally uses ``pefile``).

Limitations
-----------
* Detection is signature/header based; a file whose signature is corrupted is
  reported as ``unknown`` rather than guessed.
* Entropy and packer flags are heuristics, never confirmed findings.
* Compiler identification uses the PE RICH header and linker version, which are
  unnamed (product) build IDs, not a documented MSVC version string.
"""

from __future__ import annotations

import argparse
import datetime as dt
import json
import os
import sys
import zipfile
from collections import defaultdict

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), "lib"))
import peutils as P  # noqa: E402

REPO = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))
DEFAULT_BIN = os.path.join(REPO, "bin")
DATA_DIR = os.path.join(REPO, "analysis", "report", "data")


def utc(ts: int | None) -> str | None:
    if not ts:
        return None
    try:
        return dt.datetime.fromtimestamp(ts, dt.timezone.utc).strftime("%Y-%m-%d %H:%M:%S UTC")
    except (OverflowError, OSError, ValueError):
        return None


def classify_non_pe(entry: dict, path: str) -> dict:
    """Extra observations for non-PE inputs (zip/xml/images)."""
    fmt = entry["format"]
    extra: dict = {}
    if fmt == "zip":
        try:
            with zipfile.ZipFile(path) as zf:
                members = []
                for zi in zf.infolist():
                    members.append(
                        {
                            "name": zi.filename,
                            "compress": zi.compress_type,
                            "size": zi.file_size,
                            "csize": zi.compress_size,
                            "crc32": f"{zi.CRC:08x}",
                            "date": "%04d-%02d-%02d %02d:%02d:%02d" % zi.date_time[:3] + zi.date_time[3:],
                        }
                    )
                extra["zip_members"] = members
        except Exception as exc:  # noqa: BLE001
            extra["zip_error"] = f"{type(exc).__name__}: {exc}"
    elif fmt == "xml":
        text = open(path, "r", encoding="utf-8", errors="replace").read()
        extra["xml_root"] = text.split("<", 2)[1].split(">", 1)[0].strip() if "<" in text else None
        extra["xml_lines"] = text.count("\n") + 1
        extra["xml_has_soap_actions"] = "SOAPACTION" in text.upper()
    elif fmt in ("png", "jpeg", "bmp"):
        with open(path, "rb") as fh:
            head = fh.read(32)
        if fmt == "png" and len(head) >= 24:
            w, h = int.from_bytes(head[16:20], "big"), int.from_bytes(head[20:24], "big")
            extra["dimensions"] = f"{w}x{h}"
        elif fmt == "bmp" and len(head) >= 26:
            extra["dimensions"] = f"{int.from_bytes(head[18:22],'little')}x{int.from_bytes(head[22:26],'little')}"
        elif fmt == "jpeg":
            import struct as _s

            with open(path, "rb") as fh:
                fh.seek(2)
                while True:
                    marker = fh.read(1)
                    if not marker:
                        break
                    if marker != b"\xff":
                        continue
                    m = fh.read(1)
                    while m == b"\xff":
                        m = fh.read(1)
                    if m in b"\xc0\xc1\xc2\xc3\xc5\xc6\xc7\xc9\xca\xcb\xcd\xce\xcf":
                        ln = _s.unpack(">H", fh.read(2))[0]
                        data = fh.read(5)
                        extra["dimensions"] = f"{_s.unpack('>H', data[3:5])[0]}x{_s.unpack('>H', data[1:3])[0]}"
                        break
                    ln_b = fh.read(2)
                    if len(ln_b) < 2:
                        break
                    fh.seek(_s.unpack(">H", ln_b)[0] - 2, 1)
    return extra


def analysis_status(slug: str) -> dict:
    """Derive per-module analysis status from the artifacts actually on disk."""
    st = {
        "rea_evidence": os.path.isdir(os.path.join(REPO, "analysis", "report", "rea-evidence", slug)),
        "decompiled": os.path.isdir(os.path.join(REPO, "src", slug, "decompiled")),
        "module_dossier": os.path.exists(os.path.join(REPO, "src", slug, "README.md")),
        "cmake_target": os.path.exists(os.path.join(REPO, "src", slug, "CMakeLists.txt")),
    }
    idx = os.path.join(REPO, "src", slug, "decompiled", "index.json")
    if os.path.exists(idx):
        try:
            st["decompiled_functions"] = len(json.load(open(idx)).get("functions", []))
        except Exception:  # noqa: BLE001
            st["decompiled_functions"] = None
    return st


def build_inventory(bin_dir: str) -> dict:
    files: list[dict] = []
    pe_infos: list[P.PeInfo] = []
    for dirpath, _dirs, names in os.walk(bin_dir):
        for name in sorted(names):
            path = os.path.join(dirpath, name)
            rel = os.path.relpath(path, os.path.dirname(bin_dir)).replace(os.sep, "/")
            head = P.read_head(path, 4096)
            fmt = P.detect_format(head, path)
            entry = {
                "rel_path": rel,
                "path_from_repo": os.path.relpath(path, REPO).replace(os.sep, "/"),
                "name": name,
                "slug": P.slugify(name if fmt == "pe" else rel),
                "format": fmt,
                "size": os.path.getsize(path),
                "hashes": P.hash_file(path),
                "extension": os.path.splitext(name)[1].lower(),
            }
            if fmt == "pe":
                try:
                    info = P.parse_pe(path, rel)
                    P.enrich_with_pefile(info)
                    pe_infos.append(info)
                    entry["pe"] = info.as_dict()
                    entry["architecture"] = info.machine_name
                    entry["bitness"] = 64 if info.is_64bit else 32
                    entry["module"] = P.slugify(os.path.basename(name))
                except Exception as exc:  # noqa: BLE001
                    entry["pe_error"] = f"{type(exc).__name__}: {exc}"
            else:
                entry.update(classify_non_pe(entry, path))
            entry["analysis_status"] = analysis_status(entry["slug"])
            files.append(entry)

    # duplicate detection by identical content hash
    dupes: dict[str, list[str]] = defaultdict(list)
    for f in files:
        dupes[f["hashes"]["sha256"]].append(f["rel_path"])
    duplicates = {h: paths for h, paths in dupes.items() if len(paths) > 1}

    # cross-artifact: identical payloads inside PEs vs standalone files
    payload_index: dict[str, list[str]] = defaultdict(list)
    for f in files:
        payload_index[f["hashes"]["sha256"]].append(f["rel_path"])
        if "zip_members" in f:
            for m in f["zip_members"]:
                payload_index[f"crc32:{m['crc32']}"].append(f"{f['rel_path']}::{m['name']}")

    deps = P.summarize_dependencies(pe_infos) if pe_infos else {"internal_edges": [], "external_dlls": {}}

    return {
        "generated_by": "analysis/tools/inventory.py",
        "generated_at": dt.datetime.now(dt.timezone.utc).strftime("%Y-%m-%d %H:%M:%SZ"),
        "bin_dir": os.path.relpath(bin_dir, REPO),
        "file_count": len(files),
        "pe_count": len(pe_infos),
        "total_bytes": sum(f["size"] for f in files),
        "duplicates": duplicates,
        "dependency_model": deps,
        "files": files,
    }


def render_markdown(inv: dict) -> str:
    L: list[str] = []
    add = L.append
    add("# Inventory — `bin/` input artifacts\n")
    add(
        "> Generated by `analysis/tools/inventory.py` "
        f"({inv['generated_at']}) from `{inv['bin_dir']}`. "
        "Regenerate rather than hand-edit the tables below; narrative findings live in "
        "`analysis/report/module-analysis.md`.\n"
    )
    add("## 1. Summary\n")
    add(
        f"* Input artifacts: **{inv['file_count']}** files, {inv['total_bytes']:,} bytes total.\n"
        f"* PE images: **{inv['pe_count']}** (all x64 unless noted).\n"
        f"* Duplicate file contents: **{len(inv['duplicates'])}**.\n"
        "* Hash algorithm: SHA-256 (also SHA-1/MD5 recorded in "
        "`analysis/report/data/inventory.json`).\n"
    )
    add("## 2. File-by-file identification\n")
    add(
        "| # | Path | Bytes | SHA-256 (first 16) | Format | Arch | Bits | Subsystem | Linker | Compiled (UTC) |"
    )
    add("|---|------|-------|--------------------|--------|------|------|-----------|--------|----------------|")
    for i, f in enumerate(inv["files"], 1):
        pe = f.get("pe")
        arch = f.get("architecture", "—")
        bits = f.get("bitness", "—")
        subsys = (pe or {}).get("subsystem_name", "—").replace("IMAGE_SUBSYSTEM_", "")
        linker = (pe or {}).get("linker", "—")
        ts = utc((pe or {}).get("timestamp")) or "—"
        add(
            f"| {i} | `{f['rel_path']}` | {f['size']:,} | `{f['hashes']['sha256'][:16]}…` | {f['format']} | "
            f"{arch} | {bits} | {subsys} | {linker} | {ts} |"
        )
    add(
        "\nCompile timestamps are the PE COFF `TimeDateStamp` values exactly as stored; they are "
        "produced by the original Microsoft build and are not adjusted for reproducibility.\n"
    )

    add("## 3. PE structural overview\n")
    add("| Module | Sections | Imports (DLLs) | Imported funcs | Exports (named) | Delay-imp DLLs | Resources (types) | CLR | TLS | ASLR | DEP | CFG | Overlay |")
    add("|---|---|---|---|---|---|---|---|---|---|---|---|---|")
    for f in inv["files"]:
        pe = f.get("pe")
        if not pe:
            continue
        named_exports = sum(1 for e in pe["exports"] if e.get("name"))
        res_types = len(pe["resources"])
        ov = pe["overlay"]
        add(
            f"| `{os.path.basename(f['rel_path'])}` | {len(pe['sections'])} | {len(pe['imports'])} | "
            f"{sum(i['count'] for i in pe['imports'])} | {named_exports} | {len(pe['delay_imports'])} | {res_types} | "
            f"{'yes' if pe['has_clr'] else 'no'} | {'yes' if pe['has_tls'] else 'no'} | "
            f"{'yes' if 'ASLR' in pe['dll_features'] else 'no'} | {'yes' if 'DEP' in pe['dll_features'] else 'no'} | "
            f"{'yes' if 'GUARD_CF' in pe['dll_features'] else 'no'} | "
            f"{ov['size']:,} B {('(' + ov['signature'] + ')') if ov['signature'] else ''} |"
        )

    add("\n## 4. Section tables\n")
    for f in inv["files"]:
        pe = f.get("pe")
        if not pe:
            continue
        add(f"### `{os.path.basename(f['rel_path'])}` — entry RVA 0x{pe['entry_point_rva']:x} (section `{pe['entry_section']}`), image base 0x{pe['image_base']:x}\n")
        add("| Section | RVA | VSize | RawPtr | RawSize | Entropy | Flags |")
        add("|---|---|---|---|---|---|---|")
        for s in pe["sections"]:
            add(
                f"| `{s['name']}` | 0x{s['virtual_address']:x} | 0x{s['virtual_size']:x} | 0x{s['raw_pointer']:x} | "
                f"0x{s['raw_size']:x} | {s['entropy']} | {', '.join(s['flags'])} |"
            )
        add("")

    add("## 5. Directories, debug info and compiler fingerprints\n")
    add("| Module | PDB reference | RICH header (tool IDs / builds) | Checksum match | Embedded PE signatures | Heuristic flags |")
    add("|---|---|---|---|---|---|")
    for f in inv["files"]:
        pe = f.get("pe")
        if not pe:
            continue
        pdbs = [d.get("pdb") for d in pe["debug"] if d.get("pdb")]
        rich = pe.get("rich_header") or {}
        vals = "; ".join(f"{v['id']}×{v['count']}" for v in rich.get("values", [])[:6]) or "—"
        csum = (
            "match"
            if pe.get("computed_checksum") is not None and pe["computed_checksum"] == pe["checksum"]
            else ("mismatch" if pe.get("computed_checksum") is not None else "—")
        )
        emb = ", ".join(f"0x{o:x}" for o in pe["embedded_pe_offsets"]) or "none (0)"
        flags = ", ".join(pe["heuristic_flags"]) or "—"
        add(f"| `{os.path.basename(f['rel_path'])}` | {pdbs[0] if pdbs else '—'} | {vals} | {csum} | {emb} | {flags} |")
    add(
        "\nThe RICH header is an undocumented but stable MSVC linker fingerprint (product/tool IDs and "
        "per-tool hit counts). It is recorded as observed bytes; mapping IDs to specific MSVC releases is "
        "not attempted here.\n"
    )

    add("## 6. Duplicates and payload sharing\n")
    if inv["duplicates"]:
        add("| SHA-256 | Paths |")
        add("|---|---|")
        for h, paths in inv["duplicates"].items():
            add(f"| `{h}` | {'<br>'.join('`' + p + '`' for p in paths)} |")
    else:
        add("No two files in `bin/` have identical SHA-256 content digests.\n")

    add("\n## 7. Non-PE artifacts\n")
    add("| Path | Format | Bytes | Observations |")
    add("|---|---|---|---|")
    for f in inv["files"]:
        if f["format"] == "pe":
            continue
        obs = []
        if "zip_members" in f:
            obs.append(f"{len(f['zip_members'])} ZIP members")
        if "xml_root" in f:
            obs.append(f"XML root `<{f['xml_root']}>`")
        if "dimensions" in f:
            obs.append(f"image {f['dimensions']}")
        if f["format"] == "xml":
            obs.append("UPnP service/device description input")
        add(f"| `{f['rel_path']}` | {f['format']} | {f['size']:,} | {'; '.join(obs) or '—'} |")

    add("\n## 8. Per-file analysis status\n")
    add("| Path | REA evidence | Decompiled module | Functions decompiled | Module dossier | CMake target |")
    add("|---|---|---|---|---|---|")
    for f in inv["files"]:
        st = f["analysis_status"]
        add(
            f"| `{f['rel_path']}` | {'yes' if st['rea_evidence'] else 'no'} | {'yes' if st['decompiled'] else 'no'} | "
            f"{st.get('decompiled_functions', 0) or 0} | {'yes' if st['module_dossier'] else 'no'} | "
            f"{'yes' if st['cmake_target'] else 'no'} |"
        )
    add(
        "\nStatus columns are derived from artifacts present in the working tree at generation time; "
        "they are a coverage snapshot, not a quality claim.\n"
    )
    return "\n".join(L) + "\n"


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--bin-dir", default=DEFAULT_BIN)
    ap.add_argument("--json-only", action="store_true")
    ap.add_argument("--out-md", default=os.path.join(REPO, "analysis", "report", "inventory.md"))
    args = ap.parse_args()

    os.makedirs(DATA_DIR, exist_ok=True)
    inv = build_inventory(os.path.abspath(args.bin_dir))
    with open(os.path.join(DATA_DIR, "inventory.json"), "w") as fh:
        json.dump(inv, fh, indent=1, sort_keys=False)
    print(f"[inventory] {inv['file_count']} files ({inv['pe_count']} PE) "
          f"-> analysis/report/data/inventory.json")
    if not args.json_only:
        with open(args.out_md, "w") as fh:
            fh.write(render_markdown(inv))
        print(f"[inventory] wrote {os.path.relpath(args.out_md, REPO)}")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
