/* sub_10000a878 @ 0x10000a878
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000a878  (166 bytes, 15 basic blocks)
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

typedef struct struct_3 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_3;

typedef struct struct_7 {
    unsigned long long field_0;
    struct struct_8 *field_8;
    char padding_10[32];
    struct struct_9 *field_30;
} struct_7;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
    char padding_18[32];
    struct struct_6 *field_38;
} struct_4;

typedef struct struct_0 {
    unsigned long long field_0;
    struct struct_1 *field_8;
    char padding_10[32];
    struct struct_2 *field_30;
} struct_0;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

unsigned int sub_10000a878(struct_3 *p)
{
    struct_3 *v3;  // rsi
    struct_7 *v4;  // rdi
    char *v5;  // r9
    char *v6;  // r8
    struct_4 **v7;  // rcx
    char *v8;  // rdx
    struct_4 **ptr;  // rcx
    unsigned long v10;  // rdx
    char flag;  // [bp-0x18], Other Possible Types: unsigned long
    struct_4 **choice;  // [bp+0x8], Other Possible Types: unsigned long
    char v2;  // [bp+0x20]

    v3 = p;
    if (!p)
        return 2147942487;
    v4 = p->field_20;
    if (!v4)
    {
        return 0;
    }
    else if (!v4->field_0)
    {
        v5 = &choice;
        v6 = &flag;
        flag = 0;
        choice = NULL;
        if ((int)sub_10000cbb8(p, 0, &flag, &choice) >= 0)
        {
            v7 = choice;
            v8 = &v2;
            *(choice)->field_38();
        }
        ptr = choice;
        if (!ptr)
            4296017360();
        v10 = *(ptr);
        *(ptr)->field_10();
    }
    else if (v4->field_30)
    {
        v4->field_30();
    }
    else
    {
        v4->field_8();
    }
}
