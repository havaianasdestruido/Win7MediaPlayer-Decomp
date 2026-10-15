/* sub_1000794b5 @ 0x1000794b5
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000794b5  (2805 bytes, 237 basic blocks)
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
    unsigned long long field_0;
    struct struct_1 *field_8;
    struct struct_2 *field_10;
    char padding_18[8];
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[24];
    unsigned long long field_48;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

typedef struct struct_2 {
    unsigned short field_0;
} struct_2;

int sub_1000794b5(void)
{
    unsigned short *v7;  // r15
    unsigned short *addr;  // rdx
    int flag4;  // ecx
    unsigned int flag7;  // ecx
    unsigned int flag10;  // ecx
    unsigned int flag13;  // ecx
    unsigned long long idx6;  // rcx
    unsigned long v19;  // rdi
    unsigned int v20;  // eax
    unsigned long long idx7;  // rcx
    unsigned long v22;  // rdi
    unsigned int v23;  // eax
    unsigned short *cur;  // r13
    unsigned int choice;  // ecx
    unsigned int v25;  // ecx
    unsigned int flag8;  // ecx
    unsigned int flag14;  // ecx
    unsigned long long off;  // rcx
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rcx
    unsigned long long iter;  // rsi
    unsigned long v32;  // rdi
    unsigned long long v33;  // rsi
    unsigned long long v34;  // rdi
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rcx
    unsigned long v37;  // r8
    unsigned long long pos;  // rcx
    unsigned int flag2;  // ecx
    unsigned int flag5;  // ecx
    unsigned int flag9;  // ecx
    unsigned int flag12;  // ecx
    unsigned long long index;  // rcx
    struct_0 *v10;  // rdi
    unsigned long long v44;  // rdx
    unsigned long v45;  // rdi
    unsigned int flag;  // ecx
    unsigned int flag3;  // ecx
    unsigned int flag6;  // ecx
    unsigned int flag11;  // ecx
    unsigned long long idx4;  // rcx
    unsigned long long v51;  // rdx
    unsigned long long idx5;  // rcx
    unsigned long long v53;  // rdx
    unsigned long v54;  // r14
    struct_0 *v55;  // rdi
    struct_0 *v56;  // r14
    unsigned long v57;  // r12
    struct_0 *v11;  // r14
    struct_0 *ptr;  // rbx
    unsigned long long idx8;  // r12
    unsigned int v0;  // [bp-0x120]
    unsigned short *v2;  // [bp+0x68]
    unsigned short *ptr5;  // [bp+0x70]
    unsigned long p;  // [bp+0x100010]
    unsigned long long v5;  // [bp+0x100018]
    unsigned int v6;  // [bp+0x100038]

    addr = v7;
    ptr5 = addr;
    cur = v7;
    while (true)
    {
        iter = 0;
        v56 = v11;
        while (true)
        {
            if (!iter)
                ptr->field_8 = cur;
            if (iter >= v5)
                sub_100036284(2147942487); /* do not return */
            idx8 = iter * 2;
            flag4 = *((int *)(p + idx8 * 8));
            if (flag4 <= 17)
            {
                if (flag4 == 17)
                {
                    idx6 = ptr->field_48;
                    if (!idx6)
                        break;
                    if (idx6 >= *((long long *)&ptr->padding_30[0]))
                        sub_100036284(2147942487); /* do not return */
                }
                else if (flag4 > 6)
                {
                    choice = flag4 - 7;
                    if (flag4 != 7)
                    {
                        v25 = choice - 1;
                        if (choice != 1)
                        {
                            flag8 = v25 - 5;
                            if (v25 == 5)
                            {
                                if (iter < v5)
                                {
                                    iter = *((long long *)(p + idx8 * 8 + 8));
                                    continue;
                                }
                                else
                                {
                                    sub_100036284(2147942487); /* do not return */
                                }
                            }
                            flag14 = flag8 - 1;
                            if (flag8 != 1)
                            {
                                if (flag14 != 1)
                                {
                                    if (flag14 - 1 != 1)
                                        continue;
                                    ptr->field_48 = ptr->field_48 + 1;
                                    if (*((long long *)&ptr->padding_30[0]) <= (ptr->field_48 & 4294967295) && !(char)sub_10007b50c(&ptr->field_28, ptr->field_48 * 2 + 2, 4294967295))
                                    {
                                        ptr->field_48 = ptr->field_48 - 1;
                                    }
                                    else
                                    {
                                        if (ptr->field_48 < *((long long *)&ptr->padding_30[0]))
                                            *((unsigned long long *)(ptr->field_28 + ptr->field_48 * 8)) = iter + 1;
                                        else
                                            sub_100036284(2147942487); /* do not return */
                                    }
                                    if (iter >= v5)
                                        sub_100036284(2147942487); /* do not return */
                                    iter = *((long long *)(p + idx8 * 8 + 8));
                                    goto LABEL_100079e31;
                                }
                                else
                                {
                                    off = ptr->field_48;
                                    if (!off)
                                    {
                                        cur = NULL;
                                        goto LABEL_100079667;
                                    }
                                    else
                                    {
                                        if (off < *((long long *)&ptr->padding_30[0]))
                                        {
                                            cur = *((long long *)(ptr->field_28 + off * 8));
                                            ptr->field_48 = off - 1;
                                            goto LABEL_100079667;
                                        }
                                        else
                                        {
                                            sub_100036284(2147942487); /* do not return */
                                        }
                                    }
                                }
                            }
                            else
                            {
                                ptr->field_48 = ptr->field_48 + 1;
                                if (*((long long *)&ptr->padding_30[0]) <= (ptr->field_48 & 4294967295) && !(char)sub_10007b50c(&ptr->field_28, ptr->field_48 * 2 + 2, 4294967295))
                                {
                                    ptr->field_48 = ptr->field_48 - 1;
                                    goto LABEL_1000797fd;
                                }
                                else
                                {
                                    if (ptr->field_48 < *((long long *)&ptr->padding_30[0]))
                                    {
                                        *((unsigned short **)(ptr->field_28 + ptr->field_48 * 8)) = cur;
                                        goto LABEL_1000797fd;
                                    }
                                    else
                                    {
                                        sub_100036284(2147942487); /* do not return */
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (!*(cur))
                            {
                                idx6 = ptr->field_48;
                                if (!idx6)
                                    break;
                                if (idx6 >= *((long long *)&ptr->padding_30[0]))
                                    sub_100036284(2147942487); /* do not return */
                            }
                            else
                            {
                                if (iter >= v5)
                                    sub_100036284(2147942487); /* do not return */
                                iter += 1;
                                if (iter < *((long long *)(p + idx8 * 8 + 8)))
                                {
                                    v29 = iter + 1;
                                    v30 = iter * 16;
                                }
                                else
                                {
LABEL_1000798b1:
                                    cur += 1;
                                    continue;
                                }
                                while (true)
                                {
                                    if (iter >= v5)
                                        sub_100036284(2147942487); /* do not return */
                                    v32 = *(cur);
                                    if (v32 >= *((long long *)(v30 + p + 8)))
                                        break;
LABEL_100079897:
                                    iter += 2;
                                    v30 += 32;
                                    v29 += 2;
                                    if (iter >= *((long long *)(p + idx8 * 8 + 8)))
                                    {
                                        addr = ptr5;
                                        v10 = &ptr->padding_18;
                                        goto LABEL_1000798b1;
                                    }
                                }
                                if (v29 >= v5)
                                    sub_100036284(2147942487); /* do not return */
                                if (v32 > *((long long *)(v30 + p + 24)))
                                    goto LABEL_100079897;
                                idx7 = ptr->field_48;
                                if (idx7)
                                {
                                    if (idx7 >= *((long long *)&ptr->padding_30[0]))
                                        sub_100036284(2147942487); /* do not return */
LABEL_100079e1d:
                                    iter = *((long long *)(ptr->field_28 + idx7 * 8));
                                    ptr->field_48 = idx7 - 1;
                                    goto LABEL_100079e2d;
                                }
                                else
                                {
LABEL_100079e0e:
                                    iter = 0;
                                    goto LABEL_100079e2d;
                                }
                            }
                        }
                    }
                    else
                    {
                        if (!*(cur))
                        {
                            idx6 = ptr->field_48;
                            if (!idx6)
                                break;
                            if (idx6 >= *((long long *)&ptr->padding_30[0]))
                                sub_100036284(2147942487); /* do not return */
                        }
                        else
                        {
                            if (iter < v5)
                            {
                                v33 = iter + 1;
                                v34 = *((long long *)(p + idx8 * 8 + 8));
                                if (v33 < v34)
                                {
                                    v35 = v33 + 1;
                                    v36 = v33 * 16;
                                    do
                                    {
                                        if (v33 >= v5)
                                            sub_100036284(2147942487); /* do not return */
                                        v37 = *(cur);
                                        if (v37 < *((long long *)(v36 + p + 8)))
                                            continue;
                                        if (v35 >= v5)
                                            sub_100036284(2147942487); /* do not return */
                                        if (v37 <= *((long long *)(v36 + p + 24)))
                                        {
                                            cur += 1;
                                            iter = v34;
                                            goto LABEL_100079e2d;
                                        }
                                    } while ((v33 += 2, v36 += 32, v35 += 2, v33 < v34));
                                    addr = ptr5;
                                }
                                pos = ptr->field_48;
                                if (!pos)
                                {
                                    iter = 0;
                                }
                                else
                                {
                                    if (pos < *((long long *)&ptr->padding_30[0]))
                                    {
                                        iter = *((long long *)(ptr->field_28 + pos * 8));
                                        ptr->field_48 = pos - 1;
                                    }
                                    else
                                    {
                                        sub_100036284(2147942487); /* do not return */
                                    }
                                }
                                v10 = &ptr->padding_18;
                            }
                            else
                            {
                                sub_100036284(2147942487); /* do not return */
                            }
                        }
                    }
                }
                else if (flag4 != 6)
                {
                    if (flag4)
                    {
                        flag7 = flag4 - 1;
                        if (flag4 != 1)
                        {
                            flag10 = flag7 - 1;
                            if (flag7 != 1)
                            {
                                flag13 = flag10 - 1;
                                if (flag10 != 1)
                                {
                                    if (flag13 != 1)
                                    {
                                        if (flag13 - 1 != 1)
                                            continue;
                                        if (!*(cur))
                                        {
                                            idx6 = ptr->field_48;
                                            if (!idx6)
                                                break;
                                            if (idx6 >= *((long long *)&ptr->padding_30[0]))
                                                sub_100036284(2147942487); /* do not return */
                                        }
                                        else
                                        {
                                            if (iter >= v5)
                                                sub_100036284(2147942487); /* do not return */
                                            v19 = *(cur);
                                            v20 = (char)v19 & 7;
                                            v0 = *((short *)(p + ((v19 >> 3) + iter * 8 + 8) * 2));
                                            if ((*((char *)&v0 + ((v20 & 31) >> 3)) >> ((char)v19 & 7 & 31 & 7) & 1))
                                                goto LABEL_1000796e6;
                                            idx7 = ptr->field_48;
                                            if (!idx7)
                                                goto LABEL_100079e0e;
                                            if (idx7 >= *((long long *)&ptr->padding_30[0]))
                                                sub_100036284(2147942487); /* do not return */
                                            goto LABEL_100079e1d;
                                        }
                                    }
                                    else
                                    {
                                        if (*(cur))
                                            goto LABEL_1000795bd;
                                        idx6 = ptr->field_48;
                                        if (!idx6)
                                            break;
                                        if (idx6 >= *((long long *)&ptr->padding_30[0]))
                                            sub_100036284(2147942487); /* do not return */
                                    }
                                    goto LABEL_100079615;
                                }
                                if (iter >= v5)
                                    sub_100036284(2147942487); /* do not return */
                                if (*((long long *)(p + idx8 * 8 + 8)) == *(cur))
                                {
LABEL_1000795bd:
                                    cur += 1;
                                    goto LABEL_100079667;
                                }
                                else
                                {
                                    idx6 = ptr->field_48;
                                    if (!idx6)
                                        break;
                                    if (idx6 >= *((long long *)&ptr->padding_30[0]))
                                        sub_100036284(2147942487); /* do not return */
                                    goto LABEL_100079615;
                                }
                            }
                            else
                            {
                                if (iter < v5)
                                {
                                    *((unsigned short **)(v56->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 16 + 8)) = cur;
                                    goto LABEL_100079667;
                                }
                                else
                                {
                                    sub_100036284(2147942487); /* do not return */
                                }
                            }
                        }
                        else if (iter < v5)
                        {
                            *((unsigned short **)(v56->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 16)) = cur;
                            goto LABEL_100079667;
                        }
                        else
                        {
                            sub_100036284(2147942487); /* do not return */
                        }
                    }
                }
                else
                {
                    if (!*(cur))
                    {
                        idx6 = ptr->field_48;
                        if (!idx6)
                            break;
                        if (idx6 >= *((long long *)&ptr->padding_30[0]))
                            sub_100036284(2147942487); /* do not return */
                    }
                    else
                    {
                        if (iter >= v5)
                            sub_100036284(2147942487); /* do not return */
                        v22 = *(cur);
                        v23 = (char)v22 & 7;
                        v0 = *((short *)(p + ((v22 >> 3) + iter * 8 + 8) * 2));
                        if ((*((char *)&v0 + ((v23 & 31) >> 3)) >> ((char)v22 & 7 & 31 & 7) & 1))
                        {
                            idx7 = ptr->field_48;
                            if (!idx7)
                                goto LABEL_100079e0e;
                            if (idx7 >= *((long long *)&ptr->padding_30[0]))
                                sub_100036284(2147942487); /* do not return */
                            goto LABEL_100079e1d;
                        }
                        else
                        {
LABEL_1000796e6:
                            iter += 3;
                            cur += 1;
                            goto LABEL_100079e2d;
                        }
                    }
                }
            }
            else
            {
                if (flag4 <= 26)
                {
                    if (flag4 != 26)
                    {
                        flag2 = flag4 - 20;
                        if (flag4 == 20)
                        {
                            if (iter >= v5)
                                sub_100036284(2147942487); /* do not return */
                            v45 = *((long long *)(v10->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 8));
                            ptr->field_48 = ptr->field_48 + 1;
                            if (*((long long *)&ptr->padding_30[0]) <= (ptr->field_48 & 4294967295) && !(char)sub_10007b50c(&ptr->field_28, ptr->field_48 * 2 + 2, 4294967295))
                                goto LABEL_100079b13;
                            if (ptr->field_48 >= *((long long *)&ptr->padding_30[0]))
                                sub_100036284(2147942487); /* do not return */
                            *((unsigned long *)(ptr->field_28 + ptr->field_48 * 8)) = v45;
                            goto LABEL_100079b2f;
                        }
                        flag5 = flag2 - 1;
                        if (flag2 != 1)
                        {
                            flag9 = flag5 - 1;
                            if (flag5 != 1)
                            {
                                flag12 = flag9 - 1;
                                if (flag9 != 1)
                                {
                                    if (flag12 != 1)
                                    {
                                        if (flag12 - 1 != 1)
                                            continue;
                                        if (iter >= v5)
                                            sub_100036284(2147942487); /* do not return */
                                        ptr->field_48 = *((long long *)(v10->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 8));
                                    }
                                    else
                                    {
                                        if (iter < v5)
                                            cur = *((long long *)(v10->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 8));
                                        else
                                            sub_100036284(2147942487); /* do not return */
                                    }
                                }
                                else
                                {
                                    if (iter < v5)
                                    {
                                        *((unsigned long long *)(v10->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 8)) = ptr->field_48;
                                        goto LABEL_1000797fd;
                                    }
                                    else
                                    {
                                        sub_100036284(2147942487); /* do not return */
                                    }
                                }
                            }
                            else if (iter < v5)
                            {
                                *((unsigned short **)(v10->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 8)) = cur;
                            }
                            else
                            {
                                sub_100036284(2147942487); /* do not return */
                            }
                        }
                        else
                        {
                            index = ptr->field_48;
                            if (!index)
                            {
                                v44 = 0;
                            }
                            else if (index < *((long long *)&ptr->padding_30[0]))
                            {
                                v44 = *((long long *)(ptr->field_28 + index * 8));
                                ptr->field_48 = index - 1;
                            }
                            else
                            {
                                sub_100036284(2147942487); /* do not return */
                            }
                            if (iter >= v5)
                                sub_100036284(2147942487); /* do not return */
                            *((unsigned long long *)(v10->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 8)) = v44;
                            goto LABEL_1000797fd;
                        }
                    }
                    else
                    {
                        if (iter >= v5)
                            sub_100036284(2147942487); /* do not return */
                        if (cur == *((long long *)(v10->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 8)))
                        {
                            idx6 = ptr->field_48;
                            if (!idx6)
                                break;
                            if (idx6 >= *((long long *)&ptr->padding_30[0]))
                                sub_100036284(2147942487); /* do not return */
LABEL_100079615:
                            iter = *((long long *)(ptr->field_28 + idx6 * 8));
                            ptr->field_48 = idx6 - 1;
                            continue;
                        }
                    }
LABEL_100079667:
                    iter += 1;
                }
                else
                {
                    flag = flag4 - 27;
                    if (flag4 == 27)
                    {
                        if (v6)
                        {
                            if (iter < v5)
                                4297066480();
                            sub_100036284(2147942487); /* do not return */
                        }
                        else
                        {
                            if (iter < v5)
                                4297066472();
                            sub_100036284(2147942487); /* do not return */
                        }
                    }
                    flag3 = flag - 1;
                    if (flag == 1)
                    {
                        ptr->field_10 = cur;
                        if (v6)
                            goto LABEL_0x10007a011;
                        sub_10007a16c(vvar_560{r56|8b}, ptr, v2, v7);
                    }
                    flag6 = flag3 - 1;
                    if (flag3 == 1)
                    {
                        cur = addr + 1;
                        ptr5 = cur;
                        if (!*(cur))
                        {
                            ptr->field_10 = cur;
                            if (v6)
                                goto LABEL_0x10007a011;
                            sub_10007a16c(vvar_560{r56|8b}, ptr, v2, v7);
                        }
                        ptr->field_48 = 0;
                        break;
                    }
                    flag11 = flag6 - 1;
                    if (flag6 == 1)
                    {
                        ptr->field_10 = cur;
                        if (!v6)
                            sub_10007a16c(vvar_560{r56|8b}, ptr, v2, v7);
                        if (v7 != v2)
                            4297066584();
                    }
                    if (flag11 != 1)
                    {
                        if (flag11 - 1 != 1)
                            continue;
                        idx4 = ptr->field_48;
                        if (!idx4)
                        {
                            v51 = 0;
                        }
                        else if (idx4 < *((long long *)&ptr->padding_30[0]))
                        {
                            v51 = *((long long *)(ptr->field_28 + idx4 * 8));
                            ptr->field_48 = idx4 - 1;
                        }
                        else
                        {
                            sub_100036284(2147942487); /* do not return */
                        }
                        if (iter >= v5)
                            sub_100036284(2147942487); /* do not return */
                        *((unsigned long long *)(v56->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 16 + 8)) = v51;
                        idx5 = ptr->field_48;
                        if (!idx5)
                        {
                            v53 = 0;
                        }
                        else if (idx5 < *((long long *)&ptr->padding_30[0]))
                        {
                            v53 = *((long long *)(ptr->field_28 + idx5 * 8));
                            ptr->field_48 = idx5 - 1;
                        }
                        else
                        {
                            sub_100036284(2147942487); /* do not return */
                        }
                        if (iter >= v5)
                            sub_100036284(2147942487); /* do not return */
                        *((unsigned long long *)(v56->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 16)) = v53;
LABEL_1000797fd:
                        iter += 1;
                        goto LABEL_100079e31;
                    }
                    else
                    {
                        if (iter >= v5)
                            sub_100036284(2147942487); /* do not return */
                        v54 = *((long long *)(v56->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 16));
                        ptr->field_48 = ptr->field_48 + 1;
                        if (*((long long *)&ptr->padding_30[0]) <= (ptr->field_48 & 4294967295) && !((v55 = ptr + 40, (char)(unsigned long long)sub_10007b50c(v55, ptr->field_48 * 2 + 2, 4294967295))))
                        {
                            ptr->field_48 = ptr->field_48 - 1;
                        }
                        else
                        {
                            v55 = &ptr->field_28;
                            if (ptr->field_48 >= v55->field_8)
                                sub_100036284(2147942487); /* do not return */
                            *((unsigned long *)(v55->field_0 + ptr->field_48 * 8)) = v54;
                        }
                        if (iter >= v5)
                            sub_100036284(2147942487); /* do not return */
                        v56 = &ptr->field_20;
                        v57 = *((long long *)(v56->field_0 + *((long long *)(p + idx8 * 8 + 8)) * 16 + 8));
                        ptr->field_48 = ptr->field_48 + 1;
                        if (*((long long *)&ptr->padding_30[0]) <= (ptr->field_48 & 4294967295) && !(char)sub_10007b50c(v55, ptr->field_48 * 2 + 2, 4294967295))
                        {
LABEL_100079b13:
                            ptr->field_48 = ptr->field_48 - 1;
                        }
                        else if (ptr->field_48 < v55->field_8)
                        {
                            *((unsigned long *)(v55->field_0 + ptr->field_48 * 8)) = v57;
                        }
                        else
                        {
                            sub_100036284(2147942487); /* do not return */
                        }
LABEL_100079b2f:
                        iter += 1;
LABEL_100079e2d:
                        v10 = &ptr->padding_18;
LABEL_100079e31:
                        addr = ptr5;
                    }
                }
            }
        }
    }
}
