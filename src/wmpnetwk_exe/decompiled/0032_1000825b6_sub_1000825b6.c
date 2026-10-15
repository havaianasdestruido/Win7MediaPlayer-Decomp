/* sub_1000825b6 @ 0x1000825b6
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000825b6  (750 bytes, 75 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 306467d280e99d0616e839278a4db5bed684f002ae284c3678cabb5251459cb3
 *   Evidence: analysis/report/rea-evidence/wmpnetwk_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[40];
    struct struct_1 *field_28;
} struct_0;

typedef struct struct_2 {
    char padding_0[24];
    unsigned int field_18;
} struct_2;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_5 {
    char padding_0[8];
    unsigned long long field_8;
} struct_5;

typedef struct struct_6 {
    char padding_0[48];
    struct struct_7 *field_30;
} struct_6;

typedef struct struct_8 {
    char padding_0[68];
    unsigned int field_44;
} struct_8;

typedef struct struct_9 {
    char padding_0[64];
    unsigned int field_40;
} struct_9;

typedef struct struct_10 {
    char padding_0[60];
    unsigned int field_3c;
} struct_10;

typedef struct struct_11 {
    char padding_0[56];
    unsigned int field_38;
} struct_11;

typedef struct struct_12 {
    struct struct_13 *field_0;
    char padding_8[84];
    unsigned int field_5c;
} struct_12;

typedef struct struct_14 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_14;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

typedef struct struct_4 {
    unsigned short field_0;
} struct_4;

typedef struct struct_7 {
    unsigned short field_0;
} struct_7;

typedef struct struct_13 {
    unsigned short field_0;
} struct_13;

extern long long g_10001e3d0;
extern long long g_1000225e4;
extern struct_14 *g_100153eb8;

int sub_1000825b6(void)
{
    long long *p;  // rsi
    long long v3;  // rax
    struct_0 *ptr;  // rdi, Other Possible Types: struct_10 *, struct_11 *, struct_12 *, struct_2 *, struct_3 *, struct_5 *, struct_6 *, struct_8 *, struct_9 *, unsigned int [9], unsigned long long [11]
    unsigned short *v10;  // rdx
    unsigned short *v11;  // rbx, Other Possible Types: unsigned long, unsigned long long
    unsigned short *v12;  // rdx
    unsigned int v13;  // ecx
    unsigned int v4;  // r12d
    unsigned int v14;  // ecx
    unsigned int v15;  // ecx
    unsigned long long v16;  // cc_dep2
    unsigned int v17;  // eax
    unsigned long v18;  // 4131
    unsigned int v5;  // ecx
    unsigned short *v19;  // rdx
    struct_14 *v20;  // r13
    unsigned int v6;  // ecx
    unsigned int v7;  // ecx
    unsigned short *v8;  // rdx
    unsigned int v1;  // [bp+0x88]

    *(p) = v3 + 24;
    v1 = v4;
    if (vvar_173{r56|4b} <= 72)
    {
        if (vvar_173{r56|4b} != 72)
        {
            if (vvar_173{r56|4b} > 11)
            {
                v13 = vvar_173{r56|4b} - 12;
                if (vvar_173{r56|4b} != 12)
                {
                    v14 = v13 - v4;
                    if (v13 != v4)
                    {
                        v15 = v14 - v4;
                        if (v14 != v4)
                        {
                            if (v15 != v4)
                            {
                                if (v15 - v4 != v4)
                                    goto LABEL_1000828d8;
                                v16 = ptr[9];
                                if (!ptr[9] && !((v16 = ptr[10], ptr[10])))
                                {
                                    v17 = v11;
                                }
                                else
                                {
                                    v18 = _ccall(15, 0, (unsigned long long)(char)(0 < v16), (unsigned long long)(char)(0 < v16));
                                    v17 = -(0 < v16) + 1 - ((unsigned int)v18 & 1);
                                }
                                if (v17 != (unsigned int)v11)
                                    sub_1000e4508((unsigned long long [11])&ptr[9], p); /* do not return */
                            }
                            else
                            {
                                if (ptr->field_44 != 4294967295)
                                    sub_100039dd4(p, "%"); /* do not return */
                            }
                        }
                        else
                        {
                            if (ptr->field_40 != 4294967295)
                                sub_100039dd4(p, "%"); /* do not return */
                        }
                    }
                    else
                    {
                        if (ptr->field_3c != 4294967295)
                            sub_100039dd4(p, "%"); /* do not return */
                    }
                }
                else
                {
                    if (ptr->field_38 != 4294967295)
                        sub_100039dd4(p, "%"); /* do not return */
                }
            }
            else if (vvar_173{r56|4b} != 11)
            {
                v5 = vvar_173{r56|4b} - 6;
                if (vvar_173{r56|4b} != 6)
                {
                    v6 = v5 - v4;
                    if (v5 != v4)
                    {
                        v7 = v6 - v4;
                        if (v6 != v4)
                        {
                            if (v7 != v4)
                            {
                                if (v7 - v4 != v4)
                                    goto LABEL_1000828d8;
                                v8 = &ptr->field_28->field_0;
                                if (ptr->field_28 != v11)
                                {
                                    do
                                    {
                                        if (false)
                                            break;
                                    } while (*(v8));
                                }
                                sub_1000361b0(p);
                            }
                            else
                            {
                                if (ptr[7] != 4294967295 && ptr[8] != 4294967295)
                                    sub_100039dd4(p, L"%dx%d"); /* do not return */
                            }
                        }
                        else
                        {
                            if (ptr->field_18 != 4294967295)
                                sub_100039dd4(p, "%"); /* do not return */
                        }
                    }
                    else
                    {
                        v10 = &ptr->field_10->field_0;
                        if (ptr->field_10 != v11)
                        {
                            do
                            {
                                if (false)
                                    break;
                            } while (*(v10));
                        }
                        sub_1000361b0(p);
                    }
                }
                else if (ptr->field_8 != 18446744073709551615 && ptr->field_8 != v11)
                {
                    sub_100039dd4(p, L"%I64d"); /* do not return */
                }
            }
            else
            {
                v12 = &ptr->field_30->field_0;
                if (ptr->field_30 != v11)
                {
                    do
                    {
                        if (false)
                            break;
                    } while (*(v12));
                }
                sub_1000361b0(p);
            }
        }
        else
        {
            if (ptr->field_5c != (unsigned int)v11)
            {
                v19 = &ptr->field_0->field_0;
                if (ptr->field_0 != v11)
                {
                    do
                    {
                        if (false)
                            break;
                    } while (*(v19));
                }
                sub_1000361b0(p);
                4297065952();
            }
            else
            {
                sub_100069910(p, &g_1000225e4);
            }
        }
    }
    else
    {
        if (vvar_173{r56|4b} < 78 || vvar_173{r56|4b} > 80)
        {
LABEL_1000828d8:
            if (g_100153eb8 == v20)
            {
                return;
            }
            else if ((g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 2)
            {
                sub_100036510(g_100153eb8->field_10, 71, &g_10001e3d0, vvar_173{r56|4b}); /* do not return */
            }
        }
    }
    if (g_100153eb8 == v20)
    {
        return;
    }
    else if (!((char)v4 & g_100153eb8->field_1c))
    {
        return;
    }
    else if (g_100153eb8->field_19 >= 5)
    {
        sub_1000347a8(g_100153eb8->field_10, 72, &g_10001e3d0, *(p)); /* do not return */
    }
    else
    {
        return;
    }
}
