/* sub_7ff3712f20b @ 0x7ff3712f20b
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3712f20b  (2278 bytes, 194 basic blocks)
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
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_1;

typedef struct struct_2 {
    unsigned short field_0;
    char padding_2[6];
    unsigned int field_8;
} struct_2;

typedef struct struct_3 {
    unsigned short field_0;
    char padding_2[6];
    long long field_8;
} struct_3;

typedef struct struct_16 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_16;

typedef struct struct_4 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_4;

typedef struct struct_5 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_5;

typedef struct struct_17 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_17;

typedef struct struct_6 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_6;

typedef struct struct_7 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_7;

typedef struct struct_8 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_8;

typedef struct struct_9 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_9;

typedef struct struct_10 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_10;

typedef struct struct_11 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_11;

typedef struct struct_12 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_12;

typedef struct struct_13 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_13;

typedef struct struct_14 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_14;

typedef struct struct_15 {
    unsigned short field_0;
    char padding_2[6];
    unsigned long long field_8;
} struct_15;

extern struct_1 *g_7ff37153600;

int sub_7ff3712f20b(void)
{
    unsigned int v25;  // esi
    unsigned long v26;  // rsi
    char v35;  // r14b
    struct_0 *p;  // r12
    struct_16 *ptr;  // r12, Other Possible Types: struct_17 *, struct_5 *, struct_2 *, unsigned short [5], long long
    unsigned int v38;  // eax
    unsigned long v27;  // r13
    unsigned short addr[5];  // r12
    long long v41;  // r15
    long long v42;  // r15
    long long v43;  // rdi, Other Possible Types: unsigned long
    unsigned int v44;  // esi
    unsigned long long v28;  // rsi
    unsigned int v45;  // esi
    unsigned long v46;  // rsi
    unsigned int v47;  // esi
    unsigned int v48;  // esi
    unsigned int v49;  // esi
    unsigned long long v29;  // rsi
    unsigned short v50;  // di
    unsigned long long v30;  // rsi
    unsigned long v51;  // rdi
    unsigned long v52;  // rsi
    unsigned int v31;  // esi
    unsigned int v53;  // esi
    unsigned int v54;  // esi
    unsigned int v55;  // esi
    unsigned int v32;  // esi
    unsigned long v56;  // rsi
    unsigned int v57;  // esi
    unsigned int v58;  // esi
    unsigned int v33;  // ebx
    unsigned long v1;  // [bp+0x20]
    char v2;  // [bp+0x30]
    unsigned short v3;  // [bp+0x3c]
    unsigned long v4;  // [bp+0x100058]
    unsigned long v5;  // [bp+0x100060]
    unsigned short v6;  // [bp+0x100068]
    unsigned short v7;  // [bp+0x10006a]
    unsigned int v8;  // [bp+0x100078]
    unsigned int v9;  // [bp+0x100090]
    unsigned long v10;  // [bp+0x100098]
    unsigned int v11;  // [bp+0x1000a0]
    unsigned long v12;  // [bp+0x1000a8]
    unsigned long v13;  // [bp+0x1000b0]
    unsigned long v14;  // [bp+0x1000b8]
    unsigned long v15;  // [bp+0x1000c0]
    unsigned long v16;  // [bp+0x1000c8]
    unsigned long v17;  // [bp+0x1000d0]
    unsigned long v18;  // [bp+0x1000d8]
    unsigned long v19;  // [bp+0x1000e0]
    unsigned long v20;  // [bp+0x1000e8]
    unsigned long v21;  // [bp+0x1000f0]
    unsigned long v22;  // [bp+0x1000f8]
    long long v23;  // [bp+0x100108]
    unsigned short v24;  // [bp+0x100118]

    if (v25 <= 4100)
    {
        if (v25 == 4100)
        {
            if (v4 == v43)
                goto LABEL_7ff3712fcb3;
            ptr->field_0 = 8;
            if (v4 != v43)
                8792722900080();
            ptr->field_8 = v43;
            if (true && v4 != v43)
                goto LABEL_7ff3712f612;
        }
        else if (v25 <= 4008)
        {
            if (v25 == 4008)
            {
                v33 = sub_7ff371309e8(vvar_143{r56|8b});
                if (g_7ff37153600 == &g_7ff37153600)
                {
                    if (v33 < (unsigned int)v51)
                        goto LABEL_0x7ff3712fcbf;
                    *((unsigned short *)&p->padding_0[0]) = 8;
                }
                else if (((char)v27 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= v35)
                {
                    v1 = p->field_8;
                    sub_7ff37118abc(g_7ff37153600->field_10); /* do not return */
                }
            }
            v26 = v25 - 4000;
            if (v25 != 4000)
            {
                v28 = v26 - v27;
                if ((unsigned int)v26 == (unsigned int)v27)
                    sub_7ff37132c74(vvar_143{r56|8b}, v23); /* do not return */
                v29 = v28 - v27;
                if ((unsigned int)v28 == (unsigned int)v27)
                {
                    addr[0] = 11;
                    if (g_7ff37153600 != &g_7ff37153600 && ((char)v27 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= v35)
                        sub_7ff37118d04(g_7ff37153600->field_10, 49, v41, &addr[4]); /* do not return */
                    addr[4] = v6;
                    if (g_7ff37153600 != &g_7ff37153600 && ((char)v27 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= v35)
                        sub_7ff3711722c(g_7ff37153600->field_10, 50, v42, 0); /* do not return */
                    if (g_7ff37153600 == &g_7ff37153600)
                        goto LABEL_0x7ff3712fceb;
                    if (!((char)v27 & g_7ff37153600->field_1c))
                        goto LABEL_0x7ff3712fcbf;
                    if (g_7ff37153600->field_19 < v35)
                        goto LABEL_0x7ff3712fcbf;
                }
                v30 = v29 - v27;
                if ((unsigned int)v29 != (unsigned int)v27)
                {
                    v31 = v30 - v27;
                    if ((unsigned int)v30 != (unsigned int)v27)
                    {
                        v32 = v31 - v27;
                        if (v31 == (unsigned int)v27)
                        {
                            ptr->field_0 = 23;
                            v38 = v8;
                            goto LABEL_7ff3712f314;
                        }
                        if (v32 != (unsigned int)v27)
                        {
                            if ((unsigned int)(v32 - v27) != (unsigned int)v27)
                                goto LABEL_7ff3712fb02;
                            v33 = sub_7ff371309e8(vvar_143{r56|8b}, 4007, &p->field_8);
                            if (g_7ff37153600 != &g_7ff37153600 && ((char)v27 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= v35)
                            {
                                v1 = p->field_8;
                                sub_7ff37118abc(g_7ff37153600->field_10); /* do not return */
                            }
                        }
                        else
                        {
                            v33 = sub_7ff371309e8(vvar_143{r56|8b}, 4006, &p->field_8);
                            if (g_7ff37153600 != &g_7ff37153600 && ((char)v27 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= v35)
                            {
                                v1 = p->field_8;
                                sub_7ff37118abc(g_7ff37153600->field_10); /* do not return */
                            }
                        }
                        goto LABEL_7ff3712f381;
                    }
                    else
                    {
                        ptr->field_0 = 23;
                        v38 = v9;
LABEL_7ff3712f314:
                        ptr->field_8 = v38;
                    }
                }
                else
                {
                    v33 = sub_7ff371309e8(vvar_143{r56|8b}, 4003, &p->field_8);
                    if (g_7ff37153600 == &g_7ff37153600)
                    {
                        if (v33 < (unsigned int)v51)
                            goto LABEL_0x7ff3712fcbf;
                        *((unsigned short *)&p->padding_0[0]) = 8;
                    }
                    else if (((char)v27 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= v35)
                    {
                        v1 = p->field_8;
                        sub_7ff37118abc(g_7ff37153600->field_10); /* do not return */
                    }
                    goto LABEL_7ff3712f381;
                }
            }
            else
            {
                if (v23 == v43)
                    goto LABEL_7ff3712fcb3;
                if ((unsigned short)v43 == v24)
                {
                    sub_7ff37134410(&v2);
                    v3 |= 4;
                    if ((int)sub_7ff37134594(&v2, v23, 4294967295) >= (int)v43)
                    {
                        sub_7ff37134d2c(&v2);
                        if (ptr + 8 != v43 && (int)sub_7ff371350b8(&v2) >= (int)v43)
                            ptr->field_0 = 8;
                    }
                    sub_7ff37134a64(&v2);
                }
                else
                {
                    ptr->field_0 = 8;
                    if (v23 != v43)
                        8792722900080();
                    ptr->field_8 = v43;
                    if (true && v23 != v43)
                        goto LABEL_7ff3712f612;
                }
            }
        }
        else
        {
            v44 = v25 - 4009;
            if (v25 == 4009)
            {
                v33 = sub_7ff371309e8(vvar_143{r56|8b});
                if (g_7ff37153600 != &g_7ff37153600 && ((char)v27 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= v35)
                {
                    v1 = p->field_8;
                    sub_7ff37118abc(g_7ff37153600->field_10); /* do not return */
                }
LABEL_7ff3712f381:
                if (v33 < (unsigned int)v51)
                    goto LABEL_0x7ff3712fcbf;
                ptr->field_0 = 8;
            }
            v45 = v44 - v27;
            if (v44 != (unsigned int)v27)
            {
                v46 = v45 - 3;
                if (v45 != 3)
                {
                    v47 = v46 - v27;
                    if ((unsigned int)v46 == (unsigned int)v27)
                    {
                        v33 = sub_7ff37130608(vvar_143{r56|8b}, &p->field_8);
                        if (g_7ff37153600 == &g_7ff37153600)
                        {
                            if (v33 < (unsigned int)v51)
                                goto LABEL_0x7ff3712fcbf;
                            *((unsigned short *)&p->padding_0[0]) = 8;
                        }
                        else if (((char)v27 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= v35)
                        {
                            v1 = p->field_8;
                            sub_7ff37118abc(g_7ff37153600->field_10); /* do not return */
                        }
                    }
                    v48 = v47 - v27;
                    if (v47 == (unsigned int)v27)
                    {
                        v33 = sub_7ff371307f8(vvar_143{r56|8b}, &p->field_8);
                        if (g_7ff37153600 == &g_7ff37153600)
                        {
                            if (v33 < (unsigned int)v51)
                                goto LABEL_0x7ff3712fcbf;
                            *((unsigned short *)&p->padding_0[0]) = 8;
                        }
                        else if (((char)v27 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= v35)
                        {
                            v1 = p->field_8;
                            sub_7ff37118abc(g_7ff37153600->field_10); /* do not return */
                        }
                    }
                    v49 = v48 - v27;
                    if (v48 != (unsigned int)v27)
                    {
                        if (v49 != 3)
                            goto LABEL_7ff3712fb02;
                        if (v14 == v43)
                            goto LABEL_7ff3712fcb3;
                        ptr->field_0 = (unsigned short)v49 + 5;
                        if (v14 != v43)
                            8792722900080();
                        ptr->field_8 = v43;
                        if (true && v14 != v43)
                            goto LABEL_7ff3712f612;
                    }
                    else
                    {
                        if (v13 == v43)
                            goto LABEL_7ff3712fcb3;
                        ptr->field_0 = 8;
                        if (v13 != v43)
                            8792722900080();
                        ptr->field_8 = v43;
                        if (true && v13 != v43)
                            goto LABEL_7ff3712f612;
                    }
                }
                else
                {
                    addr[0] = 11;
                    ptr[4] = v7;
                }
            }
            else
            {
                addr[0] = 11;
                v50 = _INSERT(v43, 0, v11 != (unsigned int)v27);
                ptr[4] = v50 - (unsigned short)v27;
            }
        }
    }
    else
    {
        if (v25 > 4201)
        {
            v56 = v25 - 4300;
            if (v25 != 4300)
            {
                v57 = v56 - v27;
                if ((unsigned int)v56 != (unsigned int)v27)
                {
                    v58 = v57 - v27;
                    if (v57 != (unsigned int)v27)
                    {
                        if (v58 != (unsigned int)v27)
                        {
                            if ((unsigned int)(v58 - v27) != 97)
                            {
LABEL_7ff3712fb02:
                            }
                            else
                            {
                                if (v18 == v43)
                                    goto LABEL_7ff3712fcb3;
                                ptr->field_0 = 8;
                                if (v18 != v43)
                                    8792722900080();
                                ptr->field_8 = v43;
                                if (true && v18 != v43)
                                    goto LABEL_7ff3712f612;
                            }
                        }
                        else
                        {
                            if (v22 == v43)
                                goto LABEL_7ff3712fcb3;
                            ptr->field_0 = 8;
                            if (v22 != v43)
                                8792722900080();
                            ptr->field_8 = v43;
                            if (true && v22 != v43)
                                goto LABEL_7ff3712f612;
                        }
                    }
                    else
                    {
                        if (v21 == v43)
                            goto LABEL_7ff3712fcb3;
                        ptr->field_0 = 8;
                        if (v21 != v43)
                            8792722900080();
                        ptr->field_8 = v43;
                        if (true && v21 != v43)
                            goto LABEL_7ff3712f612;
                    }
                }
                else
                {
                    if (v20 == v43)
                        goto LABEL_7ff3712fcb3;
                    ptr->field_0 = 8;
                    if (v20 != v43)
                        8792722900080();
                    ptr->field_8 = v43;
                    if (true && v20 != v43)
                        goto LABEL_7ff3712f612;
                }
            }
            else
            {
                if (v19 != v43)
                {
                    ptr->field_0 = 8;
                    if (v19 != v43)
                        8792722900080();
                    ptr->field_8 = v43;
                    if (v19 != v43)
LABEL_7ff3712f612:
                }
                else
                {
LABEL_7ff3712fcb3:
                }
            }
        }
        else if (v25 != 4201)
        {
            v52 = v25 - 4101;
            if (v25 != 4101)
            {
                v53 = v52 - v27;
                if ((unsigned int)v52 != (unsigned int)v27)
                {
                    v54 = v53 - v27;
                    if (v53 != (unsigned int)v27)
                    {
                        v55 = v54 - v27;
                        if (v54 != (unsigned int)v27)
                        {
                            if (v55 != 96)
                                goto LABEL_7ff3712fb02;
                            if (v16 == v43)
                                goto LABEL_7ff3712fcb3;
                            ptr->field_0 = v55 - 88;
                            if (v16 != v43)
                                8792722900080();
                            ptr->field_8 = v43;
                            if (true && v16 != v43)
                                goto LABEL_7ff3712f612;
                        }
                        else
                        {
                            if (v15 == v43)
                                goto LABEL_7ff3712fcb3;
                            ptr->field_0 = 8;
                            if (v15 != v43)
                                8792722900080();
                            ptr->field_8 = v43;
                            if (true && v15 != v43)
                                goto LABEL_7ff3712f612;
                        }
                    }
                    else
                    {
                        if (v12 == v43)
                            goto LABEL_7ff3712fcb3;
                        ptr->field_0 = 8;
                        if (v12 != v43)
                            8792722900080();
                        ptr->field_8 = v43;
                        if (true && v12 != v43)
                            goto LABEL_7ff3712f612;
                    }
                }
                else
                {
                    if (v10 == v43)
                        goto LABEL_7ff3712fcb3;
                    ptr->field_0 = 8;
                    if (v10 != v43)
                        8792722900080();
                    ptr->field_8 = v43;
                    if (true && v10 != v43)
                        goto LABEL_7ff3712f612;
                }
            }
            else
            {
                if (v5 == v43)
                    goto LABEL_7ff3712fcb3;
                ptr->field_0 = 8;
                if (v5 != v43)
                    8792722900080();
                ptr->field_8 = v43;
                if (true && v5 != v43)
                    goto LABEL_7ff3712f612;
            }
        }
        else
        {
            if (v17 == v43)
                goto LABEL_7ff3712fcb3;
            ptr->field_0 = 8;
            if (v17 != v43)
                8792722900080();
            ptr->field_8 = v43;
            if (true && v17 != v43)
                goto LABEL_7ff3712f612;
        }
    }
}
