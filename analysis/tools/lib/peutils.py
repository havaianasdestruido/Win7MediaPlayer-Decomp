"""peutils — shared PE/COFF inspection helpers for the Win7MediaPlayer-Decomp project.

Purpose
-------
Common, dependency-light helpers used by the project's analysis tools
(``inventory.py``, ``api_map.py``, ``resources.py``, ``strings_scan.py``,
``decompile.py``, ``disasm.py``).  Everything here is read-only with respect to
the analysed artifacts.

Dependencies
------------
* Python 3.11
* ``pefile`` (>=2023, tested 2024.8.26) — optional; PE parsing is skipped with
  an explicit error record when unavailable.

Design notes
------------
* No helper in this module modifies, rewrites or re-saves an input file.  Files
  are always opened ``rb`` and only read.
* Every derived observation is returned together with the evidence needed to
  reproduce it (file offset, RVA/VA, raw section bytes) wherever practical.
* "Verified" data (parsed from the file's own structures) is kept separate from
  "heuristic" data (entropy/packer guesses) in the emitted records.
"""

from __future__ import annotations

import hashlib
import math
import os
import struct
from collections import Counter
from dataclasses import dataclass, field
from typing import Any, Iterable, Iterator

# ---------------------------------------------------------------------------
# Constants
# ---------------------------------------------------------------------------

IMAGE_FILE_MACHINE = {
    0x0000: "IMAGE_FILE_MACHINE_UNKNOWN",
    0x014C: "IMAGE_FILE_MACHINE_I386",
    0x0162: "IMAGE_FILE_MACHINE_R3000",
    0x0166: "IMAGE_FILE_MACHINE_R4000",
    0x0168: "IMAGE_FILE_MACHINE_R10000",
    0x0169: "IMAGE_FILE_MACHINE_WCEMIPSV2",
    0x0184: "IMAGE_FILE_MACHINE_ALPHA",
    0x01A2: "IMAGE_FILE_MACHINE_SH3",
    0x01A3: "IMAGE_FILE_MACHINE_SH3DSP",
    0x01A4: "IMAGE_FILE_MACHINE_SH3E",
    0x01A6: "IMAGE_FILE_MACHINE_SH4",
    0x01A8: "IMAGE_FILE_MACHINE_SH5",
    0x01C0: "IMAGE_FILE_MACHINE_ARM",
    0x01C2: "IMAGE_FILE_MACHINE_THUMB",
    0x01C4: "IMAGE_FILE_MACHINE_ARMNT",
    0x01D3: "IMAGE_FILE_MACHINE_AM33",
    0x01F0: "IMAGE_FILE_MACHINE_POWERPC",
    0x01F1: "IMAGE_FILE_MACHINE_POWERPCFP",
    0x0200: "IMAGE_FILE_MACHINE_IA64",
    0x0266: "IMAGE_FILE_MACHINE_MIPS16",
    0x0284: "IMAGE_FILE_MACHINE_ALPHA64",
    0x0366: "IMAGE_FILE_MACHINE_MIPSFPU",
    0x0466: "IMAGE_FILE_MACHINE_MIPSFPU16",
    0x0520: "IMAGE_FILE_MACHINE_TRICORE",
    0x0CEF: "IMAGE_FILE_MACHINE_CEF",
    0x0EBC: "IMAGE_FILE_MACHINE_EBC",
    0x8664: "IMAGE_FILE_MACHINE_AMD64",
    0x9041: "IMAGE_FILE_MACHINE_M32R",
    0xAA64: "IMAGE_FILE_MACHINE_ARM64",
    0xC0EE: "IMAGE_FILE_MACHINE_CEE",
}

SUBSYSTEM = {
    0: "IMAGE_SUBSYSTEM_UNKNOWN",
    1: "IMAGE_SUBSYSTEM_NATIVE",
    2: "IMAGE_SUBSYSTEM_WINDOWS_GUI",
    3: "IMAGE_SUBSYSTEM_WINDOWS_CUI",
    5: "IMAGE_SUBSYSTEM_OS2_CUI",
    7: "IMAGE_SUBSYSTEM_POSIX_CUI",
    8: "IMAGE_SUBSYSTEM_NATIVE_WINDOWS",
    9: "IMAGE_SUBSYSTEM_WINDOWS_CE_GUI",
    10: "IMAGE_SUBSYSTEM_EFI_APPLICATION",
    11: "IMAGE_SUBSYSTEM_EFI_BOOT_SERVICE_DRIVER",
    12: "IMAGE_SUBSYSTEM_EFI_RUNTIME_DRIVER",
    13: "IMAGE_SUBSYSTEM_EFI_ROM",
    14: "IMAGE_SUBSYSTEM_XBOX",
    16: "IMAGE_SUBSYSTEM_WINDOWS_BOOT_APPLICATION",
}

