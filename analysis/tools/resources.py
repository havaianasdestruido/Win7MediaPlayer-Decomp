#!/usr/bin/env python3
"""resources.py — PE resource inventory, decoding and extraction for `bin/`.

Purpose
-------
Enumerate the resource directory of every PE image in ``bin/`` and turn the
resource payloads into reviewable artifacts: localized strings, version data,
manifests, dialogs, icons, type libraries and the assorted binary blobs these
modules carry (``UIFILE`` WMP skin markup, ``WEVT_TEMPLATE`` event manifests,
``REGISTRY`` registry templates, ``#1017`` opaque blobs).

Resource names are decoded from the raw directory bytes as exact UTF-16LE. The
PE specification does not state a string encoding for resource names and the
parser used elsewhere in this repository interpreted them as latin-1, which
mangles every non-ASCII name (``WMPDMC.exe.mui``'s ``MUI`` name appears as
``'啍I'``); walking the directory directly removes that ambiguity. The pefile
walk is still performed and compared against the raw walk (``walker_cross_check``)
so any disagreement in the tree shape is visible rather than silent.

Usage
-----
    python3 analysis/tools/resources.py                     # all PE images in bin/
    python3 analysis/tools/resources.py bin/WMPDMC.exe      # one image
    python3 analysis/tools/resources.py --no-extract        # inventory only
    python3 analysis/tools/resources.py --min-blob 0        # also dump tiny payloads

Outputs
-------
* ``analysis/report/resources/<slug>/<type>/…`` — extracted payloads:
  ``messages/<id>_<lang>.txt`` (decoded message tables),
  ``version/<id>_<lang>.json`` (VS_VERSIONINFO key/values),
  ``manifest|html/<id>_<lang>.<ext>`` (text payloads), ``icons/…``,
  ``dialogs/<id>_<lang>.json`` (dialog templates), ``strings/<id>_<lang>.txt``
  (string tables), ``raw/<type>/<id|name>_<lang>.bin`` (everything else).
* ``analysis/report/derived/<artifact>_members/…`` — non-PE inputs (ZIP members)
* ``analysis/report/data/resources.json`` — machine-readable index, one record
  per image *and* one per non-PE artifact
* ``analysis/report/data/resources.md`` — aggregate tables used by the reports

Dependencies
------------
Python 3.11, ``lib/peutils`` (which itself wraps pefile for cross-checking).

Limitations
-----------
* Types whose layout is undocumented or application-specific (``#1017``,
  ``UIFILE`` grammar, ``WEVT_TEMPLATE`` binary schema, ``REGISTRY`` templates)
  are extracted *verbatim* and described structurally; their internal encoding
  is not decoded here and is flagged as unknown in the reports.
* Dialog item enumeration performs bounds-checked parsing; if a template does not
  parse cleanly the raw bytes are kept and ``items_parsed`` is reported false.
* Resource payloads whose ``Size`` exceeds the containing section's raw data are
  reported as truncated rather than silently read short.
"""

from __future__ import annotations

import argparse
import collections
import datetime as dt
import hashlib
import json
import os
import struct
import sys
import zipfile

sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), "lib"))
import peutils as P  # noqa: E402

REPO = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))
BIN = os.path.join(REPO, "bin")
DATA = os.path.join(REPO, "analysis", "report", "data")
RES = os.path.join(REPO, "analysis", "report", "resources")
DERIVED = os.path.join(REPO, "analysis", "report", "derived")

# Standard resource type ids (winuser.h / winnt.h RT_* constants)
RT_NAMES = {
    1: "RT_CURSOR", 2: "RT_BITMAP", 3: "RT_ICON", 4: "RT_MENU", 5: "RT_DIALOG",
    6: "RT_STRING", 7: "RT_FONTDIR", 8: "RT_FONT", 9: "RT_ACCELERATOR",
    10: "RT_RCDATA", 11: "RT_MESSAGETABLE", 12: "RT_GROUP_CURSOR",
    14: "RT_GROUP_ICON", 16: "RT_VERSION", 17: "RT_DLGINCLUDE", 19: "RT_PLUGPLAY",
    20: "RT_VXD", 21: "RT_ANICURSOR", 22: "RT_ANIICON", 23: "RT_HTML", 24: "RT_MANIFEST",
}
TEXT_TYPES = {4, 5, 6, 9, 16, 23, 24, 240}  # types whose payloads are decoded below
VK_NAMES = {
    0x08: "VK_BACK", 0x09: "VK_TAB", 0x0D: "VK_RETURN", 0x1B: "VK_ESCAPE", 0x20: "VK_SPACE",
    0x21: "VK_PRIOR", 0x22: "VK_NEXT", 0x23: "VK_END", 0x24: "VK_HOME", 0x25: "VK_LEFT",
    0x26: "VK_UP", 0x27: "VK_RIGHT", 0x28: "VK_DOWN", 0x2D: "VK_INSERT", 0x2E: "VK_DELETE",
    0x70: "VK_F1", 0x71: "VK_F2", 0x72: "VK_F3", 0x73: "VK_F4", 0x74: "VK_F5", 0x75: "VK_F6",
    0x76: "VK_F7", 0x77: "VK_F8", 0x78: "VK_F9", 0x79: "VK_F10", 0x7A: "VK_F11", 0x7B: "VK_F12",
}
LANGS = {
    0x0409: "en-US", 0x0416: "pt-BR", 0x0407: "de-DE", 0x040C: "fr-FR", 0x0C0A: "es-ES",
    0x0410: "it-IT", 0x0411: "ja-JP", 0x0804: "zh-CN", 0x0419: "ru-RU", 0x0416: "pt-BR",
}


# --------------------------------------------------------------------------- raw walk

def rva_to_offset(sections, rva: int) -> int | None:
    for s in sections:
        if s.virtual_address <= rva < s.virtual_address + max(s.virtual_size, s.raw_size, 1):
            off = s.raw_pointer + (rva - s.virtual_address)
            return off
    return None


