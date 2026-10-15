/* sub_7ff24f93f38 @ 0x7ff24f93f38
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f93f38  (90 bytes, 7 basic blocks)
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
    char padding_18[8];
    struct struct_2 *field_20;
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

void sub_7ff24f93f38(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5, struct_3 **a6, unsigned long a7, unsigned long a8, struct_0 **a9)
{
    int v1;  // eax
    struct_0 **v2;  // rsi
    struct_0 **v3;  // rcx
    char *v4;  // rdx
    struct_0 **v5;  // rcx
    struct_3 **v6;  // rcx
    unsigned long v7;  // r8
    unsigned long long v8;  // rdx

    if (v1 >= (unsigned int)v2)
    {
        v3 = a9;
        a8 = 3;
        v4 = &a8;
        *(a9)->field_20();
    }
    v5 = a9;
    if (a9 != v2)
    {
        *(a9)->field_10();
    }
    else if (v1 >= (unsigned int)v2)
    {
        v6 = a6;
        v7 = &vvar_5;
        v8 = L"Alive";
        *(a6)->field_48();
    }
    else
    {
        8792418812192();
    }
}
