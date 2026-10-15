/* sub_7ff3712fd14 @ 0x7ff3712fd14
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3712fd14  (655 bytes, 51 basic blocks)
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
    char padding_0[248];
    long long field_f8;
    char padding_100[18];
    unsigned short field_112;
    unsigned int field_114;
} struct_1;

typedef struct struct_2 {
    char padding_0[272];
    unsigned short field_110;
} struct_2;

typedef struct struct_3 {
    char padding_0[98];
    unsigned short field_62;
} struct_3;

typedef struct struct_4 {
    char padding_0[136];
    unsigned int field_88;
} struct_4;

extern long long g_7ff3710c960;
extern struct_0 *g_7ff37153600;

int sub_7ff3712fd14(void)
{
    struct_0 *v4;  // rcx
    unsigned long long v5;  // r8
    unsigned int v14;  // esi
    unsigned int choice;  // esi
    unsigned short v16;  // ax
    struct_1 *ptr;  // rcx
    unsigned long v18;  // rax
    unsigned int v6;  // edx
    int v7;  // ebx
    void* p;  // r8
    unsigned int v10;  // esi
    unsigned int v11;  // esi
    unsigned int flag;  // esi
    unsigned int flag2;  // esi
    unsigned long long v0;  // [bp-0x28]
    char v1;  // [bp-0x18]
    unsigned short v2;  // [bp-0xc]

    v4 = g_7ff37153600;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
    {
        v0 = v5;
        sub_7ff37118bfc(g_7ff37153600->field_10, 31, &g_7ff3710c960, v6); /* do not return */
    }
    v7 = 0;
    if (!p)
    {
        v7 = -2147024809;
        if (g_7ff37153600 == &g_7ff37153600)
        {
            return;
        }
        else if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        {
            sub_7ff3711722c(g_7ff37153600->field_10, 32, &g_7ff3710c960, 2147942487); /* do not return */
        }
    }
    else
    {
        v10 = v6 - 4000;
        if (v6 != 4000)
        {
            v11 = v10 - 4;
            if (v10 != 4)
            {
                flag = v11 - 7;
                if (v11 != 7)
                {
                    flag2 = flag - 1;
                    if (flag != 1)
                    {
                        v14 = flag2 - 1;
                        if (flag2 != 1)
                        {
                            choice = v14 - 4;
                            if (v14 != 4)
                            {
                                if (choice == 1 && (unsigned short)choice + 10 == *((short *)p))
                                {
                                    v16 = (short)p[8];
                                    ptr->field_112 = v16;
                                    if (v16 == 65535 && !ptr->field_114 && ptr->field_f8)
                                    {
                                        sub_7ff37134410(&v1);
                                        v2 |= 4;
                                        v7 = sub_7ff37134594(&v1, ptr->field_f8, 4294967295);
                                        if (v7 >= 0)
                                            sub_7ff37130da0(ptr, v1, ptr->field_112); /* do not return */
                                        sub_7ff37134a64(&v1);
                                        v4 = g_7ff37153600;
                                        goto LABEL_7ff37130045;
                                        goto LABEL_7ff37130045;
                                    }
                                }
                            }
                            else
                            {
                                if (*((short *)p) == 11)
                                {
                                    *((short *)&ptr->padding_100[16]) = (short)p[8];
                                    goto LABEL_7ff3712fdbd;
                                }
                            }
                        }
                        else if (*((short *)p) == 11)
                        {
                            *((short *)&ptr->padding_0[98]) = (short)p[8];
                            goto LABEL_7ff3712fdbd;
                        }
LABEL_7ff37130039:
                        v7 = -2147024809;
                    }
                    else
                    {
                        if (8 != *((short *)p))
                            goto LABEL_7ff37130039;
                        if ((long long)p[8] != *((long long *)&ptr->padding_0[64]))
                            8792722900160();
                    }
                }
                else
                {
                    if (8 != *((short *)p))
                        goto LABEL_7ff37130039;
                    if ((long long)p[8] != *((long long *)&ptr->padding_0[72]))
                        8792722900160();
                }
            }
            else
            {
                if (*((short *)p) != 23 || (v18 = (unsigned long)(unsigned long long)(unsigned int)(int)p[8], v18 >= *((long long *)&ptr->padding_0[112])))
                    goto LABEL_7ff37130039;
                *((unsigned int *)&ptr->padding_0[136]) = v18;
LABEL_7ff3712fdbd:
                v4 = g_7ff37153600;
            }
        }
        else
        {
            if (*((short *)p) == 8)
                sub_7ff37130da0(ptr, (long long)p[8], 0); /* do not return */
            goto LABEL_7ff37130039;
        }
    }
LABEL_7ff37130045:
    if (v4 == &g_7ff37153600)
    {
        return;
    }
    else if (!(v4->field_1c & 1))
    {
        return;
    }
    else if (v4->field_19 >= 5)
    {
        sub_7ff3711722c(v4->field_10, 35, &g_7ff3710c960, v7); /* do not return */
    }
    else
    {
        return;
    }
}
