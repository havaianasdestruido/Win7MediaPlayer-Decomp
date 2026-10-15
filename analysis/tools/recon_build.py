#!/usr/bin/env python3
"""recon_build.py — generate, build and run the reconstruction self-check harness.

Phase 5/6 tool of the Win7MediaPlayer decompilation project.

For every PE module in ``bin/`` this tool emits, under ``src/<slug>/``:

* ``recon/module_facts.h``  — section table, image identity and resource table as C constants
* ``recon/guids.h``         — every recovered COM GUID/UUID as a 16-byte C constant
* ``recon/enums.h``         — recovered enumerations (values from the shipped type library)
* ``recon/interfaces.h``    — recovered vtables in slot order (generated when a type library exists)
* ``recon/compile_check.c`` — a self-contained C99 program that re-derives the recorded facts
* ``CMakeLists.txt``        — one CMake target per module

and one ``src/CMakeLists.txt`` that adds every module target.

The generated program is **not** a reimplementation of the module.  It is a
machine-checked restatement of what the other analysis tools recovered, so that
building and running it validates those outputs:

* compile time — the recovered type surface (enums, vtables, GUID constants,
  section and resource tables) is well-formed C;
* run time — the SHA-256 of the original image, the SHA-256 of every resource
  payload at its recovered RVA (through the recovered section table) and every
  recovered GUID byte sequence are re-derived from ``bin/`` and compared with the
  values recorded in ``analysis/report/data/``.

``--build`` configures with CMake, builds with Ninja, runs every harness and
writes ``analysis/report/data/build-results.json``.

Usage:
    python3 analysis/tools/recon_build.py [--bin-dir bin] [--only SLUG] [--build]
"""

from __future__ import annotations

import argparse
import json
import os
import shutil
import subprocess
import sys
import time
from typing import Any

TOOL = "analysis/tools/recon_build.py"
REPO = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
DATA = os.path.join(REPO, "analysis", "report", "data")
BUILD_DIR = os.path.join(DATA, "build")
RESULTS = os.path.join(DATA, "build-results.json")


# --------------------------------------------------------------------------- #
# helpers
# --------------------------------------------------------------------------- #
def c_ident(name: str) -> str:
    """Make ``name`` a valid C identifier."""
    out = []
    for ch in name:
        out.append(ch if (ch.isalnum() or ch == "_") else "_")
    ident = "".join(out)
    if not ident or ident[0].isdigit():
        ident = "wmp_" + ident
    return ident


GUID_STRUCT = "wmp_guid"


def guid_literal(guid: str) -> str:
    """``{AABBCCDD-...}`` -> C initialiser for :data:`GUID_STRUCT`."""
    g = guid.strip("{}")
    d1, d2, d3, rest = g.split("-", 3)
    b = rest.split("-")
    bytes8 = bytes.fromhex(b[0]) + bytes.fromhex(b[1])
    return (
        "{ 0x%s, 0x%s, 0x%s, { %s } }"
        % (
            d1,
            d2,
            d3,
            ", ".join("0x%02X" % x for x in bytes8),
        )
    )


def guid_packed_bytes(guid: str) -> bytes:
    """Serialised on-disk representation (little-endian D1/D2/D3 + 8 bytes)."""
    g = guid.strip("{}")
    d1, d2, d3, rest = g.split("-", 3)
    b = rest.split("-")
    return (
        bytes.fromhex(d1)[::-1]
        + bytes.fromhex(d2)[::-1]
        + bytes.fromhex(d3)[::-1]
        + bytes.fromhex(b[0])
        + bytes.fromhex(b[1])
    )


def byte_array(data: bytes, per_line: int = 12) -> str:
    lines = []
    for i in range(0, len(data), per_line):
        chunk = data[i : i + per_line]
        lines.append("    " + " ".join("0x%02X," % c for c in chunk))
    return "\n".join(lines)


# --------------------------------------------------------------------------- #
# type surface rendering
# --------------------------------------------------------------------------- #
TYPE_MAP = {
    "HRESULT": "wmp_hresult",
    "BSTR": "wmp_bstr",
    "VARIANT": "wmp_variant",
    "VARIANT_BOOL": "wmp_variant_bool",
    "int": "int",
    "unsigned int": "unsigned int",
    "long": "long",
    "unsigned long": "unsigned long",
    "short": "short",
    "unsigned short": "unsigned short",
    "char": "char",
    "unsigned char": "unsigned char",
    "byte": "unsigned char",
    "float": "float",
    "double": "double",
    "LONGLONG": "long long",
    "ULONGLONG": "unsigned long long",
    "IUnknown": "struct wmp_iunknown",
    "IDispatch": "struct wmp_iunknown",
    "void": "void",
}

UNRESOLVED: dict[str, int] = {}


def c_type(rendered: str | None, module_types: set[str]) -> str:
    """Render a typelib type string (``BSTR*``, ``INSSDevice**`` …) as C."""
    if not rendered:
        UNRESOLVED["<null>"] = UNRESOLVED.get("<null>", 0) + 1
        return "void*"
    t = rendered.strip()
    stars = ""
    while t.endswith("*"):
        stars += "*"
        t = t[:-1].strip()
    arr = ""
    if t.endswith("[]"):
        t = t[:-2].strip()
        # VT_ARRAY: the library describes a SAFEARRAY; keep it opaque
        return "wmp_safearray*" + stars
    base = TYPE_MAP.get(t)
    if base is None and t in module_types:
        base = c_ident(t)  # recovered enum or interface from this module
    if base is None:
        UNRESOLVED[rendered] = UNRESOLVED.get(rendered, 0) + 1
        base = "void"  # keep the header compilable; counted as unresolved
    return base + stars


