/* sub_1000bd0b7 @ 0x1000bd0b7
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000bd0b7  (2848 bytes, 224 basic blocks)
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

typedef struct struct_3 {
    struct struct_2 *field_0;
    char padding_8[8];
    long long field_10;
} struct_3;

typedef struct struct_2 {
    char padding_0[16];
    unsigned long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
} struct_0;

typedef struct struct_1 {
    struct struct_0 *field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
} struct_1;

extern long long g_10001dcb8;
extern struct_3 g_100153eb8;
extern struct_1 g_1001547c0;

int sub_1000bd0b7(void)
{
    struct_3 *ptr;  // rdi
    char v35;  // bl
    long long v44;  // rax
    long long v45;  // rax
    long long v46;  // rax
    long long v48;  // rcx
    long long v50;  // rax
    long long v51;  // rax
    long long v52;  // rax
    char v36;  // r15b
    long long v53;  // rax
    long long v54;  // rax
    long long v56;  // rax
    long long v57;  // rax
    long long v58;  // rax
    long long v59;  // rax
    long long v60;  // rax
    long long v61;  // rax
    long long v62;  // rax
    unsigned long v37;  // rsi
    long long v63;  // rax
    long long v64;  // rax
    long long v65;  // rax
    long long v66;  // rax
    unsigned long v68;  // rsi
    unsigned int v38;  // eax
    unsigned long v40;  // rsi
    long long v41;  // r12
    long long v42;  // rax
    long long v43;  // rax
    long long v1;  // [bp+0x20]
    long long v2;  // [bp+0x28]
    long long v3;  // [bp+0x30]
    long long v4;  // [bp+0x38]
    unsigned short v5;  // [bp+0x40]
    void* v6;  // [bp+0x48]
    int v7;  // [bp+0x10000c]
    unsigned int v8;  // [bp+0x10001c]
    unsigned int v9;  // [bp+0x100040]
    unsigned int v10;  // [bp+0x100044]
    unsigned int v11;  // [bp+0x100048]
    unsigned int v12;  // [bp+0x10004c]
    unsigned int v13;  // [bp+0x100050]
    unsigned int v14;  // [bp+0x100054]
    unsigned int v15;  // [bp+0x100060]
    unsigned int v16;  // [bp+0x100064]
    unsigned int v17;  // [bp+0x100068]
    unsigned int v18;  // [bp+0x10006c]
    unsigned int v19;  // [bp+0x100070]
    unsigned int v20;  // [bp+0x100074]
    unsigned int v21;  // [bp+0x100078]
    unsigned int v22;  // [bp+0x10007c]
    unsigned int v23;  // [bp+0x100080]
    unsigned int v24;  // [bp+0x100084]
    unsigned int v25;  // [bp+0x100088]
    unsigned int v26;  // [bp+0x10008c]
    char v27;  // [bp+0x100090]
    char v28;  // [bp+0x100091]
    char v29;  // [bp+0x100092]
    int v30;  // [bp+0x100094]
    int v31;  // [bp+0x1000a4]
    unsigned int v32;  // [bp+0x1000b4]
    unsigned int v33;  // [bp+0x1000b8]

    ptr = g_100153eb8.field_0;
    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
    {
        *((unsigned int *)&v4) = v5;
        *((unsigned int *)&v3) = (short)(&g_1001547c0.field_0)[1 + v37];
        *((unsigned int *)&v2) = v38;
        *((unsigned int *)&v1) = (&g_1001547c0.field_0)[v37]->field_10;
        sub_1000ba714(g_100153eb8.field_0->field_10, 80, &g_10001dcb8, (&g_1001547c0.field_0)[v37], v1, v2, v3, v4); /* do not return */
    }
    if (!v38 && v5)
    {
        if ((short)(&g_1001547c0.field_0)[1 + v40] != v5)
        {
            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v35)
            {
                *((unsigned int *)&v3) = v5;
                *((unsigned int *)&v2) = (short)(&g_1001547c0.field_0)[1 + v40];
                *((unsigned int *)&v1) = (&g_1001547c0.field_0)[v40]->field_10;
                sub_1000ba6b0(g_100153eb8.field_0->field_10, 81, &g_10001dcb8, (&g_1001547c0.field_0)[v40], v1, v2, v3); /* do not return */
            }
        }
        else
        {
            if (v41 <= 16)
            {
                if (v41 == 16)
                {
                    v20 = *((unsigned int *)&v6);
                    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                        sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                }
                else if (v41 > 8)
                {
                    v50 = v41 - 9;
                    if (v41 != 9)
                    {
                        v51 = v50 - 1;
                        if (v50 != 1)
                        {
                            v52 = v51 - 1;
                            if (v51 != 1)
                            {
                                v53 = v52 - 1;
                                if (v52 != 1)
                                {
                                    v54 = v53 - 1;
                                    if (v53 != 1)
                                    {
                                        if (v54 != 1)
                                        {
                                            if (v54 - 1 != 1)
                                                goto LABEL_1000bd9af;
                                            v19 = *((unsigned int *)&v6);
                                            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                                sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                        }
                                        else
                                        {
                                            v18 = *((unsigned int *)&v6);
                                            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                                sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                        }
                                    }
                                    else
                                    {
                                        v17 = *((unsigned int *)&v6);
                                        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                            sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                    }
                                }
                                else
                                {
                                    v16 = *((unsigned int *)&v6);
                                    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                        sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                }
                            }
                            else
                            {
                                v15 = *((unsigned int *)&v6);
                                if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                    sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                            }
                        }
                        else
                        {
                            if (v6)
                            {
                                do
                                {
                                    if (false)
                                        break;
                                } while (*((short *)v6));
                            }
                            sub_1000361b0(vvar_301{r56|8b} + 80);
                            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                sub_1000347a8(g_100153eb8.field_0->field_10); /* do not return */
                        }
                    }
                    else
                    {
                        v13 = 0 != *((unsigned short *)&v6);
                        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                            sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                    }
                }
                else if (v41 == 8)
                {
                    v12 = 0 != *((unsigned short *)&v6);
                    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                        sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                }
                else if (v41)
                {
                    v42 = v41 - 1;
                    if (v41 != 1)
                    {
                        v43 = v42 - 1;
                        if (v42 != 1)
                        {
                            v44 = v43 - 1;
                            if (v43 != 1)
                            {
                                v45 = v44 - 1;
                                if (v44 != 1)
                                {
                                    v46 = v45 - 1;
                                    if (v45 == 1)
                                    {
                                        if (*((unsigned short *)&v6))
                                        {
                                            v9 = 0;
                                            ptr = g_100153eb8.field_0;
                                        }
                                        if (ptr != &g_100153eb8.field_0 && (v35 & *((char *)&ptr[1].field_0 + 4)) && *((char *)&ptr[1].field_0 + 1) >= v36)
                                            sub_100036510(v48); /* do not return */
                                    }
                                    else if (v46 != 1)
                                    {
                                        if (v46 - 1 != 1)
                                            goto LABEL_1000bd9af;
                                        v11 = 0 != *((unsigned short *)&v6);
                                        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                            sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                    }
                                    else
                                    {
                                        v10 = 0 != *((unsigned short *)&v6);
                                        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                            sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                    }
                                }
                                else
                                {
                                    if (*((unsigned short *)&v6))
                                    {
                                        v9 = 1;
                                        ptr = g_100153eb8.field_0;
                                    }
                                    if (ptr != &g_100153eb8.field_0 && (v35 & *((char *)&ptr[1].field_0 + 4)) && *((char *)&ptr[1].field_0 + 1) >= v36)
                                    {
                                        v48 = ptr->field_10;
                                        sub_100036510(v48); /* do not return */
                                    }
                                }
                            }
                            else
                            {
                                if (v6)
                                {
                                    do
                                    {
                                        if (false)
                                            break;
                                    } while (*((short *)v6));
                                }
                                sub_1000361b0(vvar_301{r56|8b} + 32);
                                if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                    sub_1000347a8(g_100153eb8.field_0->field_10); /* do not return */
                            }
                        }
                        else
                        {
                            if (v6)
                            {
                                do
                                {
                                    if (false)
                                        break;
                                } while (*((short *)v6));
                            }
                            sub_1000361b0(vvar_301{r56|8b} + 24);
                            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                sub_1000347a8(g_100153eb8.field_0->field_10); /* do not return */
                        }
                    }
                    else
                    {
                        v8 = 0 != *((unsigned short *)&v6);
                        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                            sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                    }
                }
                else
                {
                    if (v6)
                    {
                        do
                        {
                            if (false)
                                break;
                        } while (*((short *)v6));
                    }
                    sub_1000361b0(vvar_301{r56|8b} + 40);
                    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                        sub_1000347a8(g_100153eb8.field_0->field_10); /* do not return */
                }
            }
            else
            {
                if (v41 > 25)
                {
                    v62 = v41 - 26;
                    if (v41 != 26)
                    {
                        v63 = v62 - 1;
                        if (v62 != 1)
                        {
                            v64 = v63 - 1;
                            if (v63 != 1)
                            {
                                v65 = v64 - 1;
                                if (v64 != 1)
                                {
                                    v66 = v65 - 1;
                                    if (v65 != 1)
                                    {
                                        if (v66 != 1)
                                        {
                                            if (v66 != 2)
                                            {
LABEL_1000bd9af:
                                                if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v35)
                                                    sub_100034834(g_100153eb8.field_0->field_10, 115, &g_10001dcb8, v41); /* do not return */
                                            }
                                            else
                                            {
                                                v33 = 0 != *((unsigned short *)&v6);
                                                if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                                    sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                            }
                                        }
                                        else
                                        {
                                            v32 = 0 != *((unsigned short *)&v6);
                                            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                                sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                        }
                                    }
                                    else
                                    {
                                        *((int128_t *)&v31) = *((int128_t *)v6);
                                        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                            sub_1000ba67c(g_100153eb8.field_0->field_10); /* do not return */
                                    }
                                }
                                else
                                {
                                    *((int128_t *)&v30) = *((int128_t *)v6);
                                    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                        sub_1000ba67c(g_100153eb8.field_0->field_10); /* do not return */
                                }
                            }
                            else
                            {
                                v14 = 0 != *((unsigned short *)&v6);
                                if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                    sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                            }
                        }
                        else
                        {
                            if (v6)
                            {
                                do
                                {
                                    if (false)
                                        break;
                                } while (*((short *)v6));
                            }
                            sub_1000361b0(vvar_301{r56|8b} + 48);
                            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                sub_1000347a8(g_100153eb8.field_0->field_10); /* do not return */
                        }
                    }
                    else
                    {
                        *((int128_t *)&v7) = *((int128_t *)v6);
                        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                            sub_1000ba67c(g_100153eb8.field_0->field_10); /* do not return */
                    }
                }
                else if (v41 != 25)
                {
                    v56 = v41 - 17;
                    if (v41 != 17)
                    {
                        v57 = v56 - 1;
                        if (v56 != 1)
                        {
                            v58 = v57 - 1;
                            if (v57 != 1)
                            {
                                v59 = v58 - 1;
                                if (v58 != 1)
                                {
                                    v60 = v59 - 1;
                                    if (v59 != 1)
                                    {
                                        v61 = v60 - 1;
                                        if (v60 == 1)
                                        {
                                            v29 = (255 < *((unsigned int *)&v6) ? *((char *)&v6) : 255);
                                            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                                sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                        }
                                        else if (v61 != 1)
                                        {
                                            if (v61 - 1 != 1)
                                                goto LABEL_1000bd9af;
                                            v24 = *((unsigned int *)&v6);
                                            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                                sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                        }
                                        else
                                        {
                                            v23 = *((unsigned int *)&v6);
                                            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                                sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                        }
                                    }
                                    else
                                    {
                                        v28 = (255 < *((unsigned int *)&v6) ? *((char *)&v6) : 255);
                                        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                            sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                    }
                                }
                                else
                                {
                                    v27 = (255 < *((unsigned int *)&v6) ? *((char *)&v6) : 255);
                                    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                        sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                                }
                            }
                            else
                            {
                                v26 = 0 != *((unsigned short *)&v6);
                                if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                    sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                            }
                        }
                        else
                        {
                            v22 = *((unsigned int *)&v6);
                            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                                sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                        }
                    }
                    else
                    {
                        v21 = *((unsigned int *)&v6);
                        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                            sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                    }
                }
                else
                {
                    v25 = *((unsigned int *)&v6);
                    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
                        sub_100036510(g_100153eb8.field_0->field_10); /* do not return */
                }
            }
        }
    }
    else
    {
        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (v35 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= v36)
        {
            *((unsigned int *)&v1) = (&g_1001547c0.field_0)[v68]->field_10;
            sub_1000d645c(g_100153eb8.field_0->field_10, 116, &g_10001dcb8, (&g_1001547c0.field_0)[v68], v1); /* do not return */
        }
    }
    4297067032();
}
