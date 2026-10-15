/* sub_7ff3713c804 @ 0x7ff3713c804
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3713c804  (431 bytes, 30 basic blocks)
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

typedef struct struct_1 {
    long long field_0;
    long long field_8;
    unsigned long long field_10;
} struct_1;

extern struct_0 *g_7ff37153600;

int sub_7ff3713c804(void)
{
    unsigned long long v5;  // rbx
    long long v6;  // rcx
    int v8;  // edi
    struct_0 *v9;  // rcx
    struct_1 *ptr;  // rdx
    unsigned long long v0;  // [bp-0x80]
    char v1;  // [bp-0x78]
    unsigned int v2;  // [bp-0x6c], Other Possible Types: unsigned short
    unsigned long long v3;  // [bp-0x8]

    v3 = v5;
    v0 = 18446744073709551614;
    if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118638(g_7ff37153600->field_10, 211, sub_7ff3710c940, v6); /* do not return */
    sub_7ff37134410(&v1);
    v2 = (unsigned short)v2 | 4;
    if (!v6)
    {
        v8 = -2147024809;
        v9 = g_7ff37153600;
        if (g_7ff37153600 == &g_7ff37153600)
        {
            sub_7ff37134a64(&v1);
            return;
        }
        else if ((1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 2)
        {
            sub_7ff3711722c(g_7ff37153600->field_10, 212, sub_7ff3710c940, 2147942487); /* do not return */
        }
    }
    else
    {
        v8 = sub_7ff37134594();
        if (ptr->field_0)
        {
            sub_7ff37120348(ptr->field_0, ptr->field_8);
            8792722899208();
        }
        ptr->field_8 = 0;
        ptr->field_10 = 0;
        if (v8 < 0)
        {
            v9 = g_7ff37153600;
        }
        else if ((int)sub_7ff37134e88(&v1, L"uuid:") != 4294967295)
        {
            if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
                sub_7ff37118638(g_7ff37153600->field_10, 213, sub_7ff3710c940, v1); /* do not return */
            8792722899336();
        }
        else
        {
            sub_7ff3713c9ba(); /* do not return */
        }
    }
    if (v9 == &g_7ff37153600)
    {
        sub_7ff37134a64(&v1);
        return;
    }
    else if (!(1 & v9->field_1c))
    {
        sub_7ff37134a64(&v1);
        return;
    }
    else if (v9->field_19 >= 5)
    {
        sub_7ff3711722c(v9->field_10, 226, sub_7ff3710c940, v8); /* do not return */
    }
    else
    {
        sub_7ff37134a64(&v1);
        return;
    }
}
