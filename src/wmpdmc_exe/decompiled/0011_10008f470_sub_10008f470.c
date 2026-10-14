/* sub_10008f470 @ 0x10008f470
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10008f470  (1400 bytes, 103 basic blocks)
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

typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_3;

typedef struct struct_5 {
    char padding_0[32];
    struct struct_4 *field_20;
} struct_5;

typedef struct struct_4 {
    char padding_0[104];
    unsigned long long field_68;
    unsigned int field_70;
    char padding_74[21];
    char field_89;
} struct_4;

typedef struct struct_6 {
    char padding_0[104];
    unsigned long long field_68;
    unsigned int field_70;
    char padding_74[21];
    char field_89;
} struct_6;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    int field_10;
    unsigned int field_14;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_2;

extern void g_100007160;
extern void g_1000075a8;
extern struct_2 *g_1000de270;
extern struct_0 *g_1000de4b0;

int sub_10008f470(void)
{
    char v15[141];  // rdx
    unsigned int v16;  // r9d
    struct_3 *ptr7;  // rax
    unsigned long v25;  // rcx
    char v26;  // bl
    unsigned int i;  // r14d
    struct_5 *ptr8;  // rcx
    struct_4 *ptr6;  // rax
    unsigned int v30;  // esi
    char v31[141];  // r13
    unsigned int ptr9;  // r14d
    unsigned long v33;  // r8
    unsigned long long cur;  // rbp
    unsigned int flag;  // r14d
    unsigned int v35;  // edx
    unsigned int v36;  // r9d
    struct_1 *ptr;  // r11
    unsigned long long v38;  // rsi
    unsigned int v39;  // eax
    unsigned long long v40;  // rax
    int v41;  // eax
    int v42;  // ecx
    unsigned int v18;  // r8d
    int v43;  // ecx
    unsigned int v44;  // eax
    unsigned long long v45;  // rax
    int v46;  // eax
    int v47;  // ecx
    unsigned long v48;  // r13
    unsigned int v49;  // eax
    int v50;  // ecx
    unsigned long long v51;  // rax
    unsigned long long iter;  // rdi
    int v52;  // eax
    int v53;  // ecx
    unsigned int v54;  // eax
    unsigned long long v55;  // rax
    int v56;  // eax
    int v57;  // ecx
    unsigned int v58;  // ecx
    unsigned int v59;  // eax
    long long v60;  // rax
    char v20[141];  // r13
    struct_4 *v61;  // rsi
    struct_1 *p;  // r11
    unsigned int v64;  // eax
    unsigned long long v65;  // rax
    unsigned long v66;  // r14
    unsigned int v67;  // eax
    unsigned long long v68;  // rax
    int v21;  // r15d
    int v69;  // eax
    unsigned int v70;  // eax
    unsigned int v71;  // ecx
    unsigned int v72;  // eax
    unsigned long long node;  // r12
    unsigned int v74;  // ecx
    unsigned int v75;  // eax
    unsigned int v22;  // esi
    unsigned int v0;  // [bp-0x88]
    int v1;  // [bp-0x84]
    int v2;  // [bp-0x80]
    int v3;  // [bp-0x7c]
    unsigned int v4;  // [bp-0x78]
    unsigned int v5;  // [bp-0x74]
    unsigned long long v6;  // [bp-0x70]
    unsigned long v7;  // [bp-0x68]
    struct_3 *addr;  // [bp-0x60]
    unsigned long v9;  // [bp-0x58]
    struct_6 *v10;  // [bp-0x50]
    char v12[141];  // [bp+0x10]
    char v13;  // [bp+0x18], Other Possible Types: unsigned int
    unsigned int v14;  // [bp+0x20]

    v12 = v15;
    cur = v16;
    iter = v18;
    v20 = v15;
    v21 = iter;
    v22 = sub_10007c114();
    v4 = v22;
    node = 0;
    v14 = 0;
    if (!v22)
        return;
    ptr7 = (!(v20[137] & 2) ? g_1000de270 : sub_100055880(v20, &g_100007160, 0));
    v25 = ptr7->field_8;
    addr = ptr7;
    v1 = 0;
    v6 = 0;
    v2 = 0;
    v9 = v25;
    v3 = 0;
    v26 = 0;
    i = 0;
    v5 = 0;
    if (v22 > 0)
    {
        while ((unsigned int)iter > 0 || (unsigned int)cur > 0)
        {
            ptr6 = sub_10007c210(ptr8, v20, i, v25);
            v10 = ptr6;
            v30 = v22;
            v31 = v20;
            ptr9 = i;
            if (ptr6 != ptr8->field_20)
            {
                v33 = v14;
                flag = ptr6->field_70;
                v35 = node;
                v36 = v33;
                v0 = v33;
                v7 = ptr6->field_68;
                v13 = v35;
                if ((ptr6->field_89 & 32))
                {
                    v33 = v14;
                    v35 = node;
                    v36 = v33;
                    ptr = sub_100055880(ptr6, &g_1000075a8, 0);
                }
                else
                {
                    ptr = g_1000de4b0;
                }
                if (flag && flag != 2)
                {
                    v38 = iter & 4294967295;
                    if (flag == 1)
                    {
                        if ((v26 & 2))
                        {
                            v39 = ptr->field_c;
                            if (ptr->field_c < (unsigned int)v6)
                                v39 = v6;
                            v40 = ((unsigned int)cur < v39 ? cur & 4294967295 : v39);
                            v33 += v40;
                            cur -= v40;
                            v14 = v33;
                            v36 = v33;
                            v0 = v33;
                        }
                        v26 |= 2;
                        v6 = ptr->field_14;
                    }
                    else
                    {
                        if ((v26 & 8))
                        {
                            v41 = ptr->field_14;
                            v42 = v3;
                            if (ptr->field_14 < v42)
                                v41 = v42;
                            cur = ((unsigned int)((cur & 4294967295) - v41) < 0 ? 0 : cur - v41 & 4294967295);
                        }
LABEL_10008f61e:
                        v26 |= 8;
                        v3 = ptr->field_c;
                        goto LABEL_10008f61e;
                    }
                    if ((v26 & 1))
                    {
                        v43 = v1;
                        v44 = ptr->field_8;
                        if (ptr->field_8 < v43)
                            v44 = v43;
                        v45 = ((unsigned int)iter < v44 ? iter & 4294967295 : v44);
                        v38 -= v45;
                        v13 = (unsigned int)v45 + (unsigned int)node;
                    }
                    if ((v26 & 4))
                    {
                        v46 = ptr->field_10;
                        v47 = v2;
                        if (ptr->field_10 < v47)
                            v46 = v47;
                        v38 = ((unsigned int)((v38 & 4294967295) - v46) < 0 ? 0 : v38 - v46 & 4294967295);
                    }
                    v48 = *((unsigned int *)((void*)&v7 + 4));
                    if ((unsigned int)v48 > (unsigned int)cur)
                    {
                        v48 = cur & 4294967295;
                        cur = 0;
                    }
                    else
                    {
                        cur -= v48;
                    }
                    if (flag == 1)
                        v14 = (unsigned int)v33 + (unsigned int)v48;
                    else
                        v0 = v36 + (unsigned int)cur;
                }
                else
                {
                    v48 = cur & 4294967295;
                    if (!flag)
                    {
                        if ((v26 & 1))
                        {
                            v49 = ptr->field_8;
                            v50 = v1;
                            if (ptr->field_8 < v50)
                                v49 = v50;
                            v51 = ((unsigned int)iter < v49 ? iter & 4294967295 : v49);
                            node += v51;
                            iter -= v51;
                            v35 = node;
                            v13 = v35;
                        }
                        v26 |= 1;
                        v1 = ptr->field_10;
                    }
                    else
                    {
                        if ((v26 & 4))
                        {
                            v52 = ptr->field_10;
                            v53 = v2;
                            if (ptr->field_10 < v53)
                                v52 = v53;
                            iter = ((unsigned int)((iter & 4294967295) - v52) < 0 ? 0 : iter - v52 & 4294967295);
                        }
LABEL_10008f6f0:
                        v26 |= 4;
                        v2 = ptr->field_8;
                        goto LABEL_10008f6f0;
                    }
                    if ((v26 & 2))
                    {
                        v54 = ptr->field_c;
                        if (ptr->field_c < (unsigned int)v6)
                            v54 = v6;
                        v55 = ((unsigned int)cur < v54 ? cur & 4294967295 : v54);
                        v48 -= v55;
                        v0 = (unsigned int)v55 + (unsigned int)v33;
                    }
                    if ((v26 & 8))
                    {
                        v56 = ptr->field_14;
                        v57 = v3;
                        if (ptr->field_14 < v57)
                            v56 = v57;
                        v48 = ((unsigned int)((v48 & 4294967295) - v56) < 0 ? 0 : v48 - v56 & 4294967295);
                    }
                    v38 = (unsigned int)v7;
                    if ((unsigned int)v38 > (unsigned int)iter)
                    {
                        v38 = iter & 4294967295;
                        iter = 0;
                    }
                    else
                    {
                        iter -= v38;
                    }
                    if (!flag)
                        node += v38;
                    else
                        v13 = v35 + (unsigned int)iter;
                }
                v58 = ptr->field_0;
                if ((v58 & 4294967168) != 4294967168)
                {
                    v59 = (v58 & 4294967168) - 1 ^ ~(v58) & 127;
                    ptr->field_0 = v59;
                    if (!(v59 & 4294967168))
                        sub_100059224(ptr); /* do not return */
                }
                sub_10005b404(v10, (!(v12[140] & 32) ? v13 : (unsigned int)(v21 - v38) - v13), v0);
                sub_10005b504(v10, v38 & 4294967295, v48 & 4294967295);
                v30 = v4;
                v31 = v12;
                ptr9 = v5;
            }
            v20 = v31;
            v25 = v9;
            i = ptr9 + 1;
            v5 = i;
            if (i >= v30)
                break;
        }
        v13 = v26;
        if (i < v22)
        {
            do
            {
                v60 = sub_10007c210(ptr8, v20, i, v25);
                i += 1;
                sub_10005b404(v60);
                sub_10005b504(v60, iter & 4294967295, cur & 4294967295);
                v25 = v9;
            } while (i < v4);
            v26 = v13;
        }
    }
    v61 = ptr8->field_20;
    if (v61)
    {
        if (!(unsigned int)iter && !(unsigned int)cur)
        {
            if ((v20[140] & 32))
                node = v21 - node & 4294967295;
            sub_10005b404(v61, node & 4294967295, v14);
        }
        else
        {
            p = (!(v61->field_89 & 32) ? g_1000de4b0 : sub_100055880(v61, &g_1000075a8, 0));
            if ((v26 & 1))
            {
                v64 = p->field_8;
                if (p->field_8 < v1)
                    v64 = v1;
                v65 = ((unsigned int)iter < v64 ? iter & 4294967295 : v64);
                node += v65;
                iter -= v65;
            }
            v66 = v14;
            if ((v26 & 2))
            {
                v67 = p->field_c;
                if (p->field_c < (unsigned int)v6)
                    v67 = v6;
                v68 = ((unsigned int)cur < v67 ? cur & 4294967295 : v67);
                v66 += v68;
                cur -= v68;
            }
            if ((v26 & 4))
            {
                v69 = p->field_10;
                if (p->field_10 < v2)
                    v69 = v2;
                iter = ((unsigned int)((iter & 4294967295) - v69) < 0 ? 0 : iter - v69 & 4294967295);
            }
            if ((v26 & 8))
            {
                v70 = p->field_14;
                if (p->field_14 < v3)
                    v70 = v3;
            }
            v71 = p->field_0;
            if ((v71 & 4294967168) != 4294967168)
            {
                v72 = (v71 & 4294967168) - 1 ^ ~(v71) & 127;
                p->field_0 = v72;
                if (!(v72 & 4294967168))
                    sub_100059224(p); /* do not return */
            }
            if ((v20[140] & 32))
                node = (v21 - node & 4294967295) - iter;
            sub_10005b404(v61, node & 4294967295, v66 & 4294967295);
        }
        sub_10005b504(v61);
    }
    v74 = addr->field_0;
    if ((v74 & 4294967168) == 4294967168)
        return;
    v75 = (v74 & 4294967168) - 1 ^ ~(v74) & 127;
    addr->field_0 = v75;
    if ((v75 & 4294967168))
        return;
    sub_100059224(addr); /* do not return */
}
