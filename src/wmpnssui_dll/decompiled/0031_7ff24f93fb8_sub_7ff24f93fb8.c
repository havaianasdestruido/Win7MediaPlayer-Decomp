/* sub_7ff24f93fb8 @ 0x7ff24f93fb8
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f93fb8  (100 bytes, 7 basic blocks)
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
    char padding_0[16];
    struct struct_1 *field_10;
    char padding_18[40];
    struct struct_2 *field_40;
} struct_0;

typedef struct struct_3 {
    char padding_0[72];
    struct struct_4 *field_48;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

void sub_7ff24f93fb8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, struct_0 **a5, struct_3 **a6)
{
    struct_0 **v3;  // rsi
    unsigned int v4;  // ebx
    struct_0 **v5;  // rcx
    char *v6;  // rdx
    struct_0 **v7;  // rcx
    struct_3 **v8;  // rcx
    unsigned long v9;  // r8
    unsigned long long v10;  // rdx
    unsigned short v1;  // [bp+0xa0]
    unsigned int v2;  // [bp+0xa8]

    v1 = 19;
    v2 = (unsigned int)v3;
    if (v4 >= (unsigned int)v3)
    {
        v5 = a5;
        v6 = &v1;
        *(a5)->field_40();
    }
    v7 = a5;
    if (a5 != v3)
    {
        *(a5)->field_10();
    }
    else if (v4 >= (unsigned int)v3)
    {
        v8 = a6;
        v9 = &a5;
        v10 = L"FunctionalDMR";
        *(a6)->field_48();
    }
    else
    {
        8792418812192();
    }
}
