/* sub_100003188 @ 0x100003188
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100003188  (166 bytes, 12 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    char padding_0[48];
    unsigned short field_30;
} struct_2;

typedef struct struct_0 {
    char padding_0[40];
    struct struct_1 *field_28;
} struct_0;

typedef struct struct_3 {
    char padding_0[152];
    struct struct_4 *field_98;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

int sub_100003188(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, char a15, struct_2 *ptr)
{
    int v3;  // eax
    struct_2 *v4;  // r8
    struct_0 **v13;  // rcx
    struct_2 *v14;  // rdx
    struct_3 **v15;  // rdi
    struct_3 **v16;  // rcx
    unsigned long v5;  // rcx
    unsigned long v6;  // rax
    unsigned long v7;  // cc_ndep
    unsigned long v8;  // 4121
    unsigned long long choice;  // rsi
    unsigned long v10;  // r8
    unsigned long long flag;  // rdx
    struct_0 **v12;  // rdi
    unsigned long long v1;  // [bp+0x100030]
    int v2;  // [bp+0x100038], Other Possible Types: unsigned int

    if (v3 < 0)
        return v3;
    v4 = ptr;
    v5 = ptr->field_30;
    v2 = v5;
    if ((unsigned int)v5)
    {
        v6 = 16 * v5;
        v8 = _ccall(0, 48, 16, v5, v7);
        if ((char)v8)
            v6 = 18446744073709551615;
        4295028054();
    }
    else
    {
        if (v2)
        {
            v2 = 0;
            return -2147024882;
        }
        choice = 0;
        if (v2 <= 0)
        {
            v14 = ptr;
            v1 = 0;
            v16 = v15;
            *(v15)->field_98();
        }
        v10 = &vvar_15;
        flag = 0;
        v13 = v12;
        *(v12)->field_28();
    }
}
