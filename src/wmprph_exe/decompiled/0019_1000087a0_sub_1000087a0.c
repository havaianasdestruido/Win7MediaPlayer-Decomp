/* sub_1000087a0 @ 0x1000087a0
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x1000087a0  (240 bytes, 20 basic blocks)
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
    char padding_0[192];
    struct struct_4 *field_c0;
} struct_3;

typedef struct struct_8 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_8;

typedef struct struct_5 {
    struct struct_6 *field_0;
    char padding_8[8];
    struct struct_7 *field_10;
} struct_5;

typedef struct struct_9 {
    char padding_0[8];
    struct struct_10 *field_8;
} struct_9;

typedef struct struct_11 {
    char padding_0[16];
    struct struct_12 *field_10;
} struct_11;

typedef struct struct_4 {
    struct struct_0 *field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    struct struct_2 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_100001ed0;
extern unsigned long long g_100002798;
extern struct_8 *g_100011140;

unsigned long long sub_1000087a0(struct_3 *a0, struct_5 **a1)
{
    struct_3 *v2;  // rsi
    struct_8 *v3;  // rax
    unsigned long long choice;  // rcx
    char *v5;  // r8
    unsigned long long v6;  // rdx
    struct_5 **v7;  // rcx
    struct_3 *ptr;  // rbx
    unsigned long long flag;  // rdi
    struct_5 **v10;  // rcx
    unsigned long flag2;  // [bp+0x10]

    v2 = a0;
    v3 = g_100011140;
    if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
        sub_100007388(g_100011140->field_30, 36, &g_100001ed0, a1); /* do not return */
    choice = 0;
    flag2 = 0;
    if (a1)
    {
        v5 = &flag2;
        v6 = &g_100002798;
        v7 = a1;
        *(a1)->field_0();
    }
    ptr = &a0->field_c0;
    flag = 0;
    if (ptr)
    {
        a1 = *((long long *)&ptr->padding_0[0]);
        if (a1)
        {
            v10 = a1;
            *(a1)->field_10();
        }
        *((struct_5 ***)&ptr->padding_0[0]) = NULL;
        v3 = g_100011140;
    }
    if (v3 == &g_100011140 || !(v3->field_3c & 1) || v3->field_39 < 5)
        return 0;
    sub_1000071f4(v3->field_30, 37, &g_100001ed0); /* do not return */
    return 0;
}
