/* sub_7ff37137b93 @ 0x7ff37137b93
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37137b93  (698 bytes, 46 basic blocks)
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

int sub_7ff37137b93(void)
{
    unsigned long long v18;  // rax
    unsigned long long v19;  // r15
    unsigned int v20;  // eax
    unsigned long long v21;  // rdx
    long long v1;  // [bp+0x40]
    long long v2;  // [bp+0x48]
    char v3;  // [bp+0x70]
    char v4;  // [bp+0x80]
    char v5;  // [bp+0xb0]
    char v6;  // [bp+0xd0]
    char v7;  // [bp+0xe0]
    char v8;  // [bp+0x100]
    char v9;  // [bp+0x130]
    char v10;  // [bp+0x150]
    char v11;  // [bp+0x170]
    char v12;  // [bp+0x190]
    char v13;  // [bp+0x1b0]
    unsigned long long v14;  // [bp+0x200]
    unsigned int v15;  // [bp+0x208]
    char v16;  // [bp+0x210]
    char v17;  // [bp+0x220]

    if (v18 == v19)
        goto LABEL_0x7ff37137ff8;
    if ((unsigned int)(v18 - v2 >> 1) >= (unsigned int)v19)
    {
        v14 = v19;
        v15 = v19;
        sub_7ff37134410(&v16);
        sub_7ff37134410(&v13);
        v20 = sub_7ff37134594(&v13, v2, 4294967295);
        if (v20 >= (unsigned int)v19)
        {
            v20 = sub_7ff37140c80(&vvar_46{r136|8b}, &v13);
            if (v20 >= (unsigned int)v19)
            {
                sub_7ff37134410(&v11);
                sub_7ff37134410(&v8);
                sub_7ff37134410(&v10);
                sub_7ff37134410(&v17);
                sub_7ff37134410(&v6);
                sub_7ff37134410(&v9);
                v20 = sub_7ff37134594(&v11, v1, 4294967295);
                if (v20 >= (unsigned int)v19)
                {
                    v20 = sub_7ff37148968(&v11, &v8, &v10, &v17);
                    if (v20 >= (unsigned int)v19)
                    {
                        v20 = sub_7ff37148b94(&v10, L"CONTENTFORMAT", &v6);
                        sub_7ff37134dbc(&v6, "\"");
                        if (v20 >= (unsigned int)v19)
                        {
                            v20 = sub_7ff37148b94(&v17, L"DLNA.ORG_PN", &v9);
                            if (v20 >= (unsigned int)v19 && (unsigned int)v19 > (unsigned int)v19 && v20 >= (unsigned int)v19)
                            {
                                v21 = (int)v19;
                                if (v21 >= v19)
                                    sub_7ff3711849c(2147942487); /* do not return */
                                sub_7ff371344e0(&v12, v21 * 16 + vvar_46{r136|8b});
                                sub_7ff37134410(&v5);
                                sub_7ff37134410(&v4);
                                sub_7ff37134410(&v7);
                                sub_7ff37134410(&v3);
                            }
                        }
                    }
                }
                sub_7ff37134a64(&v9);
                sub_7ff37134a64(&v6);
                sub_7ff37134a64(&v17);
                sub_7ff37134a64(&v10);
                sub_7ff37134a64(&v8);
                sub_7ff37134a64(&v11);
            }
        }
        sub_7ff37134a64(&v13);
        sub_7ff37134a64(&v16);
        sub_7ff3713e160(&vvar_46{r136|8b});
        if (v20 < (unsigned int)v19)
            goto LABEL_0x7ff37138945;
    }
}
