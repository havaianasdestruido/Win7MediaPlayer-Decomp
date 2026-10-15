/* sub_1000043c0 @ 0x1000043c0
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x1000043c0  (372 bytes, 25 basic blocks)
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

typedef struct struct_15 {
    char padding_0[160];
    struct struct_16 *field_a0;
    struct struct_17 *field_a8;
    struct struct_18 *field_b0;
    struct struct_19 *field_b8;
    struct struct_20 *field_c0;
    struct struct_21 *field_c8;
    char padding_d0[32];
    unsigned int field_f0;
    unsigned int field_f4;
    unsigned int field_f8;
    unsigned int field_fc;
} struct_15;

typedef struct struct_10 {
    char padding_0[16];
    struct struct_11 *field_10;
    char padding_18[32];
    struct struct_12 *field_38;
} struct_10;

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    struct struct_2 *field_10;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    char padding_18[136];
    struct struct_5 *field_a0;
} struct_3;

typedef struct struct_13 {
    char padding_0[16];
    struct struct_14 *field_10;
} struct_13;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
} struct_8;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
} struct_6;

typedef struct struct_16 {
    struct struct_0 *field_0;
} struct_16;

typedef struct struct_17 {
    struct struct_3 *field_0;
} struct_17;

typedef struct struct_18 {
    struct struct_6 *field_0;
} struct_18;

typedef struct struct_19 {
    struct struct_8 *field_0;
} struct_19;

typedef struct struct_20 {
    struct struct_10 *field_0;
} struct_20;

typedef struct struct_21 {
    struct struct_13 *field_0;
} struct_21;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

extern unsigned long long g_100001790;

long long sub_1000043c0(struct_15 *ptr)
{
    unsigned long v2;  // rax
    struct_10 **v3;  // rcx
    struct_10 **v12;  // rcx
    struct_13 **v13;  // rcx
    struct_3 **v14;  // rcx
    struct_0 **v15;  // rcx
    struct_8 **v16;  // rcx
    struct_6 **v17;  // rcx
    unsigned long long flag;  // r9
    unsigned long long choice;  // r8
    unsigned long long flag2;  // rdx
    struct_3 **v7;  // rcx
    unsigned long v8;  // rdx
    struct_0 **v9;  // rcx
    char *v10;  // r8
    unsigned long long v11;  // rdx
    unsigned long flag3;  // [bp+0x8], Other Possible Types: unsigned long long
    unsigned long long flag4;  // [bp+0x10]

    v2 = ptr->field_f8;
    if (((char)v2 & 64))
        return v2;
    ptr->field_f8 = (unsigned int)v2 | 64;
    v3 = ptr->field_c0;
    if (ptr->field_c0)
    {
        flag = 0;
        choice = 0;
        flag2 = 1;
        ptr->field_c0->field_0->field_38();
    }
    if (ptr->field_f4 != 3452816845)
    {
        if (ptr->field_a0)
        {
            flag4 = 0;
            flag3 = 0;
            ptr->field_a0->field_0->field_0();
        }
        ptr->field_f4 = 3452816845;
    }
    v7 = ptr->field_a8;
    if (ptr->field_a8)
    {
        v8 = ptr->field_fc;
        ptr->field_a8->field_0->field_a0();
    }
    v9 = ptr->field_a0;
    if (ptr->field_a0)
    {
        flag3 = 0;
        v10 = &flag3;
        v11 = &g_100001790;
        ptr->field_a0->field_0->field_0();
    }
    v12 = ptr->field_c0;
    if (v12)
    {
        ptr->field_c0 = NULL;
        *(v12)->field_10();
    }
    ptr->field_f0 = 0;
    v13 = ptr->field_c8;
    if (v13)
    {
        ptr->field_c8 = NULL;
        *(v13)->field_10();
    }
    v14 = ptr->field_a8;
    if (v14)
    {
        ptr->field_a8 = NULL;
        *(v14)->field_10();
    }
    v15 = ptr->field_a0;
    if (v15)
    {
        ptr->field_a0 = NULL;
        *(v15)->field_10();
    }
    v16 = ptr->field_b8;
    if (v16)
    {
        ptr->field_b8 = NULL;
        *(v16)->field_10();
    }
    v17 = ptr->field_b0;
    if (!v17)
    {
        ptr->field_f8 = ptr->field_f8 & 4294967204;
        return (unsigned int)v2 | 64;
    }
    ptr->field_b0 = NULL;
    *(v17)->field_10();
}
