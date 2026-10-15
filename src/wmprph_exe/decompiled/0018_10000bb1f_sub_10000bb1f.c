/* sub_10000bb1f @ 0x10000bb1f
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000bb1f  (205 bytes, 22 basic blocks)
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
    unsigned short field_0;
} struct_0;

extern char g_100002a20;

long long sub_10000bb1f(void)
{
    int v2;  // eax
    long long v3;  // r15
    unsigned int v12;  // eax
    long long v4;  // rbp
    unsigned long v5;  // rbx
    long long v7;  // rbp
    struct_0 **ptr;  // rdi
    unsigned short *v9;  // rsi
    long long v10;  // r8
    int v11;  // r14d
    long long v1;  // [bp+0x20]

    if (v2 != (int)v3)
    {
        if (vvar_61{r56|4b} + 1 < 14)
            goto LABEL_0x10000bb12;
        v4 = v3;
    }
    else
    {
        v4 = *((long long *)&(&g_100002a20)[8 + 16 * v5]);
    }
    v7 = v4;
    if (v7 != v3)
    {
        if ((int)sub_10000af88(ptr, v9) < (int)v3)
            goto LABEL_0x10000bbf1;
        if (*(v9) == 123)
        {
            *((int *)&v1) = v3;
            v10 = v7;
            if (v11 == (int)v3)
            {
                if (sub_10000bc2c(ptr, v9, v10, 0, v1) < (int)v3)
                    goto LABEL_0x10000bbf1;
                else
                    goto LABEL_10000bbbe;
            }
            else if (sub_10000bc2c(ptr, v9, v10, v11, v1) < (int)v3)
            {
                *(ptr) = *(ptr);
                *((int *)&v1) = v3;
                sub_10000bc2c(ptr, v9, v7, 0, v1);
            }
LABEL_10000bbbe:
            v12 = *(ptr)->field_0;
            if (v12 >= 9 && (v12 <= 10 || v12 == 13 || v12 == 32))
                4296016648();
        }
    }
}
