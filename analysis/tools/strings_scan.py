#!/usr/bin/env python3
"""strings_scan.py — string, GUID/CLSID, URL, registry and identifier extraction.

Purpose
-------
Extract the human-readable constants that carry behavioural information out of
every PE image in ``bin/`` and classify them:

* ASCII and UTF-16LE literals with their **file offsets and virtual addresses**,
  so any string in the report can be traced back into the image;
* GUIDs/CLSIDs/interface IDs (paired with the UTF-16LE forms used by
  ``CLSIDFromString`` / ``StringFromGUID2`` call sites);
* URLs, URNs and UPnP/DLNA service identifiers (``urn:schemas-upnp-org:...``);
* registry keys/paths and value names;
* Win32/COM API names appearing as literals (``LoadLibrary`` targets,
  ``GetProcAddress`` arguments, shell verbs);
* file paths, DLL names and PDB references;
* printf-style format strings and error-code constants.

Usage
-----
    python3 analysis/tools/strings_scan.py                  # all PE images
    python3 analysis/tools/strings_scan.py bin/wmpnetwk.exe
    python3 analysis/tools/strings_scan.py --min-len 6

Outputs
-------
* ``analysis/report/data/strings/<slug>.json`` — full per-module extraction
* ``analysis/report/data/strings.md`` — aggregate report (GUIDs, URLs, registry)
* ``src/<module>/strings/highlights.md`` — per-module curated highlights used by
  the module dossiers

Dependencies
------------
Python 3.11 only (PE section mapping via ``lib/peutils``); no external tools.

Limitations
-----------
* Linear scan: a literal that is split across the boundary of a section or that
  is not stored contiguously will not be recovered.
* Strings inside compressed or encrypted regions are not readable and are
  reported as absent — absence of a string here is not evidence of absence in
  the binary.
* No encoding detection beyond ASCII and UTF-16LE (the encodings these images
  actually use for literals).
"""

from __future__ import annotations

import argparse
import collections
import json
import os
import re
import sys

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), "lib"))
import peutils as P  # noqa: E402

REPO = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))
BIN = os.path.join(REPO, "bin")
DATA = os.path.join(REPO, "analysis", "report", "data")

ASCII_RE = re.compile(rb"[\x20-\x7e]{4,}")
UTF16_RE = re.compile(rb"(?:[\x20-\x7e]\x00){4,}")

GUID_RE = re.compile(
    r"\{?[0-9A-Fa-f]{8}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{4}-[0-9A-Fa-f]{12}\}?")
URL_RE = re.compile(r"(?:https?|rtsp|mms|ftp|file)://[^\s\"'<>]{4,}")
URN_RE = re.compile(r"urn:[A-Za-z0-9._:\-]{4,}")
REG_PATH_RE = re.compile(
    r"(?:HKLM|HKCU|HKCR|HKU|HKEY_[A-Z_]+)[\\/][^\s\"'<>]{2,}|"
    r"(?:SOFTWARE|SYSTEM|Microsoft|Windows)\\[A-Za-z0-9 _\\\\.{}\-]{4,}")
DLL_RE = re.compile(r"[A-Za-z0-9_\-\.]{3,60}\.(?:dll|exe|ocx|tlb|mui|wmz|ax|cpl)", re.I)
FMT_RE = re.compile(r"%[-#0-9\.\*hlLqjzt]{0,8}[diouxXeEfgGcspS]")
API_RE = re.compile(r"^[A-Z][A-Za-z0-9_]{3,60}$")
MIME_RE = re.compile(r"[a-z]+/[a-z0-9\.\-\+]{2,30}")
HTTP_RE = re.compile(r"^(?:GET|POST|PUT|DELETE|HEAD|OPTIONS|SUBSCRIBE|UNSUBSCRIBE|NOTIFY|M-SEARCH)$", re.I)
XML_TAG_RE = re.compile(r"^</?[A-Za-z_][A-Za-z0-9_:\.\-]*>?$")
PATH_RE = re.compile(r"[A-Za-z]:\\[^\s\"'<>]{3,}|\\\\[A-Za-z0-9_.\-]{2,}\\[^\s\"'<>]{2,}")
KNOWN_API_PREFIXES = (
    "Co", "Reg", "Create", "Open", "Close", "Get", "Set", "Query", "Read", "Write", "Find",
    "Delete", "Load", "Free", "Alloc", "Heap", "Virtual", "Local", "Global", "Enter", "Leave",
    "Initialize", "Wait", "Sleep", "Interlocked", "Tls", "WSA", "socket", "inet_", "Http",
    "Internet", "WinHttp", "Url", "Shell", "SH", "Path", "Dll", "Message", "Send", "Post",
    "WideChar", "MultiByte", "Compare", "Format", "System", "Time", "File",
)


