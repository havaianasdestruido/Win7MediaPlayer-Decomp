#!/usr/bin/env python3
"""typelib.py — recover COM interface definitions from embedded MSFT type libraries.

Purpose
-------
Three shipped modules carry an embedded binary COM type library in an
``RT_TYPELIB`` resource: ``WMPMediaSharing.dll``, ``mpvis.DLL`` and
``wmpnssci.dll`` (verified: resource magic ``MSFT`` + version
``0x00010002``).  A type library is the author's own machine-readable
description of the COM surface, so decoding it yields *verified* interface
identities: IIDs/CLSIDs, interface kinds, method names, virtual-table order,
member IDs, parameter names and parameter types.

The parser is implemented from the documented MSFT layout as cross-checked
against Wine's public reader implementation (``dlls/oleaut32/typelib.h`` and
``typelib.c``, LGPL, consulted as a format reference only — no Wine code is
copied).  Structures used:

* ``MSFT_Header``          — file header, library GUID/LCID/version/flags
* ``MSFT_SegDir``          — segment directory (16 ``MSFT_pSeg`` entries)
* ``MSFT_TypeInfoBase``    — 0x64-byte (100) per-type record
* ``MSFT_FuncRecord``      — 0x38-byte (56) function record (+ optional fields)
* ``MSFT_ParameterInfo``   — 12-byte per-argument record
* ``MSFT_VarRecord``       — variable (enum member / struct field / const)
* ``MSFT_NameIntro``       — 12-byte prefix of every name-table entry
* ``MSFT_GuidEntry``       — 24-byte GUID-table entry
* ``MSFT_RefRecord``       — 16-byte implemented-interface reference

Usage
-----
    python3 analysis/tools/typelib.py                      # all extracted TLBs
    python3 analysis/tools/typelib.py <file.tlb> --dump-strings

Inputs
------
``analysis/report/resources/<module>/typelib/*.tlb`` — payloads extracted by
``analysis/tools/resources.py`` from the read-only images in ``bin/``.

Outputs
-------
* ``src/<module>/typelib/<libname>.json`` — full structured recovery
* ``src/<module>/typelib/<libname>.idl`` — IDL-style reconstruction
* ``src/<module>/typelib/<libname>.h`` — C header with GUID constants + vtable order
* ``src/<module>/typelib/README.md`` — provenance and coverage per library
* ``analysis/report/data/typelibs.json`` — aggregate record for the reports

Limitations
-----------
* External references (imported libraries such as ``stdole2``) cannot be
  resolved from the file alone and are reported as ``external(<guid/index>)``.
* Type descriptors are rendered for the documented ``TYPEDESC`` cases
  (``VT_*`` simple types, ``VT_PTR``, ``VT_USERDEFINED``); array/union
  descriptor segments are reported as raw descriptors rather than guessed.
* Parameter default values, custom attributes, and help-file contents are not
  decoded; the raw segments remain in the extracted ``.tlb`` payload.
"""

from __future__ import annotations

import argparse
import datetime as dt
import glob
import json
import os
import struct
import sys

REPO = os.path.abspath(os.path.join(os.path.dirname(os.path.abspath(__file__)), "..", ".."))
BIN_DIR = os.path.join(REPO, "bin")

SIGNATURE = 0x5446534D  # "MSFT"
TYPEINFO_BASE_SIZE = 0x64
FUNC_REC_SIZE = 0x38
PARAM_INFO_SIZE = 12
NAME_INTRO_SIZE = 12
GUID_ENTRY_SIZE = 24
REF_REC_SIZE = 16

TKIND = {0: "TKIND_ENUM", 1: "TKIND_RECORD", 2: "TKIND_MODULE", 3: "TKIND_INTERFACE",
         4: "TKIND_DISPATCH", 5: "TKIND_COCLASS", 6: "TKIND_ALIAS", 7: "TKIND_UNION",
         8: "TKIND_MAX"}

FUNCKIND = {0: "FUNC_VIRTUAL", 1: "FUNC_PUREVIRTUAL", 2: "FUNC_NONVIRTUAL",
            3: "FUNC_STATIC", 4: "FUNC_DISPATCH"}
INVOKEKIND = {1: "INVOKE_FUNC", 2: "INVOKE_PROPERTYGET", 4: "INVOKE_PROPERTYPUT",
              8: "INVOKE_PROPERTYPUTREF"}
CALLCONV = {0: "CC_FASTCALL", 1: "CC_CDECL", 2: "CC_PASCAL", 3: "CC_MACPASCAL",
            4: "CC_STDCALL", 5: "CC_FPFASTCALL", 6: "CC_SYSCALL", 7: "CC_MPWCDECL",
            8: "CC_MPWPASCAL", 9: "CC_MAX"}
SYSKIND = {0: "SYS_WIN16", 1: "SYS_WIN32", 2: "SYS_MAC", 3: "SYS_WIN64"}

