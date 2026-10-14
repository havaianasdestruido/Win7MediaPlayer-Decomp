/* sub_1000047ca @ 0x1000047ca
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x1000047ca  (92 bytes, 14 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a
 *   Evidence: analysis/report/rea-evidence/wmpenc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
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

extern unsigned int g_100007790;
extern struct_2 *g_1000077b0;

int sub_1000047ca(void)
{
    unsigned long v1;  // rax
    unsigned int v2;  // r14d
    unsigned long long *v3;  // rbx
    int v4;  // esi
    long long v5;  // r12
    struct_0 **v6;  // rcx
    unsigned long long flag;  // rcx

    if (v1 == vvar_11{r56|8b})
        goto LABEL_0x1000047cf;
    if (*((g_100007790 == v2 ? v3 + 7 : v3 + 9)) != vvar_11{r56|8b})
        goto LABEL_0x1000047bf;
    if (v4 >= vvar_11{r56|8b})
        sub_10000417c(v5, 0); /* do not return */
    if (g_1000077b0 == vvar_11{r56|8b})
        goto LABEL_0x10000497a;
    if (g_1000077b0->field_0 == vvar_11{r56|8b})
        goto LABEL_0x10000497a;
    v6 = g_1000077b0->field_20;
    if (g_1000077b0->field_20 == vvar_11{r56|8b})
    {
        flag = 0;
        *((int *)&g_1000077b0->field_20) = vvar_11{r56|8b};
        g_1000077b0->field_40();
    }
    g_1000077b0->field_20->field_0->field_10();
}
