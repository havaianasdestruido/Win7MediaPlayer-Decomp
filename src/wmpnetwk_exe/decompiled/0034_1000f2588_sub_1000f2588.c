/* sub_1000f2588 @ 0x1000f2588
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000f2588  (770 bytes, 73 basic blocks)
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

typedef struct struct_4 {
    struct struct_4 *field_0;
    unsigned int field_8;
    char padding_c[4];
    struct struct_5 *field_10;
    struct struct_3 *field_18;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_0;

typedef struct struct_6 {
    char padding_0[28];
    unsigned short field_1c;
} struct_6;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_3 {
    char padding_0[28];
    unsigned short field_1c;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned int field_8;
} struct_1;

extern long long g_10001dbf8;
extern struct_0 *g_100153eb8;
extern struct_1 *g_100158998;

int sub_1000f2588(void)
{
    struct_4 *v9;  // r8
    unsigned long long v10;  // rdx
    struct_6 *v17;  // rbx
    unsigned long long *p;  // r10
    int v19;  // r9d
    struct_4 *v20;  // r8
    unsigned long long index;  // rdx
    struct_4 *v22;  // r8
    unsigned long long *v23;  // rax
    unsigned long long *v24;  // rax
    unsigned long v26;  // r14
    void* cur;  // rcx
    struct_4 *ptr;  // rbp
    unsigned long pos;  // rax
    unsigned long long *v32;  // rdx
    struct_6 *v33;  // r9
    unsigned long long v34;  // rdx
    unsigned int v12;  // r11d
    unsigned long long v36;  // rdx
    void* v37;  // rax
    unsigned long long v38;  // rdx
    unsigned long long v40;  // rdx
    unsigned int v15;  // ebp
    struct_0 *v16;  // rcx
    unsigned long v1;  // [bp+0x30], Other Possible Types: unsigned long long
    char *v2;  // [bp+0x38]
    long long v3;  // [bp+0x40]
    int <0x1000f2588[is_6]|Stack bp+0x48, 1 B>;  // [bp+0x48]
    struct_6 *v4;  // [bp+0x48]
    unsigned long long v5;  // [bp+0x50]
    unsigned long long v6;  // [bp+0x58]
    char v8;  // [bp+0x5e]

    v9 = NULL;
    if (vvar_344{r56|8b})
    {
        v10 = 0x400;
        cur = &v8 + 2;
        if (v3)
        {
            v9 = NULL;
            v12 = sub_1000f1d78(&v8 + 2, 0x400, L"%s_%s", vvar_344{r56|8b}, v3);
        }
        else
        {
            v12 = 0;
            do
            {
            } while (v10 + 2147482622 && *((short *)(cur + -2 + vvar_344{r56|8b} - &v8)) && (*((short *)cur) = *((short *)(cur + vvar_344{r56|8b} - (&v8 - 2))), cur += 2, v10 -= 1, v10 != 1));
            if (!v10)
            {
                cur -= 2;
                v12 = 2147942522;
            }
            *((unsigned short *)cur) = 0;
        }
        if (v12 < 0)
        {
            if (g_100153eb8 == &g_100153eb8)
            {
                4297065208();
            }
            else if ((1 & g_100153eb8->field_1c))
            {
                sub_10011b6f0(); /* do not return */
            }
            goto LABEL_1000f2a71;
        }
        v2 = &v8 + 2;
        v15 = -(0 < (int)g_100158998[1].field_0);
        ptr = v15;
        if (v15)
        {
            v16 = g_100153eb8;
            while (true)
            {
                v1 = 0;
                if (ptr && &<0x1000f2588[is_6]|Stack bp+0x48, 1 B>)
                {
                    p = &g_100158998->field_0->field_0;
                    if (p)
                    {
                        v19 = 1;
                        if (ptr == 0xffffffff)
                        {
                            index = 0;
                            if (g_100158998->field_8 > 0)
                            {
                                v22 = v9;
                                v23 = p;
                                do
                                {
                                    v24 = v23;
                                    if (*(v24) != v26)
                                    {
                                        ptr = p[index];
                                        break;
                                    }
                                } while ((index += 1, v22 += 1, v23 = v24 + 8, (unsigned int)v22 < g_100158998->field_8));
                            }
                            v20 = NULL;
                            if (ptr == 0xffffffff)
                            {
                                v19 = -2147418113;
                                v20 = NULL;
                                goto LABEL_1000f2761;
                            }
                        }
                        v9 = ptr->field_0;
                        v17 = ptr->field_18;
                        v4 = v17;
                        v1 = ptr->field_10->field_0;
                        if (!v9)
                        {
                            pos = ptr->field_8 + 1;
                            if ((unsigned int)pos < g_100158998->field_8)
                            {
                                v32 = &p[(unsigned int)pos];
                                do
                                {
                                    if (*(v32))
                                    {
                                        v9 = p[pos];
                                        goto LABEL_1000f2749;
                                    }
                                } while ((pos = (unsigned long)(pos + 1), v32 += 8, (unsigned int)pos < g_100158998->field_8));
                            }
                            else
                            {
LABEL_1000f2749:
                                if (!v9)
                                    goto LABEL_1000f2761;
                            }
                        }
                        v19 = 0;
                    }
                    else
                    {
                        v19 = -2147467259;
                    }
                }
                else
                {
                    v19 = -2147024809;
                }
LABEL_1000f2761:
                ptr = v9;
                if (v19 >= 0)
                {
                    if (v17)
                    {
                        v33 = &v17->field_1c;
                        if (v33)
                        {
                            v34 = 0x400;
                            do
                            {
                            } while (*((short *)&v33->padding_0[0]) && (v33 += 2, v34 -= 1, v34 != 1));
                            v36 = v34;
                            if (v36)
                            {
                                v37 = &v8 + 2;
                                v38 = 0x400;
                                v5 = 0x400 - v36;
                                do
                                {
                                } while (*((short *)v37) && (v37 += 2, v38 -= 1, v38 != 1));
                                v40 = v38;
                                v16 = g_100153eb8;
                                if (v40)
                                {
                                    v6 = 0x400 - v40;
                                    if (v5 == v6)
                                        4297067200();
                                }
                                else
                                {
                                    if (g_100153eb8 != &g_100153eb8 && (1 & g_100153eb8->field_1c))
                                        sub_100036510(g_100153eb8->field_10); /* do not return */
                                }
                                v9 = NULL;
                                goto LABEL_1000f2849;
                            }
                            else
                            {
                                if (v16 != &g_100153eb8 && (1 & v16->field_1c))
                                    sub_100036510(v16->field_10); /* do not return */
                            }
                        }
                    }
                    else if (v16 != &g_100153eb8 && (1 & v16->field_1c))
                    {
                        sub_100034784(v16->field_10, 17, &g_10001dbf8); /* do not return */
                    }
LABEL_1000f2a71:
                    4297065208();
                }
                if (v9)
                    break;
LABEL_1000f2849:
                if (!v9)
                    goto LABEL_1000f289b;
            }
            if (v16 != &g_100153eb8 && (1 & v16->field_1c))
                sub_100034784(v16->field_10, 20, &g_10001dbf8); /* do not return */
LABEL_1000f289b:
        }
    }
    sub_10011bd18(2176); /* do not return */
}