# IMAGE_DLLCHARACTERISTICS_* — the guards/features that matter for compatibility
DLL_CHARACTERISTICS = [
    (0x0020, "HIGH_ENTROPY_VA"),
    (0x0040, "DYNAMIC_BASE", "ASLR"),
    (0x0080, "FORCE_INTEGRITY"),
    (0x0100, "NX_COMPAT", "DEP"),
    (0x0200, "NO_ISOLATION"),
    (0x0400, "NO_SEH"),
    (0x0800, "NO_BIND"),
    (0x1000, "APPCONTAINER"),
    (0x2000, "WDM_DRIVER"),
    (0x4000, "GUARD_CF"),
    (0x8000, "TERMINAL_SERVER_AWARE"),
]

SECTION_CHARACTERISTICS = [
    (0x00000008, "TYPE_NO_PAD"),
    (0x00000020, "CNT_CODE"),
    (0x00000040, "CNT_INITIALIZED_DATA"),
    (0x00000080, "CNT_UNINITIALIZED_DATA"),
    (0x00000200, "LNK_INFO"),
    (0x00000800, "LNK_REMOVE"),
    (0x00001000, "LNK_COMDAT"),
    (0x00008000, "GPREL"),
    (0x00020000, "MEM_PURGEABLE"),
    (0x00040000, "MEM_LOCKED"),
    (0x00080000, "MEM_PRELOAD"),
    (0x01000000, "LNK_NRELOC_OVFL"),
    (0x02000000, "MEM_DISCARDABLE"),
    (0x04000000, "MEM_NOT_CACHED"),
    (0x08000000, "MEM_NOT_PAGED"),
    (0x10000000, "MEM_SHARED"),
    (0x20000000, "MEM_EXECUTE"),
    (0x40000000, "MEM_READ"),
    (0x80000000, "MEM_WRITE"),
]

DATA_DIRECTORY_NAMES = [
    "EXPORT",
    "IMPORT",
    "RESOURCE",
    "EXCEPTION",
    "SECURITY",
    "BASERELOC",
    "DEBUG",
    "ARCHITECTURE",
    "GLOBALPTR",
    "TLS",
    "LOAD_CONFIG",
    "BOUND_IMPORT",
    "IAT",
    "DELAY_IMPORT",
    "COM_DESCRIPTOR",
    "RESERVED",
]

# RT_* resource types (numeric kinds) — names for kinds that Windows defines.
RT_TYPES = {
    1: "RT_CURSOR",
    2: "RT_BITMAP",
    3: "RT_ICON",
    4: "RT_MENU",
    5: "RT_DIALOG",
    6: "RT_STRING",
    7: "RT_FONTDIR",
    8: "RT_FONT",
    9: "RT_ACCELERATOR",
    10: "RT_RCDATA",
    11: "RT_MESSAGETABLE",
    12: "RT_GROUP_CURSOR",
    14: "RT_GROUP_ICON",
    16: "RT_VERSION",
    17: "RT_DLGINCLUDE",
    19: "RT_PLUGPLAY",
    20: "RT_VXD",
    21: "RT_ANICURSOR",
    22: "RT_ANIICON",
    23: "RT_HTML",
    24: "RT_MANIFEST",
}

# Windows resource languages that matter for this project (MUI payloads).
LANG_NAMES = {
    0x0409: "en-US",
    0x0416: "pt-BR",
    0x0000: "LANG_NEUTRAL",
}


# ---------------------------------------------------------------------------
# Hashing / file helpers
# ---------------------------------------------------------------------------


def hash_file(path: str, chunk: int = 1 << 20) -> dict[str, str]:
    """Return sha256/sha1/md5 and byte length for *path* (read-only)."""
    h256, h1, md5 = hashlib.sha256(), hashlib.sha1(), hashlib.md5()
    size = 0
    with open(path, "rb") as fh:
        while True:
            block = fh.read(chunk)
            if not block:
                break
            size += len(block)
            h256.update(block)
            h1.update(block)
            md5.update(block)
    return {
        "sha256": h256.hexdigest(),
        "sha1": h1.hexdigest(),
        "md5": md5.hexdigest(),
        "bytes": size,
    }


