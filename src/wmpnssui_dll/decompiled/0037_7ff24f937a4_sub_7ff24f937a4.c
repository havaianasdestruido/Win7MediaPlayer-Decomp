/* sub_7ff24f937a4 @ 0x7ff24f937a4
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f937a4  (125 bytes, 6 basic blocks)
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
    char padding_0[24];
    struct struct_1 *field_18;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

void sub_7ff24f937a4(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, struct_0 **a7, int a8)
{
    int v3;  // eax
    int v4;  // r14d
    struct_0 **v5;  // rcx
    unsigned long v6;  // rdx
    unsigned long v1;  // [bp+0x20]
    char v2;  // [bp+0x64], Other Possible Types: unsigned int

    if (v3 < v4)
    {
        if (a8 == v4)
            goto LABEL_0x7ff24f938e2;
        if (sub_7ff24f953a0() != v4)
            goto LABEL_0x7ff24f938e2;
        a4 = &v2;
        v1 = &a8;
        a8 = v4;
        a7 = 4;
        v2 = 4;
        8792418812408();
    }
    v5 = a7;
    v6 = &a8;
    *(a7)->field_18();
}