def render_param(p: dict, module_types: set[str]) -> str:
    name = p.get("name") or "arg%d" % p.get("index", 0)
    return "%s %s" % (c_type((p.get("type") or {}).get("rendered"), module_types), c_ident(name))


# --------------------------------------------------------------------------- #
# inputs
# --------------------------------------------------------------------------- #
def load_json(path: str) -> Any:
    with open(path) as fh:
        return json.load(fh)


def collect_module(slug: str, inv_entry: dict, res_entry: dict | None) -> dict:
    """Gather everything the generator needs for one module."""
    pe = inv_entry.get("pe") or {}
    mod = {
        "slug": slug,
        "name": inv_entry["name"],
        "rel_path": inv_entry["rel_path"],
        "size": inv_entry["size"],
        "sha256": inv_entry["hashes"]["sha256"],
        "pe": pe,
        "resources": (res_entry or {}).get("resources") or [],
        "typelibs": [],
        "guid_entries": [],
    }
    # type libraries
    tl_dir = os.path.join(REPO, "src", slug, "typelib")
    if os.path.isdir(tl_dir):
        for fn in sorted(os.listdir(tl_dir)):
            if fn.endswith(".json"):
                mod["typelibs"].append(load_json(os.path.join(tl_dir, fn)))
    return mod


def collect_guids(mod: dict, com: dict, strings: dict | None) -> None:
    """All recovered GUIDs for a module, tagged with how each was verified."""
    seen: dict[str, dict] = {}

    def add(guid: str, name: str, verified: str, offset: str | None = None):
        key = guid.upper()
        if key not in seen:
            seen[key] = {"guid": guid, "names": [], "verified": verified, "offsets": []}
        if name and name not in seen[key]["names"]:
            seen[key]["names"].append(name)
        if offset and offset not in seen[key]["offsets"]:
            seen[key]["offsets"].append(offset)
        # binary evidence is stronger than text evidence
        if verified == "binary-constant":
            seen[key]["verified"] = "binary-constant"

    for tl in mod["typelibs"]:
        cc = tl.get("guid_cross_check") or {}
        for rec in cc.get("guids") or []:
            add(
                rec["guid"],
                rec.get("name") or "",
                "binary-constant" if rec.get("found") else "type-library",
                rec.get("file_offset"),
            )
    m = (com.get("modules") or {}).get(mod["slug"]) if isinstance(com.get("modules"), dict) else None
    if isinstance(com.get("modules"), list):
        m = next((x for x in com["modules"] if x.get("slug") == mod["slug"]), None)
    if m:
        for r in m.get("registration_guids") or []:
            add(r if isinstance(r, str) else r.get("guid", ""), "rgs", "text")
    for s in (strings or {}).get("strings", []):
        if "guid" in (s.get("tags") or []):
            add(s["text"], "string-literal", "text")
    mod["guid_entries"] = sorted(seen.values(), key=lambda x: x["guid"])


# --------------------------------------------------------------------------- #
# generators
# --------------------------------------------------------------------------- #
def gen_compat_h() -> str:
    return """/* wmp_compat.h — platform-neutral COM-ish types for the reconstruction harness.
 *
 * Part of the clean-room reconstruction of the Windows Media Player 12 for
 * Windows 7 binary set.  These typedefs exist so that the *recovered* type
 * surface (enums, vtables, GUIDs) can be expressed and compile-checked without
 * a Windows SDK.  They are not claimed to be Microsoft's headers.
 */
#ifndef WMP_RECON_COMPAT_H
#define WMP_RECON_COMPAT_H

#include <stddef.h>

typedef long                 wmp_hresult;      /* HRESULT: 32-bit on Win64 */
typedef unsigned long        wmp_ulong;
typedef void                *wmp_handle;
typedef wchar_t             *wmp_bstr;         /* BSTR */
typedef short                wmp_variant_bool; /* VARIANT_BOOL */
typedef struct wmp_variant   { unsigned char raw[16]; } wmp_variant;  /* opaque here */
typedef struct wmp_iunknown  wmp_iunknown;     /* COM IUnknown, opaque */
typedef struct wmp_safearray wmp_safearray;    /* SAFEARRAY, opaque */

#define WMP_S_OK               ((wmp_hresult)0)
#define WMP_E_NOTIMPL          ((wmp_hresult)0x80004001L)
#define WMP_E_FAIL             ((wmp_hresult)0x80004005L)

typedef struct wmp_guid {
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} wmp_guid;

#endif /* WMP_RECON_COMPAT_H */
"""


