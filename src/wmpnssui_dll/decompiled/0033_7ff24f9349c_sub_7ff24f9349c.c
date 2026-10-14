/* sub_7ff24f9349c @ 0x7ff24f9349c
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f9349c  (89 bytes, 7 basic blocks)
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
    char padding_0[28];
    unsigned int field_1c;
    unsigned long long field_20;
} struct_0;

unsigned int sub_7ff24f9349c(struct_0 *ptr, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long long *p)
{
    unsigned int v1;  // ebx

    v1 = 0;
    if (a1 != 279)
    {
        v1 = 2147500033;
    }
    else if (ptr->field_1c)
    {
        ptr->field_1c = 0;
        ptr->field_20 = a2;
        8792418812320();
    }
    if (p)
        *(p) = 0;
    return v1;
}
