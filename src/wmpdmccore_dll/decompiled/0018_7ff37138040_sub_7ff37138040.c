/* sub_7ff37138040 @ 0x7ff37138040
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37138040  (725 bytes, 52 basic blocks)
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

int sub_7ff37138040(void)
{
    unsigned long v15;  // rax
    unsigned long v16;  // r15
    unsigned int v17;  // eax
    unsigned int i;  // edi
    unsigned long v19;  // rdx
    unsigned int v20;  // eax
    long long v1;  // [bp+0x40]
    long long v2;  // [bp+0x48]
    unsigned long v3;  // [bp+0xa0]
    unsigned long v4;  // [bp+0xf0]
    char v5;  // [bp+0x110]
    char v6;  // [bp+0x120]
    char v7;  // [bp+0x140]
    unsigned long v8;  // [bp+0x160]
    char v9;  // [bp+0x180]
    char v10;  // [bp+0x1a0]
    unsigned long v11;  // [bp+0x1d0]
    unsigned int v12;  // [bp+0x1d8]
    char v13;  // [bp+0x1e0]
    char v14;  // [bp+0x230]

    if (v15 == v16)
        goto LABEL_0x7ff37138059;
    if ((unsigned int)(v15 - v2 >> 1) >= (unsigned int)v16)
    {
        v11 = v16;
        v12 = v16;
        sub_7ff37134410(&v13);
        sub_7ff37134410(&v10);
        if ((int)sub_7ff37134594(&v10, v2, 4294967295) >= (unsigned int)v16 && (int)sub_7ff37140c80(&v16, &v10) >= (unsigned int)v16)
        {
            sub_7ff37134410(&v9);
            sub_7ff37134410(&v8);
            sub_7ff37134410(&v7);
            sub_7ff37134410(&v14);
            if ((int)sub_7ff37134594(&v9, v1, 4294967295) >= (unsigned int)v16)
            {
                v17 = sub_7ff37148968(&v9, &v8, &v7, &v14);
                if (v17 >= (unsigned int)v16)
                {
                    i = v16;
                    if ((unsigned int)v16 > (unsigned int)v16)
                    {
                        do
                        {
                            if (v17 < (unsigned int)v16)
                                break;
                            v19 = i;
                            if (v19 >= v16)
                                sub_7ff3711849c(2147942487); /* do not return */
                            sub_7ff371344e0(&v6, v19 * 16 + v16);
                            sub_7ff37134410(&v3);
                            sub_7ff37134410(&v4);
                            sub_7ff37134410(&v5);
                            v17 = sub_7ff37148968(&v6, &v3, &v4, &v5);
                            if (v17 >= (unsigned int)v16 && (char)sub_7ff37134390(v3, v8) == 1 && (v20 = (v4 == v16 ? 4294967295 : (int)sub_7ff37134e88(&v7)), (v4 == v16 ? 4294967295 : (int)sub_7ff37134e88(&v7)) >= (unsigned int)v16))
                            {
                                sub_7ff37134a64(&v5);
                                sub_7ff37134a64(&v4);
                                sub_7ff37134a64(&v3);
                                sub_7ff37134a64(&v6);
                                break;
                            }
                            sub_7ff37134a64(&v5);
                            sub_7ff37134a64(&v4);
                            sub_7ff37134a64(&v3);
                            sub_7ff37134a64(&v6);
                            i += 1;
                        } while (i < (unsigned int)v16);
                    }
                }
            }
            sub_7ff37134a64(&v14);
            sub_7ff37134a64(&v7);
            sub_7ff37134a64(&v8);
            sub_7ff37134a64(&v9);
        }
        sub_7ff37134a64(&v10);
    }
}
