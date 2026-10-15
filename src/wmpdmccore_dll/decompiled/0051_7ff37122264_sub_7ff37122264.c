/* sub_7ff37122264 @ 0x7ff37122264
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37122264  (418 bytes, 31 basic blocks)
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

typedef struct struct_1 {
    char padding_0[72];
    unsigned long long field_48;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff3710c9c0;
extern struct_0 *g_7ff37153600;

int sub_7ff37122264(void)
{
    unsigned long long v4;  // r8
    long long v5;  // rdx
    unsigned long long *ptr;  // r8
    unsigned int v8;  // ebx
    struct_1 *v9;  // rcx
    unsigned long long v0;  // [bp-0x58]
    char v1;  // [bp-0x48]
    unsigned short v2;  // [bp-0x3c]

    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
    {
        v0 = v4;
        sub_7ff37118968(g_7ff37153600->field_10, 48, &g_7ff3710c9c0, v5); /* do not return */
    }
    sub_7ff37134410(&v1);
    v2 |= 4;
    if (v5)
    {
        sub_7ff37134594();
        sub_7ff3712232b(&v1, v5, 4294967295);
        return;
    }
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff3711722c(g_7ff37153600->field_10, 49, &g_7ff3710c9c0, 2147942487); /* do not return */
    if (ptr)
    {
        *(ptr) = 0;
        sub_7ff37122369();
        return;
    }
    v8 = 2147942487;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff3711722c(g_7ff37153600->field_10, 50, &g_7ff3710c9c0, 2147942487); /* do not return */
    if (v9->field_48)
        8792722900040();
    v8 = 2147500036;
    if (g_7ff37153600 == &g_7ff37153600)
    {
        sub_7ff37134a64(&v1);
        return;
    }
    else if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
    {
        sub_7ff3711722c(g_7ff37153600->field_10, 51, &g_7ff3710c9c0, 2147500036); /* do not return */
    }
    if (g_7ff37153600 == &g_7ff37153600)
    {
        sub_7ff37134a64(&v1);
        return;
    }
    else if (!(g_7ff37153600->field_1c & 1))
    {
        sub_7ff37134a64(&v1);
        return;
    }
    else if (g_7ff37153600->field_19 >= 5)
    {
        sub_7ff3711722c(g_7ff37153600->field_10, 53, &g_7ff3710c9c0, v8); /* do not return */
    }
    else
    {
        sub_7ff37134a64(&v1);
        return;
    }
}
