/* sub_1000a2cfd @ 0x1000a2cfd
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000a2cfd  (846 bytes, 71 basic blocks)
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
    char padding_0[40];
    struct struct_0 *field_28;
} struct_1;

typedef struct struct_0 {
    char padding_0[48];
    unsigned int field_30;
    char padding_34[4];
    unsigned long long field_38;
} struct_0;

typedef struct struct_4 {
    char padding_0[72];
    struct struct_3 *field_48;
} struct_4;

typedef struct struct_7 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    unsigned int field_20;
    char padding_24[4];
    unsigned long long field_28;
} struct_7;

typedef struct struct_2 {
    char padding_0[72];
    struct struct_2 *field_48;
} struct_2;

typedef struct struct_6 {
    struct struct_5 *field_0;
} struct_6;

typedef struct struct_3 {
    char padding_0[72];
    struct struct_3 *field_48;
} struct_3;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

extern char g_100012840;
extern char g_100012860;
extern struct_6 *g_1000e2e08;
extern struct_6 *g_1000e2e10;
extern unsigned int g_1000e2e1c;

int sub_1000a2cfd(void)
{
    struct_1 *addr;  // rax
    struct_0 *ptr;  // rsi
    char v15;  // r15b
    unsigned int node;  // r14d
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rcx
    unsigned long long v19;  // cc_op
    unsigned long long v20;  // cc_dep1
    unsigned long v21;  // cc_dep2
    unsigned long long v22;  // rcx
    struct_7 *p;  // rbx
    unsigned int j;  // r12d
    unsigned int v11;  // eax
    unsigned long v25;  // 4117
    unsigned long long v26;  // rbp
    unsigned long long v27;  // rbp
    unsigned long long v28;  // rax
    struct_4 **v29;  // r8
    struct_4 **v30;  // r8
    struct_2 *cur;  // rcx
    unsigned long v32;  // cc_op
    unsigned long v33;  // cc_dep1
    unsigned long v34;  // cc_dep2
    unsigned long long flag3;  // r13
    unsigned long v35;  // cc_ndep
    unsigned long long v36;  // 4140
    struct_4 **v55;  // r8
    unsigned int k;  // r12d
    unsigned long v39;  // 4111
    unsigned long long v40;  // rbp
    unsigned long v13;  // rdi
    uint128_t v41;  // xmm0
    struct_2 *iter;  // rcx
    struct_4 **v43;  // r8
    unsigned long long v44;  // 4140
    unsigned int v45;  // eax
    unsigned long long v47;  // 4149
    unsigned long long v48;  // cc_ndep
    unsigned long long flag;  // rdi
    unsigned long v50;  // 4113
    unsigned int v51;  // edx
    unsigned int v52;  // eax
    struct_6 **v53;  // rcx
    char *v54;  // rdx
    unsigned long long v14;  // rdx
    unsigned long long v1;  // [bp+0x20]
    uint128_t v2;  // [bp+0x28]
    unsigned int v3;  // [bp+0x50]
    unsigned long long choice;  // [bp+0x58]
    unsigned long long flag2;  // [bp+0x60]
    unsigned int v6;  // [bp+0xc0]
    struct_4 **v7;  // [bp+0xd0]
    unsigned long long v8;  // [bp+0xd8]

    ptr = addr->field_28;
    v3 &= 0x80000000;
    choice = 0;
    flag2 = 0;
    v11 = ptr->field_30 & 268435455;
    flag3 = 0;
    v13 = v11;
    if ((unsigned int)v13 > 0)
    {
        v17 = v13 * 8;
        do
        {
            v14 = v17 - 8;
            v13 = (unsigned int)v13 - 1;
            v48 = 0;
            v1 = v14;
            v55 = *((long long *)(((ptr->field_30 >> 28 & 1) ? ptr->field_38 : (struct struct_0 *)&ptr->field_38) + v14));
            v15 = 0;
            node = 0;
            v6 = 0;
            v7 = v55;
            v17 = v14;
            if (v11 > 0)
            {
                v18 = 0;
                v8 = 0;
                do
                {
                    if (v15)
                        break;
                    v19 = 7;
                    v20 = v13 & 4294967295;
                    v21 = node;
                    v22 = v18;
                    if ((unsigned int)v13 != node)
                    {
                        v48 = 0;
                        p = *((long long *)(((ptr->field_30 >> 28 & 1) ? ptr->field_38 : (struct struct_0 *)&ptr->field_38) + v18));
                        j = 0;
                        v25 = _ccall(6, 19, (unsigned long long)(p->field_8 & 268435455), 0, 0);
                        v22 = v18;
                        if (!((char)v25))
                        {
                            v26 = flag3;
                            do
                            {
                                v27 = v26;
                                if (v15)
                                    break;
                                v28 = ((p->field_8 >> 28 & 1) ? p->field_10 : (struct struct_7 *)&p->field_10);
                                v29 = v7;
                                v30 = v29;
                                if ((char)sub_10009d104(*((long long *)(v28 + v27)), 0))
                                {
                                    cur = *(v29)->field_48;
                                    v30 = v29;
                                    if (*(v30)->field_48)
                                    {
                                        do
                                        {
                                        } while (*((long long *)(v28 + v27)) != cur && (cur = (struct_2 *)cur->field_48, cur));
                                        v30 = v29;
                                        if (cur)
                                        {
                                            sub_1000a3f18(&v3, v13 & 4294967295);
                                            v15 = 1;
                                            v30 = v7;
                                        }
                                    }
                                }
                                v55 = v30;
                                v36 = _ccall(v32, v33, v34, v35);
                                v48 = v36;
                                j += 1;
                                v26 = v27 + 8;
                            } while (j < (p->field_8 & 268435455));
                            v22 = v8;
                            node = v6;
                        }
                        v19 = 19;
                        v20 = p->field_20 & 268435455;
                        v21 = 0;
                        k = 0;
                        v39 = _ccall(6, 19, (unsigned long long)(p->field_20 & 268435455), 0, v48);
                        if (!((char)v39))
                        {
                            v40 = 0;
                            do
                            {
                                v19 = 5;
                                v20 = v15;
                                v21 = 0;
                                if (v15)
                                    break;
                                v41 = *((int128_t *)(((p->field_20 >> 28 & 1) ? p->field_28 : (struct struct_7 *)&p->field_28) + v40));
                                v2 = v41;
                                iter = *(v55)->field_48;
                                v43 = v55;
                                if (*(v43)->field_48)
                                {
                                    do
                                    {
                                    } while (*((unsigned long long *)((void*)&v2 + 8)) != iter && (iter = (struct_2 *)iter->field_48, iter));
                                    v43 = v55;
                                    if (iter)
                                    {
                                        sub_1000a3f18(&v3, v13 & 4294967295);
                                        v15 = 1;
                                        v43 = v7;
                                    }
                                }
                                v55 = v43;
                                v44 = _ccall(v32, v33, v34, v35);
                                v48 = v44;
                                k += 1;
                                v40 += 16;
                                v19 = 7;
                                v20 = k;
                                v21 = p->field_20 & 268435455;
                            } while (k < v45);
                            v22 = v8;
                        }
                    }
                    v47 = _ccall(v19, v20, v21, v48);
                    v48 = v47;
                    node += 1;
                    v18 = v22 + 8;
                    v11 = ptr->field_30 & 268435455;
                    v6 = node;
                    v8 = v18;
                } while (node < v11);
                v17 = v1;
            }
        } while ((unsigned int)v13 > 0);
    }
    flag = 0;
    v50 = _ccall(6, 19, (unsigned long long)(268435455 & v3), 0, v48);
    if (!((char)v50))
    {
        v51 = v3 >> 28;
        4295811690();
    }
    else if ((ptr->field_30 & 268435455))
    {
        4295811690();
    }
    else
    {
        v52 = g_1000e2e1c;
        if (((char)(v3 >> 28) & 1))
        {
            if (!((char)v52 & 1))
            {
                g_1000e2e1c = v52 | 1;
                g_1000e2e10 = &g_100012840;
            }
            v53 = &g_1000e2e10;
        }
        else
        {
            if (!((char)v52 & 2))
            {
                g_1000e2e1c = v52 | 2;
                g_1000e2e08 = &g_100012860;
            }
            v53 = &g_1000e2e08;
        }
        v54 = &v3;
        *(v53)->field_0();
    }
}