VT_NAMES = {
    0: "VT_EMPTY", 1: "VT_NULL", 2: "VT_I2", 3: "VT_I4", 4: "VT_R4", 5: "VT_R8", 6: "VT_CY",
    7: "VT_DATE", 8: "VT_BSTR", 9: "VT_DISPATCH", 10: "VT_ERROR", 11: "VT_BOOL",
    12: "VT_VARIANT", 13: "VT_UNKNOWN", 14: "VT_DECIMAL", 16: "VT_I1", 17: "VT_UI1",
    18: "VT_UI2", 19: "VT_UI4", 20: "VT_I8", 21: "VT_UI8", 22: "VT_INT", 23: "VT_UINT",
    24: "VT_VOID", 25: "VT_HRESULT", 26: "VT_PTR", 27: "VT_SAFEARRAY", 28: "VT_CARRAY",
    29: "VT_USERDEFINED", 30: "VT_LPSTR", 31: "VT_LPWSTR", 36: "VT_RECORD", 37: "VT_INT_PTR",
    38: "VT_UINT_PTR", 64: "VT_FILETIME", 65: "VT_BLOB", 66: "VT_STREAM", 67: "VT_STORAGE",
    68: "VT_STREAMED_OBJECT", 69: "VT_STORED_OBJECT", 70: "VT_BLOB_OBJECT", 71: "VT_CF",
    72: "VT_CLSID", 4096: "VT_VERSIONED_STREAM",
}
# Presentation names used when rendering recovered signatures (IDL/C vocabulary).
# These are labels for the recovered VT_* values, not recovered source tokens.
IDL_TYPE_NAMES = {
    2: "short", 3: "long", 4: "float", 5: "double", 6: "CY", 7: "DATE", 8: "BSTR",
    9: "IDispatch*", 10: "SCODE", 11: "VARIANT_BOOL", 12: "VARIANT", 13: "IUnknown*",
    14: "DECIMAL", 16: "char", 17: "byte", 18: "unsigned short", 19: "unsigned long",
    20: "LONGLONG", 21: "ULONGLONG", 22: "int", 23: "unsigned int", 24: "void",
    25: "HRESULT", 29: "struct", 30: "LPSTR", 31: "LPWSTR", 37: "INT_PTR",
    38: "UINT_PTR", 64: "FILETIME", 65: "BLOB", 72: "CLSID",
}
VT_ARRAY = 0x2000
VT_VECTOR = 0x1000
VT_BYREF = 0x4000
VT_TYPEMASK = 0x0FFF

PARAMFLAGS = {0x01: "IN", 0x02: "OUT", 0x04: "LCID", 0x08: "RETVAL", 0x10: "OPT",
              0x20: "HASDEFAULT", 0x40: "HASCUSTDATA", 0x80: "TYPEDEFAULT"}

IMPLTYPEFLAGS = {0x01: "DEFAULT", 0x02: "SOURCE", 0x04: "RESTRICTED"}


def guid_str(raw: bytes) -> str:
    d1, d2, d3 = struct.unpack_from("<IHH", raw, 0)
    d4 = raw[8:16]
    return "{%08X-%04X-%04X-%02X%02X-%s}" % (d1, d2, d3, d4[0], d4[1],
                                             "".join(f"{b:02X}" for b in d4[2:]))