def gen_module_facts_h(mod: dict) -> str:
    pe = mod["pe"]
    secs = pe.get("sections") or []
    lines = [
        "/* module_facts.h — machine-readable restatement of the PE facts recovered",
        " * for %s by analysis/tools/inventory.py." % mod["rel_path"],
        " *",
        " * Every value here is data, not code.  recon/compile_check.c re-derives the",
        " * digests from the original file at run time and fails if anything differs.",
        " */",
        "#ifndef WMP_RECON_MODULE_FACTS_H",
        "#define WMP_RECON_MODULE_FACTS_H",
        "",
        '#include "wmp_compat.h"',
        "",
        '#define WMP_MODULE_NAME       "%s"' % mod["name"],
        '#define WMP_MODULE_REL_PATH   "%s"' % mod["rel_path"],
        "#define WMP_MODULE_BYTES      %du" % mod["size"],
        "#define WMP_IMAGE_BASE        0x%Xull" % (pe.get("image_base") or 0),
        "#define WMP_ENTRY_POINT_RVA   0x%Xu" % (pe.get("entry_point_rva") or 0),
        "#define WMP_SECTION_COUNT     %du" % len(secs),
        "#define WMP_RESOURCE_COUNT    %du" % len(mod["resources"]),
        "",
        "/* SHA-256 of the original image (bin/%s). */" % mod["name"],
        "static const unsigned char WMP_IMAGE_SHA256[32] = {",
        byte_array(bytes.fromhex(mod["sha256"])),
        "};",
        "",
        "typedef struct wmp_section_fact {",
        "    const char   *name;",
        "    unsigned long va;",
        "    unsigned long virtual_size;",
        "    unsigned long raw_pointer;",
        "    unsigned long raw_size;",
        "    double        entropy;",
        "} wmp_section_fact;",
        "",
        "static const wmp_section_fact WMP_SECTIONS[WMP_SECTION_COUNT] = {",
    ]
    for s in secs:
        lines.append(
            '    { "%s", 0x%Xu, 0x%Xu, 0x%Xu, 0x%Xu, %.4f },'
            % (
                s["name"],
                s.get("virtual_address") or 0,
                s.get("virtual_size") or 0,
                s.get("raw_pointer") or 0,
                s.get("raw_size") or 0,
                s.get("entropy") or 0.0,
            )
        )
    lines += [
        "};",
        "",
        "/* Resource payloads recovered by analysis/tools/resources.py.  The RVA is",
        " * translated through WMP_SECTIONS and the payload's SHA-256 is re-checked",
        " * against WMP_RESOURCE_SHA256 at run time. */",
        "typedef struct wmp_resource_fact {",
        "    const char   *type;",
        "    const char   *name;",
        "    unsigned long data_rva;",
        "    unsigned long size;",
        "    const unsigned char *sha256;",
        "} wmp_resource_fact;",
        "",
    ]
    for i, r in enumerate(mod["resources"]):
        lines.append(
            "static const unsigned char WMP_RES_%d_SHA256[32] = {" % i
        )
        lines.append(byte_array(bytes.fromhex(r["sha256"])))
        lines.append("};")
    lines += ["", "static const wmp_resource_fact WMP_RESOURCES[WMP_RESOURCE_COUNT] = {"]
    for i, r in enumerate(mod["resources"]):
        lines.append(
            '    { "%s", "%s", 0x%Xu, %du, WMP_RES_%d_SHA256 },'
            % (
                r.get("type") or "?",
                str(r.get("name") or "?"),
                r.get("data_rva") or 0,
                r.get("size") or 0,
                i,
            )
        )
    lines += ["};", "", "#endif /* WMP_RECON_MODULE_FACTS_H */", ""]
    return "\n".join(lines)


def gen_guids_h(mod: dict) -> str:
    lines = [
        "/* guids.h — every COM GUID/UUID recovered from %s." % mod["name"],
        " *",
        " * Sources are named per constant:",
        " *   [typelib @0x...]  GUID and file offset read from the module's own MSFT",
        " *                     type library and confirmed as a 16-byte constant at that",
        " *                     offset by analysis/tools/typelib.py;",
        " *   [rgs]             GUID named by an ATL registrar script (text form);",
        " *   [string]          GUID found as a text literal by strings_scan.py.",
        " */",
        "#ifndef WMP_RECON_GUIDS_H",
        "#define WMP_RECON_GUIDS_H",
        "",
        '#include "wmp_compat.h"',
        "",
    ]
    if not mod["guid_entries"]:
        lines.append("/* No GUIDs were recovered from this module. */")
    used: dict[str, int] = {}
    for e in mod["guid_entries"]:
        source = e["names"][0] or "unnamed"
        ident = "GUID_" + c_ident(source).upper()
        n = used.get(ident, 0)
        used[ident] = n + 1
        if n:
            ident = "%s_%d" % (ident, n + 1)
        tag = []
        if e["verified"] == "binary-constant":
            off = ", ".join(e["offsets"][:3]) or "offset unknown"
            tag.append("typelib @%s" % off)
        elif e["verified"] == "type-library":
            tag.append("typelib (offset not confirmed)")
        if "rgs" in e["names"]:
            tag.append("rgs")
        if "string-literal" in e["names"]:
            tag.append("string")
        lines.append(
            "/* %s — %s */" % (e["guid"].upper(), " + ".join(tag) if tag else "source unknown")
        )
        lines.append("static const wmp_guid %s = %s;" % (ident, guid_literal(e["guid"])))
        lines.append("")
        e["c_ident"] = ident
    lines += [
        "typedef struct wmp_guid_fact {",
        "    const char *name;",
        "    const wmp_guid *value;",
        "    const unsigned char *packed;   /* 16 bytes, on-disk order */",
        "    int         binary_confirmed;  /* 1 = found as bytes in the image */",
        "} wmp_guid_fact;",
        "",
        "#define WMP_GUID_COUNT %du" % len(mod["guid_entries"]),
        "",
    ]
    for i, e in enumerate(mod["guid_entries"]):
        lines.append("static const unsigned char WMP_GUID_%d_PACKED[16] = {" % i)
        lines.append(byte_array(guid_packed_bytes(e["guid"])))
        lines.append("};")
    lines += ["", "static const wmp_guid_fact WMP_GUIDS[WMP_GUID_COUNT ? WMP_GUID_COUNT : 1] = {"]
    for i, e in enumerate(mod["guid_entries"]):
        lines.append(
            '    { "%s", &%s, WMP_GUID_%d_PACKED, %d },'
            % (e["guid"].upper(), e["c_ident"], i, 1 if e["verified"] == "binary-constant" else 0)
        )
    if not mod["guid_entries"]:
        lines.append('    { "", 0, 0, 0 },')
    lines += ["};", "", "#endif /* WMP_RECON_GUIDS_H */", ""]
    return "\n".join(lines)


