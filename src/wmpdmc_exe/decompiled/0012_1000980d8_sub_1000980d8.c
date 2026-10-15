/* sub_1000980d8 @ 0x1000980d8
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000980d8  (1280 bytes, 102 basic blocks)
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

int sub_1000980d8(void)
{
    struct_1 *addr;  // rcx
    struct_1 *v10;  // rsi
    struct_9 *cur;  // rbx
    struct_4 *ptr;  // rbp
    long long v21;  // rax
    unsigned int v22;  // ebx
    int v23;  // r14d
    unsigned long long v24;  // rdi
    long long v25;  // rax
    unsigned int v26;  // eax
    int iter;  // edi
    unsigned long v28;  // rcx
    unsigned int v11;  // r9d
    unsigned long v29;  // rbx
    unsigned int v30;  // eax
    unsigned int v31;  // r12d
    struct_5 **v32;  // rax
    unsigned int v33;  // eax
    unsigned long long v34;  // rbx
    struct_7 **v35;  // rax
    unsigned long long v36;  // rbx
    long long v37;  // rax
    unsigned long long v38;  // rdi
    struct_2 *v12;  // rdx
    long long v39;  // rax
    unsigned int v40;  // ecx
    unsigned int v41;  // eax
    struct_4 *p;  // rbp
    struct_2 *v15;  // r8
    unsigned int v16;  // ecx
    unsigned int v17;  // eax
    int v18;  // edi
    long long v0;  // [bp-0x78]
    unsigned long v1;  // [bp-0x68]
    struct_4 *v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned int v6;  // [bp+0x20]
    long long v7;  // [bp+0x28]
    unsigned int v8;  // [bp+0x30]

    v10 = addr;
    if (((char)v11 & 1))
        return;
    if (!addr->field_40 || addr->field_18)
        return;
    p = (!(v12->field_89 & 2) ? g_1000de270 : sub_100055880(v12, &g_100007160, 0));
    v1 = p->field_8;
    sub_10007c47c(&v3, v12, v11, v7);
    if (v15 == v12)
    {
        v16 = p->field_0;
        if ((v16 & 4294967168) != 4294967168)
        {
            v17 = (v16 & 4294967168) - 1 ^ ~(v16) & 127;
            p->field_0 = v17;
            if (!(v17 & 4294967168))
                sub_100059224(p); /* do not return */
        }
    }
    else
    {
        if (!v15)
        {
            v6 = _INSERT(v11 >> 1, 0, (char)(v11 >> 1) & 1);
            if (!((char)v11 & 4))
            {
                v18 = (!(char)v6 ? addr->field_40 - 1 : 0);
                cur = 32 * v18 + (char *)addr->field_48;
                ptr = p;
                if (!v4)
                {
                    do
                    {
                        if (cur->field_c > 0)
                        {
                            v21 = sub_10007c210(addr, v12, 0 + cur->field_18, v1);
                            if (!v21)
                            {
                                sub_10009824a();
                                return;
                            }
                            *((unsigned int *)&v0) = v8;
                            sub_10007c420(&v3, v21, v11, v7, v0); /* do not return */
                        }
                        if ((char)v6)
                        {
                            v18 += 1;
                            ptr = p;
                            if (v18 == addr->field_40)
                                break;
                            cur = &cur->padding_1c[4];
                        }
                        else
                        {
                            ptr = p;
                            if (cur == addr->field_48)
                                break;
                            cur = &cur->padding_1c[4];
                        }
                    } while ((ptr = p, !v4));
                }
            }
            else
            {
                v22 = 0;
                ptr = p;
                if (!v4)
                {
                    v23 = 0;
                    ptr = p;
                    if (addr->field_40 > 0)
                    {
                        v24 = 0;
                        do
                        {
                            if (v22 < *((int *)&addr->field_48->padding_0[v24 + 12]))
                            {
                                v25 = sub_10007c210(addr, v12);
                                if (!v25)
                                {
                                    sub_100098321();
                                    return;
                                }
                                *((unsigned int *)&v0) = v8;
                                sub_10007c420(&v3, v25, v11, v7, v0); /* do not return */
                            }
                        } while ((v23 = (int)(v23 + 1), v24 += 32, v23 < addr->field_40));
                        ptr = p;
                    }
                }
            }
        }
        else
        {
            v26 = sub_10007c1b4(addr, v12, v15);
            if (v26 >= 0 && !((iter = (int)0, addr->field_40 <= 0)))
            {
                v28 = &addr->field_48->field_c;
                do
                {
                    if (v26 < *((int *)(v28 + 12)) + *((int *)v28))
                        goto LABEL_10009838b;
                } while ((iter = (int)(iter + 1), v28 = (unsigned long)(v28 + 32), iter < addr->field_40));
            }
            iter = -1;
LABEL_10009838b:
            v29 = iter;
            if (v11 == 8)
            {
                ptr = p;
                if (iter > 0)
                {
                    v38 = v29 * 32;
                    do
                    {
                        v38 -= 32;
                        v29 -= 1;
                        if (*((int *)&addr->field_48->padding_0[v38 + 12]) > 0)
                        {
                            v39 = sub_10007c210(addr, v12, 0 + *((int *)&addr->field_48->padding_0[v38 + 24]), v1);
                            if (!v39)
                            {
                                sub_100098629();
                                return;
                            }
                            *((unsigned int *)&v0) = v8;
                            sub_10007c420(&v3, v39, 8, v7, v0); /* do not return */
                        }
                    } while (!v4 && v29 > 0);
                    ptr = v2;
                }
            }
            else if (v11 == 10)
            {
                ptr = p;
                if (iter < addr->field_40 - 1)
                {
                    v36 = v29 * 32;
                    do
                    {
                        v36 += 32;
                        iter += 1;
                        if (*((int *)&addr->field_48->padding_0[v36 + 12]) > 0)
                        {
                            v37 = sub_10007c210(addr, v12, 0 + *((int *)&addr->field_48->padding_0[v36 + 24]), v1);
                            if (!v37)
                            {
                                sub_100098587();
                                return;
                            }
                            *((unsigned int *)&v0) = v8;
                            sub_10007c420(&v3, v37, 10, v7, v0); /* do not return */
                        }
                    } while ((ptr = p, !v4 && (ptr = p, iter < addr->field_40 - 1)));
                }
            }
            else if (v11 != 12)
            {
                ptr = p;
                if (v11 == 14)
                {
                    v30 = sub_10007c1b4(addr, v12, v15);
                    v31 = (&addr->field_48->field_18)[8 * v29] + (&addr->field_48->field_c)[8 * v29] - 1;
                    ptr = p;
                    if (v30 < v31)
                    {
                        do
                        {
                            v30 += 1;
                            v32 = sub_10007c210(addr, v12, v30, v1);
                            if (v32)
                                *(v32)->field_98();
                        } while ((ptr = p, v30 < v31));
                    }
                }
            }
            else
            {
                v33 = sub_10007c1b4(addr, v12, v15);
                v34 = v29 * 32;
                ptr = p;
                if (v33 > *((int *)&addr->field_48->padding_0[v34 + 24]))
                {
                    do
                    {
                        v33 -= 1;
                        v35 = sub_10007c210(addr, v12, v33, v1);
                        if (v35)
                            *(v35)->field_98();
                    } while ((ptr = p, v33 > *((int *)(24 + v34 + (char *)addr->field_48))));
                }
            }
        }
        v40 = ptr->field_0;
        if ((v40 & 4294967168) == 4294967168)
            return;
        v41 = (v40 & 4294967168) - 1 ^ ~(v40) & 127;
        ptr->field_0 = v41;
        if (!(v41 & 4294967168))
            sub_100059224(ptr); /* do not return */
        return;
    }
    return;
}
