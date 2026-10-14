/* sub_7ff3711e97d @ 0x7ff3711e97d
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3711e97d  (398 bytes, 37 basic blocks)
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

extern long long g_7ff3710c9d0;
extern struct_0 *g_7ff37153600;

int sub_7ff3711e97d(void)
{
    unsigned long long v6[3];  // r13
    unsigned long long v7;  // rdi
    int v8;  // ebx
    struct_0 *v9;  // r10
    unsigned int v10;  // r12d
    unsigned int v11;  // r12d
    unsigned long long v12;  // r14
    unsigned long long v13[15];  // rsi
    char v0;  // [bp+0x0]
    unsigned long long v2;  // [bp+0x48]
    unsigned int v3;  // [bp+0x68]
    unsigned int v4;  // [bp+0x6c]
    unsigned int v5;  // [bp+0x70]

    v5 &= (unsigned int)v6;
    v3 = 2;
    v4 = 4294967295;
    if (!v7)
    {
        v8 = -2147024809;
        v9 = g_7ff37153600;
        if (g_7ff37153600 != &g_7ff37153600)
        {
            v10 = (unsigned int)v6 + 1;
            if (((char)v10 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
                sub_7ff3711722c(g_7ff37153600->field_10, 179, &g_7ff3710c9d0, 2147942487); /* do not return */
        }
        else
        {
            v10 = 1;
        }
    }
    else if (v7 != v2)
    {
        8792722900160();
    }
    else
    {
        v3 = (unsigned int)&v0;
        v4 = v11;
        v9 = g_7ff37153600;
        v10 = 1;
    }
    if (!v12)
    {
        if (v9 != &g_7ff37153600 && ((char)v10 & v9->field_1c) && v9->field_19 >= 5)
            sub_7ff3711722c(v9->field_10, 180, &g_7ff3710c9d0, 2147942487); /* do not return */
    }
    else
    {
        if (v8 >= 0)
        {
            if (v3 == v10)
            {
                8792722900104();
            }
            else if (v8 >= 0)
            {
                sub_7ff37149ab6(24); /* do not return */
            }
        }
    }
    if (v13[12])
    {
        8792722899448();
    }
    else if (v13[13])
    {
        8792722899448();
    }
    else if (v13[14])
    {
        8792722899448();
    }
    else if (!v6)
    {
        if (v9 != &g_7ff37153600 && ((char)v10 & v9->field_1c) && v9->field_19 >= 5)
            sub_7ff37117208(v9->field_10, 191, &g_7ff3710c9d0); /* do not return */
        8792722899720();
    }
    else if (v6[1])
    {
        8792722899448();
    }
    else if (v6[2])
    {
        8792722899448();
    }
    else
    {
        sub_7ff37149880(v6); /* do not return */
    }
}