def read_head(path: str, n: int = 4096) -> bytes:
    with open(path, "rb") as fh:
        return fh.read(n)


def detect_format(data: bytes, path: str = "") -> str:
    """Signature-based container/format detection (independent of extension)."""
    if data[:2] == b"MZ":
        try:
            off = struct.unpack_from("<I", data, 0x3C)[0]
            if data[off : off + 4] == b"PE\0\0":
                return "pe"
        except struct.error:
            pass
        return "dos-mz"
    if data[:4] in (b"PK\x03\x04", b"PK\x05\x06", b"PK\x07\x08"):
        return "zip"
    if data[:8] == b"\x89PNG\r\n\x1a\n":
        return "png"
    if data[:3] == b"\xff\xd8\xff":
        return "jpeg"
    if data[:2] == b"BM":
        return "bmp"
    if data[:6] == b"GIF87a" or data[:6] == b"GIF89a":
        return "gif"
    if data[:4] == b"\x7fELF":
        return "elf"
    stripped = data.lstrip()[:5].lower()
    if stripped.startswith(b"<?xml"):
        return "xml"
    if path.lower().endswith(".xml"):
        return "xml"
    return "unknown"


def shannon_entropy(data: bytes) -> float:
    """Shannon entropy in bits/byte (0.0–8.0).  Heuristic input only."""
    if not data:
        return 0.0
    counts = Counter(data)
    n = len(data)
    return -sum((c / n) * math.log2(c / n) for c in counts.values())


def find_signatures(data: bytes, needles: Iterable[bytes]) -> list[int]:
    """All offsets of each needle in *data* (used for embedded-file detection)."""
    hits: list[int] = []
    for needle in needles:
        start = 0
        while True:
            idx = data.find(needle, start)
            if idx < 0:
                break
            hits.append(idx)
            start = idx + 1
    return sorted(hits)


# ---------------------------------------------------------------------------
# PE parsing helpers (raw struct + optional pefile cross-check)
# ---------------------------------------------------------------------------


@dataclass
class SectionInfo:
    name: str
    virtual_address: int
    virtual_size: int
    raw_pointer: int
    raw_size: int
    characteristics: int
    entropy: float = 0.0
    md5: str = ""
    sha256: str = ""

    @property
    def flags(self) -> list[str]:
        out = []
        for bit, label, *alias in SECTION_CHARACTERISTICS:
            if self.characteristics & bit:
                out.append(alias[0] if alias else label)
        return out

    def contains_rva(self, rva: int) -> bool:
        return self.virtual_address <= rva < self.virtual_address + max(self.virtual_size, 1)


@dataclass
class PeInfo:
    path: str
    rel_path: str
    slug: str
    size: int
    hashes: dict[str, str]
    machine: int
    machine_name: str
    is_64bit: bool
    pe_offset: int
    linker: str
    timestamp: int
    subsystem: int
    subsystem_name: str
    characteristics: int
    dll_characteristics: int
    dll_features: list[str]
    image_base: int
    entry_point_rva: int
    entry_point_va: int
    os_version: tuple[int, int]
    image_version: tuple[int, int]
    subsystem_version: tuple[int, int]
    checksum: int
    computed_checksum: int | None
    sections: list[SectionInfo] = field(default_factory=list)
    directories: list[dict[str, Any]] = field(default_factory=list)
    imports: list[dict[str, Any]] = field(default_factory=list)
    delay_imports: list[dict[str, Any]] = field(default_factory=list)
    exports: list[dict[str, Any]] = field(default_factory=list)
    resources: list[dict[str, Any]] = field(default_factory=list)
    overlay: dict[str, Any] = field(default_factory=dict)
    rich_header: dict[str, Any] = field(default_factory=dict)
    debug: list[dict[str, Any]] = field(default_factory=list)
    has_clr: bool = False
    has_tls: bool = False
    authenticode: dict[str, Any] = field(default_factory=dict)
    embedded_pe_offsets: list[int] = field(default_factory=list)
    entry_section: str = ""
    heuristic_flags: list[str] = field(default_factory=list)
    parse_errors: list[str] = field(default_factory=list)

    def as_dict(self) -> dict[str, Any]:
        d = dict(self.__dict__)
        d["sections"] = [s.__dict__ | {"flags": s.flags} for s in self.sections]
        return d


