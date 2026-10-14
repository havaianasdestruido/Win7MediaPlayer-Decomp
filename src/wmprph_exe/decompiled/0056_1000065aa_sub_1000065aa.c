/* sub_1000065aa @ 0x1000065aa
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x1000065aa  (137 bytes, 12 basic blocks)
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

typedef struct struct_4 {
    struct struct_0 *field_0;
    char padding_8[160];
    struct struct_5 *field_a8;
    char padding_b0[64];
    unsigned int field_f0;
    char padding_f4[12];
    unsigned int field_100;
} struct_4;

typedef struct struct_11 {
    struct struct_10 *field_0;
} struct_11;

typedef struct struct_6 {
    char padding_0[40];
    struct struct_7 *field_28;
} struct_6;

typedef struct struct_8 {
    char padding_0[64];
    struct struct_9 *field_40;
} struct_8;

typedef struct struct_0 {
    char padding_0[24];
    struct struct_1 *field_18;
} struct_0;

typedef struct struct_5 {
    struct struct_3 *field_0;
} struct_5;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    struct struct_2 *field_0;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern unsigned long long g_100001750;
extern unsigned long long g_100001780;

void sub_1000065aa(void)
{
    struct_4 *ptr;  // rsi
    struct_4 *v3;  // rcx
    struct_4 *v12;  // rcx
    struct_11 **v13;  // rcx
    struct_4 *v14;  // r8
    unsigned long long v15;  // rdx
    struct_11 **v4;  // r9
    unsigned long long flag;  // rcx
    char *v6;  // r8
    unsigned long long v7;  // rdx
    struct_11 **v8;  // rcx
    unsigned long choice;  // [bp+0x50]

    if (((char)(ptr->field_100 >> 17) & 1))
    {
        v3 = ptr;
        ptr->field_0->field_18();
    }
    v4 = ptr->field_a8;
    flag = 0;
    choice = 0;
    if (v4)
    {
        v6 = &choice;
        v7 = &g_100001750;
        v8 = v4;
        *(v4)->field_0();
    }
    else if (!((char)(ptr->field_100 >> 17) & 1))
    {
        v12 = ptr;
        ptr->field_0->field_18();
    }
    else
    {
        v13 = ptr->field_a8;
        ptr->field_f0 = 0;
        v14 = &ptr->padding_b0[16];
        v15 = &g_100001780;
        *(v13)->field_0();
    }
}