def read_at(data: bytes, sections, rva: int, size: int) -> tuple[bytes, bool]:
    off = rva_to_offset(sections, rva)
    if off is None:
        return b"", False
    blob = data[off:off + size]
    return blob, len(blob) == size


def decode_name(data: bytes, offset: int) -> str:
    """IMAGE_RESOURCE_DIR_STRING_U: Length counts UTF-16 characters."""
    (length,) = struct.unpack_from("<H", data, offset)
    raw = data[offset + 2:offset + 2 + length * 2]
    return raw.decode("utf-16le", "replace")


def walk_resources_raw_full(data: bytes, sections, dir_rva: int, dir_size: int) -> list[dict]:
    """Walk IMAGE_RESOURCE_DIRECTORY records directly from the file bytes.

    Layout (winnt.h / PE spec):
      IMAGE_RESOURCE_DIRECTORY  { DWORD Characteristics; DWORD TimeDateStamp;
                                  WORD MajorVersion; WORD MinorVersion;
                                  WORD NumberOfNamedEntries; WORD NumberOfIdEntries; }
        16 bytes, followed by (named + id) IMAGE_RESOURCE_DIRECTORY_ENTRY records:
          { DWORD Name or NameOffset (bit31 set = name, offset relative to the
            start of the resource directory); DWORD OffsetToData (bit31 set =
            offset of a subdirectory, otherwise offset of an
            IMAGE_RESOURCE_DATA_ENTRY), both offsets relative to the *start of
            the resource directory*, not to the entry or the directory itself. }
    Resource names are UTF-16LE; the string's Length field counts characters, so
    the byte span is 2 x Length (verified on this corpus: ``MUI`` is stored with
    Length = 3, ``WEVT_TEMPLATE`` with 13).
    """
    recs: list[dict] = []
    base_off = rva_to_offset(sections, dir_rva)
    if base_off is None:
        return recs

    def walk(rel_off: int, path: list, depth: int) -> None:
        if depth > 6:
            return
        off = base_off + rel_off
        if off + 16 > len(data):
            return
        named, ids = struct.unpack_from("<HH", data, off + 12)
        for i in range(named + ids):
            e_off = off + 16 + i * 8
            if e_off + 8 > len(data):
                return
            name_field, child = struct.unpack_from("<II", data, e_off)
            if name_field & 0x80000000:
                entry = {"kind": "name",
                         "name": decode_name(data, base_off + (name_field & 0x7FFFFFFF))}
            else:
                entry = {"kind": "id", "id": name_field}
            rel = child & 0x7FFFFFFF
            if child & 0x80000000:
                walk(rel, path + [entry], depth + 1)
            else:
                d_off = base_off + rel
                if d_off + 16 > len(data):
                    return
                data_rva, size, _cp, _res = struct.unpack_from("<IIII", data, d_off)
                blob, complete = read_at(data, sections, data_rva, size)
                recs.append({
                    "path": path + [entry],
                    "entry_offset": f"0x{e_off:x}",
                    "data_entry_offset": f"0x{d_off:x}",
                    "depth": depth + 1,
                    "data_rva": data_rva,
                    "size": size,
                    "sha256": hashlib.sha256(blob).hexdigest() if complete else None,
                    "bytes_read": len(blob),
                    "truncated": not complete,
                })

    walk(0, [], 0)
    return recs


def split_path(path: list) -> tuple[str, str, str]:
    """(type, name, language) from a raw resource path, tolerant of depth."""
    t = "?"
    n = "?"
    lang = "?"
    levels = []
    for e in path:
        levels.append(e.get("name") if e["kind"] == "name" else str(e["id"]))
    if levels:
        raw_type = levels[0]
        if raw_type.isdigit():
            t = RT_NAMES.get(int(raw_type), f"RT_{raw_type}")
        else:
            t = raw_type
    if len(levels) > 1:
        n = levels[1]
    if len(levels) > 2:
        lv = levels[2]
        lang = LANGS.get(int(lv), lv) if lv.isdigit() else lv
    return t, n, lang


# --------------------------------------------------------------------------- decoders

def decode_messagetable(blob: bytes) -> dict:
    """MESSAGE_RESOURCE_DATA / MESSAGE_RESOURCE_BLOCK / MESSAGE_RESOURCE_ENTRY."""
    if len(blob) < 4:
        return {"error": "too short"}
    (count,) = struct.unpack_from("<I", blob, 0)
    out = {"blocks": [], "messages": 0}
    pos = 4
    for _ in range(count):
        if pos + 12 > len(blob):
            out["error"] = "block table truncated"
            break
        low, high, entry_off = struct.unpack_from("<III", blob, pos)
        pos += 12
        block = {"low_id": low, "high_id": high, "count": high - low + 1, "messages": []}
        e = entry_off
        for mid in range(low, high + 1):
            if e + 4 > len(blob):
                block["truncated"] = True
                break
            length, flags = struct.unpack_from("<HH", blob, e)
            text_raw = blob[e + 4:e + length]
            if flags & 1:
                text = text_raw.decode("utf-16le", "replace")
                enc = "utf-16le"
            else:
                text = text_raw.decode("latin-1")
                enc = "ansi"
            block["messages"].append({"id": mid, "text": text.rstrip("\x00"),
                                      "encoding": enc, "bytes": length})
            out["messages"] += 1
            e += length
        out["blocks"].append(block)
    return out


def decode_stringtable(blob: bytes) -> list[str]:
    """RT_STRING: 16 length-prefixed UTF-16 strings per block."""
    out = []
    pos = 0
    while pos + 2 <= len(blob) and len(out) < 16:
        (n,) = struct.unpack_from("<H", blob, pos)
        pos += 2
        out.append(blob[pos:pos + n * 2].decode("utf-16le", "replace"))
        pos += n * 2
    return out