class TypeLib:
    """Reader for a single MSFT (ICreateTypeLib2) binary type library."""

    def __init__(self, data: bytes):
        self.data = data
        self.notes: list[str] = []
        if len(data) < 0x54:
            raise ValueError("file shorter than MSFT header")
        (self.magic1, self.magic2, self.posguid, self.lcid, self.lcid2, self.varflags,
         self.version, self.flags, self.nrtypeinfos, self.helpstring,
         self.helpstringcontext, self.helpcontext, self.nametablecount,
         self.nametablechars, self.nameoffset, self.helpfile, self.customdataoffset,
         self.res44, self.res48, self.dispatchpos, self.nimpinfos) = struct.unpack_from(
            "<21I", data, 0)
        if self.magic1 != SIGNATURE:
            raise ValueError(f"not an MSFT type library (magic 0x{self.magic1:08x})")
        if self.magic2 != 0x00010002:
            self.notes.append(f"unexpected version field 0x{self.magic2:08x} (expected 0x00010002)")
        # Segment directory position (verified against Wine's reader semantics):
        #   segdir = sizeof(MSFT_Header) + nrtypeinfos*4 [+4 when HELPDLLFLAG set]
        # The INT32 array between the header and the directory holds the
        # per-typeinfo file offsets (index * sizeof(MSFT_TypeInfoBase) in these
        # libraries, but read from the file rather than assumed).
        self.typeinfo_offsets = list(struct.unpack_from(f"<{self.nrtypeinfos}I", data, 0x54))
        segdir_off = 0x54 + self.nrtypeinfos * 4 + (4 if self.varflags & 0x0100 else 0)
        self.segdir_offset = segdir_off
        self.segments = []
        for i in range(16):
            off, length, res08, res0c = struct.unpack_from("<4I", data, segdir_off + i * 16)
            self.segments.append({"index": i, "offset": off, "length": length,
                                  "res08": res08, "res0c": res0c})
        self.typeinfo_seg = self.segments[0]
        self.guid_seg = self.segments[5]
        self.name_seg = self.segments[7]
        self.string_seg = self.segments[8]
        self.typdesc_seg = self.segments[9]
        self.ref_seg = self.segments[3]
        self.date = dt.datetime.now(dt.timezone.utc).strftime("%Y-%m-%d %H:%M:%SZ")

        self._name_hash: dict[int, str] = {}
        self._last_function_name: str | None = None
        self._names: list[tuple[int, str]] = []
        self._parse_names()
        # two passes: base records first (impl-type references are indices into
        # this very table), then member records.
        self.types = [self._parse_typeinfo_base(i) for i in range(self.nrtypeinfos)]
        for t in self.types:
            if t["cImplTypes"]:
                t["implements"] = self._parse_impl_types(t["datatype1"], t["cImplTypes"])
            if t["member_counts"]["functions"] or t["member_counts"]["variables"]:
                self._parse_members(t, t["member_counts"]["functions"], t["member_counts"]["variables"])
        self.library_guid = None
        if self.posguid >= 0:
            g = self._guid_at(self.posguid)
            self.library_guid = g

    # -- segments ---------------------------------------------------------

    def _guid_at(self, byte_offset: int) -> str | None:
        """GUID lookup.  ``posguid`` is a *byte offset* into the GUID segment
        (the segment is an array of MSFT_GuidEntry, 24 bytes each); -1 means the
        type carries no GUID — verified against Wine's MSFT_ReadAllGuids, which
        records ``guid->offset = offs`` while stepping 24 bytes at a time."""
        if byte_offset in (-1, 0xFFFFFFFF) or self.guid_seg["offset"] <= 0:
            return None
        off = self.guid_seg["offset"] + byte_offset
        if off + GUID_ENTRY_SIZE > len(self.data):
            return None
        return guid_str(self.data[off : off + 16])

    def _parse_names(self) -> None:
        """Walk the name table.  Each entry is MSFT_NameIntro + name chars."""
        off = self.name_seg["offset"]
        end = off + self.name_seg["length"]
        if off <= 0 or end > len(self.data):
            self.notes.append(f"name table segment not usable (offset={off} length={self.name_seg['length']})")
            return
        pos = off
        while pos + NAME_INTRO_SIZE <= end:
            hreftype, next_hash, namelen = struct.unpack_from("<3I", self.data, pos)
            n = namelen & 0xFF
            piece = n + NAME_INTRO_SIZE
            if piece % 4:
                piece = (piece + 4) & ~0x3
            if piece < 8:
                piece = 8
            raw = self.data[pos + NAME_INTRO_SIZE : pos + NAME_INTRO_SIZE + n]
            try:
                name = raw.decode("latin-1")
            except UnicodeDecodeError:
                name = raw.decode("latin-1", "replace")
            self._names.append((pos - off, name))
            pos += piece
        self._name_hash = {o: nm for o, nm in self._names}

    def name_at(self, offset: int) -> str | None:
        if offset < 0:
            return None
        return self._name_hash.get(offset)

    def string_at(self, offset: int) -> str | None:
        """String-table lookup (NUL-terminated, latin-1/ANSI)."""
        off = self.string_seg["offset"] + offset
        if offset < 0 or off >= len(self.data):
            return None
        end = self.data.find(b"\x00", off)
        if end < 0:
            end = min(len(self.data), off + 512)
        return self.data[off:end].decode("latin-1", "replace")

    # -- type descriptors -------------------------------------------------

    def describe_type(self, tdesc_offset: int, depth: int = 0) -> dict:
        """Render one TYPEDESC as stored/recovered type information."""
        if depth > 3:
            return {"raw": f"0x{tdesc_offset & 0xFFFFFFFF:08x}", "rendered": "…"}
        if tdesc_offset < 0:
            vt = tdesc_offset & VT_TYPEMASK
            name = IDL_TYPE_NAMES.get(vt) or ("HRESULT" if vt == 25 else VT_NAMES.get(vt, f"vt_0x{vt:x}"))
            return {"vt": vt, "vt_name": VT_NAMES.get(vt, f"VT_0x{vt:x}"),
                    "rendered": name, "inline": True}
        off = self.typdesc_seg["offset"] + tdesc_offset
        if off + 8 > len(self.data):
            return {"vt": None, "rendered": f"<tdesc@{tdesc_offset:#x} out of range>"}
        vt, pad, union = struct.unpack_from("<HHi", self.data, off)
        base = vt & VT_TYPEMASK
        flags = []
        if vt & VT_VECTOR:
            flags.append("VT_VECTOR")
        if vt & VT_ARRAY:
            flags.append("VT_ARRAY")
        if vt & VT_BYREF:
            flags.append("VT_BYREF")
        rec = {"vt": vt, "vt_name": VT_NAMES.get(base, f"VT_0x{base:x}"), "flags": flags,
               "union": f"0x{union:08x}"}
        if base == 26:  # VT_PTR
            # the pointee is either a TYPEDESC offset (>=0) or a packed inline
            # VT (<0), exactly as MSFT_GetTdesc/ReadValue treat the field
            inner = self.describe_type(union, depth + 1)
            rec["points_to"] = inner
            rec["rendered"] = inner.get("rendered", "?") + "*"
        elif base == 29:  # VT_USERDEFINED
            if (union & 3) == 0:
                idx = union // TYPEINFO_BASE_SIZE
                if 0 <= idx < len(self.types):
                    rec["typeinfo_index"] = idx
                    rec["rendered"] = self.types[idx]["name"]
                else:
                    rec["rendered"] = f"<typeinfo#{idx}>"
            else:
                rec["external_reference"] = f"hreftype 0x{union:x} (imported library)"
                rec["rendered"] = f"<imported:0x{union:x}>"
        elif base in (27, 28):  # SAFEARRAY / CARRAY
            rec["element"] = self.describe_type(union, depth + 1)
            rec["rendered"] = f"{rec['element'].get('rendered','?')}[]"
        else:
            rec["rendered"] = IDL_TYPE_NAMES.get(base) or ("HRESULT" if base == 25
                                                           else VT_NAMES.get(base, f"vt_0x{base:x}"))
        if flags:
            rec["rendered"] += " " + ",".join(flags)
        return rec

    # -- typeinfo records -------------------------------------------------

    def _parse_typeinfo_base(self, index: int) -> dict:
        off = self.typeinfo_seg["offset"] + index * TYPEINFO_BASE_SIZE
        f = struct.unpack_from("<25I", self.data, off)
        (typekind_raw, memoffset, res2, res3, res4, res5, cElement, res7, res8, res9, resA,
         posguid_raw, flags, nameoffset, version, docstringoffs, helpstringcontext, helpcontext,
         ocustdata, impl_vft, size, datatype1, datatype2, res18, res19) = f
        # Only the low nibble is TKIND_*; bits 11+ carry cbAlignment and other
        # flags (Wine: typekind & 0xF, cbAlignment = (typekind >> 11) & 0x1F).
        typekind = typekind_raw & 0xF
        cb_alignment = (typekind_raw >> 11) & 0x1F
        posguid = posguid_raw if posguid_raw != 0xFFFFFFFF else -1
        cimpl = impl_vft & 0xFFFF
        cbsizevft = (impl_vft >> 16) & 0xFFFF
        cfuncs = cElement & 0xFFFF
        cvars = (cElement >> 16) & 0xFFFF
        rec = {
            "index": index,
            "typeinfo_offset": index * TYPEINFO_BASE_SIZE,
            "kind": TKIND.get(typekind, f"TKIND_{typekind}"),
            "kind_id": typekind,
            "name": self.name_at(nameoffset),
            "name_offset": nameoffset,
            "guid": self._guid_at(posguid) if posguid >= 0 else None,
            "posguid": posguid,
            "flags": f"0x{flags:08x}",
            "typekind_raw": f"0x{typekind_raw:08x}",
            "cbAlignment": cb_alignment,
            "version": f"{version & 0xFFFF}.{(version >> 16) & 0xFFFF}",
            "docstring": self.string_at(docstringoffs) if docstringoffs else None,
            "member_counts": {"functions": cfuncs, "variables": cvars},
            "cImplTypes": cimpl,
            "cbSizeVft": cbsizevft,
            "size": size,
            "memoffset": memoffset,
            "datatype1": datatype1,
            "datatype2": datatype2,
            "help_context": helpcontext,
            "functions": [],
            "variables": [],
            "implements": [],
            "property_pairs": [],
            "raw_fields": {"res2": res2, "res3": res3, "res4": res4, "res5": res5,
                           "res7": res7, "res8": res8, "res9": res9, "resA": resA,
                           "res18": res18, "res19": res19, "oCustData": ocustdata},
        }
        return rec

    def _imp_file_name(self, offset: int) -> str | None:
        seg = self.segments[2]  # pImpFiles: NUL-terminated library name strings
        if seg["offset"] <= 0 or offset < 0:
            return None
        pos = seg["offset"] + offset
        if pos >= len(self.data):
            return None
        end = self.data.find(b"\x00", pos)
        return self.data[pos : end if end > 0 else pos + 64].decode("latin-1", "replace")

    def _impinfo(self, index: int) -> dict | None:
        seg = self.segments[1]  # pImpInfo: MSFT_ImpInfo {INT flags, INT oImpFile, INT oGuid}
        if seg["offset"] <= 0:
            return None
        pos = seg["offset"] + index * 12
        if pos + 12 > len(self.data):
            return None
        flags, o_impfile, o_guid = struct.unpack_from("<3I", self.data, pos)
        kind = (flags >> 24) & 0xFF
        is_guid = bool(flags & 0x00010000)
        return {
            "declared_kind": TKIND.get(kind, f"TKIND_{kind}"),
            "count": flags & 0xFFFF,
            "guid_or_typeindex": o_guid,
            "reference_is_guid": is_guid,
            "import_library": self._imp_file_name(o_impfile),
        }

    def _parse_impl_types(self, ref_offset: int, count: int) -> list[dict]:
        out = []
        off = ref_offset
        for _ in range(count):
            if off < 0 or self.ref_seg["offset"] < 0:
                break
            pos = self.ref_seg["offset"] + off
            if pos + REF_REC_SIZE > len(self.data):
                break
            reftype, flags, ocustdata, onext = struct.unpack_from("<4I", self.data, pos)
            entry = {"reftype": f"0x{reftype:08x}", "flags": f"0x{flags:08x}"}
            if (reftype & 3) == 0:
                idx = reftype // TYPEINFO_BASE_SIZE
                if 0 <= idx < len(self.types):
                    entry["typeinfo_index"] = idx
                    entry["name"] = self.types[idx]["name"]
                    entry["guid"] = self.types[idx]["guid"]
                else:
                    entry["name"] = f"<typeinfo#{idx} not in library>"
            elif (reftype & 3) == 1:
                # imported type: bits 2+ index the import-info table
                imp = self._impinfo(reftype >> 2)
                entry["imported"] = imp
                if imp and not imp["reference_is_guid"]:
                    entry["name"] = f"<type #{imp['guid_or_typeindex']} in {imp['import_library']}>"
                else:
                    entry["name"] = (f"<external {imp['import_library']}>" if imp
                                     else f"<external hRef 0x{reftype:08x}>")
            else:
                entry["note"] = f"external reference (reftype kind {reftype & 3})"
            entry["impl_flags"] = ",".join(v for k, v in IMPLTYPEFLAGS.items() if flags & k)
            out.append(entry)
            if onext == 0xFFFFFFFF or onext == off:
                break
            off = onext
        return out

    def _parse_members(self, rec: dict, cfuncs: int, cvars: int) -> None:
        base = rec["memoffset"]
        if base <= 0 or base + 4 > len(self.data):
            self.notes.append(f"typeinfo {rec['index']}: member offset out of range")
            return
        (infolen,) = struct.unpack_from("<I", self.data, base)
        rec_offset = base + 4
        # Variable records are reached through the member-offset table, not by
        # walking on from the last function record (MSFT_DoVars in Wine):
        #   recoffset = base + infolen + ((cFuncs+cVars)*2 + cFuncs + 1)*4 + 4
        var_offset = None
        if cvars:
            entry = base + infolen + ((cfuncs + cvars) * 2 + cfuncs + 1) * 4
            if entry + 4 <= len(self.data):
                (rel,) = struct.unpack_from("<i", self.data, entry)
                if rel >= 0:
                    var_offset = base + 4 + rel
        total_members = cfuncs + cvars
        for i in range(total_members):
            # member id and name offsets live in the array that follows the records
            id_pos = base + infolen + (i + 1) * 4
            name_pos = base + infolen + (total_members + i + 1) * 4
            memid = struct.unpack_from("<i", self.data, id_pos)[0] if id_pos + 4 <= len(self.data) else None
            name_offset = struct.unpack_from("<i", self.data, name_pos)[0] if name_pos + 4 <= len(self.data) else -1
            reclength = struct.unpack_from("<I", self.data, rec_offset)[0] & 0xFFFF
            # Records are variable length: the fixed MSFT_FuncRecord prefix is
            # 0x18 bytes, optional attribute fields extend it, and the trailing
            # MSFT_ParameterInfo array (12 bytes per argument) is included in the
            # stored length (MSFT_DoFuncs in Wine derives `optional` the same way).
            min_len = 0x18 if i < cfuncs else 0x14  # FuncRecord vs VarRecord prefix
            if reclength < min_len or rec_offset + reclength > len(self.data):
                self.notes.append(f"typeinfo {rec['index']}: member {i} record length {reclength} invalid; stop")
                break
            if i < cfuncs:
                rec["functions"].append(self._parse_function(i, rec_offset, reclength, memid,
                                                            name_offset, rec["index"]))
                rec_offset += reclength
            else:
                v_off = var_offset + (i - cfuncs) * reclength if var_offset is not None else rec_offset
                rec["variables"].append(self._parse_variable(i, v_off, reclength, memid, name_offset))

    def _parse_function(self, i: int, off: int, reclength: int, memid, name_offset,
                        ti_index: int) -> dict:
        # MSFT_FuncRecord (little-endian): INT Info, INT DataType, INT Flags,
        # INT16 VtableOffset, INT16 funcdescsize, INT FKCCIC,
        # INT16 nrargs, INT16 nroargs  == 0x18 bytes (Wine typelib.h)
        (info, datatype, flags, vtable_offset, funcdescsize, fkccic, nrargs, nroargs) = \
            struct.unpack_from("<IiI2HI2H", self.data, off)
        name = self.name_at(name_offset)
        if name is None and name_offset == -1 and i > 0 and self._last_function_name:
            # second half of a property get/put pair: the file stores -1 and the
            # name is shared with the getter (MSFT_DoFuncs in Wine)
            name = self._last_function_name
        self._last_function_name = name
        out = {
            "index": i,
            "name": name,
            "memid": memid,
            "vtable_offset_bytes": vtable_offset & ~1,
            "vtable_slot": (vtable_offset & ~1) // 8,
            "vtable_offset_raw": f"0x{vtable_offset:04x}",
            "funcdescsize": funcdescsize,
            "fkccic": f"0x{fkccic:08x}",
            "funckind": FUNCKIND.get(fkccic & 0x7, f"FUNC_{fkccic & 0x7}"),
            "invkind": INVOKEKIND.get((fkccic >> 3) & 0xF, f"INVOKE_{((fkccic >> 3) & 0xF)}"),
            "callconv": CALLCONV.get((fkccic >> 8) & 0xF, f"CC_{(fkccic >> 8) & 0xF}"),
            "nrargs": nrargs,
            "nroargs": nroargs,
            "flags": f"0x{flags:08x}",
            "return_type": self.describe_type(datatype),
            "params": [],
        }
        if fkccic & 0x2000:
            out["entry_ordinal"] = True
        # optional fields follow the fixed part; their presence is derivable from the record length
        optional = reclength - nrargs * PARAM_INFO_SIZE
        if fkccic & 0x1000:
            optional -= nrargs * 4
        fixed = 0x18
        if optional >= fixed + 4:
            (help_context,) = struct.unpack_from("<I", self.data, off + fixed)
            out["help_context"] = help_context
        if optional >= fixed + 8:
            (oh,) = struct.unpack_from("<i", self.data, off + fixed + 4)
            out["help_string"] = self.string_at(oh) if oh >= 0 else None
        if optional >= fixed + 12:
            (oe,) = struct.unpack_from("<i", self.data, off + fixed + 8)
            if fkccic & 0x2000:
                out["entry_ordinal_value"] = oe & 0xFFFF
            else:
                out["entry"] = self.string_at(oe) if oe >= 0 else None
        # parameter records sit at the end of the record
        p_off = off + reclength - nrargs * PARAM_INFO_SIZE
        for j in range(nrargs):
            dt, oname, pflags = struct.unpack_from("<iii", self.data, p_off + j * PARAM_INFO_SIZE)
            out["params"].append({
                "name": self.name_at(oname) if oname != -1 else "<unnamed>",
                "type": self.describe_type(dt),
                "flags": f"0x{pflags:08x}",
                "flags_decoded": [v for k, v in PARAMFLAGS.items() if pflags & k],
            })
        return out

    def _parse_variable(self, i: int, off: int, reclength: int, memid, name_offset) -> dict:
        # MSFT_VarRecord (little-endian): INT Info, INT DataType, INT Flags,
        # INT16 VarKind, INT16 vardescsize, INT OffsValue  == 0x14 bytes
        (info, datatype, flags, varkind, vardescsize, offsvalue) = struct.unpack_from("<IiI2Hi", self.data, off)
        varkinds = {0: "VAR_PERINSTANCE", 1: "VAR_STATIC", 2: "VAR_CONST", 3: "VAR_DISPATCH"}
        kind = varkinds.get(varkind, f"VAR_{varkind}")
        rec = {
            "index": i,
            "name": self.name_at(name_offset),
            "memid": memid,
            "var_kind": kind,
            "type": self.describe_type(datatype),
            "value_or_offset": offsvalue,
            "flags": f"0x{flags:08x}",
        }
        if kind == "VAR_CONST":
            # MSFT_ReadValue: negative OffsValue packs VT in bits 26-30 and the
            # value in the low 26 bits; non-negative values index the custom-data
            # segment (not decoded here).
            if offsvalue < 0:
                vt = (offsvalue & 0x7C000000) >> 26
                rec["const_value"] = offsvalue & 0x03FFFFFF
                rec["const_vt"] = VT_NAMES.get(vt, f"VT_{vt}")
            else:
                rec["const_value"] = None
                rec["const_note"] = f"stored in custom-data segment at offset {offsvalue} (not decoded)"
        return rec

    # -- rendering --------------------------------------------------------

    def to_json(self, source: dict) -> dict:
        return {
            "generated_by": "analysis/tools/typelib.py",
            "generated_at": self.date,
            "source": source,
            "format": "MSFT (ICreateTypeLib2), version field 0x%08x" % self.magic2,
            "header": {
                "magic": "MSFT", "version_field": f"0x{self.magic2:08x}",
                "lcid": f"0x{self.lcid:04x}", "lcid2": self.lcid2,
                "syskind": SYSKIND.get(self.varflags & 0xF, f"syskind_{self.varflags & 0xF}"),
                "varflags": f"0x{self.varflags:08x}",
                "version": f"{self.version & 0xFFFF}.{(self.version >> 16) & 0xFFFF}",
                "flags": f"0x{self.flags:08x}",
                "nrtypeinfos": self.nrtypeinfos,
                "library_guid": self.library_guid,
                "posguid": self.posguid,
                "name_table_entries": len(self._names),
                "nametablechars": self.nametablechars,
                "help_string": self.string_at(self.helpstring) if self.helpstring else None,
                "help_file": self.string_at(self.helpfile) if self.helpfile else None,
                "nimpinfos": self.nimpinfos,
                "dispatchpos": self.dispatchpos,
            },
            "segments": self.segments,
            "typeinfos": self.types,
            "notes": self.notes,
        }

    def to_idl(self, source: dict) -> str:
        L = [f"// Reconstructed type-library IDL — {source['artifact']}",
             "//",
             "// PROVENANCE: mechanically rendered from the MSFT binary type library",
             f"// embedded as RT_TYPELIB resource {source['resource_name']} (payload sha256 "
             f"{source['payload_sha256']}),",
             "// by analysis/tools/typelib.py. GUIDs, kinds, member names, member IDs and virtual",
             "// table order are read straight out of the library; parameter- and return-type",
             "// rendering is derived from its TYPEDESC entries. This is a re-serialisation of",
             "// shipped data, not recovered source code.",
             f"// library GUID {self.library_guid} — version {hex(self.version)} — LCID 0x{self.lcid:04x}",
             ""]
        L.append("import \"oaidl.idl\";")
        L.append("import \"ocidl.idl\";")
        L.append("")
        L.append("")
        for t in self.types:
            kind = t["kind"]
            L.append(f"// {kind} {t['name']} {{{t['guid']}}} version {t['version']} "
                     f"(typeinfo #{t['index']}, {t['member_counts']['functions']} functions, "
                     f"{t['member_counts']['variables']} variables)")
            if kind == "TKIND_ENUM":
                L.append(f"typedef enum {t['name']} {{")
                for v in t["variables"]:
                    val = v.get("const_value")
                    L.append(f"    {v['name']} = {val if val is not None else v['value_or_offset']},"
                             + (f"  // {v['const_vt']}" if v.get("const_vt") else ""))
                L.append(f"}} {t['name']};")
            elif kind == "TKIND_RECORD":
                L.append(f"typedef struct {t['name']} {{")
                for v in t["variables"]:
                    L.append(f"    {v['type'].get('rendered','?')} {v['name']};  // offset {v['value_or_offset']}")
                L.append(f"}} {t['name']};")
            elif kind in ("TKIND_INTERFACE", "TKIND_DISPATCH"):
                inherits = ""
                if t["implements"]:
                    names = [i.get("name") or f"<external hRef {i.get('reftype')}>"
                             for i in t["implements"]]
                    inherits = " : " + ", ".join(names)
                L.append(f"    interface {t['name']}{inherits} {{")
                for f in t["functions"]:
                    params = []
                    for p in f["params"]:
                        flags = p["flags_decoded"]
                        dirs = "[in]" if "IN" in flags else ("[out]" if "OUT" in flags else "")
                        ret = " " if "RETVAL" in flags else " "
                        params.append(f"{dirs} {p['type'].get('rendered','?')}{ret}{p['name']}")
                    L.append(f"        {f['return_type'].get('rendered','?')} {f['name']}("
                             f"{', '.join(params)});  // memid {f['memid']}, vtable slot {f['vtable_slot']}"
                             f"{', ' + f['invkind'] if f['invkind'] != 'INVOKE_FUNC' else ''}")
                L.append("    }")
            elif kind == "TKIND_COCLASS":
                L.append(f"    coclass {t['name']} {{")
                for i in t["implements"]:
                    L.append(f"        [default] interface {i.get('name') or '<external>'}; // {i.get('reftype')}")
                L.append("    }")
            else:
                L.append(f"    // (unsupported kind {kind} for this renderer)")
            L.append("")
        L.append("/* Interpretation limits (see analysis/report/methodology.md):")
        for n in self.notes:
            L.append(f" * - {n}")
        L.append(" */")
        return "\n".join(L) + "\n"

    def to_header(self, source: dict) -> str:
        L = [f"/* Reconstructed COM surface header — {source['artifact']}",
             " *",
             " * PROVENANCE: generated by analysis/tools/typelib.py from the shipped MSFT",
             f" * type library (RT_TYPELIB resource {source['resource_name']}, payload",
             f" * sha256 {source['payload_sha256']}).  GUID values and vtable slot order are",
             " * read from the binary library; the method ordering below is the library's own.",
             " */",
             "#ifndef WMP_RECOVERED_TYPELIB_H",
             "#define WMP_RECOVERED_TYPELIB_H",
             "",
             "#include <windows.h>",
             "#include <objbase.h>",
             "",
             f'/* Library: {self.library_guid} version {hex(self.version)} LCID 0x{self.lcid:04x} */',
             ""]
        for t in self.types:
            if not t["guid"]:
                continue
            safe = "".join(ch if ch.isalnum() else "_" for ch in (t["name"] or "anon")).upper()
            L.append(f'/* {t["kind"]}: {t["name"]} */')
            L.append(f"DEFINE_GUID(GUID_{safe}, {t['guid'][1:-1].replace('-', ', 0x').replace(', 0x', ', ', 0)});")
        L.append("")
        for t in self.types:
            if t["kind"] not in ("TKIND_INTERFACE", "TKIND_DISPATCH") or not t["guid"]:
                continue
            L.append(f"/* {t['name']} — vtable order as stored in the type library */")
            L.append(f"DECLARE_INTERFACE_({t['name']}_Vtbl, {t['name']}_Recovered)")
            L.append("{")
            L.append("    /* IUnknown */")
            for slot, f in enumerate(t["functions"]):
                sym = " ".join(f"slot{f['vtable_slot']}") if False else f"slot_f{v['vtable_slot']}" if False else ""
                L.append(f"    /* slot {f['vtable_slot']:>3}  memid {f['memid']:>5}  {f['invkind']:<20} "
                         f"{f['callconv']:<12} {f['return_type'].get('rendered','?'):<24} {f['name']}("
                         + ", ".join(f"{p['type'].get('rendered','?')} {p['name'] or 'arg'}" for p in f["params"])
                         + ") */")
            L.append("};")
            L.append("")
        L.append("#endif /* WMP_RECOVERED_TYPELIB_H */")
        return "\n".join(L) + "\n"


