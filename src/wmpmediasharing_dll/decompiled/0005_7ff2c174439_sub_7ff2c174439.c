/* sub_7ff2c174439 @ 0x7ff2c174439
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c174439  (1409 bytes, 122 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
    struct struct_1 *field_8;
    struct struct_2 *field_10;
    char padding_18[16];
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

int sub_7ff2c174439(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned short *a12)
{
    unsigned short *v6;  // r15
    unsigned short *addr;  // rdx
    unsigned long long idx6;  // r12
    unsigned int flag2;  // ecx
    unsigned long long v16;  // cc_op
    unsigned short *ptr5;  // cc_dep1
    unsigned short *v18;  // cc_dep2
    unsigned int flag4;  // ecx
    unsigned int flag6;  // ecx
    unsigned int flag9;  // ecx
    unsigned long long pos;  // rcx
    unsigned long v23;  // rdi
    unsigned short *iter;  // r13
    unsigned int v24;  // eax
    unsigned long long idx5;  // rcx
    unsigned short *off;  // rcx
    unsigned long long *v27;  // r14
    unsigned int choice;  // ecx
    unsigned int flag3;  // ecx
    unsigned int flag5;  // ecx
    unsigned int flag8;  // ecx
    unsigned long long idx4;  // rcx
    unsigned long long v33;  // rdx
    unsigned short *v34;  // cc_dep2
    unsigned long v35;  // rdi
    unsigned long long v36;  // cc_op
    unsigned long v37;  // cc_dep1
    unsigned long long v38;  // cc_dep2
    unsigned long long index;  // rcx
    unsigned long long v40;  // 4102
    unsigned long long v41;  // 4102
    unsigned int flag;  // ecx
    struct_0 *v9;  // rdi
    unsigned int flag7;  // ecx
    unsigned long long v10;  // cc_ndep
    unsigned long long v11;  // cc_ndep
    unsigned short *cur;  // rsi
    struct_0 *ptr;  // rbx
    unsigned int v0;  // [bp-0x120]
    unsigned short *ptr6;  // [bp+0x70]
    unsigned long p;  // [bp+0x100010]
    unsigned short *v4;  // [bp+0x100018]
    unsigned int v5;  // [bp+0x100038]

    addr = v6;
    ptr6 = addr;
    iter = v6;
    while (true)
    {
        cur = NULL;
        while (true)
        {
            if (!cur)
                ptr->field_8 = iter;
            if (cur >= v4)
                8792537709680();
            idx6 = cur * 2;
            flag2 = *((int *)(p + idx6 * 8));
            if (flag2 <= 17)
            {
                if (flag2 != 17)
                {
                    if (flag2 > 6)
                        goto LABEL_0x7ff2c174677;
                    if (flag2 != 6)
                    {
                        v16 = 7;
                        ptr5 = flag2;
                        v18 = NULL;
                        if (flag2)
                        {
                            flag4 = flag2 - 1;
                            if (flag2 != 1)
                            {
                                flag6 = flag4 - 1;
                                if (flag4 == 1)
                                {
                                    if (cur < v4)
                                        goto LABEL_0x7ff2c1745b8;
                                    8792537709680();
                                }
                                flag9 = flag6 - 1;
                                if (flag6 != 1)
                                {
                                    if (flag9 != 1)
                                    {
                                        if (flag9 - 1 != 1)
                                            continue;
                                        if (!*(iter))
                                        {
                                            pos = ptr->field_48;
                                            if (!pos)
                                                break;
                                            if (pos >= *((long long *)&ptr->padding_30[0]))
                                                8792537709680();
                                        }
                                        else
                                        {
                                            if (cur >= v4)
                                                8792537709680();
                                            v23 = *(iter);
                                            v24 = (char)v23 & 7;
                                            v0 = *((short *)(p + ((v23 >> 3) + cur * 8 + 8) * 2));
                                            v11 = 0;
                                            if (!(*((char *)&v0 + ((v24 & 31) >> 3)) >> ((char)v23 & 7 & 31 & 7) & 1))
                                            {
                                                idx5 = ptr->field_48;
                                                if (idx5)
                                                {
                                                    if (idx5 >= *((long long *)&ptr->padding_30[0]))
                                                        8792537709680();
                                                    cur = *((long long *)(ptr->field_28 + idx5 * 8));
                                                    ptr->field_48 = idx5 - 1;
                                                    goto LABEL_7ff2c174db1;
                                                }
                                                else
                                                {
                                                    cur = NULL;
                                                    goto LABEL_7ff2c174db1;
                                                }
                                            }
                                            else
                                            {
                                                cur = (char *)&cur[1] + 1;
                                                iter += 1;
                                                goto LABEL_7ff2c174db1;
                                            }
                                            goto LABEL_7ff2c174db1;
                                        }
                                    }
                                    else
                                    {
                                        if (*(iter))
                                            goto LABEL_7ff2c174541;
                                        pos = ptr->field_48;
                                        if (!pos)
                                            break;
                                        if (pos >= *((long long *)&ptr->padding_30[0]))
                                            8792537709680();
                                    }
                                    goto LABEL_7ff2c174599;
                                }
                                if (cur >= v4)
                                    8792537709680();
                                if (*((long long *)(p + idx6 * 8 + 8)) == *(iter))
                                {
LABEL_7ff2c174541:
                                    v16 = 4;
                                    ptr5 = iter;
                                    v18 = 0x2;
                                    iter += 1;
                                    goto LABEL_7ff2c1745eb;
                                }
                                else
                                {
                                    pos = ptr->field_48;
                                    if (!pos)
                                        break;
                                    if (pos >= *((long long *)&ptr->padding_30[0]))
                                        8792537709680();
                                    goto LABEL_7ff2c174599;
                                }
                            }
                            else if (cur < v4)
                            {
                                off = *((long long *)(p + idx6 * 8 + 8));
                                v16 = 4;
                                ptr5 = off;
                                v18 = off;
                                *((unsigned short **)(*(v27) + off * 16)) = iter;
                                goto LABEL_7ff2c1745eb;
                            }
                            else
                            {
                                8792537709680();
                            }
                        }
                    }
                    else
                    {
                        if (*(iter))
                            goto LABEL_0x7ff2c174618;
                        pos = ptr->field_48;
                        if (!pos)
                            break;
                        if (pos >= *((long long *)&ptr->padding_30[0]))
                            8792537709680();
                        goto LABEL_7ff2c174599;
                    }
                }
                else
                {
                    pos = ptr->field_48;
                    if (!pos)
                        break;
                    if (pos >= *((long long *)&ptr->padding_30[0]))
                        8792537709680();
                    goto LABEL_7ff2c174599;
                }
            }
            if (flag2 > 26)
            {
                flag = flag2 - 27;
                if (flag2 != 27)
                {
                    flag7 = flag - 1;
                    if (flag == 1)
                    {
                        ptr->field_10 = iter;
                        if (v5)
                            goto LABEL_0x7ff2c174f95;
                        sub_7ff2c175114(vvar_225{r56|8b}, ptr, a12, v6);
                    }
                    if (flag7 != 1)
                    {
                        if (flag7 == 2)
                        {
                            ptr->field_10 = iter;
                            if (!v5)
                                sub_7ff2c175114(vvar_225{r56|8b}, ptr, a12, v6);
                            if (v6 != a12)
                                8792538349752();
                        }
                    }
                    else
                    {
                        iter = addr + 1;
                        ptr6 = iter;
                        if (!*(iter))
                        {
                            ptr->field_10 = iter;
                            if (v5)
                                goto LABEL_0x7ff2c174f95;
                            sub_7ff2c175114(vvar_225{r56|8b}, ptr, a12, v6);
                        }
                        ptr->field_48 = 0;
                        break;
                    }
                }
                else if (v5)
                {
                    if (cur < v4)
                        8792538349800();
                    8792537709680();
                }
                else
                {
                    if (cur < v4)
                        8792538349808();
                    8792537709680();
                }
            }
            switch (flag2)
            {
            case 26:
                if (cur >= v4)
                    8792537709680();
                v16 = 8;
                ptr5 = iter;
                v18 = *((long long *)(v9->field_0 + *((long long *)(p + idx6 * 8 + 8)) * 8));
                if (iter != *((long long *)(v9->field_0 + *((long long *)(p + idx6 * 8 + 8)) * 8)))
                {
LABEL_7ff2c1745eb:
                    v41 = _ccall(v16, ptr5, v18, v11);
                    v11 = v41;
                    cur = (char *)cur + 1;
                }
                else
                {
                    pos = ptr->field_48;
                    if (!pos)
                        break;
LABEL_7ff2c174599:
                    cur = *((long long *)(ptr->field_28 + pos * 8));
                    ptr->field_48 = pos - 1;
                }
                break;
            default:
                choice = flag2 - 20;
                if (flag2 != 20)
                {
                    flag3 = choice - 1;
                    if (choice != 1)
                    {
                        flag5 = flag3 - 1;
                        if (flag3 != 1)
                        {
                            flag8 = flag5 - 1;
                            if (flag5 == 1 && cur >= v4)
                                8792537709680();
                            if (flag8 != 1)
                            {
                                if (flag8 - 1 != 1)
                                    continue;
                                v16 = 8;
                                ptr5 = cur;
                                v18 = v4;
                                if (cur >= v4)
                                    8792537709680();
                                ptr->field_48 = *((long long *)(v9->field_0 + *((long long *)(p + idx6 * 8 + 8)) * 8));
                                goto LABEL_7ff2c1745eb;
                            }
                            else
                            {
                                v16 = 8;
                                ptr5 = cur;
                                v18 = v4;
                                if (cur >= v4)
                                    8792537709680();
                                iter = *((long long *)(v9->field_0 + *((long long *)(p + idx6 * 8 + 8)) * 8));
                                goto LABEL_7ff2c1745eb;
                            }
                        }
                        else
                        {
                            v16 = 8;
                            ptr5 = cur;
                            v18 = v4;
                            if (cur >= v4)
                                8792537709680();
                            *((unsigned short **)(v9->field_0 + *((long long *)(p + idx6 * 8 + 8)) * 8)) = iter;
                            goto LABEL_7ff2c1745eb;
                        }
                    }
                    else
                    {
                        idx4 = ptr->field_48;
                        if (!idx4)
                        {
                            v33 = 0;
                        }
                        else if (idx4 < *((long long *)&ptr->padding_30[0]))
                        {
                            v33 = *((long long *)(ptr->field_28 + idx4 * 8));
                            ptr->field_48 = idx4 - 1;
                        }
                        else
                        {
                            8792537709680();
                        }
                        v34 = v4;
                        if (cur >= v4)
                            8792537709680();
                        *((unsigned long long *)(v9->field_0 + *((long long *)(p + idx6 * 8 + 8)) * 8)) = v33;
                        v11 = cur < v34;
                        cur = (char *)cur + 1;
                        goto LABEL_7ff2c174db5;
                    }
                }
                else
                {
                    if (cur >= v4)
                        8792537709680();
                    v35 = *((long long *)(v9->field_0 + *((long long *)(p + idx6 * 8 + 8)) * 8));
                    ptr->field_48 = ptr->field_48 + 1;
                    if (*((long long *)&ptr->padding_30[0]) <= (ptr->field_48 & 4294967295) && !(char)sub_7ff2c176638(&ptr->field_28, ptr->field_48 * 2 + 2, 4294967295))
                    {
                        ptr->field_48 = ptr->field_48 - 1;
                        v36 = 28;
                        v37 = ptr->field_48 - 1;
                        v38 = 0;
                    }
                    else
                    {
                        index = ptr->field_48;
                        v36 = 8;
                        v37 = index;
                        v38 = *((long long *)&ptr->padding_30[0]);
                        if (index >= *((long long *)&ptr->padding_30[0]))
                            8792537709680();
                        *((unsigned long *)(ptr->field_28 + index * 8)) = v35;
                    }
                    v40 = _ccall(v36, v37, v38, v10);
                    v11 = v40;
                    cur = (char *)cur + 1;
LABEL_7ff2c174db1:
                    v9 = &ptr->padding_18;
LABEL_7ff2c174db5:
                    addr = ptr6;
                }
            }
        }
    }
}
