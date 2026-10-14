/* sub_100008b48 @ 0x100008b48
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100008b48  (231 bytes, 14 basic blocks)
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
    char padding_0[64];
    struct struct_1 *field_40;
} struct_3;

typedef struct struct_8 {
    struct struct_9 *field_0;
    char padding_8[40];
    struct struct_8 *field_30;
} struct_8;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
} struct_5;

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[40];
    struct struct_1 *field_30;
} struct_1;

typedef struct struct_9 {
    struct struct_7 *field_0;
} struct_9;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_4 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_4;

extern long long g_100001ed0;
extern unsigned long long g_100002748;
extern struct_4 *g_100011140;

unsigned long long sub_100008b48(struct_3 *p, unsigned long a1, unsigned long a2, unsigned long long a3, unsigned int *ptr)
{
    unsigned long long v2;  // rsi
    struct_3 *v3;  // rdi
    struct_8 *cur;  // r9
    unsigned long long choice;  // rcx
    char *v6;  // r8
    unsigned long long v7;  // rdx
    struct_8 *v8;  // rcx
    unsigned long long flag;  // [bp-0x28]
    unsigned long flag2;  // [bp+0x8]

    v2 = a3;
    v3 = p;
    if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 7)
        sub_1000071f4(g_100011140->field_30, 44, &g_100001ed0); /* do not return */
    cur = p->field_40;
    flag = 0;
    choice = 0;
    *(ptr) = 0;
    flag2 = 0;
    if (cur)
    {
        cur = cur->field_30;
        if (cur)
        {
            v6 = &flag2;
            v7 = &g_100002748;
            v8 = cur;
            cur->field_0->field_0();
        }
    }
    if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 7)
        sub_1000071f4(g_100011140->field_30, 45, &g_100001ed0); /* do not return */
    return flag;
}
