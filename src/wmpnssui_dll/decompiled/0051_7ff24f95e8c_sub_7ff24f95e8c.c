/* sub_7ff24f95e8c @ 0x7ff24f95e8c
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f95e8c  (63 bytes, 6 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[36];
    unsigned int field_24;
} struct_0;

extern char g_7ff24f90000;

struct_0 * sub_7ff24f95e8c(unsigned int a0)
{
    struct_0 *v1;  // rax
    struct_0 *v2;  // rax

    v1 = sub_7ff24f95e00(&g_7ff24f90000);
    if (!(unsigned int)v1)
        return v1;
    v2 = sub_7ff24f95e40(&g_7ff24f90000, a0 - &g_7ff24f90000);
    if (!v2)
        return v2;
    return ~(v2->field_24 >> 31) & 1;
}