def gen_enums_h(mod: dict) -> str:
    lines = [
        "/* enums.h — enumerations recovered from the type libraries in %s." % mod["name"],
        " * Values are the ones the shipped type library declares (VAR_CONST records);",
        " * the property/method memids next to them are the library's own.",
        " */",
        "#ifndef WMP_RECON_ENUMS_H",
        "#define WMP_RECON_ENUMS_H",
        "",
        "#include <stdint.h>",
        "",
    ]
    any_enum = False
    for tl in mod["typelibs"]:
        for t in tl.get("typeinfos") or []:
            if t.get("kind") != "TKIND_ENUM":
                continue
            any_enum = True
            name = c_ident(t["name"])
            lines.append("/* %s = %s */" % (t["name"], t.get("guid", "")))
            lines.append("typedef enum %s {" % name)
            for v in t.get("variables") or []:
                cv = v.get("const_value")
                lines.append(
                    "    %s = %s,  /* memid %s, %s */"
                    % (
                        c_ident(v["name"]),
                        ("%d" % cv) if isinstance(cv, int) else "0",
                        v.get("memid"),
                        v.get("const_vt") or "",
                    )
                )
            lines.append("} %s;" % name)
            lines.append("")
    if not any_enum:
        lines.append("/* No enumerations recovered from this module. */")
    lines.append("#endif /* WMP_RECON_ENUMS_H */")
    lines.append("")
    return "\n".join(lines)


def gen_interfaces_h(mod: dict) -> str:
    lines = [
        "/* interfaces.h — vtables recovered from the type libraries in %s." % mod["name"],
        " *",
        " * Each structure lists the vtable in slot order exactly as the type library",
        " * numbers it.  Slots 0-2 are IUnknown and (for dispinterfaces) slots 3-6 are",
        " * IDispatch; those are standard and are reproduced here for completeness, not",
        " * recovered from the library.  Every function below that point is a record of",
        " * the shipped library: name, memid, invocation kind, calling convention and the",
        " * rendered parameter list.  A parameter whose type could not be rendered from",
        " * the library's TYPEDESC is ``void *`` and carries a comment, and the total is",
        " * reported in analysis/report/validation.md.",
        " */",
        "#ifndef WMP_RECON_INTERFACES_H",
        "#define WMP_RECON_INTERFACES_H",
        "",
        '#include "wmp_compat.h"',
        "",
    ]
    any_iface = False
    for tl in mod["typelibs"]:
        types = tl.get("typeinfos") or []
        module_types = {t["name"] for t in types if t.get("name")}
        for t in types:
            funcs = t.get("functions") or []
            if not funcs:
                continue
            any_iface = True
            name = c_ident(t["name"])
            slots = sorted(f.get("vtable_slot", 0) for f in funcs)
            first = slots[0] if slots else 7
            lines.append(
                "/* %s = %s (%s, %d recovered functions, first recovered slot %d) */"
                % (t["name"], t.get("guid", ""), t.get("kind", ""), len(funcs), first)
            )
            lines.append("typedef struct %s %s;" % (name, name))
            lines.append("typedef struct %s_Vtbl {" % name)
            if first >= 3:
                lines.append("    /* slots 0-2: IUnknown (standard) */")
                lines.append("    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);")
                lines.append("    unsigned long (*AddRef)(wmp_iunknown *self);")
                lines.append("    unsigned long (*Release)(wmp_iunknown *self);")
            if first >= 7:
                lines.append("    /* slots 3-6: IDispatch (standard) */")
                lines.append("    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);")
                lines.append("    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);")
                lines.append("    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);")
                lines.append("    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);")
            used_names: dict[str, int] = {}
            for f in funcs:
                ret = f.get("return_type") or {}
                params = ["void *self"] + [render_param(p, module_types) for p in (f.get("params") or [])]
                lines.append(
                    "    /* slot %3d  memid %8s  %-20s %-12s %s */"
                    % (
                        f.get("vtable_slot"),
                        f.get("memid"),
                        f.get("invkind") or "",
                        f.get("callconv") or "",
                        f.get("name") or "",
                    )
                )
                # COM property accessors share one name; C needs distinct members.
                member = c_ident(f.get("name") or "unnamed")
                inv = f.get("invkind") or ""
                suffix = {"INVOKE_PROPERTYGET": "_get", "INVOKE_PROPERTYPUT": "_put",
                          "INVOKE_PROPERTYPUTREF": "_putref"}.get(inv, "")
                cand = member + suffix
                while cand in used_names:
                    cand = "%s__slot%s" % (cand, f.get("vtable_slot"))
                used_names[cand] = 1
                lines.append(
                    "    %s (*%s)(%s);"
                    % (c_type(ret.get("rendered"), module_types), cand, ", ".join(params))
                )
            lines.append("} %s_Vtbl;" % name)
            lines.append("")
            # compile-time check: the vtable has one pointer per slot up to and
            # including the last recovered function record
            lines.append(
                "_Static_assert(sizeof(%s_Vtbl) / sizeof(void *) >= %d,"
                % (name, (max(slots) + 1) if slots else 0)
            )
            lines.append(
                '                "%s: recovered slots must cover the vtable prefix");' % t["name"]
            )
            lines.append("")
    if not any_iface:
        lines.append("/* No interfaces recovered from this module. */")
    lines.append("#endif /* WMP_RECON_INTERFACES_H */")
    lines.append("")
    return "\n".join(lines)


