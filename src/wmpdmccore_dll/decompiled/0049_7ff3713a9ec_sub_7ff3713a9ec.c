/* sub_7ff3713a9ec @ 0x7ff3713a9ec
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3713a9ec  (463 bytes, 31 basic blocks)
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

extern struct_0 *g_7ff37153600;

int sub_7ff3713a9ec(void)
{
    int v4;  // ebx
    unsigned long long *v5;  // rcx
    unsigned long long *v6;  // rdx
    char *v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x60]
    unsigned long flag;  // [bp+0x10]

    v1 = 18446744073709551614;
    if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
        sub_7ff37117208(g_7ff37153600->field_10, 165, sub_7ff3710c940); /* do not return */
    v4 = 0;
    if (!v5)
    {
        v4 = -2147467261;
        if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 166, sub_7ff3710c940, 2147500035); /* do not return */
    }
    else if (*(v5))
    {
        v4 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 167, sub_7ff3710c940, 2147942487); /* do not return */
    }
    if (!v6)
    {
        v4 = -2147467261;
        if (g_7ff37153600 == &g_7ff37153600)
            return;
        if ((1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 168, sub_7ff3710c940, 2147500035); /* do not return */
    }
    else if (*(v6))
    {
        v4 = -2147024809;
        if (g_7ff37153600 == &g_7ff37153600)
            return;
        if ((1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 169, sub_7ff3710c940, 2147942487); /* do not return */
    }
    else if (v4 >= 0)
    {
        flag = 0;
        v0 = &flag;
        0x7ff37200500();
    }
    if (g_7ff37153600 == &g_7ff37153600)
    {
        return;
    }
    else if (!(1 & g_7ff37153600->field_1c))
    {
        return;
    }
    else if (g_7ff37153600->field_19 >= 5)
    {
        sub_7ff3711722c(g_7ff37153600->field_10, 178, sub_7ff3710c940, v4); /* do not return */
    }
    else
    {
        return;
    }
}
