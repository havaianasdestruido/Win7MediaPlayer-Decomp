/* sub_100056910 @ 0x100056910
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100056910  (2122 bytes, 182 basic blocks)
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

typedef struct struct_39 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_38 *field_8;
} struct_39;

typedef struct struct_20 {
    char padding_0[137];
    char field_89;
} struct_20;

typedef struct struct_19 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_18 *field_8;
} struct_19;

typedef struct struct_43 {
    char padding_0[8];
    struct struct_44 *field_8;
} struct_43;

typedef struct struct_50 {
    char padding_0[24];
    struct struct_51 *field_18;
    char padding_20[16];
    struct struct_52 *field_30;
} struct_50;

typedef struct struct_57 {
    struct struct_53 *field_0;
    unsigned long long field_8;
} struct_57;

typedef struct struct_61 {
    struct struct_59 *field_0;
    char padding_8[129];
    char field_89;
} struct_61;

typedef struct struct_58 {
    char padding_0[137];
    char field_89;
} struct_58;

typedef struct struct_21 {
    char padding_0[32];
    long long field_20;
    unsigned long long field_28;
} struct_21;

typedef struct struct_22 {
    char padding_0[140];
    unsigned int field_8c;
} struct_22;

typedef struct struct_23 {
    char padding_0[137];
    char field_89;
} struct_23;

typedef struct struct_24 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_24;

typedef struct struct_34 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_34;

typedef struct struct_35 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_35;

typedef struct struct_46 {
    char padding_0[8];
    struct struct_45 *field_8;
} struct_46;

typedef struct struct_45 {
    char padding_0[137];
    char field_89;
} struct_45;

typedef struct struct_47 {
    char padding_0[112];
    unsigned int field_70;
    char padding_74[23];
    char field_8b;
    unsigned int field_8c;
} struct_47;

typedef struct struct_48 {
    char padding_0[112];
    unsigned int field_70;
    char padding_74[23];
    char field_8b;
    unsigned int field_8c;
} struct_48;

typedef struct struct_49 {
    char padding_0[112];
    unsigned int field_70;
    char padding_74[23];
    char field_8b;
    unsigned int field_8c;
} struct_49;

typedef struct struct_0 {
    char padding_0[12];
    int field_c;
} struct_0;

typedef struct struct_38 {
    struct struct_36 *field_0;
    char padding_8[129];
    char field_89;
} struct_38;

typedef struct struct_18 {
    struct struct_14 *field_0;
    unsigned long long field_8;
} struct_18;

typedef struct struct_44 {
    struct struct_40 *field_0;
} struct_44;

typedef struct struct_51 {
    unsigned long long field_0;
} struct_51;

typedef struct struct_52 {
    unsigned long long field_0;
} struct_52;

typedef struct struct_53 {
    char padding_0[16];
    struct struct_54 *field_10;
    struct struct_55 *field_18;
    struct struct_56 *field_20;
} struct_53;

typedef struct struct_59 {
    char padding_0[40];
    struct struct_60 *field_28;
} struct_59;

typedef struct struct_36 {
    char padding_0[40];
    struct struct_37 *field_28;
} struct_36;

typedef struct struct_14 {
    char padding_0[16];
    struct struct_15 *field_10;
    struct struct_16 *field_18;
    struct struct_17 *field_20;
} struct_14;

typedef struct struct_40 {
    char padding_0[24];
    struct struct_41 *field_18;
    char padding_20[16];
    struct struct_42 *field_30;
} struct_40;

typedef struct struct_54 {
    unsigned long long field_0;
} struct_54;

typedef struct struct_55 {
    unsigned long long field_0;
} struct_55;

typedef struct struct_56 {
    unsigned long long field_0;
} struct_56;

typedef struct struct_60 {
    unsigned long long field_0;
} struct_60;

typedef struct struct_37 {
    unsigned long long field_0;
} struct_37;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_16 {
    unsigned long long field_0;
} struct_16;

typedef struct struct_17 {
    unsigned long long field_0;
} struct_17;

typedef struct struct_41 {
    unsigned long long field_0;
} struct_41;

typedef struct struct_42 {
    unsigned long long field_0;
} struct_42;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
    struct struct_10 *field_18;
    struct struct_11 *field_20;
} struct_8;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
    struct struct_4 *field_18;
    struct struct_5 *field_20;
} struct_2;

typedef struct struct_12 {
    struct struct_8 *field_0;
    unsigned long long field_8;
} struct_12;

typedef struct struct_6 {
    struct struct_2 *field_0;
    unsigned long long field_8;
} struct_6;

typedef struct struct_13 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_12 *field_8;
} struct_13;

typedef struct struct_7 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_6 *field_8;
} struct_7;

extern void g_100007160;
extern void g_100007400;
extern void g_100007f08;
extern void g_100008528;
extern void g_1000087c8;
extern struct_7 *g_1000de270;
extern struct_13 *g_1000de3f0;

int sub_100056910(void)
{
    unsigned long v6;  // r8
    struct_1 *pos;  // rdx
    struct_50 **v14;  // rbp
    struct_19 *addr;  // rdi
    struct_57 *v92;  // rcx
    struct_48 **v93;  // r8
    unsigned long long flag;  // r9
    struct_45 *v95;  // rdx
    unsigned int v96;  // ecx
    unsigned int v97;  // eax
    long long v98[6];  // rax
    struct_57 *ptr11;  // rdi
    long long v99;  // r9
    long long v100;  // r9
    struct_19 *ptr3;  // rdi
    struct_57 *v103;  // rcx
    struct_49 **v104;  // r8
    unsigned long long choice;  // r9
    struct_61 *v106;  // rdx
    unsigned int v107;  // ecx
    unsigned int v108;  // eax
    unsigned long long v16;  // r8
    unsigned long v17;  // r9
    struct_20 *v18;  // rdx
    struct_50 **v19;  // rcx
    struct_20 *v20;  // rdx
    struct_50 **v21;  // rcx
    struct_20 *v22;  // rdx
    struct_61 *v23;  // rcx
    struct_39 *ptr;  // r14
    void* p;  // rcx
    struct_58 *v25;  // rdi
    struct_21 *v26;  // rax
    long long v27;  // r9
    unsigned int v29;  // ecx
    unsigned int v30;  // eax
    unsigned int flag5;  // ecx
    unsigned long long flag3;  // rsi
    unsigned int v33;  // ecx
    long long v34;  // rcx
    unsigned int ptr4[3];  // rax
    unsigned int v37;  // edx
    unsigned int v38;  // edi
    unsigned int v39;  // ecx
    unsigned int v40;  // edi
    unsigned int flag4;  // ecx
    unsigned int ptr5[3];  // rax
    unsigned int v42;  // edx
    unsigned int v43;  // r12d
    unsigned int v44;  // ecx
    unsigned int v45;  // edx
    unsigned int v46;  // edx
    unsigned int v47;  // edx
    unsigned long v48;  // rdx
    unsigned int flag7;  // edx
    unsigned int flag6;  // edx
    unsigned long long v11;  // r9
    unsigned int v51;  // edx
    unsigned int v53;  // esi
    char v55;  // al
    long long v56;  // rcx
    struct_24 *ptr6;  // rax
    unsigned int v58;  // edx
    char v59;  // dil
    unsigned int v60;  // ecx
    unsigned long v61;  // rax
    unsigned long long flag2;  // r8
    unsigned long long v12;  // r8
    unsigned int ptr7[3];  // rax
    unsigned long v64;  // rdx
    unsigned long v65;  // rdi
    unsigned long v66;  // rdx
    unsigned long v67;  // rdx
    unsigned int v68;  // ecx
    void* v69;  // rcx
    struct_43 *ptr13;  // r9
    unsigned int v71;  // ecx
    struct_19 *ptr8;  // rax
    void* v72;  // rcx
    struct_34 *ptr9;  // rax
    unsigned int v74;  // edx
    char v75;  // dil
    unsigned int v76;  // ecx
    unsigned long long v77;  // r8
    struct_35 *ptr10;  // rax
    unsigned int v79;  // edx
    char v80;  // dil
    unsigned int v81;  // ecx
    void* v82;  // rdx
    void* v83;  // rcx
    unsigned long v84;  // rsi
    unsigned long v85;  // rcx
    struct_46 *ptr14;  // r9
    struct_45 *v87;  // rbp
    struct_61 *v88;  // rsi
    struct_43 *v0;  // [bp-0x68], Other Possible Types: unsigned int
    struct_39 *v1;  // [bp-0x60]
    struct_47 *v2;  // [bp+0x8]
    struct_1 *v3;  // [bp+0x10]
    unsigned int v4;  // [bp+0x18]
    struct_39 *v5;  // [bp+0x28]

    v4 = v6;
    v3 = pos;
    ptr = v5;
    flag3 = 1;
    flag4 = v6;
    if (flag4 == 1)
    {
        v71 = pos->field_28->field_c;
        if (v71)
        {
            if (v71 != 18 && v71 == 20)
            {
                v72 = p;
                if (((char)ptr->field_0 & 63) != 63)
                {
                    ptr9 = sub_100055880(v72, &g_1000087c8, 0);
                    v74 = ptr9->field_0;
                    v75 = ptr9->field_8;
                    if ((v74 & 4294967168) != 4294967168)
                    {
                        v76 = (v74 & 4294967168) - 1 ^ ~(v74) & 127;
                        ptr9->field_0 = v76;
                        if (!(v76 & 4294967168))
                            sub_100059224(ptr9); /* do not return */
                    }
                    if (v75)
                    {
                        *((char *)&p[139]) = (char)p[139] | 16;
                        v77 = 3;
                        v82 = p;
                        v83 = p;
                        (*((long long *)(*((long long *)p) + 232)))();
                    }
                }
                else
                {
                    ptr10 = sub_100055880(v72, &g_1000087c8, 0);
                    v79 = ptr10->field_0;
                    v80 = ptr10->field_8;
                    if ((v79 & 4294967168) != 4294967168)
                    {
                        v81 = (v79 & 4294967168) - 1 ^ ~(v79) & 127;
                        ptr10->field_0 = v81;
                        if (!(v81 & 4294967168))
                            sub_100059224(ptr10); /* do not return */
                    }
                    if (v80)
                    {
                        v77 = 0;
                        v82 = p;
                        v83 = p;
                        (*((long long *)(*((long long *)p) + 232)))();
                    }
                }
            }
        }
        else
        {
            v87 = ptr14->field_8;
            v88 = ptr->field_8;
            v2 = p;
            if (v87)
            {
                addr = (!(v87->field_89 & 4) ? g_1000de3f0 : sub_100055880(v87, &g_100007400, 0));
                v92 = addr->field_8;
                if (addr->field_8)
                {
                    v93 = &v2;
                    flag = 1;
                    v95 = v87;
                    addr->field_8->field_0->field_18();
                }
                v96 = addr->field_0;
                if ((v96 & 4294967168) != 4294967168)
                {
                    v97 = (v96 & 4294967168) - 1 ^ ~(v96) & 127;
                    addr->field_0 = v97;
                    if (!(v97 & 4294967168))
                        sub_100059224(addr); /* do not return */
                }
                sub_10005fb00(v87);
            }
            if (v88)
            {
                v98 = sub_10005337c(p);
                if (v98 && (int)p[112] != 4294967294)
                {
                    if (v98[5])
                    {
                        v99 = _INSERT(ptr14, 0, 1);
                        sub_10005862c(v98[5], p, 0, v99);
                    }
                    if (v98[4])
                    {
                        v100 = _INSERT(v99, 0, 1);
                        sub_10005862c(v98[4], p, 0, v100);
                    }
                }
                ptr3 = (!(v88->field_89 & 4) ? g_1000de3f0 : sub_100055880(v88, &g_100007400, 0));
                v103 = ptr3->field_8;
                if (ptr3->field_8)
                {
                    v104 = &v2;
                    choice = 1;
                    v106 = v88;
                    ptr3->field_8->field_0->field_10();
                }
                v107 = ptr3->field_0;
                if ((v107 & 4294967168) != 4294967168)
                {
                    v108 = (v107 & 4294967168) - 1 ^ ~(v107) & 127;
                    ptr3->field_0 = v108;
                    if (!(v108 & 4294967168))
                        sub_100059224(ptr3); /* do not return */
                }
                sub_10005fb00(v88);
                if (((char)p[139] & 2))
                    sub_100053eec(v88);
                if (((char)(int)p[140] & 3))
                    sub_100053f34(v88);
            }
            4295811774();
        }
    }
    else if (flag4 == 2)
    {
        v11 = 14;
        if (pos->field_28->field_c > 38)
        {
            v45 = pos->field_28->field_c;
            v46 = v45 - 39;
            if (v45 != 39)
            {
                v47 = v46 - 3;
                if (v46 != 3)
                {
                    v48 = v47 - 2;
                    if (v47 != 2)
                    {
                        flag7 = v48 - 1;
                        if ((unsigned int)v48 != 1)
                        {
                            flag6 = flag7 - 1;
                            if (flag7 != 1)
                            {
                                v51 = flag6 - 1;
                                if (flag6 != 1)
                                {
                                    if (v51 != 6)
                                    {
                                        if (v51 == 11)
                                            sub_1000576fc(p, ptr); /* do not return */
                                    }
                                    else
                                    {
LABEL_100056e44:
                                        if (v45 == 53)
                                        {
                                            v53 = (char)ptr->field_8;
                                            v55 = (char)((int)p[140] >> 2) & 7;
                                        }
                                        else
                                        {
                                            v55 = (int)ptr->field_8;
                                            v53 = (char)p[137] & 1;
                                        }
                                        4295811822();
                                    }
                                }
                                else
                                {
                                    if (((char)p[136] & 128))
                                    {
                                        v56 = 32782;
                                        goto LABEL_100056fd6;
                                    }
                                }
                            }
                            else
                            {
                                if (((char)p[136] & 128))
                                    sub_100060288(32781, p);
                                ptr6 = sub_100055880(p, &g_1000087c8, 0);
                                v58 = ptr6->field_0;
                                v59 = ptr6->field_8;
                                if ((v58 & 4294967168) != 4294967168)
                                {
                                    v60 = (v58 & 4294967168) - 1 ^ ~(v58) & 127;
                                    ptr6->field_0 = v60;
                                    if (!(v60 & 4294967168))
                                        sub_100059224(ptr6); /* do not return */
                                }
                                if (v59)
                                {
                                    v61 = *((long long *)p);
                                    *((char *)&p[139]) = (char)p[139] | 16;
                                    (*((long long *)(v61 + 224)))();
                                }
                            }
                        }
                        else
                        {
                            if (((char)p[136] & 128))
                            {
                                v56 = 32780;
                                goto LABEL_100056fd6;
                            }
                        }
                    }
                    else
                    {
                        if (((char)p[136] & 128))
                        {
                            v56 = 32778;
LABEL_100056fd6:
                            sub_100060288(v56, p);
                        }
                    }
                }
                else
                {
                    if ((char)ptr->field_8 && ((char)p[140] & 8))
                    {
                        flag2 = 0;
                        ptr7 = sub_100055880(p, &g_100008528, 0);
                        v64 = ptr7[0];
                        v65 = ptr7[2];
                        v66 = v64;
                        if (((unsigned int)v66 & 4294967168) != 4294967168)
                        {
                            v67 = ~((unsigned int)v64) & 127;
                            v68 = ((unsigned int)v64 & 4294967168) - 1 ^ (unsigned int)v67;
                            ptr7[0] = v68;
                            v66 = v67;
                            if (!(v68 & 4294967168))
                                sub_100059224(ptr7); /* do not return */
                        }
                        v69 = p;
                        (*((long long *)(*((long long *)p) + 248)))();
                    }
                }
            }
            else
            {
                if ((0xf000 & (int)ptr13->field_8) && !(0xf000 & (int)ptr->field_8))
                    sub_10005d804(p);
                if ((0xf00 & (int)ptr13->field_8) && !(0xf00 & (int)ptr->field_8))
                    sub_10005d804(p, 0xf00);
            }
        }
        else if (v45 != 38)
        {
            if (v45 <= 14)
            {
                if (v45 == 14)
                    sub_10005656c(p); /* do not return */
                if (v45 != 7)
                {
                    if (v45 == 8)
                        goto LABEL_100056e44;
                    if (v45 == 10)
                    {
                        if (((char)p[137] & 2))
                        {
                            v12 = 0;
                            ptr8 = sub_100055880(p, &g_100007160, 0);
                        }
                        else
                        {
                            ptr8 = g_1000de270;
                        }
                        v14 = ptr13->field_8;
                        ptr11 = ptr8->field_8;
                        if (v14)
                        {
                            if (ptr11)
                            {
                                *((unsigned int *)&ptr11->field_0) = 3221225471 & (int)ptr11->field_0;
                                v16 = (((int)ptr11->field_0 >> 28 & 1) ? ptr11->field_8 : (struct struct_57 *)&ptr11->field_8);
                                v17 = (int)ptr11->field_0 & 268435455;
                                v18 = p;
                                v19 = v14;
                                *(v14)->field_18();
                            }
                            v20 = p;
                            v21 = v14;
                            *(v14)->field_30();
                        }
                        else
                        {
                            if (ptr->field_8)
                            {
                                v22 = p;
                                v23 = ptr->field_8;
                                ptr->field_8->field_0->field_28();
                            }
                        }
                        goto LABEL_100056b02;
                    }
                    else if (v45 > 10 && v45 <= 12)
                    {
                        sub_10005671c(v34); /* do not return */
                    }
                }
                else
                {
                    v25 = (long long)p[72];
                    if (!((int)ptr->field_8 != 4294967294 && (int)ptr->field_8 != 4294967293))
                    {
LABEL_100056bb8:
                        if (v25)
                        {
                            ptr8 = (!(v25->field_89 & 4) ? g_1000de3f0 : sub_100055880(v25, &g_100007400, 0));
                            if (ptr8->field_8)
                            {
                                v0 = (int)ptr->field_8;
                                ptr8->field_8->field_0->field_20();
                            }
LABEL_100056b02:
                            v29 = ptr8->field_0;
                            if ((v29 & 4294967168) != 4294967168)
                            {
                                v30 = (v29 & 4294967168) - 1 ^ ~(v29) & 127;
                                ptr8->field_0 = v30;
                                if (!(v30 & 4294967168))
                                    sub_100059224(ptr8); /* do not return */
                            }
                        }
                    }
                    else if (v25)
                    {
                        v26 = sub_10005337c(p);
                        if (v26 && v26->field_28 && v26->field_20)
                        {
                            sub_10005862c();
                            v27 = _INSERT(1 CONCAT 0, 0, 1);
                            sub_10005862c(v26->field_20, p, 0, v27);
                        }
                        if (((char)p[139] & 2))
                            sub_100053eec(v25);
                        if (((char)(int)p[140] & 3))
                            sub_100053f34(v25);
                        goto LABEL_100056bb8;
                    }
                }
            }
            else
            {
                flag5 = v45 - 17;
                if (v45 == 17)
                    sub_10005671c(v34); /* do not return */
                v33 = flag5 - 1;
                if (flag5 != 1)
                {
                    if (v33 == 4)
                    {
                        sub_10005671c(v34); /* do not return */
                    }
                    else if (v33 == 11)
                    {
                        sub_10005666c(p); /* do not return */
                    }
                }
                else
                {
                    if (((char)p[136] & 128) && ((char)p[140] & 8))
                    {
                        ptr4 = sub_100055880(p, &g_100008528, 0);
                        v37 = ptr4[0];
                        v38 = ptr4[2];
                        if ((v37 & 4294967168) != 4294967168)
                        {
                            v39 = (v37 & 4294967168) - 1 ^ ~(v37) & 127;
                            ptr4[0] = v39;
                            if (!(v39 & 4294967168))
                                sub_100059224(ptr4); /* do not return */
                        }
                        if ((char)ptr->field_8)
                        {
                            v40 = v38 | 4;
                            sub_100060288(32773, p);
                        }
                        else
                        {
                            v40 = v38 & 4294967291;
                        }
                        sub_1000532f8(p, v40); /* do not return */
                    }
                }
            }
        }
        else
        {
            if (((char)p[138] & 2))
            {
                ptr5 = sub_100055880(p, &g_100007f08, 0);
                v42 = ptr5[0];
                v43 = ptr5[2];
                if ((v42 & 4294967168) != 4294967168)
                {
                    v44 = (v42 & 4294967168) - 1 ^ ~(v42) & 127;
                    ptr5[0] = v44;
                    if (!(v44 & 4294967168))
                        sub_100059224(ptr5); /* do not return */
                }
                if (((unsigned short)v43 & 0xf00))
                    4297065360();
            }
        }
    }
    if (!(long long)p[56])
        return;
    v84 = *((long long *)(long long)p[56]);
    if (1 > *((long long *)(long long)p[56]))
        return;
    v85 = *((long long *)((long long)p[56] + 8));
    v1 = ptr;
    v0 = ptr13;
    (*((long long *)(*((long long *)*((long long *)((long long)p[56] + 8))) + 24)))();
}
