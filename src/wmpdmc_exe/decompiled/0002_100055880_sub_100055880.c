/* sub_100055880 @ 0x100055880
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100055880  (2234 bytes, 201 basic blocks)
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

typedef struct struct_19 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_20 *field_8;
    char field_c;
    char padding_d[3];
    unsigned int field_10;
    unsigned int field_14;
} struct_19;

typedef struct struct_1 {
    char padding_0[40];
    struct struct_0 *field_28;
} struct_1;

typedef struct struct_7 {
    char padding_0[112];
    unsigned int field_70;
    char padding_74[4];
    struct struct_5 *field_78;
    unsigned int field_80;
    unsigned short field_84;
    char padding_86[2];
    char field_88;
    char field_89;
    char field_8a;
    char field_8b;
    unsigned int field_8c;
    unsigned int field_90;
    char padding_94[4];
    struct struct_5 *field_98;
    struct struct_5 *field_a0;
} struct_7;

typedef struct struct_8 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_9 *field_8;
    char field_c;
    char padding_d[3];
    unsigned int field_10;
    unsigned int field_14;
} struct_8;

typedef struct struct_2 {
    char padding_0[140];
    unsigned int field_8c;
} struct_2;

typedef struct struct_3 {
    char padding_0[112];
    unsigned int field_70;
} struct_3;

typedef struct struct_4 {
    char padding_0[136];
    char field_88;
} struct_4;

typedef struct struct_12 {
    char padding_0[120];
    struct struct_10 *field_78;
} struct_12;

typedef struct struct_10 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_11 *field_8;
    char field_c;
    char padding_d[3];
    unsigned int field_10;
    unsigned int field_14;
} struct_10;

typedef struct struct_21 {
    char padding_0[136];
    char field_88;
} struct_21;

typedef struct struct_22 {
    char padding_0[136];
    char field_88;
} struct_22;

typedef struct struct_15 {
    char padding_0[160];
    struct struct_13 *field_a0;
} struct_15;

typedef struct struct_23 {
    char padding_0[136];
    char field_88;
} struct_23;

typedef struct struct_24 {
    char padding_0[144];
    unsigned int field_90;
} struct_24;

typedef struct struct_18 {
    char padding_0[152];
    struct struct_16 *field_98;
} struct_18;

typedef struct struct_25 {
    char padding_0[128];
    unsigned int field_80;
} struct_25;

typedef struct struct_26 {
    char padding_0[139];
    char field_8b;
} struct_26;

typedef struct struct_27 {
    char padding_0[137];
    char field_89;
} struct_27;

typedef struct struct_28 {
    char padding_0[136];
    char field_88;
} struct_28;

typedef struct struct_29 {
    char padding_0[140];
    unsigned int field_8c;
} struct_29;

typedef struct struct_20 {
    unsigned short field_0;
} struct_20;

typedef struct struct_0 {
    char padding_0[12];
    unsigned int field_c;
} struct_0;

typedef struct struct_5 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_6 *field_8;
    char field_c;
    char padding_d[3];
    unsigned int field_10;
    unsigned int field_14;
} struct_5;

typedef struct struct_9 {
    unsigned short field_0;
} struct_9;

typedef struct struct_11 {
    unsigned short field_0;
} struct_11;

typedef struct struct_13 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_14 *field_8;
    char field_c;
    char padding_d[3];
    unsigned int field_10;
    unsigned int field_14;
} struct_13;

typedef struct struct_16 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_17 *field_8;
    char field_c;
    char padding_d[3];
    unsigned int field_10;
    unsigned int field_14;
} struct_16;

typedef struct struct_6 {
    unsigned short field_0;
} struct_6;

typedef struct struct_14 {
    unsigned short field_0;
} struct_14;

typedef struct struct_17 {
    unsigned short field_0;
} struct_17;

extern struct_19 g_10000d998;
extern struct_19 g_10000d9e0;
extern struct_19 g_10000d9f8;
extern struct_8 *g_1000de270;
extern struct_8 *g_1000de3f0;
extern struct_8 *g_1000de430;
extern struct_8 *g_1000de470;
extern struct_8 *g_1000de490;
extern struct_8 *g_1000de4b0;
extern struct_8 *g_1000de4d0;
extern struct_8 *g_1000de510;
extern struct_8 *g_1000de588;
extern struct_8 *g_1000de5a8;
extern struct_8 *g_1000de5c8;
extern struct_8 *g_1000de628;
extern struct_8 *g_1000de768;
extern struct_8 *g_1000de788;

int sub_100055880(void)
{
    char v1;  // sil
    struct_19 *p;  // rdi
    struct_15 *ptr;  // rcx, Other Possible Types: struct_7 *
    unsigned int v67;  // ecx
    unsigned int v68;  // edx
    unsigned int v69;  // eax
    unsigned long v70;  // rdx
    unsigned int flag14;  // edx
    unsigned int flag7;  // edx
    unsigned int v73;  // edx
    struct_8 **ptr4;  // rax
    struct_2 *addr;  // rcx, Other Possible Types: struct_24 *, struct_25 *, struct_29 *, struct_3 *
    unsigned long long v3;  // r8
    char v15;  // cc_dep1
    unsigned int flag2;  // ecx
    unsigned int v17;  // ecx
    unsigned int v18;  // ecx
    unsigned int flag5;  // ecx
    unsigned int v20;  // ecx
    struct_10 *ptr3;  // rbp
    struct_1 *pos;  // rdx
    unsigned long v22;  // rcx
    unsigned long v23;  // rcx
    unsigned int flag13;  // ecx
    unsigned int flag6;  // ecx
    unsigned int v26;  // ecx
    int v5;  // ecx
    unsigned int v27;  // ecx
    unsigned long v28;  // rcx
    unsigned long v6;  // rcx
    unsigned int flag12;  // ecx
    unsigned int flag3;  // ecx
    unsigned int v31;  // ecx
    unsigned long v7;  // rcx
    int v34;  // edx
    unsigned long v35;  // rdx
    unsigned long v36;  // rdx
    unsigned int flag15;  // ecx
    unsigned int flag17;  // edx
    unsigned int flag11;  // edx
    unsigned int choice;  // edx
    unsigned int v42;  // eax
    unsigned int flag4;  // edx
    unsigned int v45;  // edx
    unsigned int v46;  // edx
    unsigned int flag8;  // ecx
    unsigned int flag9;  // edx
    unsigned int v48;  // edx
    char v49;  // al
    char v50;  // al
    char v51;  // al
    unsigned int v52;  // ecx
    unsigned int v53;  // edx
    unsigned int v54;  // eax
    char v55;  // al
    unsigned int v56;  // ecx
    unsigned int flag;  // ecx
    unsigned int v57;  // edx
    unsigned int v58;  // eax
    unsigned long v59;  // rdx
    unsigned long v60;  // rdx
    unsigned int flag16;  // edx
    unsigned int flag10;  // edx
    unsigned int v63;  // edx
    char v64;  // al
    char v65;  // al
    char v66;  // al

    v1 = 0;
    p = &g_10000d998.field_0;
    if (!v3)
    {
        v5 = pos->field_28->field_c;
        if (v5 <= 29)
        {
            if (v5 == 29)
            {
                ptr3 = ptr->field_a0;
                goto LABEL_100055a8c;
            }
            if (v5 <= 14)
            {
                if (v5 == 14)
                {
                    v15 = ptr->padding_0[136] & 8;
                    goto LABEL_1000559c2;
                }
                v6 = v5 - 7;
                if (v5 == 7)
                    sub_100058780(addr->field_70); /* do not return */
                v7 = v6 - 1;
                if ((unsigned int)v6 == 1)
                    sub_100058780(addr->field_8c >> 2 & 7); /* do not return */
                flag15 = v7 - 1;
                if ((unsigned int)v7 != 1)
                {
                    flag8 = flag15 - 1;
                    if (flag15 != 1)
                    {
                        flag = flag8 - 1;
                        if (flag8 != 1)
                        {
                            if (flag != 1)
                            {
                                if (flag == 2 && !(ptr->padding_0[137] & 32))
                                {
                                    ptr4 = &g_1000de4b0;
                                    goto LABEL_100055c30;
                                }
                            }
                            else
                            {
                                if (!(16 & ptr->padding_0[137]))
                                {
                                    ptr4 = &g_1000de490;
                                    goto LABEL_100055c30;
                                }
                            }
                        }
                        else
                        {
                            if (!(ptr->padding_0[137] & 8))
                            {
                                ptr4 = &g_1000de430;
                                goto LABEL_100055c30;
                            }
                        }
                    }
                    else
                    {
                        if (!(ptr->padding_0[137] & 4))
                        {
                            ptr4 = &g_1000de3f0;
                            goto LABEL_100055c30;
                        }
                    }
                }
                else
                {
                    if (!(ptr->padding_0[137] & 2))
                    {
                        ptr4 = &g_1000de270;
                        goto LABEL_100055c30;
                    }
                }
            }
            else
            {
                flag2 = v5 - 17;
                if (v5 != 17)
                {
                    v17 = flag2 - 1;
                    if (flag2 == 1)
                    {
                        v15 = ptr->padding_0[136] & 32;
                        goto LABEL_1000559c2;
                    }
                    v18 = v17 - 2;
                    if (v17 == 2)
                    {
                        v15 = 64 & ptr->padding_0[136];
                        goto LABEL_1000559c2;
                    }
                    flag5 = v18 - 2;
                    if (v18 != 2)
                    {
                        v20 = flag5 - 1;
                        if (flag5 == 1)
                        {
                            ptr3 = *((long long *)&ptr->padding_0[120]);
                            goto LABEL_100055a8c;
                        }
                        if (v20 != 4)
                        {
                            if (v20 == 5 && (16 & ptr->padding_0[138]))
                            {
                                ptr4 = &g_1000de4d0;
                                goto LABEL_100055c30;
                            }
                        }
                        else
                        {
                            if ((ptr->padding_0[138] & 8))
                            {
                                ptr4 = &g_1000de470;
                                goto LABEL_100055c30;
                            }
                        }
                    }
                    else
                    {
                        if (!(64 & ptr->padding_0[137]))
                        {
                            ptr4 = &g_1000de510;
                            goto LABEL_100055c30;
                        }
                    }
                }
                else
                {
                    if ((128 & ptr->padding_0[137]))
                    {
                        ptr4 = &g_1000de628;
                        goto LABEL_100055c30;
                    }
                }
            }
        }
        else if (v5 <= 38)
        {
            if (v5 == 38)
                sub_100058780(addr->field_80); /* do not return */
            v22 = v5 - 30;
            if (v5 == 30)
            {
                ptr3 = *((long long *)&ptr->padding_0[152]);
LABEL_100055a8c:
                v27 = ptr3->field_0;
                if ((v27 & 4294967168) != 4294967168)
                {
                    ptr3->field_0 = (v27 & 4294967168) + 128 ^ v27 & 127;
                    goto LABEL_100055c33;
                }
            }
            v23 = v22 - 1;
            if ((unsigned int)v22 == 1)
                sub_100058780(addr->field_90); /* do not return */
            flag13 = v23 - 1;
            if ((unsigned int)v23 != 1)
            {
                flag6 = flag13 - 1;
                if (flag13 != 1)
                {
                    v26 = flag6 - 1;
                    if (flag6 != 1)
                    {
                        if (v26 == 2)
                            4297065360();
                        if (v26 == 3)
                        {
                            v15 = 16 & ptr->padding_0[136];
                            goto LABEL_1000559c2;
                        }
                    }
                    else
                    {
                        if ((128 & ptr->padding_0[138]))
                        {
                            ptr4 = &g_1000de5c8;
                            goto LABEL_100055c30;
                        }
                    }
                }
                else
                {
                    if ((64 & ptr->padding_0[138]))
                    {
                        ptr4 = &g_1000de5a8;
                        goto LABEL_100055c30;
                    }
                }
            }
            else if ((ptr->padding_0[138] & 32))
            {
                ptr4 = &g_1000de588;
                goto LABEL_100055c30;
            }
        }
        else
        {
            v28 = v5 - 39;
            if (v5 != 39)
            {
                flag12 = v28 - 1;
                if ((unsigned int)v28 != 1)
                {
                    flag3 = flag12 - 1;
                    if (flag12 == 1)
                        sub_100058780(addr->field_8c >> 5 & 1); /* do not return */
                    v31 = flag3 - 1;
                    if (flag3 != 1)
                    {
                        if (v31 != 11)
                        {
                            if (v31 == 19)
                            {
                                v15 = ptr->padding_0[139] & 32;
                                goto LABEL_1000559c2;
                            }
                        }
                        else
                        {
                            v15 = 1 & ptr->padding_0[137];
                            goto LABEL_1000559c2;
                        }
                    }
                    else
                    {
                        v15 = 128 & ptr->padding_0[136];
LABEL_1000559c2:
                        if (!v15)
                            p = &g_10000d9f8.field_0;
                        else
                            p = &g_10000d9e0.field_0;
                    }
                }
                else
                {
                    if ((ptr->padding_0[138] & 4))
                    {
                        ptr4 = &g_1000de788;
LABEL_100055c30:
                        ptr3 = *(ptr4);
LABEL_100055c33:
                        if (ptr3)
                            p = ptr3;
                    }
                }
            }
            else if (!(ptr->padding_0[138] & 2))
            {
                ptr4 = &g_1000de768;
                goto LABEL_100055c30;
            }
        }
    }
    if (((char)p->field_0 & 63) == 63)
        p = sub_100055760(ptr, pos);
    if (!v3)
        return;
    v34 = pos->field_28->field_c;
    if (v34 <= 29)
    {
        if (v34 == 29)
        {
            v56 = p->field_0;
            if ((v56 & 4294967168) != 4294967168)
                p->field_0 = (v56 & 4294967168) + 128 ^ v56 & 127;
            v57 = ptr->field_a0->field_0;
            if ((v57 & 4294967168) != 4294967168)
            {
                v58 = (v57 & 4294967168) - 1 ^ ~(v57) & 127;
                ptr->field_a0->field_0 = v58;
                if (!(v58 & 4294967168))
                    sub_100059224(); /* do not return */
            }
            ptr->field_a0 = p;
            return;
        }
        else if (v34 > 14)
        {
            flag4 = v34 - 17;
            if (v34 == 17)
            {
                ptr->padding_0[137] = (!(int)p->field_8) * 128 | ptr->padding_0[137] & 127;
                ptr->field_8a = ptr->field_8a ^ (((char)(int)p->field_8 & 12) == 12 ^ ptr->field_8a) & 1;
                return;
            }
            v45 = flag4 - 1;
            if (flag4 == 1)
            {
                ptr->field_88 = ptr->field_88 ^ ((char)p->field_8 * 32 ^ ptr->field_88) & 32;
                return;
            }
            v46 = v45 - 2;
            if (v45 == 2)
            {
                ptr->field_88 = ptr->field_88 ^ ((char)p->field_8 * 64 ^ ptr->field_88) & 64;
                return;
            }
            flag9 = v46 - 2;
            if (v46 != 2)
            {
                v48 = flag9 - 1;
                if (flag9 != 1)
                {
                    if (v48 != 4)
                    {
                        if (v48 == 5)
                        {
                            v49 = sub_1000593f0(p, g_1000de4d0);
                            ptr->padding_0[138] = ptr->padding_0[138] & 239;
                            ptr->field_8a = ptr->field_8a | (v49 & 1) * 16;
                            return;
                        }
                        return;
                    }
                    else
                    {
                        v51 = sub_1000593f0(p, g_1000de470);
                        ptr->padding_0[138] = ptr->padding_0[138] & 247;
                        ptr->field_8a = ptr->field_8a | (v51 & 1) * 8;
                        return;
                    }
                }
                else
                {
                    v52 = p->field_0;
                    if ((v52 & 4294967168) != 4294967168)
                        p->field_0 = (v52 & 4294967168) + 128 ^ v52 & 127;
                    v53 = *((int *)*((long long *)&ptr->padding_0[120]));
                    if ((v53 & 4294967168) != 4294967168)
                    {
                        v54 = (v53 & 4294967168) - 1 ^ ~(v53) & 127;
                        *((unsigned int *)*((long long *)&ptr->padding_0[120])) = v54;
                        if (!(v54 & 4294967168))
                            sub_100059224(); /* do not return */
                    }
                    *((struct_19 **)&ptr->padding_0[120]) = p;
                    return;
                }
            }
            else
            {
                if (((char)p->field_0 & 63) == 5)
                {
                    if (p->field_8 && p->field_8->field_0)
                        v1 = 1;
                    ptr->padding_0[137] = ptr->padding_0[137] & 191;
                    ptr->field_89 = ptr->field_89 | (v1 & 1) * 64;
                    return;
                }
                else
                {
                    ptr->padding_0[137] = ptr->padding_0[137] | 64;
                    return;
                }
            }
        }
        else if (v34 != 14)
        {
            v35 = v34 - 7;
            if (v34 == 7)
            {
                *((int *)&ptr->padding_0[112]) = (int)p->field_8;
                return;
            }
            v36 = v35 - 1;
            if ((unsigned int)v35 == 1)
            {
                ptr->field_8c = ptr->field_8c ^ ((int)p->field_8 * 4 ^ ptr->field_8c) & 28;
                return;
            }
            flag17 = v36 - 1;
            if ((unsigned int)v36 == 1)
            {
                ptr->field_89 = ptr->field_89 ^ ((p->field_8) * 2 ^ ptr->field_89) & 2;
                return;
            }
            flag11 = flag17 - 1;
            if (flag17 == 1)
            {
                ptr->field_89 = ptr->field_89 ^ ((p->field_8) * 4 ^ ptr->field_89) & 4;
                return;
            }
            choice = flag11 - 1;
            if (flag11 == 1)
            {
                if ((int)p->field_8 || *((int *)((char *)&p->field_8 + 4)) || *((int *)&p->field_c) || p->field_10)
                    v1 = 1;
                ptr->padding_0[137] = ptr->padding_0[137] & 247;
                ptr->field_89 = ptr->field_89 | (v1 & 1) * 8;
                return;
            }
            else if (choice == 1)
            {
                if ((int)p->field_8 || *((int *)((char *)&p->field_8 + 4)) || *((int *)&p->field_c) || p->field_10)
                    v1 = 1;
                ptr->padding_0[137] = ptr->padding_0[137] & 239;
                ptr->field_89 = ptr->field_89 | (v1 & 1) * 16;
                return;
            }
            else if (choice == 2)
            {
                if ((int)p->field_8 || *((int *)((char *)&p->field_8 + 4)) || *((int *)&p->field_c) || p->field_10)
                    v1 = 1;
                ptr->padding_0[137] = ptr->padding_0[137] & 223;
                ptr->field_89 = ptr->field_89 | (v1 & 1) * 32;
                return;
            }
            else
            {
                return;
            }
        }
        else
        {
            ptr->field_88 = ptr->field_88 ^ ((char)p->field_8 * 8 ^ ptr->field_88) & 8;
            return;
        }
    }
    else
    {
        if (v34 > 38)
        {
            v70 = v34 - 39;
            if (v34 == 39)
            {
                v55 = ((((int)p->field_8 & 0xffff00)) * 2 ^ ptr->padding_0[138]) & 2;
                ptr->padding_0[138] = ptr->padding_0[138] ^ v55;
                return;
            }
            flag14 = v70 - 1;
            if ((unsigned int)v70 != 1)
            {
                flag7 = flag14 - 1;
                if (flag14 == 1)
                {
                    v42 = ((int)p->field_8 * 32 ^ *((int *)&ptr->padding_0[140])) & 32;
                    *((unsigned int *)&ptr->padding_0[140]) = *((int *)&ptr->padding_0[140]) ^ v42;
                    return;
                }
                v73 = flag7 - 1;
                if (flag7 == 1)
                {
                    ptr->padding_0[136] = (char)p->field_8 * 128 | ptr->padding_0[136] & 127;
                    return;
                }
                if (v73 != 11)
                {
                    if (v73 != 19)
                        return;
                    ptr->padding_0[139] = ptr->padding_0[139] ^ ((char)p->field_8 * 32 ^ ptr->padding_0[139]) & 32;
                    return;
                }
                else
                {
                    ptr->field_89 = ptr->field_89 ^ ((char)p->field_8 ^ ptr->field_89) & 1;
                    return;
                }
            }
            else
            {
                if (((char)p->field_0 & 63) == 1 && !(int)p->field_8)
                    v1 = 1;
                ptr->padding_0[138] = ptr->padding_0[138] & 251;
                ptr->padding_0[138] = ptr->padding_0[138] | (v1 & 1) * 4;
                return;
            }
        }
        else if (v34 != 38)
        {
            v59 = v34 - 30;
            if (v34 != 30)
            {
                v60 = v59 - 1;
                if ((unsigned int)v59 == 1)
                {
                    *((int *)&ptr->padding_0[144]) = (int)p->field_8;
                    return;
                }
                flag16 = v60 - 1;
                if ((unsigned int)v60 != 1)
                {
                    flag10 = flag16 - 1;
                    if (flag16 != 1)
                    {
                        v63 = flag10 - 1;
                        if (flag10 != 1)
                        {
                            if (v63 == 2)
                            {
                                *((short *)&ptr->padding_0[132]) = (short)p->field_8;
                                return;
                            }
                            else if (v63 == 3)
                            {
                                ptr->field_88 = ptr->field_88 ^ ((char)p->field_8 * 16 ^ ptr->field_88) & 16;
                                return;
                            }
                            else
                            {
                                return;
                            }
                        }
                        v64 = sub_1000593f0(p, g_1000de5c8);
                        ptr->padding_0[138] = ptr->padding_0[138] & 127;
                        v50 = v64 * 128;
                    }
                    else
                    {
                        v65 = sub_1000593f0(p, g_1000de5a8);
                        ptr->padding_0[138] = ptr->padding_0[138] & 191;
                        v50 = (v65 & 1) * 64;
                    }
                }
                else
                {
                    v66 = sub_1000593f0(p, g_1000de588);
                    ptr->padding_0[138] = ptr->padding_0[138] & 223;
                    v50 = (v66 & 1) * 32;
                }
                ptr->padding_0[138] = ptr->padding_0[138] | v50;
                return;
            }
            else
            {
                v67 = p->field_0;
                if ((v67 & 4294967168) != 4294967168)
                    p->field_0 = (v67 & 4294967168) + 128 ^ v67 & 127;
                v68 = *((int *)*((long long *)&ptr->padding_0[152]));
                if ((v68 & 4294967168) != 4294967168)
                {
                    v69 = (v68 & 4294967168) - 1 ^ ~(v68) & 127;
                    *((unsigned int *)*((long long *)&ptr->padding_0[152])) = v69;
                    if (!(v69 & 4294967168))
                        sub_100059224(); /* do not return */
                }
                *((struct_19 **)&ptr->padding_0[152]) = p;
                return;
            }
        }
        else
        {
            *((int *)&ptr->padding_0[128]) = (int)p->field_8;
            return;
        }
    }
}
