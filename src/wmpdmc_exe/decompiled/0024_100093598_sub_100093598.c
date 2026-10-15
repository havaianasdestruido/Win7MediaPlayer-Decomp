/* sub_100093598 @ 0x100093598
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100093598  (958 bytes, 78 basic blocks)
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
    char padding_0[137];
    char field_89;
} struct_1;

typedef struct struct_0 {
    char padding_0[32];
    unsigned int field_20;
    unsigned int field_24;
    char field_28;
} struct_0;

typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_3;

typedef struct struct_4 {
    char padding_0[152];
    struct struct_5 *field_98;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_2;

extern void g_100007160;
extern struct_2 *g_1000de270;

int sub_100093598(void)
{
    struct_1 *v16;  // r8
    struct_1 *v17;  // rbp, Other Possible Types: unsigned long
    struct_1 *v26;  // r13
    int v27;  // r12d
    unsigned int v28;  // ecx
    unsigned int v29;  // ecx
    unsigned int v30;  // r10d
    unsigned int v31;  // r10d
    int v33;  // edx
    int v34;  // r12d
    struct_0 *p;  // rcx
    int v36;  // edx
    int i;  // r9d
    unsigned long long v38;  // r14
    unsigned int v39;  // ecx
    unsigned long long v41;  // r14
    int v42;  // eax
    unsigned long long v43;  // r15
    struct_3 *v44;  // rbx
    int v45;  // r9d
    struct_0 *v19;  // rsi
    int v46;  // edx
    unsigned int v47;  // ecx
    unsigned int v48;  // r10d
    unsigned int v49;  // ecx
    long long v50;  // rax
    unsigned int v51;  // edx
    unsigned int v52;  // ecx
    unsigned long long v53;  // rbp
    struct_1 *v54;  // r8
    unsigned int v20;  // r9d
    unsigned int v55;  // eax
    unsigned int v56;  // r9d
    unsigned long long v57;  // rdx
    unsigned int v58;  // r9d
    unsigned long long v59;  // r12
    unsigned int v60;  // r10d
    unsigned int j;  // edi
    struct_4 **v62;  // rax
    unsigned int v63;  // ecx
    unsigned int v64;  // eax
    unsigned long long v21;  // rdi
    struct_1 *v22;  // rdx
    struct_3 *ptr;  // rbx
    struct_1 *v25;  // r8
    long long v0;  // [bp-0x98]
    unsigned int v1;  // [bp-0x88]
    unsigned int v2;  // [bp-0x84]
    int v3;  // [bp-0x80]
    int v4;  // [bp-0x7c]
    unsigned int v5;  // [bp-0x78]
    int v6;  // [bp-0x74]
    unsigned int v7;  // [bp-0x70]
    unsigned int v8;  // [bp-0x6c]
    unsigned long v9;  // [bp-0x68]
    struct_3 *v10;  // [bp-0x60]
    char v11;  // [bp-0x58]
    unsigned long long v12;  // [bp-0x50]
    long long v14;  // [bp+0x28]
    unsigned int v15;  // [bp+0x30]

    v17 = v16;
    v19 = p;
    if (((char)v20 & 1))
        return;
    v21 = sub_10007c114() & 4294967295;
    ptr = (!(v22->field_89 & 2) ? g_1000de270 : sub_100055880(v22, &g_100007160, 0));
    v10 = ptr;
    v9 = ptr->field_8;
    if (v17 != v22)
    {
        if (!v17)
        {
            sub_10007c47c(&v11);
            v25 = 0x1;
            v2 = 1;
            v1 = 0;
            v26 = (!(1 & p->field_28) ? p->field_24 : (p->field_20 <= 1 ? v21 & 4294967295 : (p->field_20 + v21 - 1 & 4294967295) / p->field_20 & 4294967295));
            v3 = (unsigned int)v26;
            v27 = (!(p->field_28 & 2) ? p->field_20 : (p->field_24 <= 1 ? (unsigned int)v21 : (unsigned int)((p->field_24 + v21 - 1 & 4294967295) / p->field_24)));
            v28 = v20;
            v29 = v28 & 2;
            v7 = v29;
            if (!((char)v28 & 2))
            {
                v25 = 0xffffffff;
                v2 = 4294967295;
                v17 = v26 * v27 - 1;
                v1 = (unsigned int)v17;
            }
            v30 = v20;
            v31 = v30 & 4;
            v8 = v31;
            if (((char)v30 & 4))
            {
                v33 = v27;
                v34 = (unsigned int)v26;
            }
            else
            {
                v25 *= v26;
                v2 = (unsigned int)v25;
                v33 = (unsigned int)v26;
                v34 = v27;
            }
            v36 = v33;
            i = 0;
            v6 = v36;
            v4 = 0;
            if (v36 <= 0)
                goto LABEL_100093619;
            v38 = v12;
            v39 = v29;
            do
            {
                v38 = v41;
                v42 = 0;
                v43 = v17 & 4294967295;
                v5 = 0;
                v44 = ptr;
                v45 = i;
                v46 = v36;
                v47 = v39;
                v48 = v31;
                if (v34 > 0)
                {
                    do
                    {
                        if ((unsigned int)v43 < (unsigned int)v21)
                        {
                            v50 = sub_10007c210(p, v22, v43 & 4294967295, v9);
                            if (!v50)
                            {
                                sub_10009378c();
                                return;
                            }
                            *((unsigned int *)&v0) = v15;
                            sub_10007c420(&v11, v50, v20, v14, v0); /* do not return */
                        }
                    } while ((v42 = (int)(v42 + 1), v43 = (unsigned long long)(v43 + v25), v5 = (unsigned int)v42, v42 < v34));
                    v17 = v1;
                    v26 = v3;
                    v38 = v12;
                    v44 = v10;
                    v45 = v4;
                    v46 = v6;
                    v47 = v7;
                    v48 = v8;
                }
                v31 = v48;
                v49 = v47;
                v36 = v46;
                ptr = v44;
                v38 = v41;
                if (v38)
                {
                    v51 = ptr->field_0;
                    if ((v51 & 4294967168) == 4294967168)
                        return;
                    v52 = (v51 & 4294967168) - 1 ^ ~(v51) & 127;
                    ptr->field_0 = v52;
                    if (!(v52 & 4294967168))
                        sub_100059224(ptr); /* do not return */
                    return;
                }
                v17 = (!v31 ? v17 + (-(0 < v49) & 2) - 1 : v17 + v25 * (v26 & 4294967295));
                i = v45 + 1;
                v1 = (unsigned int)v17;
                v4 = i;
                v39 = v7;
            } while (i < v36);
            goto LABEL_100093807;
        }
        else
        {
            v53 = sub_10007c1b4(p) & 4294967295;
            v54 = (!(1 & p->field_28) ? p->field_24 : (p->field_20 <= 1 ? v21 & 4294967295 : (p->field_20 + v21 - 1 & 4294967295) / p->field_20 & 4294967295));
            if ((unsigned int)v54)
            {
                v55 = v53;
                v56 = v20;
                v57 = v55 % (unsigned int)v54 & 4294967295;
                if (((char)v20 & 4))
                {
                    v58 = v56 & 2;
                    v59 = v54 & 4294967295;
                    v60 = v55 / (unsigned int)v54;
                    if (((char)v56 & 2))
                    {
                        if (!(p->field_28 & 2))
                        {
                            v21 = p->field_20;
                        }
                        else if (p->field_24 > 1)
                        {
                            v21 = (p->field_24 + v21 - 1 & 4294967295) / p->field_24 & 4294967295;
                        }
                        j = (unsigned int)v54 * (unsigned int)(v21 - v60 - 1) + (unsigned int)v53;
                    }
                    else
                    {
                        j = (v53 & 4294967295) - v60 * v54;
                    }
                }
                else
                {
                    v58 = v56 & 2;
                    v59 = 1;
                    j = (!(v56 & 2) ? (unsigned int)((v53 & 4294967295) - v57) : (unsigned int)(struct struct_1 *)&v54->padding_0[-1 * v57 + v53 + 1]);
                }
                if (!v58)
                    v59 = -((unsigned int)v59);
                if ((unsigned int)v53 != j)
                {
                    do
                    {
                        v53 += v59;
                        v62 = sub_10007c210(p, v22, v53 & 4294967295, v9);
                        if (v62)
                            *(v62)->field_98();
                    } while ((unsigned int)v53 != j);
LABEL_100093807:
                }
            }
        }
    }
LABEL_100093619:
    v63 = ptr->field_0;
    if ((v63 & 4294967168) == 4294967168)
        return;
    v64 = (v63 & 4294967168) - 1 ^ ~(v63) & 127;
    ptr->field_0 = v64;
    if (!(v64 & 4294967168))
        sub_100059224(ptr); /* do not return */
    return;
}
