/* sub_100096bd0 @ 0x100096bd0
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100096bd0  (893 bytes, 62 basic blocks)
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
    char padding_0[4];
    unsigned int field_4;
    unsigned int field_8;
    char padding_c[4];
    unsigned int field_10;
    char padding_14[4];
    unsigned long long field_18;
    struct struct_0 *field_20;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

typedef struct struct_9 {
    char padding_0[8];
    struct struct_7 *field_8;
    char padding_10[32];
    unsigned int field_30;
    unsigned int field_34;
    unsigned int field_38;
    char padding_3c[4];
    unsigned long long field_40;
    struct struct_8 *field_48;
} struct_9;

typedef struct struct_6 {
    char padding_0[137];
    char field_89;
} struct_6;

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
} struct_3;

typedef struct struct_11 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[48];
    unsigned long long field_40;
    char padding_48[8];
    struct struct_10 *field_50;
} struct_11;

typedef struct struct_4 {
    char padding_0[137];
    char field_89;
} struct_4;

typedef struct struct_10 {
    char padding_0[137];
    char field_89;
} struct_10;

typedef struct struct_12 {
    char padding_0[48];
    unsigned int field_30;
    char padding_34[28];
    unsigned long long field_50;
} struct_12;

typedef struct struct_13 {
    char padding_0[72];
    struct struct_14 *field_48;
} struct_13;

typedef struct struct_7 {
    char padding_0[137];
    char field_89;
} struct_7;

typedef struct struct_8 {
    char padding_0[8];
    unsigned long long field_8;
} struct_8;

typedef struct struct_14 {
    unsigned int field_0;
} struct_14;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

typedef struct struct_5 {
    unsigned int field_0;
} struct_5;

extern void g_100007160;
extern void g_1000075a8;
extern struct_2 *g_1000de270;
extern struct_5 *g_1000de4b0;

int sub_100096bd0(void)
{
    unsigned int v9;  // edx
    struct_1 *ptr;  // rcx
    struct_9 *p;  // rdi
    int v20;  // eax
    struct_6 *v21;  // rcx
    struct_3 *ptr5;  // rax
    unsigned long v24;  // rax
    unsigned long v25;  // rbp
    int j;  // esi
    unsigned int v27;  // ebp
    unsigned long v28;  // r14
    struct_0 *ptr4;  // rax
    unsigned long long v29;  // r13
    unsigned long l;  // r14
    struct_0 *v31;  // rax
    struct_11 *ptr3;  // rdi
    struct_4 *v33;  // rax
    unsigned int *addr;  // rcx
    unsigned int v36;  // r8d
    unsigned int v37;  // edx
    unsigned int v38;  // eax
    int v12;  // r12d
    unsigned long v39;  // r14
    unsigned int v40;  // ebp
    unsigned int v41;  // ecx
    unsigned long v42;  // r15
    unsigned int v43;  // edi
    unsigned long long v44;  // r13
    unsigned long m;  // r15
    struct_0 *v46;  // rax
    struct_12 *ptr6;  // rbp
    long long v48;  // r8
    unsigned int v13;  // r15d
    unsigned long v49;  // r15
    unsigned int v50;  // r15d
    unsigned int v51;  // edi
    unsigned long idx6;  // rcx
    unsigned long long v53;  // rdi
    unsigned long v54;  // rsi
    unsigned long k;  // rsi
    struct_0 *v56;  // rax
    struct_13 *ptr7;  // rbp
    unsigned int v58;  // edx
    unsigned int v14;  // r14d
    unsigned int v59;  // eax
    unsigned long v60;  // rsi
    unsigned long long v15;  // rsi
    unsigned long v16;  // rbp
    unsigned long i;  // rbp
    struct_0 *v18;  // rax
    int v0;  // [bp-0x68]
    unsigned int v1;  // [bp-0x64]
    char v2;  // [bp-0x60]
    unsigned int v3;  // [bp-0x5c]
    unsigned long long v4;  // [bp-0x58]
    unsigned long v5;  // [bp-0x50]
    unsigned int v6;  // [bp+0x8]
    unsigned int v7;  // [bp+0x10]
    unsigned int v8;  // [bp+0x20]

    v7 = v9;
    ptr4 = ptr->field_20;
    ptr->field_10 = 1;
    ptr->field_8 = v9;
    v12 = 0;
    v13 = v9;
    v14 = ptr4->field_0 & 268435455;
    v1 = v14;
    if (!(ptr4->field_0 & 268435455))
    {
        ptr->field_10 = 0;
        return;
    }
    if (v14)
    {
        v15 = 0;
        v16 = v14;
        v5 = v14;
        do
        {
            i = v16;
            v18 = ptr->field_20;
            p = *((long long *)(v15 + ((v18->field_0 >> 28 & 1) ? v18->field_8 : (struct struct_0 *)&v18->field_8)));
            v20 = sub_10007c114(p, p->field_8);
            if (v12 < v20 && v20 >= 0)
                v12 = v20;
            v21 = p->field_8;
            p->field_38 = v20;
            ptr5 = (!(v21->field_89 & 2) ? g_1000de270 : sub_100055880(v21, &g_100007160, 0));
            p->field_48 = ptr5;
            v24 = ptr5->field_8;
            p->field_30 = 0;
            v15 += 8;
            v25 = i - 1;
            p->field_40 = v24;
            p->field_34 = 2147483647;
            v16 = v25;
        } while (i != 1);
        v0 = v12;
        if (v12 && (int)sub_100096530(ptr, v12))
        {
            v6 = 0;
            j = 0;
            v27 = 2147483649;
            v8 = 2147483649;
            if (v12)
            {
                v4 = 18446744073709551608;
                do
                {
                    v28 = v5;
                    v29 = 0;
                    do
                    {
                        l = v28;
                        v31 = ptr->field_20;
                        ptr3 = *((long long *)(v29 + ((v31->field_0 >> 28 & 1) ? v31->field_8 : (struct struct_0 *)&v31->field_8)));
                        if (*((int *)&ptr3->padding_10[40]) > j)
                        {
                            v33 = sub_10007c210(ptr3, ptr3->field_8, j, ptr3->field_40);
                            ptr3->field_50 = v33;
                            addr = &(!(v33->field_89 & 32) ? g_1000de4b0 : sub_100055880(v33, &g_1000075a8, 0))->field_0;
                            v36 = v8;
                            v37 = *(addr);
                            if (v27 < addr[2])
                                v27 = addr[2];
                            if (v36 < addr[4])
                                v36 = addr[4];
                            v8 = v36;
                            if ((v37 & 4294967168) != 4294967168)
                            {
                                v38 = (v37 & 4294967168) - 1 ^ ~(v37) & 127;
                                *(addr) = v38;
                                if (!(v38 & 4294967168))
                                    sub_100059224(); /* do not return */
                            }
                        }
                        else
                        {
                            ptr3->field_50 = NULL;
                        }
                        v29 += 8;
                        v39 = l - 1;
                        v28 = v39;
                    } while (l != 1);
                    if (j)
                    {
                        v40 = (v13 < v27 ? v13 : v27);
                        v41 = v6 + v40;
                        *((unsigned int *)(v4 + ptr->field_18)) = v41;
                        v6 = v41;
                        *((unsigned int *)(v4 + ptr->field_18 + 4)) = v40;
                        v7 = v13 - v40;
                    }
                    v42 = v5;
                    v43 = 0;
                    v44 = 0;
                    do
                    {
                        m = v42;
                        v46 = ptr->field_20;
                        ptr6 = *((long long *)(v44 + ((v46->field_0 >> 28 & 1) ? v46->field_8 : (struct struct_0 *)&v46->field_8)));
                        if (ptr6->field_50)
                        {
                            sub_10005ae94(ptr6->field_50, &v2, v7, 2147483647, v48);
                            if (ptr6->field_30 < v3)
                                ptr6->field_30 = v3;
                            if (v43 < v2)
                                v43 = v2;
                        }
                        v44 += 8;
                        v49 = m - 1;
                        v42 = v49;
                    } while (m != 1);
                    v50 = v7;
                    v27 = v8;
                    v8 = 2147483649;
                    v51 = (v50 < v43 ? v50 : v43);
                    v4 += 8;
                    j += 1;
                    v13 = v50 - v51;
                    v6 += v51;
                    v7 = v13;
                } while (j < v0);
                v14 = v1;
                if (j)
                {
                    idx6 = j - 1;
                    *((unsigned int *)(ptr->field_18 + idx6 * 8)) = v6;
                    *((unsigned int *)(ptr->field_18 + idx6 * 8 + 4)) = 0;
                    v14 = v1;
                }
            }
            ptr->field_4 = 0;
        }
        if (v14)
        {
            v53 = 0;
            v54 = v14;
            do
            {
                k = v54;
                v56 = ptr->field_20;
                ptr7 = *((long long *)(v53 + ((v56->field_0 >> 28 & 1) ? v56->field_8 : (struct struct_0 *)&v56->field_8)));
                v58 = ptr7->field_48->field_0;
                if ((v58 & 4294967168) != 4294967168)
                {
                    v59 = (v58 & 4294967168) - 1 ^ ~(v58) & 127;
                    ptr7->field_48->field_0 = v59;
                    if (!(v59 & 4294967168))
                        sub_100059224(); /* do not return */
                }
                ptr7->field_48 = NULL;
                v53 += 8;
                v60 = k - 1;
                v54 = v60;
            } while (k != 1);
        }
    }
    ptr->field_10 = 0;
    return;
}
