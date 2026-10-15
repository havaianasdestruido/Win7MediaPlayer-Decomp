/* sub_10009a3d8 @ 0x10009a3d8
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10009a3d8  (1266 bytes, 102 basic blocks)
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

typedef struct struct_1 {
    char padding_0[24];
    char field_18;
    char padding_19[39];
    int field_40;
    char padding_44[4];
    struct struct_0 *field_48;
} struct_1;

typedef struct struct_2 {
    char padding_0[137];
    char field_89;
} struct_2;

typedef struct struct_4 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_4;

typedef struct struct_9 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[8];
    unsigned int field_18;
    char padding_1c[16];
    char field_2c;
} struct_9;

typedef struct struct_5 {
    char padding_0[152];
    struct struct_6 *field_98;
} struct_5;

typedef struct struct_7 {
    char padding_0[152];
    struct struct_8 *field_98;
} struct_7;

typedef struct struct_0 {
    char padding_0[12];
    unsigned int field_c;
    char padding_10[8];
    unsigned int field_18;
    char padding_1c[16];
    char field_2c;
} struct_0;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_3;

extern void g_100007160;
extern struct_3 *g_1000de270;

int sub_10009a3d8(void)
{
    struct_1 *p;  // rcx
    struct_1 *v9;  // rsi
    struct_9 *cur;  // rbx
    long long v19;  // rax
    unsigned int v20;  // ebx
    int v21;  // r14d
    unsigned long long v22;  // rdi
    long long v23;  // rax
    unsigned int v24;  // eax
    int iter;  // edi
    unsigned long v26;  // rcx
    unsigned long v27;  // rbx
    unsigned int v10;  // r9d
    unsigned long long v28;  // rbx
    long long v29;  // rax
    unsigned long long v30;  // rdi
    long long v31;  // rax
    unsigned int j;  // eax
    unsigned int v33;  // r12d
    struct_5 **v34;  // rax
    unsigned int k;  // eax
    unsigned long long v36;  // rbx
    struct_7 **v37;  // rax
    struct_2 *v11;  // rdx
    unsigned int v38;  // ecx
    unsigned int v39;  // eax
    struct_4 *ptr;  // rbp
    struct_2 *v14;  // r8
    unsigned int v15;  // ecx
    unsigned int v16;  // eax
    int v17;  // edi
    long long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x68]
    char v2;  // [bp-0x58]
    unsigned long long i;  // [bp-0x50]
    unsigned int v5;  // [bp+0x20]
    long long v6;  // [bp+0x28]
    unsigned int v7;  // [bp+0x30]

    v9 = p;
    if (((char)v10 & 1))
        return;
    if (!p->field_40 || p->field_18)
        return;
    ptr = (!(v11->field_89 & 2) ? g_1000de270 : sub_100055880(v11, &g_100007160, 0));
    v1 = ptr->field_8;
    sub_10007c47c(&v2, v11, v10, v6);
    if (v14 == v11)
    {
        v15 = ptr->field_0;
        if ((v15 & 4294967168) != 4294967168)
        {
            v16 = (v15 & 4294967168) - 1 ^ ~(v15) & 127;
            ptr->field_0 = v16;
            if (!(v16 & 4294967168))
                sub_100059224(ptr); /* do not return */
        }
    }
    else
    {
        if (!v14)
        {
            v5 = _INSERT(v10 >> 1, 0, (char)(v10 >> 1) & 1);
            if (((char)v10 & 4))
            {
                v17 = (!(char)v5 ? p->field_40 - 1 : 0);
                cur = 32 * v17 + (char *)p->field_48;
                if (!i)
                {
                    do
                    {
                        if (cur->field_c > 0)
                        {
                            v19 = sub_10007c210(p, v11, 0 + cur->field_18, v1);
                            if (!v19)
                            {
                                sub_10009a54a();
                                return;
                            }
                            *((unsigned int *)&v0) = v7;
                            sub_10007c420(&v2, v19, v10, v6, v0); /* do not return */
                        }
                        if ((char)v5)
                        {
                            v17 += 1;
                            if (v17 == p->field_40)
                                break;
                            cur = &cur->padding_1c[4];
                        }
                        else
                        {
                            if (cur == p->field_48)
                                break;
                            cur = &cur->padding_1c[4];
                        }
                    } while (!i);
                }
            }
            else
            {
                v20 = 0;
                if (!i)
                {
                    v21 = 0;
                    if (p->field_40 > 0)
                    {
                        v22 = 0;
                        do
                        {
                            if (v20 < *((int *)&p->field_48->padding_0[v22 + 12]))
                            {
                                v23 = sub_10007c210(p, v11);
                                if (!v23)
                                {
                                    sub_10009a643();
                                    return;
                                }
                                *((unsigned int *)&v0) = v7;
                                sub_10007c420(&v2, v23, v10, v6, v0); /* do not return */
                            }
                        } while ((v21 = (int)(v21 + 1), v22 += 32, v21 < p->field_40));
                    }
                }
            }
        }
        else
        {
            v24 = sub_10007c1b4(p, v11, v14);
            if (v24 >= 0 && !((iter = (int)0, p->field_40 <= 0)))
            {
                v26 = &p->field_48->field_c;
                do
                {
                    if (v24 < *((int *)(v26 + 12)) + *((int *)v26))
                        goto LABEL_10009a6ad;
                } while ((iter = (int)(iter + 1), v26 = (unsigned long)(v26 + 32), iter < p->field_40));
            }
            iter = -1;
LABEL_10009a6ad:
            v27 = iter;
            if (v10 == 8)
            {
                k = sub_10007c1b4(p, v11, v14);
                v36 = v27 * 32;
                if (k > *((int *)&p->field_48->padding_0[v36 + 24]))
                {
                    do
                    {
                        k -= 1;
                        v37 = sub_10007c210(p, v11, k, v1);
                        if (v37)
                            *(v37)->field_98();
                    } while (k > *((int *)&p->field_48->padding_0[v36 + 24]));
                }
            }
            else if (v10 == 10)
            {
                j = sub_10007c1b4(p, v11, v14);
                v33 = (&p->field_48->field_18)[8 * v27] + (&p->field_48->field_c)[8 * v27] - 1;
                if (j < v33)
                {
                    do
                    {
                        j += 1;
                        v34 = sub_10007c210(p, v11, j, v1);
                        if (v34)
                            *(v34)->field_98();
                    } while (j < v33);
                }
            }
            else if (v10 != 12)
            {
                if (v10 == 14 && iter < p->field_40 - 1)
                {
                    v28 = v27 * 32;
                    do
                    {
                        v28 += 32;
                        iter += 1;
                        if (*((int *)&p->field_48->padding_0[v28 + 12]) > 0)
                        {
                            v29 = sub_10007c210(p, v11, 0 + *((int *)&p->field_48->padding_0[v28 + 24]), v1);
                            if (!v29)
                            {
                                sub_10009a74a();
                                return;
                            }
                            *((unsigned int *)&v0) = v7;
                            sub_10007c420(&v2, v29, 14, v6, v0); /* do not return */
                        }
                    } while (!i && iter < p->field_40 - 1);
                }
            }
            else
            {
                if (iter > 0)
                {
                    v30 = v27 * 32;
                    do
                    {
                        v30 -= 32;
                        v27 -= 1;
                        if (*((int *)&p->field_48->padding_0[v30 + 12]) > 0)
                        {
                            v31 = sub_10007c210(p, v11, 0 + *((int *)&p->field_48->padding_0[v30 + 24]), v1);
                            if (!v31)
                            {
                                sub_10009a7ec();
                                return;
                            }
                            *((unsigned int *)&v0) = v7;
                            sub_10007c420(&v2, v31, 12, v6, v0); /* do not return */
                        }
                    } while (!i && v27 > 0);
                }
            }
        }
        v38 = ptr->field_0;
        if ((v38 & 4294967168) == 4294967168)
            return;
        v39 = (v38 & 4294967168) - 1 ^ ~(v38) & 127;
        ptr->field_0 = v39;
        if (!(v39 & 4294967168))
            sub_100059224(ptr); /* do not return */
        return;
    }
    return;
}