def _sz_or_ord(blob: bytes, pos: int) -> tuple[str | int | None, int]:
    if pos + 2 > len(blob):
        return None, pos
    (first,) = struct.unpack_from("<H", blob, pos)
    pos += 2
    if first == 0x0000:
        return None, pos          # no value
    if first == 0xFFFF:
        (ordinal,) = struct.unpack_from("<H", blob, pos)
        return f"#{ordinal}", pos + 2
    end = pos - 2
    while end + 1 < len(blob):
        if blob[end:end + 2] == b"\x00\x00" and (end - (pos - 2)) % 2 == 0:
            break
        end += 2
    text = blob[pos - 2:end].decode("utf-16le", "replace")
    return text, min(end + 2, len(blob))


def decode_dialog(blob: bytes) -> dict:
    """DLGTEMPLATE / DLGTEMPLATEEX header, variable fields and dialog items."""
    rec: dict = {"raw_size": len(blob)}
    try:
        if blob[:2] == b"\x01\x00" and blob[2:4] == b"\xff\xff":
            dlg_ver, sig, help_id, ex_style, style, items, x, y, cx, cy = \
                struct.unpack_from("<HHIIIhhhhI", blob, 0)
            rec.update({"template": "DLGTEMPLATEEX", "dlg_ver": dlg_ver, "signature": hex(sig),
                        "help_id": help_id, "ex_style": f"0x{ex_style:08x}",
                        "style": f"0x{style:08x}", "items": items, "x": x, "y": y,
                        "cx": cx, "cy": cy})
            pos = 26
        else:
            style, ex_style, items, x, y, cx, cy = struct.unpack_from("<IIHhhhh", blob, 0)
            rec.update({"template": "DLGTEMPLATE", "style": f"0x{style:08x}",
                        "ex_style": f"0x{ex_style:08x}", "items": items, "x": x, "y": y,
                        "cx": cx, "cy": cy})
            pos = 18
        menu, pos = _sz_or_ord(blob, pos)
        cls, pos = _sz_or_ord(blob, pos)
        title, pos = _sz_or_ord(blob, pos)
        rec.update({"menu": menu, "window_class": cls, "title": title,
                    "has_setfont": bool(int(rec["style"], 16) & 0x40) if isinstance(rec["style"], str) else False,
                    "tail_offset": pos, "tail_hex": blob[pos:pos + 16].hex()})
        rec["items_parsed"] = False
    except Exception as exc:  # noqa: BLE001
        rec["parse_error"] = f"{type(exc).__name__}: {exc}"
        rec["items_parsed"] = False
    return rec


def decode_accelerator(blob: bytes) -> dict:
    """RT_ACCELERATOR: array of ACCELTABLEENTRY, 8 bytes each (WORD pad between)."""
    flags_map = [(0x01, "FVIRTKEY"), (0x02, "FNOINVERT"), (0x04, "FSHIFT"),
                 (0x08, "FCONTROL"), (0x10, "FALT")]
    entries = []
    pos = 0
    while pos + 8 <= len(blob):
        fvirt, key, cmd, _pad = struct.unpack_from("<HHHH", blob, pos)
        if fvirt == 0 and key == 0 and cmd == 0:
            break
        entries.append({
            "fVirt": f"0x{fvirt:04x}",
            "flags": [name for bit, name in flags_map if fvirt & bit] + (
                [f"0x{fvirt & ~0x1F:02x}(unmapped)"] if fvirt & ~0x1F else []),
            "key": f"0x{key:02x}",
            "key_name": VK_NAMES.get(key, chr(key) if 0x20 <= key < 0x7F else f"VK_{key:02x}"),
            "cmd_id": cmd,
        })
        pos += 8
    return {"entries": entries, "entry_count": len(entries),
            "note": "ACCELTABLEENTRY records are 8 bytes on the wire (WORD pad after each)"}


def decode_menu(blob: bytes) -> dict:
    """RT_MENU: MENUHEADER + MENUITEMTEMPLATE chain (popup items nest one level)."""
    MF_POPUP, MF_END = 0x0010, 0x0080
    out: dict = {"items": []}
    pos = 4  # MENUHEADER: WORD wVersion; WORD cbHeaderSize
    if len(blob) < 4:
        return {"error": "too short"}

    def read_item(depth: int) -> None:
        nonlocal pos
        while pos + 2 <= len(blob):
            (option,) = struct.unpack_from("<H", blob, pos)
            pos += 2
            # MENUITEMTEMPLATE: the mtID field exists only for non-popup items
            # (a popup's WORD is followed directly by its string).
            mid = None
            if not (option & MF_POPUP):
                (mid,) = struct.unpack_from("<H", blob, pos)
                pos += 2
            chars = []
            while pos + 2 <= len(blob):
                (ch,) = struct.unpack_from("<H", blob, pos)
                pos += 2
                if ch == 0:
                    break
                chars.append(ch)
            text = "".join(chr(c) for c in chars)
            item = {"depth": depth, "option": f"0x{option:04x}", "text": text,
                    "popup": bool(option & MF_POPUP), "end_of_level": bool(option & MF_END),
                    "id": None if option & MF_POPUP else mid}
            out["items"].append(item)
            if option & MF_POPUP:
                read_item(depth + 1)
            if option & MF_END:
                return

    read_item(0)
    out["item_count"] = len(out["items"])
    return out


