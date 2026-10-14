/* sub_7ff3712c2d1 @ 0x7ff3712c2d1
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3712c2d1  (553 bytes, 53 basic blocks)
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
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_0;

int sub_7ff3712c2d1(void)
{
    struct_0 *ptr;  // r12
    unsigned long v10;  // rdi
    unsigned int v18;  // esi
    unsigned long v19;  // r14
    unsigned int v20;  // esi
    unsigned int v21;  // esi
    unsigned int v11;  // esi
    unsigned long v12;  // rsi
    unsigned int v13;  // esi
    unsigned int v14;  // esi
    unsigned int v15;  // esi
    unsigned long v1;  // [bp+0x100048]
    unsigned long v2;  // [bp+0x100050]
    unsigned long v3;  // [bp+0x100058]
    unsigned long v4;  // [bp+0x100060]
    unsigned long v5;  // [bp+0x100068]
    unsigned int v6;  // [bp+0x100080]
    unsigned int v7;  // [bp+0x100084]
    unsigned int v8;  // [bp+0x1000fc]

    ptr->field_8 = v10;
    if (v11 > 1007)
    {
        v18 = v11 - 1008;
        if (v11 == 1008)
            sub_7ff3712a514(vvar_45{r56|8b} - 8, &ptr->field_8); /* do not return */
        v20 = v18 - v19;
        if (v18 != (unsigned int)v19)
        {
            v21 = v20 - v19;
            if (v20 == (unsigned int)v19)
            {
                ptr->field_0 = 11;
                *((unsigned short *)&ptr->field_8) = (unsigned short)_INSERT(v10, 0, v6 != (unsigned int)v10) - (unsigned short)v19;
                sub_7ff3712c61e();
                return;
            }
            if (v21 != (unsigned int)v19)
            {
                if ((unsigned int)(v21 - v19) != (unsigned int)v19)
                {
                    sub_7ff3712c61e();
                    return;
                }
                ptr->field_0 = 11;
                *((unsigned short *)&ptr->field_8) = (unsigned short)_INSERT(v10, 0, v7 != (unsigned int)v19) - (unsigned short)v19;
                sub_7ff3712c61e();
                return;
            }
            else
            {
                sub_7ff3712be38(vvar_45{r56|8b} - 8, &ptr->field_8); /* do not return */
            }
        }
        else
        {
            ptr->field_0 = 8;
            if (v5 != v10)
                8792722900080();
            ptr->field_8 = v10;
            if (v5 == v10)
            {
                sub_7ff3712c61e();
                return;
            }
        }
    }
    else if (v11 != 1007)
    {
        v12 = v11 - 1001;
        if (v11 != 1001)
        {
            v13 = v12 - v19;
            if ((unsigned int)v12 != (unsigned int)v19)
            {
                v14 = v13 - v19;
                if (v13 != (unsigned int)v19)
                {
                    v15 = v14 - v19;
                    if (v14 == (unsigned int)v19)
                    {
                        ptr->field_0 = 8;
                        if (v1 != v10)
                            8792722900080();
                        ptr->field_8 = v10;
                        if (v1 == v10)
                        {
                            sub_7ff3712c61e();
                            return;
                        }
                    }
                    else if (v15 != (unsigned int)v19)
                    {
                        if ((unsigned int)(v15 - v19) == (unsigned int)v19)
                        {
                            ptr->field_0 = 11;
                            *((unsigned short *)&ptr->field_8) = (unsigned short)_INSERT(v10, 0, v8 != (unsigned int)v19) - (unsigned short)v19;
                            sub_7ff3712c61e();
                            return;
                        }
                        sub_7ff3712c61e();
                        return;
                    }
                    else
                    {
                        if (sub_7ff37135018(vvar_45{r56|8b} + 104, &ptr->field_8) >= (unsigned int)v10)
                        {
                            ptr->field_0 = 8;
                            sub_7ff3712c61e();
                            return;
                        }
                        sub_7ff3712c61e();
                        return;
                    }
                }
                else
                {
                    ptr->field_0 = 8;
                    if (v4 != v10)
                        8792722900080();
                    ptr->field_8 = v10;
                    if (v4 == v10)
                    {
                        sub_7ff3712c61e();
                        return;
                    }
                }
            }
            else
            {
                ptr->field_0 = 8;
                if (v3 != v10)
                    8792722900080();
                ptr->field_8 = v10;
                if (v3 == v10)
                {
                    sub_7ff3712c61e();
                    return;
                }
            }
        }
        else
        {
            ptr->field_0 = 8;
            if (v2 != v10)
                8792722900080();
            ptr->field_8 = v10;
            if (v2 == v10)
            {
                sub_7ff3712c61e();
                return;
            }
        }
    }
    else
    {
        sub_7ff3712a0f8(vvar_45{r56|8b} - 8, &ptr->field_8); /* do not return */
    }
    sub_7ff3712c61e();
    return;
}
