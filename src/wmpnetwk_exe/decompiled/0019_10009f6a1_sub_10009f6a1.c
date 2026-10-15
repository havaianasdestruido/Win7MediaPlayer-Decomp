/* sub_10009f6a1 @ 0x10009f6a1
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10009f6a1  (1278 bytes, 101 basic blocks)
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

typedef struct struct_2 {
    unsigned short field_0;
} struct_2;

typedef struct struct_1 {
    struct struct_2 *field_0;
    unsigned long long field_8;
    unsigned long long field_10;
    unsigned long long field_18;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_10001dcd8;
extern struct_1 g_10001dd90;
extern struct_0 *g_100153eb8;

int sub_10009f6a1(void)
{
    int v15;  // eax
    unsigned int v16;  // esi
    int flag9;  // edi
    unsigned int v26;  // ecx
    unsigned int flag5;  // ecx
    unsigned int v28;  // ecx
    unsigned int v29;  // ecx
    unsigned int v30;  // ecx
    unsigned int v31;  // ecx
    long long v33;  // r15
    unsigned short *v17;  // r13
    long long v35;  // r15
    int v37;  // ebx
    unsigned long long *v39;  // r15
    int v18;  // edi
    long long v45;  // r15
    unsigned int v47;  // r12d
    long long v48;  // r15
    int v50;  // xmm0
    long long v51;  // r15
    int v19;  // edi
    int flag4;  // edi
    int flag6;  // edi
    int flag7;  // edi
    int flag8;  // edi
    long long v1;  // [bp+0x20]
    long long v2;  // [bp+0x28]
    unsigned short v3;  // [bp+0x50]
    unsigned short *v4;  // [bp+0x58]
    unsigned short v5;  // [bp+0x68]
    unsigned long long flag2;  // [bp+0x6a]
    unsigned long long flag3;  // [bp+0x72]
    unsigned int flag;  // [bp+0x7a]
    unsigned short choice;  // [bp+0x7e]
    unsigned short *v10;  // [bp+0x80], Other Possible Types: unsigned int
    int v11;  // [bp+0x88]
    int v12;  // [bp+0x90]
    long long v13;  // [bp+0x140]
    int v14;  // [bp+0x158]

    v12 = v15;
    if (g_100153eb8 != &g_100153eb8 && ((char)v16 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= ((unsigned int)v17 <= v15 ? 5 : v16))
    {
        *((unsigned int *)&v2) = v3;
        *((unsigned int *)&v1) = v10;
        sub_10009b87c(g_100153eb8->field_10, 37, &g_10001dcd8, v15, v1, v2); /* do not return */
    }
    if (v15 < (unsigned int)v17)
        goto LABEL_0x1000a00f0;
    if (*((unsigned short *)&v17) == v3)
    {
        if (g_100153eb8 == &g_100153eb8)
            goto LABEL_0x1000a00f0;
        if (!((char)v16 & g_100153eb8->field_1c))
            goto LABEL_0x1000a00f0;
        if (g_100153eb8->field_19 < (char)v16)
            goto LABEL_0x1000a00f0;
        *((unsigned int *)&v1) = v10;
        sub_10003be4c(g_100153eb8->field_10, 38, &g_10001dcd8, 2147942487, v1); /* do not return */
    }
    else if (v18 == (unsigned int)v17)
    {
        if (vvar_127{r56|4b} == 3)
        {
            if (g_100153eb8 == &g_100153eb8)
                goto LABEL_0x1000a00f0;
            if (!((char)v16 & g_100153eb8->field_1c))
                goto LABEL_0x1000a00f0;
            if (g_100153eb8->field_19 < (char)v16)
                goto LABEL_0x1000a00f0;
            sub_100034784(g_100153eb8->field_10, 39, &g_10001dcd8); /* do not return */
        }
        if (vvar_127{r56|4b} - 3 != 1)
            goto LABEL_10009f952;
        if (v37 != (unsigned int)v17)
            goto LABEL_0x1000a00f0;
        if (*((unsigned int *)&v4) < 22)
        {
            v4 = &(&g_10001dd90.field_0)[*((unsigned int *)&v4)]->field_0;
            goto LABEL_10009f7b6;
        }
    }
    else
    {
        v19 = v18 - 4;
        if (v18 != 4)
        {
            flag4 = v19 - 4;
            if (v19 == 4)
            {
                if (v37 != (unsigned int)v17)
                    goto LABEL_0x1000a00f0;
                if (5 != v3)
                    goto LABEL_0x1000a00f0;
                v50 = (int)(uint128_t)v4;
                if (((CmpF(*((unsigned long long *)&v50), 0) & 69 | (CmpF(*((unsigned long long *)&v50), 0) & 69) >> 6) & 1) == 1)
                    goto LABEL_0x1000a00f0;
                sub_1000691fc(*((unsigned long long *)&MulV(v50, 0x408f400000000000)), v51); /* do not return */
            }
            flag6 = flag4 - 1;
            if (flag4 == 1)
            {
                if (v37 != (unsigned int)v17)
                    goto LABEL_0x1000a00f0;
                if (19 != v3)
                    goto LABEL_0x1000a00f0;
                if (*((unsigned int *)&v4) <= (unsigned int)v17)
                    goto LABEL_0x1000a00f0;
                sub_100039dd4(v48, "%"); /* do not return */
            }
            flag7 = flag6 - 1;
            if (flag6 == 1)
            {
                if (v37 != (unsigned int)v17)
                    goto LABEL_0x1000a00f0;
                if (19 != v3)
                    goto LABEL_0x1000a00f0;
                v5 = *((unsigned short *)&v17);
                flag2 = 0;
                flag3 = 0;
                flag = 0;
                choice = 0;
                sub_1000aafc4(v13, v47, 399, &v5); /* do not return */
            }
            flag8 = flag7 - 1;
            if (flag7 == 1)
            {
                if (v14 != (unsigned int)v17)
                    goto LABEL_0x1000a00f0;
                if (v37 != (unsigned int)v17)
                    goto LABEL_0x1000a00f0;
                sub_10009da80(&v3, v47, v13, v45); /* do not return */
            }
            flag9 = flag8 - 1;
            if (flag8 != 1)
            {
                if (flag9 == 1)
                {
                    if (v37 != (unsigned int)v17)
                        goto LABEL_0x1000a00f0;
                    if (19 != v3)
                        goto LABEL_0x1000a00f0;
                    if (*((unsigned int *)&v4) <= (unsigned int)v17)
                        goto LABEL_0x1000a00f0;
                    sub_100039dd4(v48, "%"); /* do not return */
                }
                else if (flag9 == 6)
                {
                    if (v37 != (unsigned int)v17)
                        goto LABEL_0x1000a00f0;
                    if (8 != v3)
                        goto LABEL_0x1000a00f0;
                    if (v4 == v17)
                        goto LABEL_0x1000a00f0;
                    4297066448();
                }
LABEL_10009f952:
                v26 = v3;
                flag5 = v26 - 7;
                if (v26 != 7)
                {
                    v28 = flag5 - 1;
                    if (flag5 != 1)
                    {
                        v29 = v28 - 3;
                        if (v28 != 3)
                        {
                            v30 = v29 - 8;
                            if (v29 == 8)
                            {
                                if (v37 != (unsigned int)v17)
                                    goto LABEL_0x1000a00f0;
                                sub_100039dd4(v48, "%"); /* do not return */
                            }
                            v31 = v30 - v16;
                            if (v30 == v16)
                            {
                                if (v37 != (unsigned int)v17)
                                    goto LABEL_0x1000a00f0;
                                sub_100039dd4(v35, L"%I64u", v4); /* do not return */
                            }
                            else if (v31 != 51)
                            {
                                if (v31 - 51 != 8132)
                                    goto LABEL_0x1000a00f0;
                                4297066816();
                            }
                            else
                            {
                                if (v37 != (unsigned int)v17)
                                    goto LABEL_0x1000a00f0;
                                sub_1000e4508(v4, v33); /* do not return */
                            }
                        }
                        else
                        {
                            if (v37 != (unsigned int)v17)
                                goto LABEL_0x1000a00f0;
                            if (*((unsigned short *)&v4) == 65535)
                                goto LABEL_0x1000a00d1;
                        }
                    }
                    else
                    {
                        if (v37 != (unsigned int)v17)
                            goto LABEL_0x1000a00f0;
                        if (v4 != v17)
                        {
                            do
                            {
                                if (false)
                                    break;
                            } while (*(v4));
                        }
                        sub_1000361b0(v39);
                        if (*((int *)(*(v39) - 16)) != (unsigned int)v17)
                            goto LABEL_0x1000a00f0;
                        if (vvar_127{r56|4b} != 1)
                            goto LABEL_0x1000a00f0;
                        if (g_100153eb8 == &g_100153eb8)
                            goto LABEL_0x1000a00f0;
                        if (!((char)v16 & g_100153eb8->field_1c))
                            goto LABEL_0x1000a00f0;
                        if (g_100153eb8->field_19 < (char)v16)
                            goto LABEL_0x1000a00f0;
                        *((unsigned int *)&v2) = 2147947423;
                        *((int *)&v1) = v14;
                        sub_10009a408(g_100153eb8->field_10, vvar_127{r56|4b} + 39, &g_10001dcd8, v47, v1, v2); /* do not return */
                    }
                }
                else
                {
                    if (v37 != (unsigned int)v17)
                        goto LABEL_0x1000a00f0;
                    v11 = (unsigned int)v17;
                    v10 = v4;
                    if (vvar_127{r56|4b} != 45 && vvar_127{r56|4b} != 44)
                        sub_1000b32d4(_INSERT(flag5, 0, 1), &v10); /* do not return */
                    4297066832();
                }
            }
            else
            {
                if (v37 != (unsigned int)v17)
                    goto LABEL_0x1000a00f0;
                if (11 != v3)
                    goto LABEL_0x1000a00f0;
                if (*((unsigned short *)&v4) != 65535)
                    goto LABEL_0x1000a00f0;
            }
        }
        else
        {
            if (v14 != (unsigned int)v17)
                goto LABEL_0x1000a00f0;
            if (v37 != (unsigned int)v17)
                goto LABEL_0x1000a00f0;
LABEL_10009f7b6:
            if (v4 != v17)
            {
                do
                {
                    if (false)
                        break;
                } while (*(v4));
            }
        }
    }
}