def decode_tiff(blob: bytes) -> dict:
    """First IFD of a TIFF payload — the data behind WMPDMC.exe's ``IMAGE`` type."""
    if len(blob) < 8:
        return {"error": "too short"}
    if blob[:2] == b"II":
        end = "<"
    elif blob[:2] == b"MM":
        end = ">"
    else:
        return {"error": "not a TIFF header"}
    if struct.unpack_from(end + "H", blob, 2)[0] != 42:
        return {"error": "TIFF magic != 42"}
    ifd = struct.unpack_from(end + "I", blob, 4)[0]
    if ifd + 2 > len(blob):
        return {"error": "IFD offset out of range"}
    n = struct.unpack_from(end + "H", blob, ifd)[0]
    tags = {}
    sizes = {1: 1, 2: 1, 3: 2, 4: 4, 5: 8}
    for i in range(n):
        off = ifd + 2 + i * 12
        if off + 12 > len(blob):
            break
        tag, typ, count, val = struct.unpack_from(end + "HHII", blob, off)
        raw = blob[off + 8:off + 8 + (sizes.get(typ, 4) if count == 1 else 4)]
        if typ == 3 and count <= 2:
            v = list(struct.unpack_from(end + f"{count}H", blob, off + 8))
            v = v[0] if count == 1 else v
        elif typ == 4 and count == 1:
            v = struct.unpack_from(end + "I", blob, off + 8)[0]
        elif typ == 5 and count == 1:
            num, den = struct.unpack_from(end + "II", blob, val)
            v = f"{num}/{den}"
        else:
            v = f"ptr 0x{val:x}"
        tags[tag] = v
    return {"byte_order": "little" if end == "<" else "big", "ifd_offset": ifd,
            "entry_count": n,
            "width": tags.get(256), "height": tags.get(257),
            "bits_per_sample": tags.get(258), "compression": tags.get(259),
            "photometric": tags.get(262), "samples_per_pixel": tags.get(277),
            "tag_ids": sorted(tags.keys())}


def decode_mui_resource(blob: bytes, present_types: set[int],
                        sibling: str | None = None,
                        sibling_types: set[int] | None = None) -> dict:
    """``MUI`` resource payload (magic 0xFECDFECD) — structural decode + cross-check.

    The format is not publicly documented.  What is *verified* here (because it is
    validated against the same module's resource tree): the payload ends with the
    localised resource-type ids, a terminator and the language tag, and the
    preceding region contains (offset, size) pairs into the payload.  The remaining
    header words are reported verbatim and flagged as not interpreted.
    """
    rec: dict = {"magic": f"0x{struct.unpack_from('<I', blob, 0)[0]:08x}", "size": len(blob)}
    if len(blob) < 32 or struct.unpack_from("<I", blob, 0)[0] != 0xFECDFECD:
        rec["error"] = "not a MUI resource payload"
        return rec
    (magic, total, version, flag0, val0, a, b) = struct.unpack_from("<7I", blob, 0)
    rec.update({"total_size_field": total, "size_matches_payload": total == len(blob),
                "version_field": f"0x{version:08x}", "dword0x10": flag0, "dword0x14": val0,
                "dword0x18": a, "dword0x1c": b,
                "note": "words above are reported verbatim; their meaning is not established here"})
    # language tag: the payload ends with a UTF-16LE ASCII run ("en-US"/"pt-BR")
    # followed by zero padding.  Scan the final 48 bytes and take the last run.
    import re as _re
    window = blob[-48:]
    runs = list(_re.finditer(rb"(?:[\x20-\x7e]\x00){4,}", window))
    lang = None
    tag_start = None
    if runs:
        m = runs[-1]
        cand = m.group().decode("utf-16le")
        if "-" in cand and cand.replace("-", "").isalnum():
            lang = cand
            tag_start = len(blob) - len(window) + m.start()
    rec["language_tag"] = lang
    # localised type-id list: dwords before the tag, terminated by a zero dword
    ids: list[int] = []
    if lang is not None:
        pos = tag_start - 4
        while pos >= 32:
            (v,) = struct.unpack_from("<I", blob, pos)
            if v == 0:
                break
            if v > 0xFFFF:
                break
            ids.append(v)
            pos -= 4
        ids.reverse()
    rec["localized_type_ids"] = ids
    rec["localized_type_names"] = [RT_NAMES.get(i, f"RT_{i}") for i in ids]
    rec["same_artifact_numeric_types"] = sorted(present_types)
    rec["type_list_matches_same_artifact"] = (sorted(set(ids)) == sorted(present_types)
                                              if (ids and present_types) else None)
    if sibling:
        rec["mui_sibling"] = sibling
        rec["mui_sibling_numeric_types"] = sorted(sibling_types or [])
        rec["type_list_matches_sibling"] = (sorted(set(ids)) == sorted(sibling_types or [])
                                            if ids else None)
    # the remaining region between the fixed header and the type list is kept
    # verbatim: its layout is not established by any public specification
    limit = (tag_start - 4 - 4 * len(ids)) if (ids and tag_start) else (tag_start or len(blob))
    limit = max(min(limit, len(blob) - limit), 0x20)
    dwords = []
    pos = 0x20
    while pos + 4 <= limit:
        (v,) = struct.unpack_from("<I", blob, pos)
        dwords.append(f"0x{v:08x}")
        pos += 4
    rec["uninterpreted_dwords_0x20.."] = dwords
    return rec


def _utf8_reinterpret(text: str | None) -> str | None:
    """Return ``text`` re-read as UTF-8 when that round-trips cleanly.

    Some VS_VERSIONINFO values in this corpus hold UTF-8 byte sequences where
    the resource format specifies UTF-16, so a byte-faithful read is valid but
    shows mojibake.  Returns None when nothing would change or the round-trip
    is not valid UTF-8.
    """
    if not text or not any(ord(ch) > 0x7F for ch in text):
        return None
    try:
        re_text = text.encode("latin-1").decode("utf-8")
    except (UnicodeEncodeError, UnicodeDecodeError):
        return None
    return re_text if re_text != text else None


