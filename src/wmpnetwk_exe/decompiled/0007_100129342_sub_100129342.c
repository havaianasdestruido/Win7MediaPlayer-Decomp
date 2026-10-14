/* sub_100129342 @ 0x100129342
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100129342  (1467 bytes, 129 basic blocks)
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
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    struct struct_0 *field_10;
    char padding_18[4];
    unsigned int field_1c;
    char padding_20[248];
    unsigned long long field_118;
    struct struct_3 *field_120;
    char padding_128[496];
    long long field_318;
} struct_2;

typedef struct struct_4 {
    long long field_0;
    char padding_8[48];
    long long field_38;
    char padding_40[16];
    struct struct_5 *field_50;
} struct_4;

typedef struct struct_6 {
    char padding_0[280];
    long long field_118;
} struct_6;

typedef struct struct_7 {
    char padding_0[24];
    unsigned int field_18;
} struct_7;

typedef struct struct_8 {
    char padding_0[24];
    unsigned int field_18;
} struct_8;

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[48];
    unsigned long long field_38;
    char padding_40[16];
    struct struct_1 *field_50;
} struct_0;

typedef struct struct_3 {
    char field_0;
} struct_3;

typedef struct struct_5 {
    char field_0;
} struct_5;

typedef struct struct_1 {
    char field_0;
} struct_1;

extern long long g_1000225e4;

int sub_100129342(void)
{
    unsigned int v13;  // edi
    struct_2 *ptr;  // r12
    unsigned int v22;  // eax
    unsigned long v23;  // r10
    unsigned long long v24;  // r13
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rbp
    unsigned int v27;  // edx
    unsigned long long v28;  // r13
    unsigned long long v29;  // r13
    unsigned long long v30;  // rdi
    unsigned long long v31;  // rdx
    char *v15;  // rax
    struct_2 *cur;  // r8
    struct_2 *node;  // r9
    unsigned long v35;  // rax
    char *ptr5;  // rdi
    char *n;  // rsi
    unsigned long long v38;  // rcx
    unsigned long long v39;  // rcx
    char *iter;  // rdi
    unsigned long long ptr8;  // rdi
    char *v16;  // rdi
    unsigned long long ptr9;  // rsi
    unsigned long long ptr10;  // r15
    unsigned long long v44;  // r8
    unsigned int k;  // ebx
    unsigned long long v47;  // r8
    unsigned long long v48;  // rcx
    unsigned long long v49;  // rcx
    struct_4 *addr;  // r14
    unsigned int v50;  // eax
    struct_6 *v51;  // r15
    struct_7 *v52;  // r13
    unsigned long long v53;  // rbp
    unsigned int v54;  // esi
    unsigned long long v55;  // rdi
    unsigned long long i0;  // rcx
    unsigned long long v57;  // rdx
    struct_8 *ptr6;  // rax
    long long v59;  // r15
    unsigned long v18;  // rbx
    char *v60;  // r11
    char *m;  // rsi
    unsigned long long v62;  // rcx
    unsigned long v19;  // rsi
    char *ptr11;  // rsi
    long long v21;  // r15
    char v0;  // [bp+0x0]
    long long flag;  // [bp+0x30], Other Possible Types: unsigned int
    unsigned int v3;  // [bp+0x40]
    unsigned long v4;  // [bp+0x48]
    char *v5;  // [bp+0x50], Other Possible Types: unsigned long long
    char *ptr7;  // [bp+0x58]
    unsigned long long v7;  // [bp+0x60]
    unsigned long long p[4];  // [bp+0x68]
    unsigned long long v9;  // [bp+0x70]
    unsigned long ptr13;  // [bp+0x78]
    unsigned long v11;  // [bp+0x80]
    unsigned long long v12;  // [bp+0x90]

    if (v13 && ptr)
    {
        v16 = v15;
        if (v15)
        {
            ptr->field_10 = addr;
            ptr->field_8 = v18;
            ptr->field_0 = v3;
            ptr->field_118 = 0;
            ptr->field_318 = &v16[4 * v19];
            ptr11 = v5;
            if ((int)sub_1001214ec(addr->field_50, addr->field_50, v16, addr->field_38, addr->field_0, v21))
            {
                k = 1;
                if ((int)sub_100121280(ptr11, v16, v4))
                    goto LABEL_1001293d9;
                v22 = 1;
LABEL_1001293e3:
                v23 = v3;
                v11 = v23;
                if (v22 && v24)
                {
                    v25 = v4 * 32;
                    if (v25 > 0x400)
                        v25 = 0x400;
                    v26 = 0;
                    v27 = 0;
                    flag = 0;
                    while (true)
                    {
                        v29 = v28 - 1;
                        if (!v28)
                            break;
                        v30 = *((int *)(ptr13 + (v29 >> 5) * 4)) >> ((char)v29 & 31 & 63) & 1;
                        if (v27)
                        {
                            p[1] = p[1] + 1;
                            p[0] = p[0] + v30;
                            if (v23)
                                goto LABEL_1001294f0;
                            if (k && (int)sub_100125a2c(v15, v15, v15, addr, ptr->field_318, v21))
                                k = 1;
                            else
                                k = 0;
                            if (v30)
                            {
                                if (k && !((v16 = v15, !(int)sub_1001214ec(v16, v16, v16, addr->field_38, addr->field_0, v21))))
                                {
                                    v27 = flag;
                                    k = 1;
                                    goto LABEL_1001294dd;
                                }
                                else
                                {
                                    k = 0;
                                }
                            }
                            v27 = flag;
                            goto LABEL_1001294f0;
                        }
                        else
                        {
                            v26 = v30 + v26 * 2;
                            if (v29 && v26 * 2 < v25 || !((v27 = 1, flag = 1, !v23)))
                            {
LABEL_1001294f0:
                                v16 = v15;
                                v23 = v11;
                                v28 = v29;
                                if (!k)
                                    break;
                            }
                            else
                            {
                                if (k)
                                {
                                    v16 = v15;
                                    if ((int)sub_100125b18(addr->field_50, v26 & 4294967295, v16, addr, v21))
                                    {
                                        k = 1;
                                        v27 = 1;
                                    }
                                    else
                                    {
                                        v27 = flag;
                                        goto LABEL_100129583;
                                    }
                                }
                                else
                                {
LABEL_100129583:
                                    k = 0;
                                    goto LABEL_1001294f0;
                                }
LABEL_1001294dd:
                                v23 = v11;
                                v28 = v29;
                            }
                        }
                    }
                    ptr->field_120 = v16;
                    if (!v27)
                    {
                        k = 0;
                        sub_1001259d8(4, &g_1000225e4, v21);
                    }
                }
                else
                {
                    v31 = 1;
                    if (k)
                    {
                        cur = &ptr->field_120;
                        for (node = &ptr->field_1c; v31 <= vvar_877{r56|8b}; cur = &cur->field_8)
                        {
                            v35 = v4;
                            ptr5 = &v16[4 * (v35 * ((-(0 < ((char)~((unsigned int)v31) & 1)) & vvar_995{r56|8b}) + v31 - 1) >> 1)];
                            *((char **)&cur->field_0) = ptr5;
                            node->field_0 = 0;
                            if ((unsigned int)v23)
                            {
                                *((char **)&cur->field_0) = NULL;
                            }
                            else
                            {
                                n = &addr->field_50->field_0;
                                for (v38 = v35 * 4; v38; n += 1)
                                {
                                    v38 -= 1;
                                    *(ptr5) = *(n);
                                    ptr5 += 1;
                                }
                            }
                            v16 = v15;
                            v31 += 1;
                            node = &node->padding_4;
                        }
                        ptr11 = v5;
                    }
                    p[3] = p[3] + vvar_877{r56|8b} + 1;
                    if (!(unsigned int)v23)
                    {
                        v39 = v4 * 4;
                        for (iter = ptr7; v39; ptr11 += 1)
                        {
                            v39 -= 1;
                            *(iter) = *(ptr11);
                            iter += 1;
                        }
                    }
                    ptr8 = 0;
                    ptr9 = 0;
                    ptr10 = 0;
                    v5 = 0;
                    do
                    {
                        if (ptr10 == v28)
                            break;
                        v44 = v7;
                        if (ptr8 >> ((char)v44 + 2 & 63))
                        {
                            k = 0;
                            sub_1001259d8(4, &g_1000225e4, flag);
                            v44 = v7;
                        }
                        v47 = v44;
                        if (((char)(*((int *)(ptr13 + (ptr10 >> 5) * 4)) >> ((char)ptr10 & 31)) & 1))
                        {
                            if (k)
                            {
                                do
                                {
                                    if (ptr9 < v47 + 1)
                                        break;
                                    if (((char)ptr8 & 1))
                                    {
                                        v48 = ptr8 & vvar_995{r56|8b};
                                        ptr8 -= v48;
                                        if (k && sub_10012911c(v48, ptr7, ptr, flag))
                                            goto LABEL_1001296d5;
                                        k = 0;
                                    }
                                    if (!k)
                                        goto LABEL_1001296ee;
LABEL_1001296d5:
                                    if (sub_1001290c4(ptr7, ptr, flag))
                                    {
                                        k = 1;
                                        continue;
                                    }
LABEL_1001296ee:
                                    k = 0;
                                } while ((ptr8 >>= 1, ptr9 -= 1, k));
                                v28 = v9;
                                ptr10 = v5;
                            }
                            ptr8 |= 1 << ((char)ptr9 & 63);
                        }
                        ptr10 += 1;
                        ptr9 += 1;
                        v5 = ptr10;
                    } while (k);
                    if (k)
                    {
                        while (ptr8)
                        {
                            if (ptr8 <= vvar_995{r56|8b})
                            {
                                v49 = ptr8;
                                goto LABEL_100129766;
                            }
                            else if (!((char)~((unsigned int)ptr8) & 1))
                            {
                                v49 = (ptr8 <= vvar_995{r56|8b} * 3 ? vvar_995{r56|8b} : ptr8 & vvar_995{r56|8b});
LABEL_100129766:
                                ptr8 -= v49;
                                if (!k)
                                    goto LABEL_10012979d;
                                v50 = sub_10012911c();
                                goto LABEL_100129792;
                            }
                            else
                            {
                                ptr8 >>= 1;
                                if (!k)
                                    goto LABEL_10012979d;
                                v50 = sub_1001290c4(ptr7, ptr, flag);
LABEL_100129792:
                                if (v50)
                                {
                                    k = 1;
                                }
                                else
                                {
LABEL_10012979d:
                                    k = 0;
                                    break;
                                }
                            }
                        }
                        if (k)
                        {
                            v51 = &(&ptr->field_0)[2 * vvar_995{r56|8b} + 70];
                            v52 = &(&ptr->field_0)[vvar_995{r56|8b} + 6];
                            do
                            {
                                if (v53 < 2)
                                    break;
                                if (*((int *)&v52->padding_0[0]))
                                {
                                    v54 = 0;
                                    v55 = (!((char)~((unsigned int)v53) & 1) ? 1 : v53 >> 1);
                                    i0 = v53 >> 1;
                                    if (i0 != v53)
                                    {
                                        v57 = &(&ptr->field_0)[i0 + 6];
                                        ptr6 = &(&ptr->field_0)[v53 + -1 * i0 + 6];
                                        do
                                        {
                                            if (v54)
                                                break;
                                            if (*((int *)v57) != v54)
                                            {
                                                v54 = *((int *)&ptr6->padding_0[0]);
                                                v55 = i0;
                                            }
                                            i0 += 1;
                                            v57 += 4;
                                            ptr6 = &ptr6->padding_0[4];
                                        } while (i0 != v53);
                                    }
                                    if (k && sub_10012911c(v55, *((long long *)&v51->padding_0[0]), ptr, flag) && sub_10012911c(v53 - v55, *((long long *)&v51->padding_0[0]), ptr, flag))
                                        k = 1;
                                    else
                                        k = 0;
                                }
                                v53 -= 1;
                                v52 = &v52->padding_0[4];
                                v51 = &v51->padding_0[8];
                            } while (k);
                        }
                    }
                    v59 = flag;
                }
                goto LABEL_100129886;
            }
            else
            {
                k = 0;
LABEL_1001293d9:
                v22 = 0;
                if (k)
                    goto LABEL_1001293e3;
                v60 = v16;
                goto LABEL_100129886;
            }
        }
        else
        {
            v60 = NULL;
        }
    }
    k = 0;
LABEL_100129886:
    p[3] = p[3] + 1;
    if (k && !v3)
    {
        m = &ptr->field_120->field_0;
        for (v62 = v4 * 4; v62; m += 1)
        {
            v62 -= 1;
            *(ptr7) = *(m);
            ptr7 += 1;
        }
    }
    if (v60)
        sub_10012185c(v60, 0, v59);
    if (ptr)
        sub_10012185c(ptr, 0, v59);
    sub_10011be80(v12 ^ &v0);
    return;
}
