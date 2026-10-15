/* sub_7ff3713ff6f @ 0x7ff3713ff6f
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3713ff6f  (473 bytes, 35 basic blocks)
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

int sub_7ff3713ff6f(void)
{
    unsigned int v11;  // eax
    unsigned long v12;  // rdi
    unsigned short *v13;  // rsi
    unsigned long long v14;  // rbx
    unsigned long v16;  // rsi
    unsigned long v17;  // rbx
    unsigned int v18;  // edi
    char *v1;  // [bp+0x20]
    unsigned long v2;  // [bp+0x60]
    unsigned int v3;  // [bp+0x70]
    unsigned int v4;  // [bp+0x74]
    unsigned long v5;  // [bp+0x78]
    unsigned long v6;  // [bp+0x98]
    unsigned long long flag;  // [bp+0xa0]
    unsigned long long choice;  // [bp+0xa8]
    char v9;  // [bp+0x2d0]
    unsigned int v10;  // [bp+0x2330]

    if (v11 == (unsigned int)v12)
    {
        if (sub_7ff3713f1a0(vvar_17{r56|8b}, &v9) < 0)
            goto LABEL_0x7ff3714068e;
        if (sub_7ff3713f1a0(vvar_17{r56|8b}, v13) < 0)
            goto LABEL_0x7ff3714068e;
        if (*(v13) == 61)
        {
            if (v4)
            {
                flag = 0;
                choice = 0;
                v6 = v5;
                if ((int)sub_7ff3713f32c(vvar_17{r56|8b}, &v6, &v9, v13) < 0 && v14)
                    8792722899992();
            }
            else
            {
                if (!v10 && v3)
                {
                    v2 = 0;
                    v1 = &v2;
                    8792722899976();
                }
                if ((int)sub_7ff3713f7e0(vvar_17{r56|8b}, v13) < 0)
                    goto LABEL_0x7ff3714068e;
            }
        }
        else
        {
            if (v14)
                8792722899992();
        }
    }
    else
    {
        if (*((short *)v16) != (unsigned short)v12)
        {
            if (*((short *)v16) != 92)
            {
                8792722899848();
            }
            else if (v16 != v12 && v17 != v12)
            {
                8792722899992();
            }
        }
        if (v4 != (unsigned int)v12)
        {
            v2 = v12;
            v1 = &v2;
            8792722899976();
        }
        v18 = v10;
        if (v18)
        {
            v18 = 1;
            v10 = v18;
            sub_7ff37149a6e(); /* do not return */
        }
        v2 = 0;
        v1 = &v2;
        8792722899976();
    }
}