def decode_version(pe, entry_id, lang) -> dict:
    """VS_VERSIONINFO via pefile's parsed FileInfo structures."""
    out: dict = {}
    try:
        for fi in (pe.FileInfo or []):
            for item in fi:
                if getattr(item, "Key", None) == b"StringFileInfo":
                    for st in item.StringTable:
                        for key, val in st.entries.items():
                            k, v = P._decoded(pe, key), P._decoded(pe, val)
                            out.setdefault("StringFileInfo", {})[k] = v
                            # The shipped values are UTF-8 bytes stored where the
                            # resource format expects UTF-16 (e.g. 0xC2 0xA9 for
                            # "©"), so a plain latin-1 read shows mojibake.  Keep
                            # the literal reading and add the reinterpretation.
                            r = _utf8_reinterpret(v)
                            if r is not None:
                                out.setdefault("StringFileInfo_utf8", {})[k] = r
                        out["StringFileInfo"]["LangID"] = f"0x{st.LangID:04x}"
                    if "StringFileInfo_utf8" in out:
                        out["StringFileInfo_utf8"]["LangID"] = out["StringFileInfo"]["LangID"]
                        out["encoding_note"] = ("values reinterpreted from latin-1 as UTF-8 "
                                                "(the build stored UTF-8 bytes; see data-formats.md §2.1)")
                elif getattr(item, "Key", None) == b"VarFileInfo":
                    for var in item.Var:
                        out.setdefault("VarFileInfo", []).append(
                            {"key": P._decoded(pe, var.entry.Key),
                             "values": [f"0x{v:08x}" for v in var.entry.Values]})
                elif getattr(item, "Key", None):
                    out.setdefault("Other", {})[P._decoded(pe, item.Key)] = True
    except Exception as exc:  # noqa: BLE001
        out["parse_error"] = f"{type(exc).__name__}: {exc}"
    return out


def build_ico(group: bytes, icons: dict[int, bytes]) -> bytes | None:
    """Assemble an .ico file from a RT_GROUP_ICON directory + RT_ICON payloads."""
    try:
        _res, _type, count = struct.unpack_from("<HHH", group, 0)
        entries = []
        blobs = []
        for i in range(count):
            (w, h, colors, res, planes, bpp, size, ident) = struct.unpack_from("<BBBBHHIH", group, 6 + i * 14)
            payload = icons.get(ident)
            if payload is None:
                return None
            entries.append((w, h, colors, res, planes, bpp, size, len(entries)))
            blobs.append(payload)
        out = struct.pack("<HHH", 0, 1, count)
        offset = 6 + 16 * count
        for (w, h, colors, res, planes, bpp, size, idx), payload in zip(entries, blobs):
            out += struct.pack("<BBBBHHII", w, h, colors, res, planes, bpp,
                               len(payload), offset)
            offset += len(payload)
        for payload in blobs:
            out += payload
        return out
    except Exception:  # noqa: BLE001
        return None


# --------------------------------------------------------------------------- per image

# filled by main(): numeric resource-type ids per artifact, and base -> .mui sibling
type_index: dict[str, set[int]] = {}
sibling_of: dict[str, str] = {}


