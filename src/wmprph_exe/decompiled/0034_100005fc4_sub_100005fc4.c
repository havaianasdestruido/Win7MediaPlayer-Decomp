/* sub_100005fc4 @ 0x100005fc4
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100005fc4  (199 bytes, 15 basic blocks)
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
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_5 {
    struct struct_3 *field_0;
} struct_5;

typedef struct struct_10 {
    char padding_0[96];
    struct struct_11 *field_60;
    struct struct_12 *field_68;
} struct_10;

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
} struct_6;

typedef struct struct_8 {
    char padding_0[8];
    struct struct_9 *field_8;
} struct_8;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_11 {
    struct struct_6 *field_0;
} struct_11;

typedef struct struct_12 {
    struct struct_8 *field_0;
} struct_12;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

unsigned int sub_100005fc4(struct_10 *ptr, struct_2 **p, struct_5 **addr, unsigned long long a3, unsigned long long a4)
{
    unsigned long long flag;  // rsi
    struct_6 **v2;  // rcx
    struct_8 **v3;  // rcx

    flag = 0;
    if (!p)
    {
        return 2147500035;
    }
    else if (!addr)
    {
        return 2147500035;
    }
    else if (!a3)
    {
        return 2147500035;
    }
    else if (!a4)
    {
        return 2147500035;
    }
    else if (!ptr->field_60)
    {
        4295028090();
    }
    else if (!ptr->field_68)
    {
        4295028090();
    }
    else
    {
        *(p) = ptr->field_60;
        v2 = ptr->field_60;
        if (ptr->field_60)
            ptr->field_60->field_0->field_8();
        *(addr) = ptr->field_68;
        v3 = ptr->field_68;
        if (!ptr->field_68)
            4296016848();
        ptr->field_68->field_0->field_8();
    }
}