def slugify(name: str) -> str:
    """Filesystem/report-safe slug for a module or artifact name."""
    base = os.path.basename(name).lower()
    out = []
    for ch in base:
        if ch.isalnum():
            out.append(ch)
        elif ch in ("-", "_", "."):
            out.append("_" if ch == "." else ch)
    slug = "".join(out).strip("_")
    while "__" in slug:
        slug = slug.replace("__", "_")
    return slug


def _decode_section_name(raw: bytes) -> str:
    if raw.startswith(b"/"):
        # long-name reference into the COFF string table — retained verbatim
        return raw.decode("latin-1").strip("\x00")
    return raw.split(b"\x00", 1)[0].decode("latin-1")


def parse_pe(path: str, rel_path: str | None = None, do_hash: bool = True) -> PeInfo:
    """Parse one PE32/PE32+ image into a :class:`PeInfo` record.

    Implemented with hand-rolled struct parsing (primary, independent of
    third-party parsers); :mod:`pefile` is used by callers that need richer
    directory decoding (imports, resources).  Raises ``ValueError`` when the
    file is not a PE image.
    """
    rel_path = rel_path or os.path.basename(path)
    with open(path, "rb") as fh:
        data = fh.read()
    if data[:2] != b"MZ":
        raise ValueError("not an MZ image")
    pe_off = struct.unpack_from("<I", data, 0x3C)[0]
    if data[pe_off : pe_off + 4] != b"PE\0\0":
        raise ValueError("MZ image without PE signature")
    (machine, nsec, timestamp, _, _, opt_size, characteristics) = struct.unpack_from(
        "<HHIIIHH", data, pe_off + 4
    )
    opt_off = pe_off + 24
    magic = struct.unpack_from("<H", data, opt_off)[0]
    is64 = magic == 0x20B
    if magic not in (0x10B, 0x20B):
        raise ValueError(f"unexpected optional header magic 0x{magic:x}")
    (linker_major, linker_minor) = struct.unpack_from("<BB", data, opt_off + 2)
    (os_major, os_minor, img_major, img_minor, subsys_major, subsys_minor) = struct.unpack_from(
        "<HHHHHH", data, opt_off + 40
    )
    checksum = struct.unpack_from("<I", data, opt_off + 64)[0]
    subsystem = struct.unpack_from("<H", data, opt_off + 68)[0]
    dll_chars = struct.unpack_from("<H", data, opt_off + 70)[0]
    if is64:
        image_base = struct.unpack_from("<Q", data, opt_off + 24)[0]
        entry = struct.unpack_from("<I", data, opt_off + 16)[0]
        stack_reserve, stack_commit, heap_reserve, heap_commit = struct.unpack_from(
            "<QQQQ", data, opt_off + 72
        )
    else:
        image_base = struct.unpack_from("<I", data, opt_off + 28)[0]
        entry = struct.unpack_from("<I", data, opt_off + 16)[0]
        stack_reserve, stack_commit, heap_reserve, heap_commit = struct.unpack_from(
            "<IIII", data, opt_off + 72
        )
    ndirs = struct.unpack_from("<I", data, opt_off + (108 if is64 else 92))[0]
    dirs_off = opt_off + (112 if is64 else 96)

    sec_off = opt_off + opt_size
    sections: list[SectionInfo] = []
    for i in range(nsec):
        base = sec_off + i * 40
        raw = data[base : base + 8]
        (vsize, vaddr, rawsize, rawptr) = struct.unpack_from("<IIII", data, base + 8)
        schars = struct.unpack_from("<I", data, base + 36)[0]
        sec_bytes = data[rawptr : rawptr + rawsize] if rawsize else b""
        sections.append(
            SectionInfo(
                name=_decode_section_name(raw),
                virtual_address=vaddr,
                virtual_size=vsize,
                raw_pointer=rawptr,
                raw_size=rawsize,
                characteristics=schars,
                entropy=round(shannon_entropy(sec_bytes), 4),
                md5=hashlib.md5(sec_bytes).hexdigest(),
                sha256=hashlib.sha256(sec_bytes).hexdigest(),
            )
        )

    directories = []
    for i in range(min(ndirs, 16)):
        rva, size = struct.unpack_from("<II", data, dirs_off + i * 8)
        directories.append(
            {
                "index": i,
                "name": DATA_DIRECTORY_NAMES[i] if i < len(DATA_DIRECTORY_NAMES) else f"DIR{i}",
                "rva": rva,
                "size": size,
                "present": bool(rva and size),
            }
        )

    last_end = max((s.raw_pointer + s.raw_size for s in sections), default=0)
    overlay_bytes = data[last_end:] if last_end < len(data) else b""

    info = PeInfo(
        path=os.path.abspath(path),
        rel_path=rel_path,
        slug=slugify(rel_path),
        size=len(data),
        hashes=hash_file(path) if do_hash else {},
        machine=machine,
        machine_name=IMAGE_FILE_MACHINE.get(machine, f"0x{machine:04x}"),
        is_64bit=is64,
        pe_offset=pe_off,
        linker=f"{linker_major}.{linker_minor}",
        timestamp=timestamp,
        subsystem=subsystem,
        subsystem_name=SUBSYSTEM.get(subsystem, f"0x{subsystem:x}"),
        characteristics=characteristics,
        dll_characteristics=dll_chars,
        dll_features=[alias[0] if alias else label for bit, label, *alias in DLL_CHARACTERISTICS if dll_chars & bit],
        image_base=image_base,
        entry_point_rva=entry,
        entry_point_va=image_base + entry,
        os_version=(os_major, os_minor),
        image_version=(img_major, img_minor),
        subsystem_version=(subsys_major, subsys_minor),
        checksum=checksum,
        computed_checksum=None,
        sections=sections,
        directories=directories,
        overlay={
            "offset": last_end,
            "size": len(overlay_bytes),
            "sha256": hashlib.sha256(overlay_bytes).hexdigest() if overlay_bytes else None,
            "entropy": round(shannon_entropy(overlay_bytes), 4) if overlay_bytes else 0.0,
            "signature": detect_format(overlay_bytes) if overlay_bytes else None,
        },
        has_clr=any(d["name"] == "COM_DESCRIPTOR" and d["present"] for d in directories[:15]),
        has_tls=any(d["name"] == "TLS" and d["present"] for d in directories),
    )
    for s in sections:
        if s.contains_rva(entry):
            info.entry_section = s.name
            break
    # Embedded PE detection: MZ+PE signature pairs beyond file offset 0.
    for off in find_signatures(data, [b"MZ"]):
        if off < 2:
            continue
        try:
            sub = struct.unpack_from("<I", data, off + 0x3C)[0]
        except struct.error:
            continue
        if 0 < sub < len(data) and data[off + sub : off + sub + 4] == b"PE\0\0":
            info.embedded_pe_offsets.append(off)
    if overlay_bytes:
        info.heuristic_flags.append("overlay-data")
        if info.overlay["signature"] == "zip":
            info.heuristic_flags.append("overlay-zip")
    for s in sections:
        if s.entropy > 7.2 and any(f in s.flags for f in ("MEM_EXECUTE", "CNT_CODE")):
            info.heuristic_flags.append(f"high-entropy-code-section:{s.name}")
        if "MEM_WRITE" in s.flags and "MEM_EXECUTE" in s.flags:
            info.heuristic_flags.append(f"writable-executable-section:{s.name}")
    return info


