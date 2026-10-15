/* sub_100007798 @ 0x100007798
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100007798  (224 bytes, 17 basic blocks)
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
    struct struct_3 *field_30;
    char padding_38[24];
    unsigned long long field_50;
    unsigned long long field_58;
    unsigned long long field_60;
    char padding_68[16];
    unsigned long long field_78;
} struct_2;

typedef struct struct_5 {
    char padding_0[24];
    struct struct_6 *field_18;
} struct_5;

typedef struct struct_9 {
    char padding_0[16];
    struct struct_10 *field_10;
} struct_9;

typedef struct struct_7 {
    char padding_0[16];
    struct struct_8 *field_10;
} struct_7;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_4;

extern long long g_100001ed0;
extern struct_4 *g_100011140;

void sub_100007798(struct_2 *ptr)
{
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // r12
    struct_2 *v9;  // rdi
    unsigned long long flag;  // rcx
    unsigned long long v11;  // rsi
    unsigned long long flag2;  // rdx
    unsigned long long v0;  // [bp-0x8]
    unsigned long choice;  // [bp+0x8], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp+0x10]
    unsigned long long v3;  // [bp+0x18]
    unsigned long long v4;  // [bp+0x20]

    v2 = v5;
    v3 = v6;
    v4 = v7;
    v0 = v8;
    v9 = ptr;
    if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
        sub_1000071f4(g_100011140->field_30, 16, &g_100001ed0); /* do not return */
    flag = 0;
    choice = 0;
    if (&choice)
    {
        choice = 0;
        4296016904();
    }
    v11 = 2147500035;
    flag2 = 0;
    (*((long long *)(*((long long *)NULL) + 24)))();
}
