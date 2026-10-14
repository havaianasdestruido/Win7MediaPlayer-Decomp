/* sub_1000a103f @ 0x1000a103f
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000a103f  (839 bytes, 69 basic blocks)
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
    unsigned long long field_0;
    unsigned int field_8;
    char padding_c[4];
    struct struct_0 *field_10;
    unsigned long long field_18;
    unsigned int field_20;
    char padding_24[4];
    struct struct_0 *field_28;
    unsigned long long field_30;
} struct_0;

typedef struct struct_5 {
    struct struct_5 *field_0;
} struct_5;

typedef struct struct_1 {
    char padding_0[48];
    unsigned int field_30;
    char padding_34[4];
    struct struct_1 *field_38;
} struct_1;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    unsigned long long field_10;
    char padding_18[8];
    unsigned int field_20;
    char padding_24[4];
    unsigned long long field_28;
} struct_4;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern char g_100011f78;
extern char g_100019d78;
extern unsigned int g_1000e2da8;
extern struct_2 *g_1000e2db0;
extern struct_2 *g_1000e2db8;

int sub_1000a103f(void)
{
    struct_0 *ptr;  // rax
    struct_0 *v12;  // r13
    struct_1 *v21;  // r14
    struct_1 *addr;  // rdi
    unsigned long long v23;  // rdx
    long long v24;  // rcx
    unsigned long v25;  // 4119
    struct_0 *v26;  // r8
    struct_0 *v27;  // r8
    struct_1 *v28;  // r9
    struct_4 *p;  // r14
    struct_0 *v30;  // r8
    unsigned long v13;  // r15
    unsigned long long v31;  // rbp
    unsigned long v32;  // 4114
    struct_0 *v33;  // r13
    struct_0 *v34;  // rax
    char v35;  // al
    unsigned long v36;  // 4126
    unsigned long long v37;  // r10
    unsigned long long v38;  // r8
    unsigned long long i;  // r10
    unsigned long long v40;  // r10
    char *v14;  // r8
    unsigned long long v41;  // rbp
    unsigned long v42;  // 4113
    struct_0 *v43;  // rsi
    struct_0 *v44;  // rsi
    struct_0 *v45;  // r8
    unsigned long v46;  // 4126
    unsigned long long v47;  // r10
    char *v15;  // rdx
    struct_0 *v48;  // r9
    struct_0 *v49;  // r9
    unsigned long long j;  // r10
    unsigned long long v52;  // r10
    struct_0 *v53;  // rsi
    unsigned int v54;  // ebp
    unsigned int v55;  // esi
    unsigned int v56;  // r12d
    unsigned int v57;  // eax
    unsigned long v16;  // cc_ndep
    struct_2 **v58;  // rcx
    unsigned long v59;  // 4104
    unsigned long v60;  // 4104
    unsigned long v17;  // 4119
    struct_5 **v18;  // rax
    unsigned long v19;  // rdi
    unsigned long v20;  // rcx
    char *v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x30]
    struct_5 **flag;  // [bp+0x38]
    unsigned long long choice;  // [bp+0x40]
    char v5;  // [bp+0x48]
    char v6;  // [bp+0x60]
    int v7;  // [bp+0x80]
    int v8;  // [bp+0x90]
    int v9;  // [bp+0xa0]
    char v10;  // [bp+0xf8]

    if (ptr != v12)
    {
        ptr->field_8 = ptr->field_8 & vvar_404{r56|4b};
        ptr->field_10 = NULL;
        ptr->field_18 = 0;
        ptr->field_20 = ptr->field_20 & vvar_404{r56|4b};
        ptr->field_28 = NULL;
        ptr->field_30 = 0;
    }
    if (ptr != v12)
    {
        ptr->field_0 = v13;
        if ((int)sub_1000a0eac(&v6, &v5, (struct struct_0 *)&ptr->field_8) < (unsigned int)v12)
            sub_1000a4284(ptr); /* do not return */
        v2 &= vvar_404{r56|4b};
        v14 = &v2;
        v15 = &v6;
        flag = NULL;
        choice = 0;
        if ((int)sub_1000a0eac(&v5, &v6, &v2) < (unsigned int)v12)
            sub_10007d870(&v2); /* do not return */
        v17 = _ccall(6, 19, (unsigned long long)(v2 & 268435455), 0, v16);
        if (!((char)v17))
        {
            v18 = &flag;
            if (((char)(v2 >> 28) & 1))
                v18 = flag;
            v19 = *((long long *)(v18 + v12));
            v20 = *((long long *)(v18 + v12));
            (*((long long *)(*((long long *)*((long long *)(v18 + v12))) + 0x100)))();
        }
        else
        {
            addr = &v21->field_30;
            v23 = v12 & 4294967295;
            v24 = *((int *)&addr->padding_0[0]) & 268435455;
            v25 = _ccall(6, 19, (unsigned long long)(*((int *)&addr->padding_0[0]) & 268435455), 0, v16);
            if (!((char)v25))
            {
                v26 = v12;
                do
                {
                    v27 = v26;
                    v28 = ((*((int *)&addr->padding_0[0]) >> 28 & 1) == (unsigned int)v12 ? (struct struct_1 *)&addr->padding_0[8] : *((long long *)&addr->padding_0[8]));
                    p = *((long long *)(((*((int *)&addr->padding_0[0]) >> 28 & 1) == (unsigned int)v12 ? (struct struct_1 *)&addr->padding_0[8] : *((long long *)&addr->padding_0[8])) + v27));
                    if (p->padding_0 == v13)
                    {
                        v31 = v12 & 4294967295;
                        v32 = _ccall(6, 19, (unsigned long long)(268435455 & ptr->field_8), 0, v16);
                        if (!((char)v32))
                        {
                            do
                            {
                                v34 = ((ptr->field_8 >> 28 & 1) ? ptr->field_10 : (struct struct_0 *)&ptr->field_10);
                                v35 = 0;
                                v36 = _ccall(6, 19, (unsigned long long)(p->field_8 & 268435455), 0, 0);
                                if (!((char)v36))
                                {
                                    v37 = p->field_8 & 268435455;
                                    v24 = p->field_8 >> 28 & 1;
                                    v38 = 0;
                                    do
                                    {
                                        i = v37;
                                        if (*((long long *)(v33 + v34)) == *((long long *)&(!(int)v24 ? (struct struct_4 *)&p->field_10 : p->field_10)->padding_0[v38]))
                                            v35 = 1;
                                        v38 += 8;
                                        v40 = i - 1;
                                        v37 = v40;
                                    } while (i != 1);
                                    if (v35)
                                        continue;
                                }
                                v24 = &p->field_8;
                                sub_10005fe4c(v24, p->field_8 & 268435455, *((long long *)(v33 + v34)));
                            } while ((v31 += 1, v33 += 8, (unsigned int)v31 < (ptr->field_8 & 268435455)));
                            v33 = NULL;
                        }
                        v41 = v33 & 4294967295;
                        v42 = _ccall(6, 19, (unsigned long long)(268435455 & ptr->field_20), 0, v16);
                        if (!((char)v42))
                        {
                            v43 = v33;
                            do
                            {
                                v44 = v43;
                                v45 = ((ptr->field_20 >> 28 & 1) ? ptr->field_28 : (struct struct_0 *)&ptr->field_28);
                                v24 = _INSERT(v24, 0, *((char *)&v33));
                                v8 = (int)*((int128_t *)(v45 + v44));
                                v46 = _ccall(6, 19, (unsigned long long)(p->field_20 & 268435455), 0, 0);
                                if (!((char)v46))
                                {
                                    v47 = p->field_20 & 268435455;
                                    v48 = v33;
                                    do
                                    {
                                        v49 = v48;
                                        j = v47;
                                        v7 = (int)*((int128_t *)(((p->field_20 >> 28 & 1) == (unsigned int)v33 ? (struct struct_4 *)&p->field_28 : p->field_28) + v49));
                                        v24 = (*((unsigned long long *)(&v8 + 8)) == *((unsigned long long *)(&v7 + 8)) ? 1 : (char)v24);
                                        v52 = j - 1;
                                        v47 = v52;
                                        v48 = &v49->field_10;
                                    } while (j != 1);
                                    if ((char)v24 != *((char *)&v33))
                                        continue;
                                }
                                v24 = &p->field_20;
                                v9 = (int)*((int128_t *)(v45 + v44));
                                sub_1000a3be8(v24, &v9);
                            } while ((v41 += 1, v53 = v44 + 16, v43 = v44 + 16, (unsigned int)v41 < (ptr->field_20 & 268435455)));
                        }
                    }
                } while ((v23 += 1, v30 = v27 + 8, v26 = v27 + 8, (int)v24 > (unsigned int)v23));
            }
            v54 = *((int *)&addr->padding_0[0]) & 268435455;
            v55 = v54 + 1;
            if (v55 >= v54 && v55 <= 268435455)
            {
                v56 = (unsigned int)v33;
            }
            else
            {
                v55 = 4294967295;
                v56 = 2147942934;
            }
            if (v56 >= (unsigned int)v33)
            {
                if (!((char)(*((int *)&addr->padding_0[0]) >> 28) & 1) && (*((int *)&addr->padding_0[0]) & 268435455) == 2)
                    v56 = sub_10007d8e8(addr, v55);
                if (v56 >= (unsigned int)v33)
                {
                    v57 = g_1000e2da8;
                    if (((char)(*((int *)&addr->padding_0[0]) >> 28) & 1))
                    {
                        if (!((char)v57 & 1))
                        {
                            g_1000e2da8 = v57 | 1;
                            g_1000e2db8 = &g_100011f78;
                        }
                        v58 = &g_1000e2db8;
                    }
                    else
                    {
                        if (!((char)v57 & 2))
                        {
                            g_1000e2da8 = v57 | 2;
                            g_1000e2db0 = &g_100019d78;
                        }
                        v58 = &g_1000e2db0;
                    }
                    v1 = &v10;
                    *(v58)->field_10();
                }
                v59 = _ccall(13, 7, (unsigned long long)v56, v33 & 4294967295, v16);
                if (!((char)v59))
                    goto LABEL_1000a145f;
LABEL_1000a145e:
            }
            else
            {
                v60 = _ccall(13, 7, (unsigned long long)v56, v33 & 4294967295, v16);
                if ((char)v60)
                    goto LABEL_1000a145e;
LABEL_1000a145f:
            }
            sub_10007d870(&v2); /* do not return */
        }
    }
}
