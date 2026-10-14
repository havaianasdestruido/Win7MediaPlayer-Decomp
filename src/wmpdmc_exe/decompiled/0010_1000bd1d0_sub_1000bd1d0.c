/* sub_1000bd1d0 @ 0x1000bd1d0
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000bd1d0  (1459 bytes, 105 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3f6564d520c416147702a463a50724fd36c46c3a44a8447af89788586fc5efee
 *   Evidence: analysis/report/rea-evidence/wmpdmc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[144];
    unsigned long long field_98;
    char padding_a0[1688];
    unsigned int field_738;
    char padding_73c[8];
    unsigned int field_744;
    char padding_748[8];
    unsigned int field_750;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    unsigned int field_4;
    char padding_8[144];
    unsigned long long field_98;
    char padding_a0[1688];
    unsigned int field_738;
    char padding_73c[8];
    unsigned int field_744;
    char padding_748[8];
    unsigned int field_750;
} struct_1;

typedef struct struct_2 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_2;

extern struct_2 *g_1000dedd8;

long long sub_1000bd1d0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long flag, unsigned long a6, unsigned long long a7, long long a8, void* a9, unsigned long a10, void* a11, void* a12, unsigned int a13, unsigned int a14, unsigned int a15, unsigned int a16, unsigned long i, unsigned long index, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, long long a28, unsigned int a29)
{
    void* ptr5;  // r14
    void* ptr;  // rsi
    unsigned long v13;  // rcx
    unsigned long v14;  // rcx
    unsigned long v15;  // rcx
    void* v16;  // rdx
    struct_0 *p;  // r10
    struct_0 *v18;  // rcx
    struct_2 *v19;  // rbx
    long long v20;  // rdi
    unsigned int v21;  // ecx
    unsigned int v22;  // ecx
    struct_0 **addr;  // r15
    void* v23;  // r13
    unsigned long v24;  // rcx
    unsigned int v25;  // eax
    struct_2 *v27;  // rcx
    unsigned long v28;  // r9
    unsigned long long v29;  // r11
    void* v30;  // r13
    unsigned long v31;  // rcx
    unsigned long v32;  // rcx
    unsigned long v6;  // rcx
    void* ptr4;  // rdx
    unsigned long long j;  // rbp
    unsigned int v35;  // ecx
    unsigned int k;  // edx
    void* cur;  // r8
    long long v40;  // rdi
    long long v41;  // rdi
    unsigned int v7;  // r12d
    void* v8;  // r8
    unsigned long v9;  // rcx
    unsigned int v10;  // r13d
    unsigned long v11;  // rcx
    void* v12;  // r9
    long long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0xf8]

    ptr = ptr5 + 120;
    if (ptr && ptr >= ptr5 && !((v6 = (unsigned long)(unsigned long long)*(addr)->field_738, ptr + (unsigned long long)*(addr)->field_738 > a8 || (unsigned int)(unsigned long long)*(addr)->field_738 > v7)))
    {
        if (a13 > 0)
        {
            *((unsigned int *)ptr) = 0;
            v8 = ptr + 8;
            v9 = *(addr)->field_738;
            v10 = 128;
            a12 = ptr + 8;
            *((unsigned int *)&ptr[4]) = v9;
            ptr = a12 + v9;
            a7 = 128;
        }
        if (ptr && ptr >= ptr5 && !((v11 = (unsigned long)(unsigned long long)*(addr)->field_750, ptr + (unsigned long long)*(addr)->field_750 > a8 || *(addr)->field_750 > v7)))
        {
            if (a29)
            {
                *((unsigned int *)ptr) = 6;
                v12 = ptr + 8;
                v13 = *(addr)->field_750;
                a11 = ptr + 8;
                *((unsigned int *)&ptr[4]) = v13;
                ptr = a11 + v13;
                a7 = v10 + 8;
            }
            if (ptr && ptr >= ptr5 && !((v14 = (unsigned long)(unsigned long long)*(addr)->field_744, ptr + (unsigned long long)*(addr)->field_744 > a8 || *(addr)->field_744 > v7)))
            {
                if (a14)
                {
                    *((unsigned int *)&a7) = (unsigned int)a7 + 8;
                    *((unsigned int *)ptr) = 3;
                    v15 = *(addr)->field_744;
                    v16 = ptr + 8;
                    *((unsigned int *)&ptr[4]) = v15;
                    ptr = v16 + v15;
                    a9 = v16;
                }
                i = 160;
                do
                {
                    while (true)
                    {
                        p = sub_1000be260(addr);
                        a10 = p;
                        if (!p || !((v18 = *(addr), p >= v18 && p + 24 <= v18 + v18->field_98)))
                            break;
                        index = p->field_0;
                        v2 = (&vvar_13)[index];
                        if (!v2)
                        {
                            if (g_1000dedd8 != v19 && (g_1000dedd8->field_1c & 2))
                                sub_100020d8c(g_1000dedd8->field_10, v2 + 17, v20, p->field_4); /* do not return */
                        }
                        else
                        {
                            v21 = p->field_0;
                            if (v21)
                            {
                                v22 = v21 - 3;
                                if (v21 != 3)
                                {
                                    if (v22 != 2)
                                    {
                                        if (v22 == 3)
                                        {
                                            v23 = a11;
                                            if (v23 && v23 >= ptr5 && (v24 = (unsigned long)(unsigned long long)a29, v23 + v24 <= a8 && (unsigned int)v24 <= v7))
                                            {
                                                v25 = sub_1000bda6c(addr, p, v23, v24 & 4294967295);
                                                a11 = v23 + 16;
                                            }
                                            else
                                            {
                                                if (g_1000dedd8 != v19)
                                                {
                                                    if ((g_1000dedd8->field_1c & 1))
                                                        sub_100020584(g_1000dedd8->field_10); /* do not return */
                                                    4295809200();
                                                }
                                                else
                                                {
                                                    4295809200();
                                                }
                                            }
                                        }
                                        else
                                        {
                                            v27 = g_1000dedd8;
                                            if (g_1000dedd8 == v19)
                                                4295809200();
                                            if ((g_1000dedd8->field_1c & 1))
                                                sub_100020d8c(v27->field_10); /* do not return */
                                            4295809200();
                                        }
                                    }
                                    else
                                    {
                                        if (ptr && ptr >= ptr5 && (v28 = (unsigned long)(unsigned long long)a15, ptr + v28 <= a8 && (unsigned int)v28 <= v7))
                                        {
                                            v29 = sub_1000bdd08(addr, p, ptr, v28) & 4294967295;
                                            goto LABEL_1000bd4fc;
                                        }
                                        else
                                        {
                                            if (g_1000dedd8 != v19)
                                            {
                                                if ((g_1000dedd8->field_1c & 1))
                                                    sub_100020584(g_1000dedd8->field_10); /* do not return */
                                                4295809200();
                                            }
                                            else
                                            {
                                                4295809200();
                                            }
                                        }
                                    }
                                }
                                else
                                {
                                    if (a9 && a9 >= ptr5 && a14 + a9 <= a8 && a14 <= v7)
                                    {
                                        v29 = sub_1000bdb54(addr, p, a9, a14) & 4294967295;
                                        a9 += v29;
                                        goto LABEL_1000bd4fc;
                                    }
                                    else
                                    {
                                        if (g_1000dedd8 != v19)
                                        {
                                            if ((g_1000dedd8->field_1c & 1))
                                                sub_100020584(g_1000dedd8->field_10); /* do not return */
                                            4295809200();
                                        }
                                        else
                                        {
                                            4295809200();
                                        }
                                    }
                                }
                            }
                            else
                            {
                                v30 = a12;
                                if (v30 && v30 >= ptr5 && (v31 = (unsigned long)(unsigned long long)a13, v30 + v31 <= a8 && (unsigned int)v31 <= v7))
                                {
                                    v25 = sub_1000bd938(addr, p, v30, v31 & 4294967295);
                                    a12 = v30 + 12;
                                }
                                else
                                {
                                    if (g_1000dedd8 != v19)
                                    {
                                        if ((g_1000dedd8->field_1c & 1))
                                            sub_100020584(g_1000dedd8->field_10); /* do not return */
                                        4295809200();
                                    }
                                    else
                                    {
                                        4295809200();
                                    }
                                }
                            }
                            v29 = v25;
LABEL_1000bd4fc:
                            if ((unsigned int)v29)
                            {
                                v32 = index;
                                a7 = (unsigned int)a7 + (unsigned int)v29;
                                (&a13)[index] = v2 - v29;
                                a29 = a16;
                                return sub_1000bd533(index);
                            }
                            if (g_1000dedd8 == v19)
                                4295809200();
                            if ((g_1000dedd8->field_1c & 1))
                                sub_100020d8c(g_1000dedd8->field_10); /* do not return */
                            4295809200();
                        }
                    }
                    i += 8;
                } while (i < 1848);
                if ((unsigned int)a7 == v7)
                {
                    ptr4 = ptr5 + 20;
                    j = 16;
                    v35 = 0;
                    do
                    {
                        v35 = v35 * 101 + *((char *)ptr4);
                        ptr4 += 1;
                        j -= 1;
                    } while (j != 1);
                    k = v7 - 120;
                    if (k > 0)
                    {
                        cur = ptr5 + 120;
                        do
                        {
                            k -= 1;
                            v35 = v35 * 101 + *((char *)cur);
                            cur += 1;
                        } while (k > 0);
                    }
                    *((unsigned int *)&ptr5[12]) = v35;
                    if (g_1000dedd8 != v19 && (g_1000dedd8->field_1c & 4))
                    {
                        *((unsigned int *)&v1) = v7;
                        sub_100020b88(g_1000dedd8->field_10, 24, v40, a28, v1); /* do not return */
                    }
                    sub_1000aaec4(1);
                    flag = 0;
                    a4 = 128;
                    4297065192();
                }
                else
                {
                    if (g_1000dedd8 != v19)
                    {
                        if ((g_1000dedd8->field_1c & 1))
                        {
                            *((unsigned int *)&v1) = a7;
                            sub_100020f2c(g_1000dedd8->field_10, 29, v41, v7, v1); /* do not return */
                        }
                        4295809200();
                    }
                }
            }
            else
            {
                if (g_1000dedd8 != v19)
                {
                    if ((g_1000dedd8->field_1c & 1))
                        sub_100020584(g_1000dedd8->field_10); /* do not return */
                }
                else
                {
                    4295809200();
                }
            }
        }
        else
        {
            if (g_1000dedd8 != v19)
            {
                if ((g_1000dedd8->field_1c & 1))
                    sub_100020584(g_1000dedd8->field_10); /* do not return */
            }
            else
            {
                4295809200();
            }
        }
    }
    else if (g_1000dedd8 != v19 && (g_1000dedd8->field_1c & 1))
    {
        sub_100020584(g_1000dedd8->field_10); /* do not return */
    }
    4295809200();
}