def rva_to_va(info: P.PeInfo, rva: int) -> int:
    return info.image_base + rva


def offset_to_rva(info: P.PeInfo, offset: int) -> int | None:
    for s in info.sections:
        if s.raw_pointer <= offset < s.raw_pointer + s.raw_size:
            return s.virtual_address + (offset - s.raw_pointer)
    return None


def classify(text: str, kind: str) -> list[str]:
    tags = []
    if GUID_RE.fullmatch(text):
        tags.append("guid")
    if URL_RE.search(text):
        tags.append("url")
    if URN_RE.search(text):
        tags.append("upnp-urn")
    if REG_PATH_RE.search(text):
        tags.append("registry")
    if DLL_RE.fullmatch(text):
        tags.append("module-name")
    if PATH_RE.search(text):
        tags.append("path")
    if FMT_RE.search(text):
        tags.append("format-string")
    if MIME_RE.fullmatch(text):
        tags.append("mime")
    if HTTP_RE.fullmatch(text.strip()) and len(text) <= 12:
        tags.append("http-method")
    if XML_TAG_RE.match(text.strip()):
        tags.append("xml-token")
    if not tags and API_RE.match(text) and text.startswith(KNOWN_API_PREFIXES):
        tags.append("api-name")
    if kind == "utf16":
        tags.append("utf16le")
    if "\x00" in text:
        tags.append("has-nul")
    return tags


def scan(path: str, rel: str, slug: str, min_len: int) -> dict:
    data = open(path, "rb").read()
    info = P.parse_pe(path, rel, do_hash=False)
    strings = []
    text_by_tag: dict[str, set] = collections.defaultdict(set)

    def add(text: str, offset: int, kind: str) -> None:
        rva = offset_to_rva(info, offset)
        tags = classify(text, kind)
        rec = {"text": text, "offset": f"0x{offset:x}", "kind": kind,
               "rva": f"0x{rva:x}" if rva is not None else None,
               "va": f"0x{rva_to_va(info, rva):x}" if rva is not None else None,
               "tags": tags}
        strings.append(rec)
        for t in tags:
            text_by_tag[t].add(text)

    for m in ASCII_RE.finditer(data):
        text = m.group().decode("latin-1")
        if len(text) >= min_len:
            add(text, m.start(), "ascii")
    for m in UTF16_RE.finditer(data):
        text = m.group().decode("utf-16le")
        if len(text) >= min_len:
            add(text, m.start(), "utf16")

    # deduplicated text view (first occurrence wins) for report-friendly output
    seen = {}
    for s in strings:
        key = (s["text"], s["kind"])
        if key not in seen:
            seen[key] = s
    unique = list(seen.values())

    by_tag = {tag: sorted(vals) for tag, vals in sorted(text_by_tag.items())}
    rec = {
        "module": slug,
        "artifact": rel,
        "counts": {"ascii": sum(1 for s in strings if s["kind"] == "ascii"),
                   "utf16": sum(1 for s in strings if s["kind"] == "utf16"),
                   "unique": len(unique)},
        "strings": unique,
        "by_tag": by_tag,
    }
    # per-module highlights used by the dossiers
    src_dir = os.path.join(REPO, "src", slug, "strings")
    os.makedirs(src_dir, exist_ok=True)
    hl = [f"# String highlights — `{rel}`\n",
          "> Extracted by `analysis/tools/strings_scan.py` from the shipped image. Offsets are file",
          "> offsets; VAs assume the image base recorded in `analysis/report/data/inventory.json`.",
          "> Duplicated literals are shown once.\n"]
    for tag, title in (("guid", "GUIDs / IIDs / CLSIDs"), ("url", "URLs"), ("upnp-urn", "UPnP URNs"),
                       ("registry", "Registry paths"), ("module-name", "Referenced modules"),
                       ("path", "File paths"), ("http-method", "HTTP/UPnP verbs")):
        vals = by_tag.get(tag, [])
        if not vals:
            continue
        hl.append(f"## {title} ({len(vals)})\n")
        for v in vals[:80]:
            hl.append(f"* `{v}`")
        if len(vals) > 80:
            hl.append(f"* … (+{len(vals)-80} more in `analysis/report/data/strings/{slug}.json`)")
        hl.append("")
    open(os.path.join(src_dir, "highlights.md"), "w").write("\n".join(hl) + "\n")
    return rec


