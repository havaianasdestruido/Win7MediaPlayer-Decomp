/* sub_7ff3b1710a2 @ 0x7ff3b1710a2
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b1710a2  (1467 bytes, 129 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
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

extern long long g_7ff3b131a90;

int sub_7ff3b1710a2(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, long long flag, unsigned long a6, unsigned int a7, unsigned long a8, char *a9, char *node, unsigned long long a11, unsigned long long *p, unsigned long long a13, unsigned long addr, unsigned long a15, unsigned long a16, unsigned long long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28)
{
    unsigned int v2;  // edi
    struct_2 *ptr;  // r12
    unsigned int v11;  // eax
    unsigned long v12;  // r10
    unsigned long long v13;  // r13
    unsigned long long v14;  // rsi
    unsigned long long v15;  // rbp
    unsigned int v16;  // edx
    unsigned long long v17;  // r13
    unsigned long long v18;  // r13
    unsigned long long v19;  // rdi
    unsigned long long v20;  // rdx
    char *v4;  // rax
    struct_2 *cur;  // r8
    struct_2 *ptr5;  // r9
    char *ptr6;  // rdi
    char *n;  // rsi
    unsigned long long v26;  // rcx
    unsigned long long v27;  // rcx
    char *iter;  // rdi
    unsigned long long ptr8;  // rdi
    unsigned long long ptr9;  // rsi
    char *v5;  // rdi
    unsigned long long ptr10;  // r15
    unsigned long long v32;  // r8
    unsigned int k;  // ebx
    unsigned long long v35;  // r8
    unsigned long long v36;  // rcx
    unsigned long long v37;  // rcx
    unsigned int v38;  // eax
    struct_4 *ptr13;  // r14
    struct_6 *v39;  // r15
    struct_7 *v40;  // r13
    unsigned long long v41;  // rbp
    unsigned int v42;  // esi
    unsigned long long v43;  // rdi
    unsigned long long i0;  // rcx
    unsigned long long v45;  // rdx
    struct_8 *ptr7;  // rax
    long long v47;  // r15
    char *v48;  // r11
    unsigned long v7;  // rbx
    char *m;  // rsi
    unsigned long long v50;  // rcx
    unsigned long v8;  // rsi
    char *ptr11;  // rsi
    long long v10;  // r15
    char v0;  // [bp+0x0]

    if (v2 && ptr)
    {
        v5 = v4;
        if (v4)
        {
            ptr->field_10 = ptr13;
            ptr->field_8 = v7;
            ptr->field_0 = a7;
            ptr->field_118 = 0;
            ptr->field_318 = &v5[4 * v8];
            ptr11 = a9;
            if ((int)sub_7ff3b16924c(ptr13->field_50, ptr13->field_50, v5, ptr13->field_38, ptr13->field_0, v10))
            {
                k = 1;
                if ((int)sub_7ff3b168fe0(ptr11, v5, a8))
                    goto LABEL_7ff3b171139;
                v11 = 1;
LABEL_7ff3b171143:
                v12 = a7;
                a15 = v12;
                if (v11 && v13)
                {
                    v14 = a8 * 32;
                    if (v14 > 0x400)
                        v14 = 0x400;
                    v15 = 0;
                    v16 = 0;
                    flag = 0;
                    while (true)
                    {
                        v18 = v17 - 1;
                        if (!v17)
                            break;
                        v19 = *((int *)(addr + (v18 >> 5) * 4)) >> ((char)v18 & 31 & 63) & 1;
                        if (v16)
                        {
                            p[1] = p[1] + 1;
                            *(p) = *(p) + v19;
                            if (v12)
                                goto LABEL_7ff3b171250;
                            if (k && (int)sub_7ff3b16d78c(v4, v4, v4, ptr13, ptr->field_318, v10))
                                k = 1;
                            else
                                k = 0;
                            if (v19)
                            {
                                if (k && !((v5 = v4, !(int)sub_7ff3b16924c(v5, v5, v5, ptr13->field_38, ptr13->field_0, v10))))
                                {
                                    v16 = flag;
                                    k = 1;
                                    goto LABEL_7ff3b17123d;
                                }
                                else
                                {
                                    k = 0;
                                }
                            }
                            v16 = flag;
                            goto LABEL_7ff3b171250;
                        }
                        else
                        {
                            v15 = v19 + v15 * 2;
                            if (v18 && v15 * 2 < v14 || !((v16 = 1, flag = 1, !v12)))
                            {
LABEL_7ff3b171250:
                                v5 = v4;
                                v12 = a15;
                                v17 = v18;
                                if (!k)
                                    break;
                            }
                            else
                            {
                                if (k)
                                {
                                    v5 = v4;
                                    if ((int)sub_7ff3b16d878(ptr13->field_50, v15 & 4294967295, v5, ptr13, v10))
                                    {
                                        k = 1;
                                        v16 = 1;
                                    }
                                    else
                                    {
                                        v16 = flag;
                                        goto LABEL_7ff3b1712e3;
                                    }
                                }
                                else
                                {
LABEL_7ff3b1712e3:
                                    k = 0;
                                    goto LABEL_7ff3b171250;
                                }
LABEL_7ff3b17123d:
                                v12 = a15;
                                v17 = v18;
                            }
                        }
                    }
                    ptr->field_120 = v5;
                    if (!v16)
                    {
                        k = 0;
                        sub_7ff3b16d738(4, &g_7ff3b131a90, v10);
                    }
                }
                else
                {
                    v20 = 1;
                    if (k)
                    {
                        cur = &ptr->field_120;
                        for (ptr5 = &ptr->field_1c; v20 <= vvar_906{r56|8b}; cur = &cur->field_8)
                        {
                            ptr6 = &v5[4 * (a8 * ((-(0 < ((char)~((unsigned int)v20) & 1)) & vvar_1024{r56|8b}) + v20 - 1) >> 1)];
                            *((char **)&cur->field_0) = ptr6;
                            ptr5->field_0 = 0;
                            if ((unsigned int)v12)
                            {
                                *((char **)&cur->field_0) = NULL;
                            }
                            else
                            {
                                n = &ptr13->field_50->field_0;
                                for (v26 = a8 * 4; v26; n += 1)
                                {
                                    v26 -= 1;
                                    *(ptr6) = *(n);
                                    ptr6 += 1;
                                }
                            }
                            v5 = v4;
                            v20 += 1;
                            ptr5 = &ptr5->padding_4;
                        }
                        ptr11 = a9;
                    }
                    p[3] = p[3] + vvar_906{r56|8b} + 1;
                    if (!(unsigned int)v12)
                    {
                        v27 = a8 * 4;
                        for (iter = node; v27; ptr11 += 1)
                        {
                            v27 -= 1;
                            *(iter) = *(ptr11);
                            iter += 1;
                        }
                    }
                    ptr8 = 0;
                    ptr9 = 0;
                    ptr10 = 0;
                    a9 = 0;
                    do
                    {
                        if (ptr10 == v17)
                            break;
                        v32 = a11;
                        if (ptr8 >> ((char)v32 + 2 & 63))
                        {
                            k = 0;
                            sub_7ff3b16d738(4, &g_7ff3b131a90, flag);
                            v32 = a11;
                        }
                        v35 = v32;
                        if (((char)(*((int *)(addr + (ptr10 >> 5) * 4)) >> ((char)ptr10 & 31)) & 1))
                        {
                            if (k)
                            {
                                do
                                {
                                    if (ptr9 < v35 + 1)
                                        break;
                                    if (((char)ptr8 & 1))
                                    {
                                        v36 = ptr8 & vvar_1024{r56|8b};
                                        ptr8 -= v36;
                                        if (k && sub_7ff3b170e7c(v36, node, ptr, flag))
                                            goto LABEL_7ff3b171435;
                                        k = 0;
                                    }
                                    if (!k)
                                        goto LABEL_7ff3b17144e;
LABEL_7ff3b171435:
                                    if (sub_7ff3b170e24(node, ptr, flag))
                                    {
                                        k = 1;
                                        continue;
                                    }
LABEL_7ff3b17144e:
                                    k = 0;
                                } while ((ptr8 >>= 1, ptr9 -= 1, k));
                                v17 = a13;
                                ptr10 = a9;
                            }
                            ptr8 |= 1 << ((char)ptr9 & 63);
                        }
                        ptr10 += 1;
                        ptr9 += 1;
                        a9 = ptr10;
                    } while (k);
                    if (k)
                    {
                        while (ptr8)
                        {
                            if (ptr8 <= vvar_1024{r56|8b})
                            {
                                v37 = ptr8;
                                goto LABEL_7ff3b1714c6;
                            }
                            else if (!((char)~((unsigned int)ptr8) & 1))
                            {
                                v37 = (ptr8 <= vvar_1024{r56|8b} * 3 ? vvar_1024{r56|8b} : ptr8 & vvar_1024{r56|8b});
LABEL_7ff3b1714c6:
                                ptr8 -= v37;
                                if (!k)
                                    goto LABEL_7ff3b1714fd;
                                v38 = sub_7ff3b170e7c();
                                goto LABEL_7ff3b1714f2;
                            }
                            else
                            {
                                ptr8 >>= 1;
                                if (!k)
                                    goto LABEL_7ff3b1714fd;
                                v38 = sub_7ff3b170e24(node, ptr, flag);
LABEL_7ff3b1714f2:
                                if (v38)
                                {
                                    k = 1;
                                }
                                else
                                {
LABEL_7ff3b1714fd:
                                    k = 0;
                                    break;
                                }
                            }
                        }
                        if (k)
                        {
                            v39 = &(&ptr->field_0)[2 * vvar_1024{r56|8b} + 70];
                            v40 = &(&ptr->field_0)[vvar_1024{r56|8b} + 6];
                            do
                            {
                                if (v41 < 2)
                                    break;
                                if (*((int *)&v40->padding_0[0]))
                                {
                                    v42 = 0;
                                    v43 = (!((char)~((unsigned int)v41) & 1) ? 1 : v41 >> 1);
                                    i0 = v41 >> 1;
                                    if (i0 != v41)
                                    {
                                        v45 = &(&ptr->field_0)[i0 + 6];
                                        ptr7 = &(&ptr->field_0)[v41 + -1 * i0 + 6];
                                        do
                                        {
                                            if (v42)
                                                break;
                                            if (*((int *)v45) != v42)
                                            {
                                                v42 = *((int *)&ptr7->padding_0[0]);
                                                v43 = i0;
                                            }
                                            i0 += 1;
                                            v45 += 4;
                                            ptr7 = &ptr7->padding_0[4];
                                        } while (i0 != v41);
                                    }
                                    if (k && sub_7ff3b170e7c(v43, *((long long *)&v39->padding_0[0]), ptr, flag) && sub_7ff3b170e7c(v41 - v43, *((long long *)&v39->padding_0[0]), ptr, flag))
                                        k = 1;
                                    else
                                        k = 0;
                                }
                                v41 -= 1;
                                v40 = &v40->padding_0[4];
                                v39 = &v39->padding_0[8];
                            } while (k);
                        }
                    }
                    v47 = flag;
                }
                goto LABEL_7ff3b1715e6;
            }
            else
            {
                k = 0;
LABEL_7ff3b171139:
                v11 = 0;
                if (k)
                    goto LABEL_7ff3b171143;
                v48 = v5;
                goto LABEL_7ff3b1715e6;
            }
        }
        else
        {
            v48 = NULL;
        }
    }
    k = 0;
LABEL_7ff3b1715e6:
    p[3] = p[3] + 1;
    if (k && !a7)
    {
        m = &ptr->field_120->field_0;
        for (v50 = a8 * 4; v50; m += 1)
        {
            v50 -= 1;
            *(node) = *(m);
            node += 1;
        }
    }
    if (v48)
        sub_7ff3b1695bc(v48, 0, v47);
    if (ptr)
        sub_7ff3b1695bc(ptr, 0, v47);
    return sub_7ff3b163ab0(a17 ^ &v0);
}
