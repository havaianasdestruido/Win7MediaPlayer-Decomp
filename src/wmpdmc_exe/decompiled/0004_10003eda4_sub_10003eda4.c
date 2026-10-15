/* sub_10003eda4 @ 0x10003eda4
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10003eda4  (1792 bytes, 181 basic blocks)
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
    char padding_0[16];
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    long long field_10;
    char padding_18[180];
    long long field_cc;
} struct_3;

typedef struct struct_4 {
    char padding_0[16];
    unsigned long long field_10;
} struct_4;

typedef struct struct_5 {
    char padding_0[16];
    long long field_10;
} struct_5;

typedef struct struct_6 {
    char padding_0[16];
    long long field_10;
} struct_6;

typedef struct struct_7 {
    char padding_0[16];
    unsigned long long field_10;
} struct_7;

typedef struct struct_8 {
    char padding_0[16];
    unsigned long long field_10;
} struct_8;

typedef struct struct_9 {
    char padding_0[16];
    unsigned long long field_10;
} struct_9;

typedef struct struct_10 {
    char padding_0[16];
    unsigned long long field_10;
} struct_10;

typedef struct struct_11 {
    char padding_0[16];
    long long field_10;
} struct_11;

typedef struct struct_12 {
    char padding_0[16];
    long long field_10;
} struct_12;

typedef struct struct_13 {
    char padding_0[16];
    long long field_10;
} struct_13;

typedef struct struct_14 {
    char padding_0[16];
    struct struct_15 *field_10;
} struct_14;

typedef struct struct_16 {
    char padding_0[16];
    long long field_10;
} struct_16;

typedef struct struct_17 {
    char padding_0[16];
    long long field_10;
} struct_17;

typedef struct struct_18 {
    char padding_0[16];
    unsigned long long field_10;
} struct_18;

typedef struct struct_19 {
    char padding_0[16];
    unsigned long long field_10;
} struct_19;

typedef struct struct_20 {
    char padding_0[16];
    unsigned long long field_10;
} struct_20;

typedef struct struct_21 {
    char padding_0[16];
    unsigned long long field_10;
} struct_21;

typedef struct struct_22 {
    char padding_0[16];
    unsigned long long field_10;
} struct_22;

typedef struct struct_23 {
    char padding_0[16];
    unsigned long long field_10;
} struct_23;

typedef struct struct_24 {
    char padding_0[16];
    unsigned long long field_10;
} struct_24;

typedef struct struct_25 {
    char padding_0[16];
    unsigned long long field_10;
} struct_25;

typedef struct struct_26 {
    char padding_0[16];
    unsigned long long field_10;
} struct_26;

typedef struct struct_27 {
    char padding_0[16];
    unsigned long long field_10;
} struct_27;

typedef struct struct_28 {
    char padding_0[16];
    unsigned long long field_10;
} struct_28;

typedef struct struct_29 {
    char padding_0[16];
    unsigned long long field_10;
} struct_29;

typedef struct struct_30 {
    char padding_0[16];
    unsigned long long field_10;
} struct_30;

typedef struct struct_31 {
    char padding_0[16];
    unsigned long long field_10;
} struct_31;

typedef struct struct_32 {
    char padding_0[16];
    unsigned long long field_10;
} struct_32;

typedef struct struct_33 {
    char padding_0[16];
    unsigned long long field_10;
} struct_33;

typedef struct struct_34 {
    char padding_0[16];
    unsigned long long field_10;
} struct_34;

typedef struct struct_35 {
    char padding_0[16];
    unsigned long long field_10;
} struct_35;

typedef struct struct_36 {
    char padding_0[16];
    unsigned long long field_10;
} struct_36;

typedef struct struct_37 {
    char padding_0[16];
    unsigned long long field_10;
} struct_37;

typedef struct struct_38 {
    char padding_0[16];
    long long field_10;
} struct_38;

typedef struct struct_2 {
    char padding_0[632];
    unsigned long long field_278;
    unsigned long long field_280;
} struct_2;

typedef struct struct_15 {
    char padding_0[632];
    unsigned long long field_278;
    unsigned long long field_280;
} struct_15;

int sub_10003eda4(void)
{
    unsigned long long choice;  // rsi
    long long v3;  // r8
    unsigned long long idx5;  // rcx
    unsigned long v13;  // rcx
    unsigned int v14;  // edx
    unsigned int v15;  // edx
    struct_3 *v16;  // rcx
    struct_6 *addr;  // rcx
    struct_5 *v18;  // rcx
    long long v19;  // rbx
    unsigned int ptr[9];  // r9
    long long v4;  // rdi
    unsigned int index[61];  // rcx
    unsigned long v22;  // rdx
    unsigned long v23;  // rdx
    unsigned long v24;  // rdx
    unsigned int flag12;  // edx
    unsigned int flag7;  // edx
    unsigned int v27;  // edx
    unsigned int flag4;  // edx
    struct_8 *v29;  // rcx
    unsigned long v5;  // rdx
    struct_11 *v30;  // rcx
    struct_12 *v31;  // rcx
    struct_13 *v32;  // rcx
    struct_14 *ptr3;  // rcx
    unsigned long long v34[81];  // rbx
    unsigned long long v35;  // r9
    unsigned long long v36;  // rax
    struct_16 *v37;  // rcx
    unsigned int flag11;  // edx
    struct_17 *v38;  // rcx
    unsigned int flag8;  // edx
    unsigned int flag3;  // edx
    struct_29 *v41;  // rcx
    unsigned int v7;  // edx
    unsigned int flag10;  // edx
    unsigned int flag6;  // edx
    unsigned int v44;  // edx
    unsigned long v45;  // rdx
    unsigned int flag13;  // edx
    unsigned int flag2;  // edx
    unsigned int flag9;  // edx
    unsigned int flag5;  // edx
    struct_1 *ptr4;  // rcx
    struct_38 *v49;  // rcx
    unsigned long long idx6[81];  // rbx
    struct_0 **v11;  // rdx
    unsigned long long *p;  // [bp+0x28], Other Possible Types: unsigned int

    choice = 0;
    v4 = v3;
    *(p) = 0;
    if ((!p ? 2147942487 : 1) < 0)
    {
        return;
    }
    else if ((unsigned int)v5 <= 1047)
    {
        if ((unsigned int)v5 != 1047)
        {
            if ((unsigned int)v5 > 1025)
            {
                v22 = (unsigned int)v5 - 1034;
                if ((unsigned int)v5 != 1034)
                {
                    v23 = v22 - 1;
                    if ((unsigned int)v22 != 1)
                    {
                        v24 = v23 - 1;
                        if ((unsigned int)v23 != 1)
                        {
                            flag12 = v24 - 1;
                            if ((unsigned int)v24 != 1)
                            {
                                flag7 = flag12 - 1;
                                if (flag12 != 1)
                                {
                                    v27 = flag7 - 1;
                                    if (flag7 != 1)
                                    {
                                        flag4 = v27 - 5;
                                        if (v27 != 5)
                                        {
                                            if (flag4 != 1)
                                            {
                                                if (flag4 == 2)
                                                {
                                                    if (v29->field_10)
                                                        sub_100030b14(); /* do not return */
                                                    return;
                                                }
                                                else
                                                {
                                                    return;
                                                }
                                            }
                                            else
                                            {
                                                if (v29->field_10)
                                                    sub_100030b14(); /* do not return */
                                                return;
                                            }
                                        }
                                        else
                                        {
                                            if (v29->field_10)
                                                sub_100030b14(); /* do not return */
                                            return;
                                        }
                                    }
                                    else
                                    {
                                        if (v29->field_10)
                                            sub_10003583c(v30->field_10); /* do not return */
                                        return;
                                    }
                                }
                                else
                                {
                                    if (v29->field_10)
                                        sub_100029ae4(v31->field_10); /* do not return */
                                    return;
                                }
                            }
                            else
                            {
                                if (v29->field_10)
                                    sub_1000335fc(v32->field_10, v3 & 4294967295); /* do not return */
                                return;
                            }
                        }
                        else
                        {
                            v34 = ptr3->field_10;
                            if (!v34)
                                return;
                            if ((v35 > 0 ? 0 : 2147942487) >= 0)
                            {
                                p = 0;
                                if ((int)sub_10002f374(v34, &p) < 0)
                                    return;
                                v36 = p;
                                if (v36 < v34[80])
                                {
                                    sub_100023ad8(*((long long *)(v34[79] + v36 * 8)), v3);
                                    return;
                                }
                                sub_100046abc(2147942487); /* do not return */
                            }
                            else
                            {
                                return;
                            }
                        }
                    }
                    else
                    {
                        if (v29->field_10)
                            sub_10002fa7c(v37->field_10); /* do not return */
                        return;
                    }
                }
                else
                {
                    if (v29->field_10)
                    {
                        sub_100029e40(v38->field_10, (unsigned short)v3);
                        return;
                    }
                    return;
                }
            }
            else if ((unsigned int)v5 != 1025)
            {
                if ((unsigned int)v5 <= 18)
                {
                    if ((unsigned int)v5 != 18)
                    {
                        flag11 = v5 - 2;
                        if ((unsigned int)v5 != 2)
                        {
                            v7 = flag11 - 1;
                            if (flag11 == 1)
                                4297066480();
                            flag2 = v7 - 2;
                            if (v7 == 2)
                            {
                                4297066480();
                            }
                            else if (flag2 == 1)
                            {
                                if ((unsigned short)v3 != 1 && (unsigned short)v3 != 2)
                                    return;
                                idx6 = ptr4->field_10;
                                if (!idx6)
                                    return;
                                v11 = &p;
                                p = 0;
                                if ((int)sub_10002f2cc(idx6, &p) < 0)
                                    return;
                                idx5 = p;
                                if (idx5 >= idx6[80])
                                    sub_100046abc(2147942487); /* do not return */
                                v13 = *((long long *)(idx6[79] + idx5 * 8));
                                (*((long long *)(*((long long *)*((long long *)(idx6[79] + idx5 * 8))) + 168)))();
                            }
                            else if (flag2 != 11)
                            {
                                return;
                            }
                        }
                    }
                    4297066512();
                }
                else
                {
                    v14 = (unsigned int)v5 - 36;
                    if ((unsigned int)v5 == 36)
                    {
                        ptr[6] = index[58];
                        ptr[7] = index[59];
                        ptr[8] = index[60];
                        return;
                    }
                    v15 = v14 - 35;
                    if (v14 != 35)
                    {
                        if (v15 == 202)
                        {
                            v19 = addr->field_10;
                            if (!v19)
                                return;
                            if ((unsigned short)v3 != 501 && (unsigned short)v3 != 502)
                            {
                                if ((unsigned short)v3 == 503)
                                {
                                    sub_10003ada0(v19, 1);
                                    sub_10003acb4(v19, 1);
                                    sub_100039d4c(v19);
                                    sub_10003ada0(v19, 0);
                                    return;
                                }
                                if ((unsigned short)v3 == 504)
                                {
                                    sub_10003ada0(v19, 1);
                                    sub_10003acb4(v19, 1);
                                    sub_100039d4c(v19);
                                    sub_10003ada0(v19, 0);
                                    return;
                                }
                                if ((unsigned short)v3 != 513 && (unsigned short)v3 != 505 && (unsigned short)v3 != 506 && (unsigned short)v3 != 507 && (unsigned short)v3 != 514 && (unsigned short)v3 != 515 && (unsigned short)v3 != 518 && (unsigned short)v3 != 519 && (unsigned short)v3 != 516 && (unsigned short)v3 != 517)
                                    return;
                            }
                            sub_100039d4c();
                            return;
                        }
                        else if (v15 != 204)
                        {
                            return;
                        }
                        else if (v3 == 3)
                        {
                            if (v29->field_10)
                                sub_10003c20c(v16->field_10, *((long long *)&(&v16->padding_18)[1])); /* do not return */
                            return;
                        }
                        else
                        {
                            if (v3 == 4)
                            {
                                if (v29->field_10)
                                {
                                    sub_100039d4c();
                                    return;
                                }
                                return;
                            }
                            else
                            {
                                if (v3 != 5)
                                {
                                    return;
                                }
                                else if (v29->field_10)
                                {
                                    sub_10003acb4(v18->field_10, 0);
                                    return;
                                }
                                else
                                {
                                    return;
                                }
                            }
                        }
                    }
                    4297066480();
                }
            }
            else
            {
                if (v29->field_10)
                {
                    sub_100039d4c();
                    return;
                }
                return;
            }
        }
        else
        {
            if (v29->field_10)
                sub_100030b14(); /* do not return */
            return;
        }
    }
    else
    {
        if ((unsigned int)v5 > 1125)
        {
            return;
        }
        else if ((unsigned int)v5 != 1125)
        {
            if ((unsigned int)v5 > 1067)
            {
                flag10 = (unsigned int)v5 - 1074;
                if ((unsigned int)v5 != 1074)
                {
                    flag6 = flag10 - 1;
                    if (flag10 != 1)
                    {
                        v44 = flag6 - 1;
                        if (flag6 != 1)
                        {
                            v45 = v44 - 8;
                            if (v44 != 8)
                            {
                                flag13 = v45 - 1;
                                if ((unsigned int)v45 != 1)
                                {
                                    flag9 = flag13 - 1;
                                    if (flag13 != 1)
                                    {
                                        flag5 = flag9 - 1;
                                        if (flag9 != 1)
                                        {
                                            if (flag5 != 1)
                                            {
                                                if (flag5 == 2)
                                                {
                                                    if (!v41->field_10)
                                                        return;
                                                }
                                                else
                                                {
                                                    return;
                                                }
                                            }
                                            else
                                            {
                                                if (!v41->field_10)
                                                    return;
                                            }
                                        }
                                        else
                                        {
                                            if (!v41->field_10)
                                                return;
                                        }
                                    }
                                    else
                                    {
                                        if (!v41->field_10)
                                            return;
                                    }
                                }
                                else
                                {
                                    if (!v41->field_10)
                                        return;
                                }
                            }
                            else
                            {
                                if (!v41->field_10)
                                    return;
                            }
                        }
                        else
                        {
                            if (v29->field_10)
                            {
                                sub_100039d4c();
                                return;
                            }
                            return;
                        }
                    }
                    else
                    {
                        if (!v41->field_10)
                            return;
                    }
                }
                else
                {
                    if (!v41->field_10)
                        return;
                }
            }
            else if ((unsigned int)v5 != 1067)
            {
                if ((unsigned int)v5 <= 1055)
                {
                    if ((unsigned int)v5 != 1055)
                    {
                        flag8 = (unsigned int)v5 - 1048;
                        if ((unsigned int)v5 != 1048)
                        {
                            flag3 = flag8 - 1;
                            if (flag8 != 1)
                            {
                                if (flag3 != 1)
                                {
                                    if (flag3 == 5)
                                    {
                                        if (!v41->field_10)
                                            return;
                                    }
                                    else
                                    {
                                        return;
                                    }
                                }
                                else
                                {
                                    if (v29->field_10)
                                        sub_100030b14(); /* do not return */
                                    return;
                                }
                            }
                            else
                            {
                                if (v29->field_10)
                                    sub_100030b14(); /* do not return */
                                return;
                            }
                        }
                        else
                        {
                            if (v29->field_10)
                                sub_100030b14(); /* do not return */
                            return;
                        }
                    }
                    else if (!v41->field_10)
                    {
                        return;
                    }
                }
                else
                {
                    if ((unsigned int)v5 != 1056)
                    {
                        if ((unsigned int)v5 != 1057)
                        {
                            if ((unsigned int)v5 != 1058)
                            {
                                if ((unsigned int)v5 <= 1064)
                                {
                                    return;
                                }
                                else if ((unsigned int)v5 > 1066)
                                {
                                    return;
                                }
                                else if (!v41->field_10)
                                {
                                    return;
                                }
                            }
                            else
                            {
                                if (!v41->field_10)
                                    return;
                            }
                        }
                        else
                        {
                            if (!v41->field_10)
                                return;
                        }
                    }
                    else
                    {
                        if (!v41->field_10)
                            return;
                    }
                }
            }
            else
            {
                if (!v41->field_10)
                    return;
            }
            sub_1000341dc(); /* do not return */
        }
        else
        {
            if (!v41->field_10)
                return;
            sub_100033b1c(v49->field_10, (unsigned short)v3);
            return;
        }
    }
}
