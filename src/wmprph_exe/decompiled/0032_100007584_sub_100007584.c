/* sub_100007584 @ 0x100007584
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100007584  (181 bytes, 16 basic blocks)
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

typedef struct struct_0 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_0;

typedef struct struct_5 {
    char padding_0[48];
    struct struct_6 *field_30;
    char padding_38[120];
    unsigned long long field_b0;
    char padding_b8[24];
    struct struct_7 *field_d0;
} struct_5;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_6 {
    struct struct_1 *field_0;
} struct_6;

typedef struct struct_7 {
    struct struct_3 *field_0;
} struct_7;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_100001ed0;
extern struct_0 *g_100011140;

void sub_100007584(struct_5 *ptr)
{
    struct_0 **v1;  // rdi
    struct_3 **v2;  // rcx
    unsigned long long v3;  // rdx
    struct_1 **v4;  // rcx

    v1 = &g_100011140;
    if (g_100011140 != &g_100011140)
    {
        if ((g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
            sub_1000071f4(g_100011140->field_30, 12, &g_100001ed0); /* do not return */
        if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
            sub_1000071f4(g_100011140->field_30, 13, &g_100001ed0); /* do not return */
    }
    v2 = ptr->field_d0;
    if (ptr->field_d0)
        ptr->field_d0->field_0->field_10();
    v3 = ptr->field_b0;
    if (ptr->field_b0)
        4296016440();
    sub_10000e1f8(&ptr->padding_38);
    v4 = ptr->field_30;
    if (!ptr->field_30)
        return;
    ptr->field_30->field_0->field_10();
}