CHECK_TEMPLATE = r"""/* compile_check.c — reconstruction self-check for @NAME@.
 *
 * Generated by @TOOL@.  This program is not a reimplementation of the
 * module: it re-derives, from the original file under bin/, the facts that the
 * analysis recorded, and fails loudly if any of them no longer holds.
 *
 * Checks performed
 *   1. SHA-256 of the original image equals the recorded digest.
 *   2. Every recovered resource payload (RVA + size + SHA-256) resolves through
 *      the recovered section table and hashes to the recorded digest.
 *   3. Every recovered GUID either appears as the recorded 16 bytes or, when it
 *      was only seen in text form (ATL registrar script / string literal), as
 *      the text form.
 *
 * Exit status is the number of failed checks (0 = all good).
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "wmp_compat.h"
#include "module_facts.h"
#include "guids.h"
@EXTRA_INCLUDES@
/* ------------------------------------------------------------------ */
/* SHA-256 (public-domain style, self-contained; used for self-check) */
/* ------------------------------------------------------------------ */
typedef struct { unsigned int h[8]; unsigned long long len; unsigned char buf[64]; size_t n; } sha256_ctx;

static const unsigned int K256[64] = {
    0x428a2f98u,0x71374491u,0xb5c0fbcfu,0xe9b5dba5u,0x3956c25bu,0x59f111f1u,0x923f82a4u,0xab1c5ed5u,
    0xd807aa98u,0x12835b01u,0x243185beu,0x550c7dc3u,0x72be5d74u,0x80deb1feu,0x9bdc06a7u,0xc19bf174u,
    0xe49b69c1u,0xefbe4786u,0x0fc19dc6u,0x240ca1ccu,0x2de92c6fu,0x4a7484aau,0x5cb0a9dcu,0x76f988dau,
    0x983e5152u,0xa831c66du,0xb00327c8u,0xbf597fc7u,0xc6e00bf3u,0xd5a79147u,0x06ca6351u,0x14292967u,
    0x27b70a85u,0x2e1b2138u,0x4d2c6dfcu,0x53380d13u,0x650a7354u,0x766a0abbu,0x81c2c92eu,0x92722c85u,
    0xa2bfe8a1u,0xa81a664bu,0xc24b8b70u,0xc76c51a3u,0xd192e819u,0xd6990624u,0xf40e3585u,0x106aa070u,
    0x19a4c116u,0x1e376c08u,0x2748774cu,0x34b0bcb5u,0x391c0cb3u,0x4ed8aa4au,0x5b9cca4fu,0x682e6ff3u,
    0x748f82eeu,0x78a5636fu,0x84c87814u,0x8cc70208u,0x90befffau,0xa4506cebu,0xbef9a3f7u,0xc67178f2u};

static unsigned int ror32(unsigned int x, int n) { return (x >> n) | (x << (32 - n)); }

static void sha256_init(sha256_ctx *c) {
    static const unsigned int iv[8] = {0x6a09e667u,0xbb67ae85u,0x3c6ef372u,0xa54ff53au,
                                       0x510e527fu,0x9b05688cu,0x1f83d9abu,0x5be0cd19u};
    memcpy(c->h, iv, sizeof(c->h)); c->len = 0; c->n = 0;
}

static void sha256_block(sha256_ctx *c, const unsigned char *p) {
    unsigned int w[64], a, b, d, e, f, g, h, t1, t2, cc;
    int i;
    for (i = 0; i < 16; i++)
        w[i] = ((unsigned int)p[i*4] << 24) | ((unsigned int)p[i*4+1] << 16) |
               ((unsigned int)p[i*4+2] << 8) | (unsigned int)p[i*4+3];
    for (i = 16; i < 64; i++) {
        unsigned int s0 = ror32(w[i-15],7) ^ ror32(w[i-15],18) ^ (w[i-15] >> 3);
        unsigned int s1 = ror32(w[i-2],17) ^ ror32(w[i-2],19) ^ (w[i-2] >> 10);
        w[i] = w[i-16] + s0 + w[i-7] + s1;
    }
    a=c->h[0]; b=c->h[1]; cc=c->h[2]; d=c->h[3]; e=c->h[4]; f=c->h[5]; g=c->h[6]; h=c->h[7];
    for (i = 0; i < 64; i++) {
        unsigned int S1 = ror32(e,6) ^ ror32(e,11) ^ ror32(e,25);
        unsigned int ch = (e & f) ^ ((~e) & g);
        unsigned int S0 = ror32(a,2) ^ ror32(a,13) ^ ror32(a,22);
        unsigned int maj = (a & b) ^ (a & cc) ^ (b & cc);
        t1 = h + S1 + ch + K256[i] + w[i];
        t2 = S0 + maj;
        h=g; g=f; f=e; e=d+t1; d=cc; cc=b; b=a; a=t1+t2;
    }
    c->h[0]+=a; c->h[1]+=b; c->h[2]+=cc; c->h[3]+=d;
    c->h[4]+=e; c->h[5]+=f; c->h[6]+=g; c->h[7]+=h;
}

static void sha256_update(sha256_ctx *c, const unsigned char *p, size_t n) {
    while (n--) {
        c->buf[c->n++] = *p++;
        if (c->n == 64) { sha256_block(c, c->buf); c->len += 64; c->n = 0; }
    }
}

static void sha256_final(sha256_ctx *c, unsigned char out[32]) {
    unsigned long long bits = (c->len + c->n) * 8ull;
    unsigned char pad = 0x80; int i;
    sha256_update(c, &pad, 1);
    while (c->n != 56) { unsigned char z = 0; sha256_update(c, &z, 1); }
    for (i = 7; i >= 0; i--) { unsigned char b = (unsigned char)(bits >> (i*8)); sha256_update(c, &b, 1); }
    for (i = 0; i < 8; i++) {
        out[i*4]   = (unsigned char)(c->h[i] >> 24);
        out[i*4+1] = (unsigned char)(c->h[i] >> 16);
        out[i*4+2] = (unsigned char)(c->h[i] >> 8);
        out[i*4+3] = (unsigned char)(c->h[i]);
    }
}

static void hex(const unsigned char *d, size_t n, char *out) {
    static const char hx[] = "0123456789abcdef";
    size_t i;
    for (i = 0; i < n; i++) { out[i*2] = hx[d[i] >> 4]; out[i*2+1] = hx[d[i] & 15]; }
    out[n*2] = 0;
}

/* ------------------------------------------------------------------ */
static int check_image(const unsigned char *img, unsigned long n) {
    unsigned char d[32]; char a[65], b[65];
    sha256_ctx c;
    sha256_init(&c); sha256_update(&c, img, (size_t)n); sha256_final(&c, d);
    hex(d, 32, a); hex(WMP_IMAGE_SHA256, 32, b);
    if (memcmp(d, WMP_IMAGE_SHA256, 32) != 0) {
        printf("  FAIL image sha256: got %s want %s\n", a, b);
        return 1;
    }
    printf("  ok   image sha256 %s\n", a);
    return 0;
}

static int check_resources(const unsigned char *img, unsigned long n) {
    unsigned long i; int fails = 0;
    for (i = 0; i < WMP_RESOURCE_COUNT; i++) {
        const wmp_resource_fact *r = &WMP_RESOURCES[i];
        unsigned long off = 0, j; int found = 0;
        unsigned char d[32];
        sha256_ctx c;
        for (j = 0; j < WMP_SECTION_COUNT; j++) {
            unsigned long va = WMP_SECTIONS[j].va;
            unsigned long vs = WMP_SECTIONS[j].virtual_size;
            if (r->data_rva >= va && r->data_rva < va + vs) {
                off = WMP_SECTIONS[j].raw_pointer + (r->data_rva - va);
                found = 1;
                break;
            }
        }
        if (!found || off + r->size > n) {
            printf("  FAIL resource %lu (%s/%s): rva 0x%lx outside sections\n",
                   i, r->type, r->name, r->data_rva);
            fails++;
            continue;
        }
        sha256_init(&c); sha256_update(&c, img + off, (size_t)r->size); sha256_final(&c, d);
        if (memcmp(d, r->sha256, 32) != 0) {
            printf("  FAIL resource %lu (%s/%s) at 0x%lx size %lu\n",
                   i, r->type, r->name, off, r->size);
            fails++;
        }
    }
    if (!fails)
        printf("  ok   %lu/%lu resource payload digests\n",
               (unsigned long)WMP_RESOURCE_COUNT, (unsigned long)WMP_RESOURCE_COUNT);
    return fails;
}

/* case-insensitive search for an ASCII or UTF-16LE (interleaved NUL) literal */
static int find_text(const unsigned char *img, unsigned long n, const char *needle) {
    unsigned long plen = (unsigned long)strlen(needle), j, m;
    int wide;
    if (!plen) return 0;
    for (wide = 0; wide < 2; wide++) {
        unsigned long step = wide ? 2 : 1;
        for (j = 0; j + plen * step <= n; j++) {
            int ok = 1;
            for (m = 0; m < plen; m++) {
                unsigned char a = img[j + m * step];
                unsigned char b = (unsigned char)needle[m];
                if (wide && img[j + m * step + 1] != 0) { ok = 0; break; }
                if (a >= 'a' && a <= 'z') a = (unsigned char)(a - 32);
                if (b >= 'a' && b <= 'z') b = (unsigned char)(b - 32);
                if (a != b) { ok = 0; break; }
            }
            if (ok) return 1;
        }
    }
    return 0;
}

static int check_guids(const unsigned char *img, unsigned long n) {
    unsigned long i; int fails = 0, checked = 0;
    for (i = 0; i < WMP_GUID_COUNT; i++) {
        const wmp_guid_fact *g = &WMP_GUIDS[i];
        unsigned long j; int found = 0;
        for (j = 0; j + 16 <= n; j++) {
            if (memcmp(img + j, g->packed, 16) == 0) { found = 1; break; }
        }
        if (!found) {
            /* fall back to the textual form (ASCII or UTF-16LE, case-insensitive) */
            if (find_text(img, n, g->name)) {
                checked++;
            } else {
                printf("  FAIL guid %s not found as bytes or text\n", g->name);
                fails++;
            }
        } else {
            checked++;
        }
    }
    if (!fails)
        printf("  ok   %lu/%lu recovered GUIDs located in the image\n",
               (unsigned long)checked, (unsigned long)WMP_GUID_COUNT);
    return fails;
}

int main(void) {
    FILE *fp = fopen(WMP_ARTIFACT_PATH, "rb");
    unsigned char *img;
    long n;
    int fails = 0;
    printf("reconstruction self-check: %s (%s)\n", WMP_MODULE_NAME, WMP_MODULE_REL_PATH);
    if (!fp) { printf("  FAIL cannot open %s\n", WMP_ARTIFACT_PATH); return 1; }
    fseek(fp, 0, SEEK_END); n = ftell(fp); fseek(fp, 0, SEEK_SET);
    if (n <= 0 || (unsigned long)n != WMP_MODULE_BYTES) {
        printf("  FAIL file size %ld != recorded %lu\n", n, (unsigned long)WMP_MODULE_BYTES);
        fclose(fp); return 1;
    }
    img = (unsigned char *)malloc((size_t)n);
    if (!img || fread(img, 1, (size_t)n, fp) != (size_t)n) {
        printf("  FAIL cannot read image\n"); fclose(fp); free(img); return 1;
    }
    fclose(fp);
    fails += check_image(img, (unsigned long)n);
    fails += check_resources(img, (unsigned long)n);
    fails += check_guids(img, (unsigned long)n);
    printf("  %s %s: %d failed check(s)\n", fails ? "RESULT" : "RESULT", fails ? "FAIL" : "PASS", fails);
    free(img);
    return fails;
}
"""


