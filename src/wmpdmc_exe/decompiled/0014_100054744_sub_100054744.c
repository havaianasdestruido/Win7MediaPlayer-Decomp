/* sub_100054744 @ 0x100054744
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100054744  (2359 bytes, 100 basic blocks)
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
    struct struct_0 *field_18;
} struct_1;

typedef struct struct_8 {
    char padding_0[120];
    struct struct_6 *field_78;
    char padding_80[9];
    char field_89;
} struct_8;

typedef struct struct_3 {
    char padding_0[32];
    struct struct_4 *field_20;
    struct struct_5 *field_28;
} struct_3;

typedef struct struct_12 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_11 *field_8;
} struct_12;

typedef struct struct_11 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_11;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

typedef struct struct_17 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_16 *field_8;
} struct_17;

typedef struct struct_19 {
    char padding_0[32];
    struct struct_18 *field_20;
} struct_19;

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
} struct_6;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_16 {
    struct struct_13 *field_0;
    char padding_8[112];
    struct struct_15 *field_78;
} struct_16;

typedef struct struct_18 {
    char padding_0[8];
    unsigned long long field_8;
} struct_18;

typedef struct struct_7 {
    struct struct_3 *field_0;
} struct_7;

typedef struct struct_13 {
    char padding_0[40];
    struct struct_14 *field_28;
} struct_13;

typedef struct struct_15 {
    char padding_0[8];
    struct struct_16 *field_8;
} struct_15;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_9 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_9;

typedef struct struct_10 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_9 *field_8;
} struct_10;

extern char g_100007128;
extern struct_17 g_100007160;
extern long long g_100007198;
extern struct_17 g_1000072b0;
extern long long g_100007b60;
extern struct_17 g_100007bd0;
extern char g_100007cb0;
extern struct_10 *g_1000de270;

int sub_100054744(void)
{
    void* v70;  // rdx
    unsigned int ptr5[2];  // r9
    unsigned int flag4;  // r12d
    struct_12 *ptr;  // rbx
    struct_11 *ptr3;  // r12
    unsigned int v84;  // ecx
    unsigned long v85;  // cc_ndep
    unsigned long v86;  // 4113
    unsigned long long v87;  // r14
    unsigned int v88;  // ecx
    unsigned int v89;  // eax
    struct_1 *ptr6;  // rsi
    int v90;  // ecx
    struct_0 *v91;  // rax
    struct_17 *ptr8;  // rdx
    unsigned long v93;  // r8
    unsigned long v94;  // rcx
    unsigned long v95;  // rcx
    struct_12 *p;  // r13
    struct_11 *ptr4;  // rax
    unsigned int ptr9[2];  // r9
    unsigned int v99;  // ecx
    unsigned long long v73;  // rdi
    unsigned long v100;  // cc_ndep
    unsigned long v101;  // 4115
    unsigned long long v102;  // r12
    unsigned long long v103;  // rbx
    unsigned int v104[2];  // r9
    unsigned int v105;  // ecx
    unsigned int v106;  // eax
    struct_12 *addr;  // r13
    struct_11 *v108;  // rax
    unsigned long v74;  // r8
    unsigned long v109;  // 4115
    unsigned long long v110;  // r13
    unsigned long long ptr7;  // rcx
    unsigned long v112;  // rcx
    unsigned int v113;  // ecx
    unsigned int v114;  // eax
    int flag3;  // eax
    struct_0 *v116;  // rax
    struct_19 *idx6;  // rax
    unsigned long v118;  // rcx
    unsigned int choice;  // r12d
    void* index;  // r14
    struct_8 *v77;  // rcx
    struct_8 *v78;  // rbx
    unsigned int flag2;  // r12d
    struct_12 *v0;  // [bp-0x248], Other Possible Types: unsigned long long
    unsigned long long *v1;  // [bp-0x238]
    unsigned long long v2;  // [bp-0x230]
    unsigned long long v3;  // [bp-0x228]
    unsigned long long v4;  // [bp-0x220]
    unsigned long long v5;  // [bp-0x218]
    unsigned long long v6;  // [bp-0x210]
    unsigned long long v7;  // [bp-0x208]
    unsigned long long v8;  // [bp-0x200]
    unsigned long long v9;  // [bp-0x1f8]
    unsigned long long v10;  // [bp-0x1f0]
    unsigned long long v11;  // [bp-0x1e8]
    unsigned long long v12;  // [bp-0x1e0]
    unsigned long long v13;  // [bp-0x1d8]
    unsigned long long v14;  // [bp-0x1d0]
    unsigned long long v15;  // [bp-0x1c8]
    unsigned long long v16;  // [bp-0x1c0]
    unsigned long long v17;  // [bp-0x1b8]
    unsigned long long v18;  // [bp-0x1b0]
    unsigned long long v19;  // [bp-0x1a8]
    unsigned long long v20;  // [bp-0x1a0]
    unsigned long long *v21;  // [bp-0x198]
    unsigned long long v22;  // [bp-0x190]
    unsigned long long v23;  // [bp-0x188]
    unsigned long long v24;  // [bp-0x180]
    unsigned long long v25;  // [bp-0x178]
    unsigned long long v26;  // [bp-0x170]
    unsigned long long v27;  // [bp-0x168]
    unsigned long long v28;  // [bp-0x160]
    unsigned long long v29;  // [bp-0x158]
    unsigned long long v30;  // [bp-0x150]
    unsigned long long v31;  // [bp-0x148]
    unsigned long long v32;  // [bp-0x140]
    unsigned long long v33;  // [bp-0x138]
    unsigned long long *v34;  // [bp-0x130]
    unsigned long long v35;  // [bp-0x128]
    unsigned long long v36;  // [bp-0x120]
    unsigned long long v37;  // [bp-0x118]
    unsigned long long v38;  // [bp-0x110]
    unsigned long long v39;  // [bp-0x108]
    unsigned long long v40;  // [bp-0x100]
    unsigned long long v41;  // [bp-0xf8]
    unsigned long long v42;  // [bp-0xf0]
    unsigned long long v43;  // [bp-0xe8]
    unsigned long long v44;  // [bp-0xe0]
    unsigned long long v45;  // [bp-0xd8]
    unsigned long long v46;  // [bp-0xd0]
    unsigned long long v47;  // [bp-0xc8]
    unsigned long long v48;  // [bp-0xc0]
    unsigned long long v49;  // [bp-0xb8]
    unsigned long long v50;  // [bp-0xb0]
    unsigned long long v51;  // [bp-0xa8]
    unsigned long long v52;  // [bp-0xa0]
    unsigned long long v53;  // [bp-0x98]
    unsigned long long v54;  // [bp-0x90]
    unsigned long long v55;  // [bp-0x88]
    unsigned long long v56;  // [bp-0x80]
    unsigned long long v57;  // [bp-0x78]
    unsigned long long v58;  // [bp-0x70]
    unsigned long long v59;  // [bp-0x68]
    unsigned long long v60;  // [bp-0x60]
    unsigned long long v61;  // [bp-0x58]
    unsigned long long v62;  // [bp-0x50]
    void* v64;  // [bp+0x10], Other Possible Types: unsigned long
    unsigned int flag;  // [bp+0x18]
    unsigned int v66;  // [bp+0x20], Other Possible Types: unsigned long
    unsigned int v67;  // [bp+0x28]
    struct_17 *v68;  // [bp+0x30]
    struct_1 *v69;  // [bp+0x38]

    v64 = v70;
    ptr5[0] = 4294967295;
    ptr6 = v69;
    v73 = 0;
    ptr5[1] = 0;
    choice = v74;
    index = v70;
    v78 = v77;
    flag = 0;
    if ((unsigned int)v74 == ((int)v70[8] & 3) && v77->field_78->field_8)
        v77->field_78->field_8->field_0->field_20();
    flag2 = choice - 1;
    if (choice != 1)
    {
        flag4 = flag2 - 1;
        if (flag2 == 1)
        {
            v90 = *((int *)((long long)index[40] + 12));
            if (v90 == 8)
            {
LABEL_1000548fa:
                sub_1000540bc(v78, &g_100007b60, 2, ptr5, ptr6, &flag);
                v93 = 2;
                ptr8 = &g_100007bd0.field_0;
                goto LABEL_100054938;
            }
            if (v90 > 10)
            {
                if (v90 > 12)
                {
                    if (v90 > 14)
                    {
                        if (v90 > 16)
                        {
                            if (v90 != 23)
                            {
                                if (v90 == 53)
                                    goto LABEL_1000548fa;
                            }
                            else
                            {
                                v91 = ptr6->field_18;
                                ptr8 = v68;
                                v93 = *((long long *)(v67 * 56 + ((v91->field_0 >> 28 & 1) ? v91->field_8 : (struct struct_0 *)&v91->field_8) + 8));
                                if (v93 == &g_100007cb0 && ((char)ptr8->field_0 & 63) == 12)
                                {
                                    v94 = ptr8->field_8;
                                }
                                else
                                {
                                    v95 = &g_100007128;
                                    if (v93 != &g_100007128)
                                    {
                                        v21 = sub_10005f3b0;
                                        v22 = sub_10005f2c0;
                                        v23 = sub_10005f2a0;
                                        v24 = sub_10005f260;
                                        v25 = sub_10005f2d0;
                                        v26 = sub_10005f2f0;
                                        v27 = sub_10005f2e0;
                                        v28 = sub_10005f290;
                                        v29 = sub_10005f270;
                                        v30 = sub_10005f280;
                                        v31 = sub_10005f2b0;
                                        v32 = sub_10005f220;
                                        v33 = sub_10005f230;
                                        v34 = sub_10005f110;
                                        v35 = sub_10005f050;
                                        v36 = sub_10005f030;
                                        v37 = sub_10005f020;
                                        v38 = sub_10005f380;
                                        v39 = sub_10005f120;
                                        v40 = sub_10005f1c0;
                                        v41 = sub_10005f240;
                                        v42 = sub_10005f250;
                                        v43 = sub_10005f310;
                                        v44 = sub_10005f1b0;
                                        v45 = sub_10005f140;
                                        v46 = sub_10005f1a0;
                                        v47 = sub_10005f160;
                                        v48 = sub_10005f190;
                                        v49 = sub_10005f180;
                                        v50 = sub_10005f0c0;
                                        v51 = sub_10005eff0;
                                        v52 = sub_10005f010;
                                        v53 = sub_10005f070;
                                        v54 = sub_10005f320;
                                        v55 = sub_10005f330;
                                        v56 = sub_10005f060;
                                        v57 = sub_10005f300;
                                        v58 = sub_10005f3a0;
                                        v59 = sub_10005f340;
                                        v60 = sub_10005f360;
                                        v61 = sub_10005efd0;
                                        v62 = sub_10005efe0;
                                        v21();
                                    }
                                    if (!ptr8->field_8)
                                        goto LABEL_1000549ff;
                                    v94 = ptr8->field_8->field_78->field_8;
                                }
                                if (v94)
                                    (*((long long *)(*((long long *)v94) + 40)))();
LABEL_1000549ff:
                                if (v78->field_78->field_8)
                                    v78->field_78->field_8->field_0->field_28();
                            }
                        }
                        else
                        {
                            v93 = 1;
                            ptr8 = &g_1000072b0.field_0;
LABEL_100054938:
                            sub_1000540bc(v78);
                        }
                    }
                }
                else
                {
                    if ((2 & v78->field_89))
                    {
                        ptr8 = &g_100007160.field_0;
                        v93 = 0;
                        p = sub_100055880(v78, &g_100007160.field_0, 0);
                    }
                    else
                    {
                        p = g_1000de270;
                    }
                    ptr4 = p->field_8;
                    if (ptr4)
                    {
                        v99 = ptr4->field_0;
                        v66 = 0;
                        v101 = _ccall(6, 19, (unsigned long long)(ptr4->field_0 & 268435455), 0, v100);
                        if (!((char)v101))
                        {
                            v102 = &ptr4->field_8;
                            v103 = 0;
                            do
                            {
                                v104 = ptr5;
                                v93 = 1;
                                sub_1000540bc(*((long long *)(v103 + ((v99 >> 28 & 1) ? *((long long *)v102) : v102))), &g_1000072b0.field_0, 1, v104, ptr6, &flag);
                                v99 = ptr4->field_0;
                                v103 += 8;
                                v66 += 1;
                            } while ((unsigned int)ptr8 < (v99 & 268435455));
                            v78 = v77;
                            index = v64;
                            ptr9 = v104;
                        }
                    }
                    v105 = p->field_0;
                    if ((v105 & 4294967168) != 4294967168)
                    {
                        v106 = (v105 & 4294967168) - 1 ^ ~(v105) & 127;
                        p->field_0 = v106;
                        if (!(v106 & 4294967168))
                            sub_100059224(p); /* do not return */
                    }
                }
            }
            if (((char)index[8] & 8))
            {
                if ((2 & v78->field_89))
                {
                    ptr8 = &g_100007160.field_0;
                    v93 = 0;
                    addr = sub_100055880(v78, &g_100007160.field_0, 0);
                }
                else
                {
                    addr = g_1000de270;
                }
                v108 = addr->field_8;
                v0 = addr;
                if (v108)
                {
                    *((unsigned int *)&v64) = 0;
                    v109 = _ccall(6, 19, (unsigned long long)(v108->field_0 & 268435455), 0, v100);
                    if (!((char)v109))
                    {
                        v110 = &v108->field_8;
                        ptr7 = ((v108->field_0 >> 28 & 1) ? *((long long *)v110) : v110);
                        v112 = *((long long *)(0 + ptr7));
                        v66 = *((long long *)(0 + ptr7));
                        (*((long long *)(*((long long *)*((long long *)(0 + ptr7))) + 0x100)))();
                    }
                }
                v113 = addr->field_0;
                if ((v113 & 4294967168) != 4294967168)
                {
                    v114 = (v113 & 4294967168) - 1 ^ ~(v113) & 127;
                    addr->field_0 = v114;
                    if (!(v114 & 4294967168))
                        sub_100059224(addr); /* do not return */
                }
            }
            if (((char)(int)index[8] & 3) != 3)
                return;
            sub_1000540bc(v78, index);
            return;
        }
        else if (flag4 != 1)
        {
            return;
        }
        else if (*((int *)((long long)index[40] + 12)) == 14)
        {
            ptr = (!((char)flag4 + 1 & v78->field_89) ? g_1000de270 : sub_100055880(v78, &g_100007160.field_0, 0));
            ptr3 = ptr->field_8;
            if (ptr3)
            {
                v84 = ptr3->field_0;
                v86 = _ccall(6, 19, (unsigned long long)(ptr3->field_0 & 268435455), 0, v85);
                if (!((char)v86))
                {
                    v87 = 0;
                    do
                    {
                    } while ((sub_1000540bc(*((long long *)(v87 + ((v84 >> 28 & 1) ? ptr3->field_8 : ptr3 + 8))), &g_100007198, 3, ptr5, ptr6, &flag), v84 = ptr3->field_0, v73 = (unsigned long long)((unsigned int)v73 + 1), v87 += 8, (unsigned int)v73 < (v84 & 268435455)));
                }
            }
            v88 = ptr->field_0;
            if ((v88 & 4294967168) == 4294967168)
                return;
            v89 = (v88 & 4294967168) - 1 ^ ~(v88) & 127;
            ptr->field_0 = v89;
            if ((v89 & 4294967168))
                return;
            sub_100059224(ptr); /* do not return */
        }
        else
        {
            return;
        }
    }
    else
    {
        flag3 = *((int *)((long long)index[40] + 12));
        if (flag3)
        {
            if (flag3 != 1 && flag3 - 2 > 1)
                goto LABEL_1000552e7;
            sub_1000540bc(v78);
        }
        else
        {
            v116 = ptr6->field_18;
            idx6 = v67 * 56 + ((v116->field_0 >> 28 & 1) ? v116->field_8 : (struct struct_0 *)&v116->field_8);
            v118 = &g_100007128;
            if (*((long long *)&idx6->padding_0[8]) == &g_100007128)
            {
                v0 = idx6->field_20->field_8;
                if (idx6->field_20->field_8)
                {
                    v1 = sub_10005f110;
                    v2 = sub_10005f050;
                    v3 = sub_10005f380;
                    v4 = sub_10005f1c0;
                    v5 = sub_10005f240;
                    v6 = sub_10005f250;
                    v7 = sub_10005f310;
                    v8 = sub_10005f140;
                    v9 = sub_10005f1a0;
                    v10 = sub_10005f160;
                    v11 = sub_10005f190;
                    v12 = sub_10005f180;
                    v13 = sub_10005f0c0;
                    v14 = sub_10005f1d0;
                    v15 = sub_10005f1e0;
                    v16 = sub_10005f200;
                    v17 = sub_10005f1f0;
                    v18 = sub_10005f3a0;
                    v19 = sub_10005efd0;
                    v20 = sub_10005f370;
                    v1();
                }
            }
        }
LABEL_1000552e7:
        if (((char)(int)index[8] & 3) == 1)
            return;
        sub_1000540bc(v78, index);
        return;
    }
}
