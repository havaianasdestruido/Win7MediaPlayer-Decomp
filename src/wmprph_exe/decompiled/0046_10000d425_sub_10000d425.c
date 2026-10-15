/* sub_10000d425 @ 0x10000d425
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000d425  (82 bytes, 13 basic blocks)
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
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[24];
    struct struct_3 *field_20;
    char padding_28[24];
    struct struct_4 *field_40;
} struct_2;

extern unsigned int g_1000119e0;
extern struct_2 *g_100011a00;

int sub_10000d425(void)
{
    unsigned long v1;  // rax
    unsigned int v2;  // r14d
    unsigned long long *v3;  // rbx
    int v4;  // esi
    struct_0 **v5;  // rcx
    unsigned long long flag;  // rcx

    if (v1 == vvar_11{r56|8b})
        goto LABEL_0x10000d42a;
    if (*((g_1000119e0 == v2 ? v3 + 7 : v3 + 9)) != vvar_11{r56|8b})
        goto LABEL_0x10000d41a;
    if (v4 >= vvar_11{r56|8b})
        goto LABEL_0x10000d484;
    if (g_100011a00 == vvar_11{r56|8b})
        goto LABEL_0x10000d668;
    if (g_100011a00->field_0 == vvar_11{r56|8b})
        goto LABEL_0x10000d668;
    v5 = g_100011a00->field_20;
    if (g_100011a00->field_20 == vvar_11{r56|8b})
    {
        flag = 0;
        *((int *)&g_100011a00->field_20) = vvar_11{r56|8b};
        g_100011a00->field_40();
    }
    g_100011a00->field_20->field_0->field_10();
}
