/* sub_10005dc49 @ 0x10005dc49
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10005dc49  (1347 bytes, 106 basic blocks)
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
    char padding_0[20];
    unsigned int field_14;
} struct_0;

typedef struct struct_4 {
    struct struct_2 *field_0;
    char padding_8[124];
    unsigned short field_84;
} struct_4;

typedef struct struct_5 {
    char padding_0[72];
    struct struct_6 *field_48;
} struct_5;

typedef struct struct_9 {
    struct struct_7 *field_0;
} struct_9;

typedef struct struct_10 {
    char padding_0[112];
    struct struct_11 *field_70;
} struct_10;

typedef struct struct_12 {
    char padding_0[288];
    struct struct_13 *field_120;
} struct_12;

typedef struct struct_29 {
    struct struct_30 *field_0;
    char padding_8[16];
    struct struct_27 *field_18;
    char padding_20[16];
    struct struct_28 *field_30;
    char padding_38[8];
    struct struct_29 *field_40;
    char padding_48[48];
    struct struct_31 *field_78;
    char padding_80[9];
    char field_89;
    char padding_8a[14];
    struct struct_32 *field_98;
    struct struct_33 *field_a0;
} struct_29;

typedef struct struct_15 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_14 *field_8;
} struct_15;

typedef struct struct_14 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_14;

typedef struct struct_20 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_21 *field_8;
} struct_20;

typedef struct struct_18 {
    char padding_0[48];
    struct struct_19 *field_30;
} struct_18;

typedef struct struct_41 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_41;

typedef struct struct_34 {
    char padding_0[312];
    struct struct_35 *field_138;
} struct_34;

typedef struct struct_36 {
    char padding_0[139];
    char field_8b;
} struct_36;

typedef struct struct_37 {
    char padding_0[312];
    struct struct_38 *field_138;
} struct_37;

typedef struct struct_39 {
    char padding_0[272];
    struct struct_40 *field_110;
} struct_39;

typedef struct struct_1 {
    char padding_0[20];
    unsigned int field_14;
} struct_1;

typedef struct struct_2 {
    char padding_0[256];
    struct struct_3 *field_100;
} struct_2;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    char padding_0[72];
    struct struct_8 *field_48;
} struct_7;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

typedef struct struct_30 {
    struct struct_26 *field_0;
} struct_30;

typedef struct struct_27 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_27;

typedef struct struct_28 {
    char padding_0[48];
    int field_30;
    char padding_34[32];
    unsigned int field_54;
} struct_28;

typedef struct struct_31 {
    unsigned int field_0;
} struct_31;

typedef struct struct_32 {
    unsigned int field_0;
} struct_32;

typedef struct struct_33 {
    unsigned int field_0;
} struct_33;

typedef struct struct_21 {
    struct struct_18 *field_0;
} struct_21;

typedef struct struct_19 {
    unsigned long long field_0;
} struct_19;

typedef struct struct_35 {
    unsigned long long field_0;
} struct_35;

typedef struct struct_38 {
    unsigned long long field_0;
} struct_38;

typedef struct struct_40 {
    unsigned long long field_0;
} struct_40;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_26 {
    unsigned long long field_0;
} struct_26;

typedef struct struct_23 {
    unsigned long long field_0;
} struct_23;

typedef struct struct_22 {
    char padding_0[48];
    struct struct_23 *field_30;
} struct_22;

typedef struct struct_25 {
    struct struct_22 *field_0;
} struct_25;

typedef struct struct_16 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_16;

typedef struct struct_24 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_25 *field_8;
} struct_24;

typedef struct struct_17 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_16 *field_8;
} struct_17;

extern void g_100007160;
extern void g_100007400;
extern void g_100007668;
extern struct_17 *g_1000de270;
extern struct_24 *g_1000de3f0;
extern unsigned int g_1000e21b0;

int sub_10005dc49(void)
{
    unsigned int v19;  // eax
    void* ptr;  // rsi
    unsigned long long v29;  // r8
    unsigned long v30;  // rdx
    unsigned long v31;  // rdx
    unsigned long v32;  // rdx
    unsigned int v33;  // eax
    struct_4 *v34;  // rcx
    struct_0 *flag13;  // ecx
    unsigned long long flag5;  // rdi
    struct_5 **v37;  // rbx
    struct_9 **v38;  // rdx
    int v21;  // edx
    struct_5 **v39;  // rcx
    struct_10 **v40;  // rbx
    struct_12 **v41;  // rbx
    struct_12 **v42;  // rcx
    struct_29 *p;  // rbx
    unsigned long long v44;  // r8
    struct_15 *addr;  // rax
    struct_14 *ptr4;  // r12
    unsigned int flag10;  // edx
    unsigned long long v47;  // rdi
    unsigned int v48;  // ecx
    unsigned int v49;  // r14d
    unsigned long v50;  // cc_ndep
    unsigned long v51;  // 4113
    unsigned long v52;  // r15
    unsigned int v53;  // ecx
    unsigned int v54;  // eax
    struct_20 *ptr3;  // rsi
    struct_18 **v56;  // rcx
    unsigned int flag11;  // edx
    struct_29 *v57;  // rdx
    unsigned int v58;  // ecx
    unsigned int v59;  // eax
    struct_41 *v60;  // rsi
    unsigned int i;  // r14d
    unsigned int v62;  // edx
    unsigned int v63;  // eax
    unsigned int *ptr5;  // rcx
    unsigned int v65;  // edx
    unsigned int v66;  // eax
    unsigned int flag12;  // edx
    unsigned int *ptr6;  // rcx
    unsigned int v68;  // edx
    unsigned int v69;  // eax
    unsigned int v70[22];  // rdx
    struct_29 *cur;  // rax
    struct_29 *ptr11;  // rdx
    struct_29 *ptr10;  // rdx
    struct_29 *v74;  // rdx
    unsigned int ptr9[22];  // rcx
    unsigned int v76;  // 4098
    struct_0 *v25;  // edx
    unsigned long long flag3;  // rdx
    struct_29 *v78;  // rcx
    unsigned long long flag4;  // rdi
    struct_0 *v80;  // rdx
    struct_34 **v81;  // rbx
    struct_34 **v82;  // rcx
    unsigned int flag9;  // edx
    unsigned int v84;  // edx
    struct_1 *v85;  // rbx, Other Possible Types: struct_36 *
    struct_0 *v86;  // rdx
    unsigned long long flag8;  // rdi
    struct_37 **v87;  // rbx
    struct_37 **v88;  // rcx
    struct_39 **v89;  // rbx
    struct_39 **v90;  // rcx
    struct_1 *flag2;  // rdi
    struct_1 *v92;  // rdi
    struct_4 *v27;  // rbx
    unsigned int *ptr8;  // r14
    char v0;  // [bp+0x0]
    unsigned long long flag7;  // [bp+0x20]
    unsigned long long flag6;  // [bp+0x28]
    struct_5 **v4;  // [bp+0x40]
    char choice;  // [bp+0x48]
    unsigned int v6;  // [bp+0x4c]
    struct_0 *v7;  // [bp+0x50], Other Possible Types: unsigned int
    unsigned int v8;  // [bp+0x54]
    unsigned int v9;  // [bp+0x58]
    unsigned long v10;  // [bp+0x60], Other Possible Types: unsigned short
    unsigned short v11;  // [bp+0x62]
    unsigned short v12;  // [bp+0x64]
    char v13;  // [bp+0x68]
    unsigned int v14;  // [bp+0x6c]
    unsigned int v15;  // [bp+0x70], Other Possible Types: unsigned long, unsigned short
    unsigned int v16;  // [bp+0x78]
    unsigned short flag;  // [bp+0x80]
    unsigned long long v18;  // [bp+0x280]

    if (v19 == 262145)
    {
        sub_1000cd7d0(v18 ^ &v0);
        return;
    }
    v21 = (int)ptr[4];
    if (v21 > 33784)
    {
        flag9 = v21 - 33787;
        if (v21 != 33787)
        {
            v84 = flag9 - 1;
            if (flag9 == 1)
            {
                v90 = v89;
                *(v89)->field_110();
            }
            if (v84 != 2)
            {
                if (v84 == 3)
                {
                    if (!(v85->field_8b & 4))
                        4295811858();
                }
                else
                {
                    sub_1000cd7d0(v18 ^ &v0);
                    return;
                }
            }
            else
            {
                *((unsigned int *)((long long)ptr[24] + 20)) = (int)ptr[16] & 3;
                v86 = (long long)ptr[24];
                v88 = v87;
                *(v87)->field_138();
            }
        }
        else
        {
            flag2 = NULL;
            if ((int)ptr[32] == 8)
                v92 = v85;
            else
                v92 = flag2;
            *((struct_1 **)&ptr[24]) = v92;
        }
    }
    else if (v21 != 33784)
    {
        flag10 = v21 - 32769;
        if (v21 != 32769)
        {
            flag11 = flag10 - 1;
            if (flag10 != 1)
            {
                flag12 = flag11 - 1;
                if (flag11 != 1)
                {
                    v25 = (struct_0 *)(flag12 - 1);
                    if (flag12 != 1)
                    {
                        if (v25 == 0x3)
                        {
                            if ((int)ptr[24] == v25)
                            {
                                flag8 = 0;
                                ptr8 = sub_100055880(v27, &g_100007668, 0);
                                v29 = 128;
                                if (v27->field_84)
                                {
                                    flag = 0;
                                    4297065336();
                                }
                                sub_100059654(ptr8, ptr + 32);
                                v30 = *(ptr8);
                                v31 = v30;
                                if (((unsigned int)v31 & 4294967168) != 4294967168)
                                {
                                    v32 = ~((unsigned int)v30) & 127;
                                    v33 = ((unsigned int)v30 & 4294967168) - 1 ^ (unsigned int)v32;
                                    *(ptr8) = v33;
                                    v31 = v32;
                                    if (!(v33 & 4294967168))
                                        sub_100059224(ptr8); /* do not return */
                                }
                                v34 = v27;
                                v27->field_0->field_100();
                            }
                            else
                            {
                                sub_1000cd7d0(v18 ^ &v0);
                                return;
                            }
                        }
                        else
                        {
                            sub_1000cd7d0(v18 ^ &v0);
                            return;
                        }
                    }
                    else
                    {
                        if (((char)(int)ptr[16] & 3) != 1)
                            4295809746();
                        sub_1000cd7d0(v18 ^ &v0);
                        return;
                    }
                }
                else
                {
                    if (!((char)ptr[16] & 3))
                    {
                        flag13 = (struct_0 *)(int)ptr[24];
                        flag5 = 0;
                        if (flag13)
                        {
                            if (flag13 == 0x1)
                            {
                                v4 = v37;
                                v7 = flag13;
                                v38 = &v4;
                                v6 = (int)ptr[16] & 3;
                                v8 = (int)ptr[28];
                                v10 = (short)ptr[40];
                                v11 = (short)ptr[42];
                                v12 = (short)ptr[44];
                            }
                            else
                            {
                                sub_1000cd7d0(v18 ^ &v0);
                                return;
                            }
                        }
                        else
                        {
                            if ((int)ptr[28] > 0)
                            {
                                if (v8 > 2)
                                {
                                    if (v8 != 3)
                                    {
                                        if (v8 == 5)
                                            v15 = (short)ptr[56];
                                    }
                                    else
                                    {
                                        v15 = (long long)ptr[56];
                                        v16 = (int)ptr[64];
                                    }
                                }
                                else
                                {
                                    v15 = (int)ptr[56];
                                }
                            }
                            v4 = v37;
                            v7 = 0;
                            v8 = (int)ptr[28];
                            v38 = &v4;
                            v6 = (int)ptr[16] & 3;
                            v10 = (long long)ptr[40];
                            v13 = (char)ptr[48];
                            v14 = (int)ptr[52];
                        }
                        v39 = v37;
                        choice = 0;
                        v9 = (int)ptr[32];
                        *(v37)->field_48();
                    }
                    else
                    {
                        sub_10005ef7c((long long)ptr[8]); /* do not return */
                    }
                }
            }
            else
            {
                if (!(int)ptr[28])
                {
                    flag6 = 0;
                    flag7 = 0;
                    *(v40)->field_70();
                }
            }
        }
        else if ((int)ptr[24] == 0x1)
        {
            v42 = v41;
            *(v41)->field_120();
        }
        else if ((int)ptr[24] == 0x2)
        {
            if ((p->field_89 & 2))
            {
                v44 = 0;
                addr = sub_100055880(p, &g_100007160, 0);
            }
            else
            {
                addr = g_1000de270;
            }
            ptr4 = addr->field_8;
            v47 = 0;
            if (ptr4)
            {
                v48 = ptr4->field_0;
                v49 = 0;
                v51 = _ccall(6, 19, (unsigned long long)(ptr4->field_0 & 268435455), 0, v50);
                if (!((char)v51))
                {
                    do
                    {
                    } while ((sub_10005c80c(*((long long *)(v52 + ((v48 >> 28 & 1) ? ptr4->field_8 : ptr4 + 8))), 0), v48 = ptr4->field_0, v49 += 1, v49 < (ptr4->field_0 & 268435455)));
                }
            }
            v53 = addr->field_0;
            if ((v53 & 4294967168) != 4294967168)
            {
                v54 = (v53 & 4294967168) - 1 ^ ~(v53) & 127;
                addr->field_0 = v54;
                if (!(v54 & 4294967168))
                    sub_100059224(addr); /* do not return */
            }
            if ((p->field_89 & 4))
            {
                v44 = 0;
                ptr3 = sub_100055880(p, &g_100007400, 0);
            }
            else
            {
                ptr3 = g_1000de3f0;
            }
            v56 = ptr3->field_8;
            if (ptr3->field_8)
            {
                v57 = p;
                ptr3->field_8->field_0->field_30();
            }
            v58 = ptr3->field_0;
            if ((v58 & 4294967168) != 4294967168)
            {
                v59 = (v58 & 4294967168) - 1 ^ ~(v58) & 127;
                ptr3->field_0 = v59;
                if (!(v59 & 4294967168))
                    sub_100059224(ptr3); /* do not return */
            }
            v60 = p->field_18;
            if (v60->field_8)
            {
                i = 0;
                if (v60->field_0 > 0)
                {
                    do
                    {
                        sub_10005a810(*((long long *)(v60->field_8 + v47)), *((long long *)(v60->field_8 + v47 + 8)));
                        i += 1;
                        v47 += 16;
                    } while (i < v60->field_0);
                }
            }
            v62 = p->field_78->field_0;
            if ((v62 & 4294967168) != 4294967168)
            {
                v63 = (v62 & 4294967168) - 1 ^ ~(v62) & 127;
                p->field_78->field_0 = v63;
                if (!(v63 & 4294967168))
                    sub_100059224(); /* do not return */
            }
            ptr5 = &p->field_a0->field_0;
            p->field_78 = NULL;
            v65 = *(ptr5);
            if ((v65 & 4294967168) != 4294967168)
            {
                v66 = (v65 & 4294967168) - 1 ^ ~(v65) & 127;
                *(ptr5) = v66;
                if (!(v66 & 4294967168))
                    sub_100059224(); /* do not return */
            }
            ptr6 = &p->field_98->field_0;
            p->field_a0 = NULL;
            v68 = *(ptr6);
            if ((v68 & 4294967168) != 4294967168)
            {
                v69 = (v68 & 4294967168) - 1 ^ ~(v68) & 127;
                *(ptr6) = v69;
                if (!(v69 & 4294967168))
                    sub_100059224(); /* do not return */
            }
            v70 = p->field_30;
            p->field_98 = NULL;
            if (!v70)
            {
                cur = p->field_40;
                ptr11 = p;
                while (true)
                {
                    ptr10 = ptr11;
                    if (!cur)
                        break;
                    v74 = cur;
                    cur = cur->field_40;
                    ptr11 = v74;
                }
                v70 = ptr10->field_30;
                if (!v70)
                    goto LABEL_10005e2de;
            }
            if (v70[12] > 0)
                sub_10005da7c(p);
LABEL_10005e2de:
            ptr9 = p->field_30;
            if (ptr9)
            {
                v76 = ptr9[21];
                ptr9[21] = ptr9[21] - 1;
                if (!v76 + 4294967295)
                    sub_10007a114(); /* do not return */
                p->field_30 = NULL;
            }
            if (!g_1000e21b0)
            {
                flag3 = 0;
                v78 = p;
                p->field_0->field_0();
            }
            4297065360();
        }
    }
    else
    {
        flag4 = 0;
        if (!(long long)ptr[24])
        {
            sub_1000cd7d0(v18 ^ &v0);
            return;
        }
        *((unsigned int *)((long long)ptr[24] + 20)) = (int)ptr[16] & 3;
        v80 = (long long)ptr[24];
        v82 = v81;
        *(v81)->field_138();
    }
    sub_1000cd7d0(v18 ^ &v0);
    return;
}