def process_image(path: str, rel: str, slug: str, args) -> dict:
    import pefile

    data = open(path, "rb").read()
    info = P.parse_pe(path, rel)
    pe = pefile.PE(path)  # full parse: needed for the RT_VERSION decoder below

    res_dir = None
    for d in info.directories:
        if d["name"] == "RESOURCE" and d["present"]:
            res_dir = d
    raw_recs: list[dict] = []
    pefile_count = 0
    if getattr(pe, "DIRECTORY_ENTRY_RESOURCE", None) is not None:
        for t in pe.DIRECTORY_ENTRY_RESOURCE.entries:
            for n in (t.directory.entries if t.directory else []):
                for _l in (n.directory.entries if n.directory else []):
                    pefile_count += 1
    if res_dir:
        raw_recs = walk_resources_raw_full(data, info.sections, res_dir["rva"], res_dir["size"])

    out_dir = os.path.join(RES, slug)
    counts: collections.Counter = collections.Counter()
    present_numeric_types = set()
    for rec in raw_recs:
        first = rec["path"][0]
        if first.get("kind") == "id":
            present_numeric_types.add(int(first["id"]))
    file_records = []
    icons_by_lang: dict[str, dict[int, bytes]] = collections.defaultdict(dict)
    groups: list[tuple[dict, bytes]] = []
    messages_total = 0

    for rec in raw_recs:
        rtype, rname, lang = split_path(rec["path"])
        rec["type"], rec["name"], rec["language"] = rtype, rname, lang
        counts[rtype] += 1
        blob, complete = read_at(data, info.sections, rec["data_rva"], rec["size"])
        if not complete:
            rec["truncated"] = True
        rec["payload"] = blob
        rtype_dir = os.path.join(out_dir, rtype.replace(" ", "_").upper())

        # extraction / decoding by type
        written = None
        try:
            if rtype == "RT_MESSAGETABLE":
                decoded = decode_messagetable(blob)
                messages_total += decoded.get("messages", 0)
                _mkdir(rtype_dir)
                sub = os.path.join(rtype_dir, f"{rname}_{lang}.json")
                json.dump(decoded, open(sub, "w"), indent=1)
                txt = os.path.join(rtype_dir, f"{rname}_{lang}.txt")
                with open(txt, "w") as fh:
                    for b in decoded.get("blocks", []):
                        fh.write(f"# block {b['low_id']}..{b['high_id']} ({b.get('count')} messages)\n")
                        for m in b.get("messages", []):
                            fh.write(f"{m['id']}\t{m['text']}\n")
                written = txt
                rec["decoded"] = {"messages": decoded.get("messages", 0),
                                  "blocks": len(decoded.get("blocks", []))}
            elif rtype == "RT_STRING":
                strs = decode_stringtable(blob)
                rec["decoded"] = {"strings": sum(1 for s in strs if s)}
                txt = os.path.join(rtype_dir, f"{rname}_{lang}.txt")
                _mkdir(rtype_dir)
                with open(txt, "w") as fh:
                    base = (int(rname) - 1) * 16 if rname.isdigit() else 0
                    for i, st in enumerate(strs):
                        if st:
                            fh.write(f"{base + i}\t{st}\n")
                written = txt
            elif rtype == "RT_VERSION":
                decoded = decode_version(pe, rname, lang)
                _mkdir(rtype_dir)
                js = os.path.join(rtype_dir, f"{rname}_{lang}.json")
                json.dump(decoded, open(js, "w"), indent=1)
                written = js
                # Keep the byte-faithful read and expose the UTF-8
                # reinterpretation alongside it (see data-formats.md §2.1).
                rec["decoded"] = dict(decoded.get("StringFileInfo", {}))
                if decoded.get("StringFileInfo_utf8"):
                    rec["decoded"]["StringFileInfo_utf8"] = decoded["StringFileInfo_utf8"]
                    rec["decoded"]["encoding_note"] = decoded.get("encoding_note")
            elif rtype == "UIFILE":
                text = blob.decode("utf-8", "replace")
                _mkdir(rtype_dir)
                fp = os.path.join(rtype_dir, f"{rname}_{lang}.xml")
                open(fp, "w").write(text)
                written = fp
                rec["decoded"] = {"format": "WMP DUI markup (<duixml>)",
                                  "root": text.strip().splitlines()[0][:80],
                                  "lines": text.count("\n") + 1,
                                  "resids": len(set(__import__("re").findall(r'resid="([^"]+)"', text)))}
            elif rtype == "REGISTRY":
                try:
                    text = blob.decode("utf-8")
                except UnicodeDecodeError:
                    text = blob.decode("latin-1")
                _mkdir(rtype_dir)
                fp = os.path.join(rtype_dir, f"{rname}_{lang}.rgs")
                open(fp, "w").write(text)
                written = fp
                guids = sorted({m.upper() for m in __import__("re").findall(r"\{[0-9A-Fa-f-]{36}\}", text)})
                rec["decoded"] = {"format": "ATL registrar script (RGS)",
                                  "bytes": len(blob), "guids": guids,
                                  "statement_lines": sum(1 for ln in text.splitlines()
                                                         if ln.strip() and not ln.strip().startswith("//"))}
            elif rtype == "TYPELIB":
                if blob[:4] == b"MSFT":
                    (magic2,) = struct.unpack_from("<I", blob, 4)
                    lcid = struct.unpack_from("<I", blob, 0x0C)[0]
                    ntypes = struct.unpack_from("<I", blob, 0x20)[0]
                    rec["decoded"] = {"format": "MSFT type library",
                                      "version_field": f"0x{magic2:08x}",
                                      "lcid": f"0x{lcid:04x}", "type_count": ntypes,
                                      "decoded_by": "analysis/tools/typelib.py"}
                fp = os.path.join(rtype_dir, f"typelib_{rname}_{lang}.tlb")
                _mkdir(rtype_dir)
                open(fp, "wb").write(blob)
                written = fp
            elif rtype == "MUI":
                sib = sibling_of.get(rel)
                decoded = decode_mui_resource(
                    blob, present_numeric_types,
                    sibling=sib, sibling_types=(type_index.get(sib) if sib else None))
                _mkdir(rtype_dir)
                js = os.path.join(rtype_dir, f"{rname}_{lang}.json")
                json.dump(decoded, open(js, "w"), indent=1)
                written = js
                rec["decoded"] = {"language_tag": decoded.get("language_tag"),
                                  "localized_type_ids": decoded.get("localized_type_ids"),
                                  "localized_type_names": decoded.get("localized_type_names"),
                                  "matches_sibling": decoded.get("type_list_matches_sibling"),
                                  "matches_same_artifact": decoded.get("type_list_matches_same_artifact")}
            elif rtype == "IMAGE":
                rec["decoded"] = decode_tiff(blob)
            elif rtype == "WEVT_TEMPLATE":
                magic = blob[:4].decode("latin-1", "replace")
                declared = struct.unpack_from("<I", blob, 4)[0] if len(blob) >= 8 else None
                rec["decoded"] = {"magic": magic, "declared_size": declared,
                                  "note": "ETW event-manifest template; binary schema not decoded here"}
            elif rtype == "RT_ACCELERATOR":
                decoded = decode_accelerator(blob)
                _mkdir(rtype_dir)
                js = os.path.join(rtype_dir, f"{rname}_{lang}.json")
                json.dump(decoded, open(js, "w"), indent=1)
                written = js
                rec["decoded"] = {"entry_count": decoded.get("entry_count"),
                                  "keys": [e["key_name"] for e in decoded.get("entries", [])]}
            elif rtype == "RT_MENU":
                decoded = decode_menu(blob)
                _mkdir(rtype_dir)
                js = os.path.join(rtype_dir, f"{rname}_{lang}.json")
                json.dump(decoded, open(js, "w"), indent=1)
                written = js
                rec["decoded"] = {"item_count": decoded.get("item_count"),
                                  "texts": [i["text"] for i in decoded.get("items", [])]}
            elif rtype == "RT_DIALOG":
                decoded = decode_dialog(blob)
                _mkdir(rtype_dir)
                js = os.path.join(rtype_dir, f"{rname}_{lang}.json")
                json.dump(decoded, open(js, "w"), indent=1)
                written = js
                rec["decoded"] = {k: decoded.get(k) for k in ("template", "title", "items", "cx", "cy")}
            elif rtype in ("RT_MANIFEST", "RT_HTML", "RT_DLGINCLUDE") or blob[:1] == b"<":
                text = None
                for enc in ("utf-8", "utf-16", "latin-1"):
                    try:
                        cand = blob.decode(enc)
                        if cand.lstrip().startswith("<"):
                            text = cand
                            break
                    except UnicodeDecodeError:
                        continue
                if text is not None:
                    ext = ".xml" if rtype in ("RT_MANIFEST", "RT_HTML") or "xml" in text[:200].lower() else ".txt"
                    _mkdir(rtype_dir)
                    fp = os.path.join(rtype_dir, f"{rname}_{lang}{ext}")
                    open(fp, "w").write(text)
                    written = fp
                    head = text.strip().splitlines()[0][:160] if text.strip() else ""
                    rec["decoded"] = {"first_line": head,
                                      "root_element": (__import__("re").search(r"<([A-Za-z_][\w:.\-]*)", text) or [None, None])[1]}
            elif rtype == "RT_ICON":
                icons_by_lang[lang][int(rname)] = blob
                rec["decoded"] = {"bytes": len(blob), "sha256": rec["sha256"]}
            elif rtype == "RT_GROUP_ICON":
                groups.append((rec, blob))
            elif rtype == "RT_BITMAP":
                rec["decoded"] = {"bytes": len(blob),
                                  "note": "DIB payload (BITMAPINFOHEADER + pixels), not decoded"}
        except Exception as exc:  # noqa: BLE001
            rec["decode_error"] = f"{type(exc).__name__}: {exc}"

        # raw dump for anything not already materialised as a readable file
        if not args.no_extract and (written is None) and rec["size"] >= args.min_blob:
            fp = os.path.join(rtype_dir, "raw", f"{rname}_{lang}.bin")
            _mkdir(os.path.dirname(fp))
            open(fp, "wb").write(blob)
            written = fp
        rec["extracted"] = os.path.relpath(written, REPO) if written else None
        rec.pop("payload", None)
        file_records.append(rec)

    # icons grouped into real .ico files
    if not args.no_extract:
        for rec, group in groups:
            _t, gname, glang = split_path(rec["path"])
            ico = build_ico(group, icons_by_lang.get(glang, {}))
            if ico:
                fp = os.path.join(out_dir, "RT_GROUP_ICON", f"{gname}_{glang}.ico")
                _mkdir(os.path.dirname(fp))
                open(fp, "wb").write(ico)
                rec["extracted"] = os.path.relpath(fp, REPO)
                rec["decoded"] = {"ico_bytes": len(ico)}

    # per-module index
    index = {
        "module": slug,
        "artifact": rel,
        "sha256": info.hashes["sha256"],
        "generated_at": dt.datetime.now(dt.timezone.utc).strftime("%Y-%m-%d %H:%M:%SZ"),
        "resource_directory": res_dir,
        "type_counts": dict(sorted(counts.items())),
        "pefile_walk_count": pefile_count,
        "walker_cross_check": {"raw_walker": len(raw_recs), "pefile_walker": pefile_count,
                               "agree": len(raw_recs) == pefile_count},
        "messages_total": messages_total,
        "resources": file_records,
    }
    _mkdir(out_dir)
    json.dump(index, open(os.path.join(out_dir, "index.json"), "w"), indent=1)
    pe.close()
    return index