# ---------------------------------------------------------------------------
# pefile-backed enrichment (imports / exports / resources / rich header)
# ---------------------------------------------------------------------------


def _rva_to_offset(sections: list[SectionInfo], rva: int) -> int | None:
    for s in sections:
        if s.contains_rva(rva):
            return s.raw_pointer + (rva - s.virtual_address)
    return None


def _decoded(pe, value) -> str | None:
    """Best-effort decode of a pefile string field.

    pefile hands back ``bytes`` for decoded names, ``str`` when it already
    resolved them, or an ``int`` RVA when the payload was not dereferenced.
    None is preserved as None so callers can distinguish "absent" from "empty".
    """
    if value is None:
        return None
    if isinstance(value, bytes):
        return value.split(b"\x00", 1)[0].decode("latin-1")
    if isinstance(value, str):
        return value
    if isinstance(value, int):
        try:
            text = pe.get_string_at_rva(value & 0xFFFFFFFF)
        except Exception:  # noqa: BLE001
            text = None
        return text.decode("latin-1", "replace") if isinstance(text, bytes) else (text or f"<unresolved rva 0x{value:x}>")
    return str(value)


def enrich_with_pefile(info: PeInfo) -> None:
    """Populate imports/exports/resources/debug/rich-header using ``pefile``.

    Records failures in ``info.parse_errors`` instead of raising, so a single
    malformed directory never aborts a batch run.
    """
    try:
        import pefile  # local import: pefile is an optional dependency
    except ImportError:  # pragma: no cover
        info.parse_errors.append("pefile-unavailable")
        return
    try:
        pe = pefile.PE(info.path, fast_load=False)
    except Exception as exc:  # noqa: BLE001 - recorded, never fatal
        info.parse_errors.append(f"pefile-load-failed:{type(exc).__name__}")
        return
    try:
        if hasattr(pe, "DIRECTORY_ENTRY_IMPORT"):
            for entry in pe.DIRECTORY_ENTRY_IMPORT:
                funcs = []
                for imp in entry.imports:
                    funcs.append(
                        {
                            "name": _decoded(pe, imp.name),
                            "ordinal": imp.ordinal if not imp.name else None,
                            "iat_rva": imp.address - info.image_base
                            if imp.address and imp.address > info.image_base
                            else None,
                        }
                    )
                info.imports.append(
                    {
                        "dll": _decoded(pe, entry.dll),
                        "count": len(funcs),
                        "functions": funcs,
                        "timestamp": getattr(entry.struct, "TimeDateStamp", None),
                    }
                )
        if hasattr(pe, "DIRECTORY_ENTRY_DELAY_IMPORT"):
            for entry in pe.DIRECTORY_ENTRY_DELAY_IMPORT:
                info.delay_imports.append(
                    {
                        "dll": _decoded(pe, entry.dll),
                        "count": len(entry.imports),
                        "functions": [
                            {
                                "name": _decoded(pe, imp.name),
                                "ordinal": imp.ordinal if not imp.name else None,
                            }
                            for imp in entry.imports
                        ],
                    }
                )
        if hasattr(pe, "DIRECTORY_ENTRY_EXPORT") and pe.DIRECTORY_ENTRY_EXPORT:
            exp = pe.DIRECTORY_ENTRY_EXPORT.struct
            info.exports.append(
                {
                    "dll_name": _decoded(pe, exp.Name),
                    "ordinal_base": exp.Base,
                    "count": exp.NumberOfFunctions,
                    "named": exp.NumberOfNames,
                }
            )
            for sym in pe.DIRECTORY_ENTRY_EXPORT.symbols:
                info.exports.append(
                    {
                        "ordinal": sym.ordinal,
                        "name": _decoded(pe, sym.name),
                        "forwarder": _decoded(pe, sym.forwarder),
                        "rva": sym.address,
                    }
                )
        if hasattr(pe, "DIRECTORY_ENTRY_DEBUG"):
            for dbg in pe.DIRECTORY_ENTRY_DEBUG:
                rec = {"type": dbg.struct.Type, "size": dbg.struct.SizeOfData}
                if dbg.entry is not None and hasattr(dbg.entry, "PdbFileName"):
                    rec["pdb"] = _decoded(pe, dbg.entry.PdbFileName)
                    rec["pdb_guid"] = getattr(dbg.entry, "Signature_Data1", None)
                    rec["age"] = getattr(dbg.entry, "Age", None)
                    sig_str = getattr(dbg.entry, "Signature_String", None)
                    if isinstance(sig_str, str) and len(sig_str) >= 32:
                        rec["pdb_guid_str"] = (
                            f"{sig_str[:8]}-{sig_str[8:12]}-{sig_str[12:16]}-"
                            f"{sig_str[16:20]}-{sig_str[20:32]}"
                        ).lower()
                        rec["pdb_sym_id"] = sig_str
                info.debug.append(rec)
        if hasattr(pe, "RICH_HEADER") and pe.RICH_HEADER is not None:
            # pefile exposes RICH values as a flat [id, count, id, count, ...] list
            # (some releases wrap each pair).  Normalise both shapes.
            raw_values = list(getattr(pe.RICH_HEADER, "values", []) or [])
            values = []
            for item in raw_values:
                if isinstance(item, (tuple, list)) and len(item) >= 2:
                    values.append({"id": item[0], "count": item[1]})
                else:
                    values.append(item)
            if values and not isinstance(values[0], dict):
                flat = [v for v in values if isinstance(v, int)]
                values = [{"id": flat[i], "count": flat[i + 1]} for i in range(0, len(flat) - 1, 2)]
            info.rich_header = {
                "checksum": getattr(pe.RICH_HEADER, "checksum", None),
                "checksum_xor_key": getattr(pe.RICH_HEADER, "xor_key", None),
                "values": values,
            }
        sec = info.directories[4]
        if sec["present"]:
            info.authenticode = {
                "rva": sec["rva"],
                "size": sec["size"],
                "file_offset": _rva_to_offset(info.sections, sec["rva"]),
                "note": "WIN_CERTIFICATE table (Authenticode). Payload not redistributed.",
            }
        try:
            info.computed_checksum = pe.generate_checksum()
        except Exception:  # noqa: BLE001
            info.computed_checksum = None
        # Resource tree summary (types/sizes only; deep decoding lives in resources.py)
        if hasattr(pe, "DIRECTORY_ENTRY_RESOURCE"):
            for t in pe.DIRECTORY_ENTRY_RESOURCE.entries:
                if t.name is not None:
                    # pefile decodes resource names to str in current releases;
                    # older/partially decoded entries stay bytes.
                    nm = t.name.string
                    type_name = nm if isinstance(nm, str) else nm.decode("utf-16le", "replace")
                else:
                    type_name = RT_TYPES.get(t.id, f"RT_{t.id}")
                names = 0
                langs = set()
                total = 0
                for n in getattr(t, "directory", t).entries:
                    names += 1
                    for l in getattr(n, "directory", n).entries:
                        langs.add(l.id)
                        total += l.data.struct.Size if l.data else 0
                info.resources.append(
                    {"type": type_name, "id": t.id, "entries": names, "languages": sorted(langs), "bytes": total}
                )
        info.heuristic_flags += _packer_heuristics(pe, info)
    finally:
        pe.close()


