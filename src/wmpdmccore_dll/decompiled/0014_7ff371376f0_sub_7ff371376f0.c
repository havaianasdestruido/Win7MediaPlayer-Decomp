/* sub_7ff371376f0 @ 0x7ff371376f0
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff371376f0  (701 bytes, 57 basic blocks)
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

int sub_7ff371376f0(void)
{
    struct_0 *v7;  // rcx
    unsigned long long v8;  // rdx
    long long v9;  // rcx
    int v10;  // ebx
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    unsigned int v3;  // [bp-0x34], Other Possible Types: unsigned short
    char v4;  // [bp-0x30]
    unsigned int v5;  // [bp-0x24], Other Possible Types: unsigned short

    v1 = 18446744073709551614;
    v7 = g_7ff37153600;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
    {
        v0 = v8;
        sub_7ff37118968(g_7ff37153600->field_10, 92, sub_7ff3710c940, v9); /* do not return */
    }
    v10 = 0;
    if (!v9)
    {
        v10 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 93, sub_7ff3710c940, 2147942487); /* do not return */
    }
    if (!v8)
    {
        v10 = -2147024809;
        if (g_7ff37153600 == &g_7ff37153600)
            return;
        if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 94, sub_7ff3710c940, 2147942487); /* do not return */
    }
    else if (*((long long *)v8))
    {
        v10 = -2147024809;
        if (g_7ff37153600 == &g_7ff37153600)
            return;
        if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 95, sub_7ff3710c940, 2147942487); /* do not return */
    }
    else if (v10 >= 0)
    {
        sub_7ff37134410(&v4);
        v5 = (unsigned short)v5 | 4;
        v10 = sub_7ff37134594(&v4, v9, 4294967295);
        if (v10 >= 0)
        {
            sub_7ff37134410(&v2);
            v3 = (unsigned short)v3 | 4;
            if ((char)sub_7ff37134390(v4, L"http-get:*:audio/x-m4a:*") == 1)
            {
                v10 = sub_7ff37134594(&v2, L"http-get:*:audio/mp4:*", 4294967295);
                if (v10 >= 0)
                    v10 = sub_7ff37135018(&v2, v8);
            }
            if ((char)sub_7ff37134390(v4, L"http-get:*:video/MP4V-ES:*") == 1)
            {
                v10 = sub_7ff37134594(&v2, L"http-get:*:video/mp4:*", 4294967295);
                if (v10 >= 0)
                    v10 = sub_7ff37135018(&v2, v8);
            }
            else if ((char)sub_7ff37134390(v4, L"http-get:*:audio/x-aac:*") == 1)
            {
                v10 = sub_7ff37134594(&v2, L"http-get:*:audio/vnd.dlna.adts:*", 4294967295);
                if (v10 >= 0)
                    v10 = sub_7ff37135018(&v2, v8);
            }
            else if ((char)sub_7ff37134390(v4, L"http-get:*:audio/x-wav:*") == 1)
            {
                v10 = sub_7ff37134594(&v2, L"http-get:*:audio/wav:*", 4294967295);
                if (v10 >= 0)
                    v10 = sub_7ff37135018(&v2, v8);
            }
            sub_7ff37134a64(&v2);
        }
        sub_7ff37134a64(&v4);
        v7 = g_7ff37153600;
    }
    if (v7 == &g_7ff37153600)
    {
        return;
    }
    else if (!(v7->field_1c & 1))
    {
        return;
    }
    else if (v7->field_19 >= 5)
    {
        sub_7ff3711722c(v7->field_10, 96, sub_7ff3710c940, v10); /* do not return */
    }
    else
    {
        return;
    }
}
