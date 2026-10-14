/* sub_10000d589 @ 0x10000d589
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000d589  (131 bytes, 18 basic blocks)
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
    struct struct_0 *field_0;
    unsigned long long field_8;
    char padding_10[32];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_100001eb0;
extern struct_0 *g_100011140;
extern struct_1 *g_100011a00;

void sub_10000d589(void)
{
    unsigned int v1;  // eax
    struct_0 *ptr;  // rbx
    struct_0 *v3;  // rdi
    char v4;  // r13b

    if (v1 != vvar_34{r56|8b})
        sub_10000d56b(); /* do not return */
    ptr = g_100011140;
    if (g_100011140 != v3)
    {
        if ((v4 & g_100011140->field_3c) && g_100011140->field_39 >= 7)
            sub_1000071f4(g_100011140->field_30, 11, &g_100001eb0); /* do not return */
        if (g_100011140 != v3)
        {
            while (ptr != vvar_34{r56|8b})
            {
                if (ptr->field_8 != vvar_34{r56|8b})
                    4296015920();
                ptr = ptr->field_0;
            }
            g_100011140 = v3;
        }
    }
    if (g_100011a00 != vvar_34{r56|8b} && g_100011a00->field_0 != vvar_34{r56|8b})
        4296017248();
    4296016392();
}