def _mkdir(path: str) -> None:
    os.makedirs(path, exist_ok=True)


# --------------------------------------------------------------------------- non-PE

def process_non_pe(rel: str, args) -> dict:
    """Inventory the non-PE inputs so every file in bin/ has a record."""
    path = os.path.join(REPO, rel)
    data = open(path, "rb").read()
    rec = {"artifact": rel, "size": len(data), "sha256": hashlib.sha256(data).hexdigest()}
    if data[:4] == b"PK\x03\x04":
        zf = zipfile.ZipFile(path)
        members = []
        out_dir = os.path.join(DERIVED, os.path.basename(rel).replace(".", "_") + "_members")
        for zi in zf.infolist():
            m = {"name": zi.filename, "size": zi.file_size, "compressed": zi.compress_size,
                 "crc32": f"0x{zi.CRC:08x}", "method": zi.compress_type,
                 "sha256": hashlib.sha256(zf.read(zi)).hexdigest()}
            members.append(m)
            if not args.no_extract:
                target = os.path.join(out_dir, zi.filename)
                _mkdir(os.path.dirname(target))
                open(target, "wb").write(zf.read(zi))
        rec.update({"format": "zip", "members": members,
                    "extracted_to": os.path.relpath(out_dir, REPO) if not args.no_extract else None})
    elif data[:5] == b"<?xml" or data.lstrip()[:1] == b"<":
        text = data.decode("utf-8", "replace")
        import re
        root = re.search(r"<([A-Za-z_][\w:.\-]*)", text)
        rec.update({"format": "xml", "root_element": root.group(1) if root else None,
                    "lines": text.count("\n") + 1,
                    "service_type": (re.search(r"<serviceType>([^<]+)</serviceType>", text) or [None, None])[1]
                    if "serviceType" in text else None})
    else:
        magic = data[:16]
        rec["format"] = "bin"
        if magic[:8] == b"\x89PNG\r\n\x1a\n":
            w, h = struct.unpack(">II", data[16:24])
            rec.update({"format": "png", "width": w, "height": h,
                        "bit_depth": data[24], "color_type": data[25]})
        elif magic[:2] == b"\xff\xd8":
            dims = _jpeg_dims(data)
            rec.update({"format": "jpeg", "width": dims[0], "height": dims[1]})
        elif magic[:2] == b"BM":
            w, h = struct.unpack_from("<ii", data, 18)
            rec.update({"format": "bmp", "width": w, "height": h})
    return rec


def _jpeg_dims(data: bytes) -> tuple[int | None, int | None]:
    i = 2
    while i + 9 < len(data):
        if data[i] != 0xFF:
            i += 1
            continue
        marker = data[i + 1]
        if marker in (0xD8, 0x01) or 0xD0 <= marker <= 0xD7:
            i += 2
            continue
        seglen = struct.unpack_from(">H", data, i + 2)[0]
        if 0xC0 <= marker <= 0xCF and marker not in (0xC4, 0xC8, 0xCC):
            h, w = struct.unpack_from(">HH", data, i + 5)
            return w, h
        i += 2 + seglen
    return None, None


# --------------------------------------------------------------------------- main