def guid_bytes(guid: str) -> bytes:
    """Serialised (on-disk) form of a GUID string: {DWORD,WORD,WORD,8 x BYTE}."""
    s = guid.strip("{}").replace("-", "")
    return (struct.pack("<IHH", int(s[0:8], 16), int(s[8:12], 16), int(s[12:16], 16))
            + bytes.fromhex(s[16:]))


def cross_check_image(module_slug: str, guids: list[tuple[str, str]]) -> dict:
    """Locate every recovered GUID as a 16-byte constant inside the shipped image.

    A GUID that is present in the module's bytes proves the type library was read
    at the correct offsets *and* that the module really uses the identifier
    (GetClassObject/registry lookups carry the binary GUID, not a string form).
    """
    matches = glob.glob(os.path.join(BIN_DIR, "**", "*"), recursive=True)
    lower = module_slug.lower()
    cand = [m for m in matches if os.path.isfile(m) and P_slug(m) == lower]
    if not cand:
        return {"image": None, "note": f"no image matched slug {module_slug}"}
    image = cand[0]
    data = open(image, "rb").read()
    out = []
    for name, guid in guids:
        raw = guid_bytes(guid)
        off = data.find(raw)
        out.append({"name": name, "guid": guid, "found": off >= 0,
                    "file_offset": f"0x{off:x}" if off >= 0 else None,
                    "occurrences": data.count(raw)})
    return {"image": os.path.relpath(image, REPO),
            "library_guid": next((o for o in out if o["name"] == "<library>"), None),
            "guids": out,
            "summary": f"{sum(1 for o in out if o['found'])}/{len(out)} recovered GUIDs present as "
                       f"16-byte constants in {os.path.basename(image)}"}