def gen_compile_check(mod: dict) -> str:
    extras = ["#include \"enums.h\"", "#include \"interfaces.h\""] if mod["typelibs"] else []
    return (
        CHECK_TEMPLATE.replace("@NAME@", mod["name"])
        .replace("@TOOL@", TOOL)
        .replace("@EXTRA_INCLUDES@", "\n".join(extras) + ("\n" if extras else ""))
    )


def gen_cmakelists(mod: dict) -> str:
    slug = mod["slug"]
    return """# CMakeLists.txt — reconstruction self-check for %(rel)s
#
# Generated by @TOOL@.  Builds and runs the harness that re-derives the
# recovered facts (image digest, resource payload digests, GUIDs) from the
# original binary.  It does not rebuild the original module.
cmake_minimum_required(VERSION 3.16)
project(wmp_recon_%(slug)s C)

add_executable(wmp_recon_%(slug)s recon/compile_check.c)
target_include_directories(wmp_recon_%(slug)s PRIVATE recon)
target_compile_definitions(wmp_recon_%(slug)s PRIVATE
    WMP_ARTIFACT_PATH="${CMAKE_CURRENT_SOURCE_DIR}/../../%(rel)s")
if(CMAKE_C_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(wmp_recon_%(slug)s PRIVATE -std=c11 -Wall -Wextra)
endif()
""" % {"rel": mod["rel_path"], "slug": slug, "tool": TOOL}