def render_md(all_recs: list[dict]) -> str:
    L = ["# String and identifier extraction (generated)\n",
         "> Generated by `analysis/tools/strings_scan.py`. Full per-module extractions live in",
         "> `analysis/report/data/strings/<module>.json`; curated per-module views live in",
         "> `src/<module>/strings/highlights.md`.\n",
         "| Module | ASCII | UTF-16LE | Unique | GUIDs | URLs | UPnP URNs | Registry | Modules referenced |",
         "|---|---|---|---|---|---|---|---|---|"]
    for r in sorted(all_recs, key=lambda x: x["artifact"]):
        t = r["by_tag"]
        L.append(f"| `{os.path.basename(r['artifact'])}` | {r['counts']['ascii']} | {r['counts']['utf16']} | "
                 f"{r['counts']['unique']} | {len(t.get('guid', []))} | {len(t.get('url', []))} | "
                 f"{len(t.get('upnp-urn', []))} | {len(t.get('registry', []))} | "
                 f"{len(t.get('module-name', []))} |")
    L.append("\n## Distinct GUIDs across all modules\n")
    L.append("| GUID | Modules |")
    L.append("|---|---|")
    guid_map: dict[str, set] = collections.defaultdict(set)
    for r in all_recs:
        for g in r["by_tag"].get("guid", []):
            guid_map[g.upper()].add(os.path.basename(r["artifact"]))
    for g, mods in sorted(guid_map.items()):
        L.append(f"| `{g}` | {', '.join(sorted(mods))} |")
    L.append("\n## UPnP / DLNA identifiers\n")
    for r in sorted(all_recs, key=lambda x: x["artifact"]):
        urns = r["by_tag"].get("upnp-urn", [])
        if urns:
            L.append(f"* `{os.path.basename(r['artifact'])}`: " + ", ".join(f"`{u}`" for u in urns[:12]))
    L.append("\n## URLs and endpoints\n")
    for r in sorted(all_recs, key=lambda x: x["artifact"]):
        urls = r["by_tag"].get("url", [])
        if urls:
            L.append(f"* `{os.path.basename(r['artifact'])}`: " + ", ".join(f"`{u}`" for u in urls[:12]))
    return "\n".join(L) + "\n"


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("artifact", nargs="?")
    ap.add_argument("--min-len", type=int, default=4)
    args = ap.parse_args()
    os.makedirs(os.path.join(DATA, "strings"), exist_ok=True)

    recs = []
    for path, rel in sorted(P.iter_pe_files(BIN), key=lambda t: t[1]):
        path = os.path.abspath(path)
        if args.artifact and args.artifact not in path:
            continue
        slug = P.slugify(os.path.basename(path))
        rec = scan(path, "bin/" + rel.replace(os.sep, "/"), slug, args.min_len)
        with open(os.path.join(DATA, "strings", f"{slug}.json"), "w") as fh:
            json.dump(rec, fh, indent=1)
        recs.append(rec)
        t = rec["by_tag"]
        print(f"[strings] {os.path.basename(rel):<34} ascii={rec['counts']['ascii']:<5} utf16={rec['counts']['utf16']:<5} "
              f"unique={rec['counts']['unique']:<5} guid={len(t.get('guid', [])):<3} url={len(t.get('url', [])):<3} "
              f"urn={len(t.get('upnp-urn', [])):<3} reg={len(t.get('registry', []))}")
    if not args.artifact:
        prev_path = os.path.join(DATA, "strings.md")
        open(prev_path, "w").write(render_md(recs))
        print(f"[strings] wrote analysis/report/data/strings.md and {len(recs)} per-module JSON files")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