def _packer_heuristics(pe, info: PeInfo) -> list[str]:
    """Conservative, clearly-heuristic packer/protector indicators."""
    flags: list[str] = []
    import_count = sum(i["count"] for i in info.imports)
    if import_count == 0:
        flags.append("no-import-table")
    elif import_count <= 8:
        flags.append(f"minimal-imports({import_count})")
    if info.entry_section and info.entry_section not in (".text", "CODE"):
        flags.append(f"entry-in-{info.entry_section}")
    try:
        for sec in pe.sections:
            name = sec.Name.split(b"\x00", 1)[0].decode("latin-1")
            if not name.startswith(".") and name not in ("CODE", "DATA", "BSS"):
                flags.append(f"nonstandard-section:{name}")
    except Exception:  # noqa: BLE001
        pass
    return flags


def summarize_dependencies(infos: list[PeInfo]) -> dict[str, Any]:
    """Build the module→module and module→system-DLL dependency model."""
    by_name: dict[str, PeInfo] = {}
    for i in infos:
        by_name[os.path.basename(i.rel_path).lower()] = i
    edges = []
    external = {}
    for i in infos:
        for imp in i.imports:
            dll = imp["dll"]
            low = dll.lower()
            local = by_name.get(low)
            if low == os.path.basename(i.rel_path).lower():
                continue
            if local is not None:
                edges.append({"from": i.rel_path, "to": local.rel_path, "dll": dll, "functions": imp["count"]})
            else:
                external.setdefault(dll, {"importers": [], "functions": 0})
                external[dll]["importers"].append(i.rel_path)
                external[dll]["functions"] += imp["count"]
    for dll, rec in external.items():
        rec["importers"] = sorted(set(rec["importers"]))
    return {"internal_edges": edges, "external_dlls": dict(sorted(external.items()))}


def iter_pe_files(root: str) -> Iterator[tuple[str, str]]:
    """Yield ``(absolute_path, relative_path)`` for every PE image under *root*."""
    for dirpath, _dirs, files in os.walk(root):
        for fname in sorted(files):
            path = os.path.join(dirpath, fname)
            try:
                head = read_head(path, 0x40)
            except OSError:
                continue
            if head[:2] == b"MZ":
                yield os.path.abspath(path), os.path.relpath(path, root)