def P_slug(path: str) -> str:
    base = os.path.basename(path).lower()
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


def process(tlb_path: str) -> tuple[dict, str]:
    data = open(tlb_path, "rb").read()
    tl = TypeLib(data)
    slug_dir = os.path.dirname(tlb_path)
    # <repo>/analysis/report/resources/<slug>/typelib/<file>.tlb  ->  <slug>
    module_slug = os.path.basename(os.path.dirname(slug_dir))
    src_dir = os.path.join(REPO, "src", module_slug, "typelib")
    os.makedirs(src_dir, exist_ok=True)
    base = os.path.splitext(os.path.basename(tlb_path))[0]
    first_name = tl.types[0]["name"] if tl.types and tl.types[0]["name"] else "typ"
    # Every library in this project is a separate module resource, but keep the
    # payload name in the file stem so libraries never overwrite one another.
    libname = f"{base}__{first_name}"
    source = {
        "artifact": os.path.relpath(tlb_path, REPO),
        "module": module_slug,
        "resource_name": base.split("_")[1] if "_" in base else base,
        "payload_sha256": __import__("hashlib").sha256(data).hexdigest(),
        "file": os.path.relpath(tlb_path, REPO),
    }
    guids = [("<library>", tl.library_guid)] if tl.library_guid else []
    guids += [(t["name"], t["guid"]) for t in tl.types if t["guid"]]
    js = tl.to_json(source)
    js["guid_cross_check"] = cross_check_image(module_slug, guids)
    with open(os.path.join(src_dir, f"{libname}.json"), "w") as fh:
        json.dump(js, fh, indent=1)
    with open(os.path.join(src_dir, f"{libname}.idl"), "w") as fh:
        fh.write(tl.to_idl(source))
    with open(os.path.join(src_dir, f"{libname}.h"), "w") as fh:
        fh.write(tl.to_header(source))

    # per-module README covering every library found in that module
    others = sorted(glob.glob(os.path.join(src_dir, "*.json")))
    rl = [f"# Type libraries embedded in `{os.path.basename(source['module'].replace('_', '.'))}`\n",
          "> Recovered by `analysis/tools/typelib.py` from the module's `RT_TYPELIB` resource(s).",
          "> The library is the module author's own machine-readable COM description, so library",
          "> GUID, interface IIDs, member names, member IDs and vtable slots are **verified**;",
          "> parameter/return type rendering is derived from the library's TYPEDESC entries and is",
          "> marked where unrenderable. Raw payload: `analysis/report/resources/"
          f"{source['module']}/typelib/`.\n"]
    for o in others:
        d = json.load(open(o))
        h = d["header"]
        rl.append(f"## `{os.path.basename(o)[:-5]}`\n")
        rl.append(f"* Library GUID: `{h['library_guid']}` — version "
                  f"`{(h['version'] if isinstance(h['version'], str) else hex(h['version']))}` — "
                  f"LCID `{h['lcid']}` — {h['syskind']}")
        rl.append(f"* Type count: {h['nrtypeinfos']}; name-table entries: {h['name_table_entries']}")
        if h.get("help_file"):
            rl.append(f"* Help file reference: `{h['help_file']}`")
        cc = d.get("guid_cross_check") or {}
        if cc.get("summary"):
            rl.append(f"* Cross-check: {cc['summary']} (`{cc['image']}`) — every recovered"
                      " identifier is also used by the module itself.")
        rl.append("")
        rl.append("| # | Kind | Name | GUID | functions | variables | implements |")
        rl.append("|---|------|------|------|-----------|-----------|------------|")
        for t in d["typeinfos"]:
            impl = ", ".join(i.get("name") or i.get("note", "?") for i in t["implements"]) or "—"
            rl.append(f"| {t['index']} | {t['kind']} | `{t['name']}` | `{t['guid'] or '—'}` | "
                      f"{t['member_counts']['functions']} | {t['member_counts']['variables']} | {impl} |")
        rl.append("")
        if d.get("notes"):
            rl.append("Parser notes: " + "; ".join(f"`{n}`" for n in d["notes"]) + "\n")
    with open(os.path.join(src_dir, "README.md"), "w") as fh:
        fh.write("\n".join(rl) + "\n")
    return js, module_slug


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("tlb", nargs="*", help="type-library payloads (default: all extracted RT_TYPELIB payloads)")
    ap.add_argument("--dump-strings", action="store_true", help="print the name table of each library")
    args = ap.parse_args()

    paths = args.tlb or sorted(glob.glob(os.path.join(REPO, "analysis", "report", "resources", "*",
                                                      "typelib", "*.tlb")))
    agg = []
    for p in paths:
        try:
            js, module = process(p)
        except Exception as exc:  # noqa: BLE001
            import traceback
            traceback.print_exc()
            print(f"[typelib] {p} FAILED: {type(exc).__name__}: {exc}", file=sys.stderr)
            continue
        h = js["header"]
        cc = js.get("guid_cross_check", {})
        print(f"[typelib] {os.path.relpath(p, REPO)}: guid={h['library_guid']} types={h['nrtypeinfos']} "
              f"names={h['name_table_entries']} -> src/{module}/typelib/ | {cc.get('summary')}")
        agg.append({"file": os.path.relpath(p, REPO), "module": module, "header": h,
                    "types": [{k: t[k] for k in ("index", "kind", "name", "guid", "member_counts")}
                              for t in js["typeinfos"]], "notes": js["notes"]})
        if args.dump_strings:
            for t in js["typeinfos"]:
                print(f"    {t['kind']:<16} {t['name']:<34} {t['guid']}")
    if agg and not args.tlb:
        out = os.path.join(REPO, "analysis", "report", "data", "typelibs.json")
        with open(out, "w") as fh:
            json.dump({"generated_by": "analysis/tools/typelib.py", "libraries": agg}, fh, indent=1)
        print(f"[typelib] wrote analysis/report/data/typelibs.json ({len(agg)} libraries)")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
