/* sub_7ff3712dd00 @ 0x7ff3712dd00
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3712dd00  (798 bytes, 55 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff3710c970;
extern struct_0 *g_7ff37153600;

int sub_7ff3712dd00(void)
{
    unsigned long long v12;  // rcx
    long long v13;  // rdx
    long long v14;  // r8
    long long v15;  // r9
    int v16;  // esi
    unsigned long long v18;  // r8
    unsigned long long v19;  // r9
    long long v0;  // [bp-0xe8]
    long long v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp+0x8]
    unsigned int v3;  // [bp+0x18]
    unsigned int flag;  // [bp+0x1c]
    unsigned int v5;  // [bp+0x28]
    unsigned int v6;  // [bp+0x30]
    long long v7;  // [bp+0x38]
    unsigned long long v8;  // [bp+0x40]
    long long v9;  // [bp+0x48]
    long long v10;  // [bp+0x50]
    long long v11;  // [bp+0x58]

    v2 = v12;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1))
    {
        v11 = v11;
        v10 = v10;
        v9 = v9;
        if (g_7ff37153600->field_19 >= 5)
        {
            *((unsigned int *)&v1) = v6;
            *((unsigned int *)&v0) = v5;
            sub_7ff3712cf48(g_7ff37153600->field_10, 39, &g_7ff3710c970, v13, v14, v15, v0, v1, v7, v9, v10, v11); /* do not return */
        }
    }
    v16 = 0;
    if (!v13)
    {
        v16 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 40, &g_7ff3710c970, 2147942487); /* do not return */
    }
    if (!v18)
    {
        v16 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 41, &g_7ff3710c970, 2147942487); /* do not return */
    }
    if (!v19)
    {
        v16 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 42, &g_7ff3710c970, 2147942487); /* do not return */
    }
    if (!v7)
    {
        v16 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 43, &g_7ff3710c970, 2147942487); /* do not return */
    }
    if (!v8)
    {
        v16 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 44, &g_7ff3710c970); /* do not return */
    }
    if (!v9)
    {
        v16 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 45, &g_7ff3710c970, 2147942487); /* do not return */
    }
    if (!v10)
    {
        v16 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 46, &g_7ff3710c970, 2147942487); /* do not return */
    }
    if (!v11)
    {
        v16 = -2147024809;
        if (g_7ff37153600 == &g_7ff37153600)
            return;
        if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 47, &g_7ff3710c970, 2147942487); /* do not return */
    }
    else if (v16 >= 0)
    {
        flag = 0;
        v3 = 6;
        8792722900112();
    }
    if (g_7ff37153600 == &g_7ff37153600)
    {
        return;
    }
    else if (!(g_7ff37153600->field_1c & 1))
    {
        return;
    }
    else if (g_7ff37153600->field_19 >= 5)
    {
        sub_7ff3711722c(g_7ff37153600->field_10, 49, &g_7ff3710c970, v16); /* do not return */
    }
    else
    {
        return;
    }
}