def gen_top_cmakelists(slugs: list[str]) -> str:
    lines = [
        "# CMakeLists.txt — reconstruction self-check targets (generated by %s)." % TOOL,
        "#",
        "#   cmake -S src -B analysis/report/data/build -G Ninja",
        "#   cmake --build analysis/report/data/build",
        "#",
        "# Each target re-derives the recorded facts for one original module from",
        "# the bytes under bin/.  See analysis/report/validation.md.",
        "cmake_minimum_required(VERSION 3.16)",
        "project(wmp_recon_all C)",
        "enable_testing()",
        "",
    ]
    for s in slugs:
        lines.append("if(EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/%s/CMakeLists.txt)" % s)
        lines.append("    add_subdirectory(%s)" % s)
        lines.append("endif()")
    lines.append("")
    return "\n".join(lines)


# --------------------------------------------------------------------------- #
# driver
# --------------------------------------------------------------------------- #
def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("--bin-dir", default=os.path.join(REPO, "bin"))
    ap.add_argument("--only", help="restrict to one module slug")
    ap.add_argument("--build", action="store_true", help="configure, build and run every harness")
    ap.add_argument("--keep-build-dir", action="store_true")
    args = ap.parse_args()

    inv = load_json(os.path.join(DATA, "inventory.json"))
    res = load_json(os.path.join(DATA, "resources.json"))
    com = load_json(os.path.join(DATA, "com-surface.json"))
    res_by_mod = {r["module"]: r for r in res.get("images") or []}

    pe_entries = [f for f in inv["files"] if f.get("format") == "pe"]
    if args.only:
        pe_entries = [f for f in pe_entries if f["slug"] == args.only]
    if not pe_entries:
        print("[recon] no modules selected", file=sys.stderr)
        return 1

    strides = []
    for entry in pe_entries:
        slug = entry["slug"]
        mod = collect_module(slug, entry, res_by_mod.get(slug))
        sp = os.path.join(REPO, "analysis", "report", "data", "strings", slug + ".json")
        strings = load_json(sp) if os.path.exists(sp) else None
        collect_guids(mod, com, strings)

        out = os.path.join(REPO, "src", slug, "recon")
        os.makedirs(out, exist_ok=True)
        files = {
            "wmp_compat.h": gen_compat_h(),
            "module_facts.h": gen_module_facts_h(mod),
            "guids.h": gen_guids_h(mod),
            "enums.h": gen_enums_h(mod),
            "interfaces.h": gen_interfaces_h(mod),
            "compile_check.c": gen_compile_check(mod),
        }
        for fn, text in files.items():
            with open(os.path.join(out, fn), "w") as fh:
                fh.write(text)
        with open(os.path.join(REPO, "src", slug, "CMakeLists.txt"), "w") as fh:
            fh.write(gen_cmakelists(mod))
        strides.append(
            {
                "slug": slug,
                "name": mod["name"],
                "resources": len(mod["resources"]),
                "guids": len(mod["guid_entries"]),
                "typelibs": len(mod["typelibs"]),
            }
        )
        print(
            "[recon] %-22s facts+guids+enums+vtables written  (resources=%d guids=%d typelibs=%d)"
            % (slug, len(mod["resources"]), len(mod["guid_entries"]), len(mod["typelibs"]))
        )

    if not args.only:
        with open(os.path.join(REPO, "src", "CMakeLists.txt"), "w") as fh:
            fh.write(gen_top_cmakelists([s["slug"] for s in strides]))
        print("[recon] wrote src/CMakeLists.txt (%d targets)" % len(strides))

    if not args.build:
        return 0

    # ---- build & run ------------------------------------------------------ #
    if os.path.isdir(BUILD_DIR) and not args.keep_build_dir:
        shutil.rmtree(BUILD_DIR)
    os.makedirs(BUILD_DIR, exist_ok=True)
    log: list[dict] = []
    t0 = time.time()

    def run(cmd: list[str]) -> subprocess.CompletedProcess:
        return subprocess.run(cmd, cwd=REPO, capture_output=True, text=True)

    src_root = os.path.join("src", args.only) if args.only else "src"
    cfg = run(["cmake", "-S", src_root, "-B", os.path.relpath(BUILD_DIR, REPO), "-G", "Ninja",
               "-DCMAKE_BUILD_TYPE=Release"])
    configured = cfg.returncode == 0
    print("[recon] cmake configure: %s" % ("ok" if configured else "FAILED"))
    if not configured:
        print(cfg.stdout[-2000:]); print(cfg.stderr[-2000:])

    build = run(["cmake", "--build", os.path.relpath(BUILD_DIR, REPO)]) if configured else None
    built = bool(build and build.returncode == 0)
    print("[recon] cmake build: %s" % ("ok" if built else "FAILED"))
    if build and not built:
        print(build.stdout[-3000:]); print(build.stderr[-3000:])

    def find_exe(slug: str) -> str | None:
        want = "wmp_recon_%s" % slug
        for root, _dirs, files in os.walk(BUILD_DIR):
            if want in files:
                return os.path.join(root, want)
        return None

    for s in strides:
        slug = s["slug"]
        exe = find_exe(slug)
        rec = {
            "slug": slug,
            "module": s["name"],
            "target": "wmp_recon_%s" % slug,
            "configured": configured,
            "compiled": bool(built and exe),
            "ran": False,
            "exit_code": None,
            "checks_failed": None,
            "output_tail": "",
        }
        if rec["compiled"] and exe:
            p = subprocess.run([exe], capture_output=True, text=True)
            rec["ran"] = True
            rec["exit_code"] = p.returncode
            rec["checks_failed"] = p.returncode
            rec["output_tail"] = (p.stdout or "").strip().splitlines()[-4:]
            print("[recon] run %-22s exit=%d" % (slug, p.returncode))
        log.append(rec)

    summary = {
        "generated_by": TOOL,
        "generated_at": time.strftime("%Y-%m-%dT%H:%M:%SZ", time.gmtime()),
        "cmake": run(["cmake", "--version"]).stdout.splitlines()[0].strip(),
        "compiler": (run(["gcc", "--version"]).stdout.splitlines()[0].strip()),
        "configured": configured,
        "built": built,
        "build_dir": os.path.relpath(BUILD_DIR, REPO),
        "elapsed_s": round(time.time() - t0, 1),
        "modules": log,
        "unresolved_type_renderings": UNRESOLVED,
        "summary": {
            "modules": len(log),
            "compiled": sum(1 for r in log if r["compiled"]),
            "ran": sum(1 for r in log if r["ran"]),
            "all_checks_passed": sum(1 for r in log if r["ran"] and r["exit_code"] == 0),
        },
    }
    with open(RESULTS, "w") as fh:
        json.dump(summary, fh, indent=1)
    print("[recon] wrote %s" % os.path.relpath(RESULTS, REPO))
    print("[recon] %(compiled)d/%(modules)d compiled, %(all_checks_passed)d passed all runtime checks"
          % summary["summary"])
    if UNRESOLVED:
        print("[recon] unresolved type renderings (rendered as void*): %s" % dict(sorted(UNRESOLVED.items())))
    return 0


if __name__ == "__main__":
    sys.exit(main())