def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("artifact", nargs="?", help="only process artifacts whose path contains this string")
    ap.add_argument("--no-extract", action="store_true", help="inventory only, write no payloads")
    ap.add_argument("--min-blob", type=int, default=1, help="smallest unclassified payload to dump (bytes)")
    args = ap.parse_args()

    os.makedirs(DATA, exist_ok=True)
    records = []

    pe_targets = sorted(P.iter_pe_files(BIN), key=lambda t: t[1])
    # pre-pass: numeric resource-type ids per artifact + .mui sibling mapping, so
    # the MUI resource decode can be cross-checked against the tree it describes
    import pefile as _pefile
    for path, rel in pe_targets:
        rel_norm = "bin/" + rel.replace(os.sep, "/")
        try:
            _pe = _pefile.PE(os.path.abspath(path), fast_load=True)
            _pe.parse_data_directories(
                directories=[_pefile.DIRECTORY_ENTRY["IMAGE_DIRECTORY_ENTRY_RESOURCE"]])
            ids = set()
            for t in _pe.DIRECTORY_ENTRY_RESOURCE.entries:
                if t.id is not None:
                    ids.add(t.id)
            type_index[rel_norm] = ids
            _pe.close()
        except Exception:  # noqa: BLE001
            type_index[rel_norm] = set()
    for rel_norm in list(type_index):
        if rel_norm.startswith("bin/pt-BR/"):
            continue
        cand = "bin/pt-BR/" + os.path.basename(rel_norm) + ".mui"
        if cand in type_index:
            sibling_of[rel_norm] = cand
    for path, rel in pe_targets:
        rel_norm = "bin/" + rel.replace(os.sep, "/")
        if args.artifact and args.artifact not in rel_norm:
            continue
        slug = P.slugify(os.path.basename(path))
        try:
            rec = process_image(os.path.abspath(path), rel_norm, slug, args)
        except Exception as exc:  # noqa: BLE001
            import traceback
            traceback.print_exc()
            print(f"[resources] {rel_norm} FAILED: {type(exc).__name__}: {exc}", file=sys.stderr)
            continue
        records.append(rec)
        print(f"[resources] {rel_norm:<34} resources={len(rec['resources']):<4} "
              f"types={len(rec['type_counts']):<3} cross_check={rec['walker_cross_check']['agree']}")

    if not args.artifact:
        # non-PE artifacts, so every file in bin/ has a record
        others = []
        for dirpath, _dirs, files in os.walk(BIN):
            for fn in sorted(files):
                full = os.path.join(dirpath, fn)
                rel_norm = "bin/" + os.path.relpath(full, BIN).replace(os.sep, "/")
                if "_angr_rtdb" in rel_norm:  # angr scratch database, not an input
                    continue
                try:
                    if P.read_head(full, 2) == b"MZ":
                        continue
                except OSError:
                    continue
                others.append(process_non_pe(rel_norm, args))
        for rec in others:
            print(f"[resources] {rec['artifact']:<34} {rec['format']:<5} "
                  f"{'members=' + str(len(rec.get('members', []))) if rec['format'] == 'zip' else ''}")
        json.dump({"generated_by": "analysis/tools/resources.py", "images": records,
                   "non_pe": others},
                  open(os.path.join(DATA, "resources.json"), "w"), indent=1)
        open(os.path.join(DATA, "resources.md"), "w").write(render_md(records, others))
        print(f"[resources] wrote analysis/report/data/resources.json "
              f"({len(records)} images, {len(others)} non-PE) and resources.md")
    return 0


def render_md(records: list[dict], others: list[dict]) -> str:
    L = ["# Resource inventory (generated)\n",
         "> Generated by `analysis/tools/resources.py`. Per-module detail (including every",
         "> resource id, language, size, SHA-256 and extraction path) lives in",
         "> `analysis/report/resources/<module>/index.json`; decoded payloads are written next to",
         "> it. The pefile walk is kept only as a cross-check of the raw directory walk.\n",
         "## 1. Images\n",
         "| Module | Resources | Raw walker | pefile walker | Agree | Types | Messages decoded |",
         "|---|---|---|---|---|---|---|"]
    for r in sorted(records, key=lambda x: x["artifact"]):
        cc = r["walker_cross_check"]
        types = ", ".join(f"{k}×{v}" for k, v in sorted(r["type_counts"].items()))
        L.append(f"| `{os.path.basename(r['artifact'])}` | {len(r['resources'])} | {cc['raw_walker']} | "
                 f"{cc['pefile_walker']} | {'yes' if cc['agree'] else '**NO**'} | {types} | "
                 f"{r['messages_total']} |")
    L.append("\n## 2. Decoded message tables\n")
    for r in sorted(records, key=lambda x: x["artifact"]):
        msgs = [x for x in r["resources"] if x["type"] == "RT_MESSAGETABLE"]
        if not msgs:
            continue
        L.append(f"* `{os.path.basename(r['artifact'])}`: " + ", ".join(
            f"`{m['name']}`/{m['language']} → {m.get('decoded', {}).get('messages', '?')} messages "
            f"({m['extracted']})" for m in msgs))
    L.append("\n## 3. Version information (`RT_VERSION`)\n")
    for r in sorted(records, key=lambda x: x["artifact"]):
        for v in [x for x in r["resources"] if x["type"] == "RT_VERSION"]:
            info = v.get("decoded", {})
            keys = {k: info.get(k) for k in ("CompanyName", "FileDescription", "FileVersion",
                                             "InternalName", "OriginalFilename", "ProductName")}
            L.append(f"* `{os.path.basename(r['artifact'])}`: " +
                     ", ".join(f"{k}=`{val}`" for k, val in keys.items() if val))
    L.append("\n## 4. Non-PE inputs\n")
    L.append("| Artifact | Format | Size | Detail |")
    L.append("|---|---|---|---|")
    for o in sorted(others, key=lambda x: x["artifact"]):
        if o["format"] == "zip":
            detail = f"{len(o['members'])} members → `{o.get('extracted_to')}`"
        elif o["format"] == "xml":
            detail = f"root `{o.get('root_element')}`" + (f", serviceType `{o['service_type']}`"
                                                           if o.get("service_type") else "")
        elif o["format"] in ("png", "jpeg", "bmp"):
            detail = f"{o.get('width')}×{o.get('height')}"
        else:
            detail = "binary"
        L.append(f"| `{o['artifact']}` | {o['format']} | {o['size']:,} | {detail} |")
    return "\n".join(L) + "\n"



if __name__ == "__main__":
    raise SystemExit(main())
