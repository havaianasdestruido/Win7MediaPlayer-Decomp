/* sub_100034588 @ 0x100034588
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100034588  (2054 bytes, 206 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_3 {
    char padding_0[56];
    unsigned long long field_38;
    char padding_40[64];
    unsigned short field_80;
    unsigned short field_82;
} struct_3;

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_2 {
    struct struct_1 *field_0;
} struct_2;

extern long long g_10003db00;
extern long long g_10003db30;
extern struct_2 *g_10003e238;

long long sub_100034588(struct_3 *ptr, int a1)
{
    char v5;  // bl
    int p;  // esi
    int v15;  // ecx
    int flag6;  // ecx
    int flag3;  // ecx
    char v18;  // al
    unsigned int v20;  // r11d
    unsigned int v21;  // eax
    unsigned long long v23;  // rax
    unsigned long long choice;  // rdi
    unsigned long long v26;  // rax
    long long *v27;  // rcx
    int v28;  // ecx
    int flag5;  // ecx
    int flag2;  // ecx
    struct_1 **v31;  // rcx
    struct_3 *v32;  // r8
    unsigned long v33;  // rdx
    long long *v34;  // rax
    unsigned int v8;  // edx
    unsigned long long v35;  // rsi
    char v36;  // cl
    unsigned short v37;  // di
    unsigned int v9;  // eax
    int flag8;  // ecx
    int flag7;  // ecx
    int flag4;  // ecx
    char *v14;  // rcx
    unsigned long v0;  // [bp-0x38]
    char v1;  // [bp-0x28]
    char v3;  // [bp+0x10], Other Possible Types: int, unsigned int
    long long *v4;  // [bp+0x18], Other Possible Types: unsigned int

    v3 = a1;
    v5 = 0;
    p = a1;
    choice = 1;
    if (a1 < 16)
    {
        v8 = 1 << ((char)a1 & 31);
        if (((char)v8 & 5) && (ptr->field_82 & v8))
        {
            v9 = ptr->field_80;
            return _INSERT(v9, 0, (v9 & v8));
        }
    }
    if (p <= 10)
    {
        if (p != 10)
        {
            if (p > 5)
            {
                v15 = p;
                flag6 = v15 - 6;
                if (v15 != 6)
                {
                    flag3 = flag6 - 1;
                    if (flag6 != 1)
                    {
                        if (flag3 != 1)
                        {
                            if (flag3 - 1 != 1)
                                goto LABEL_100034d79;
                            if (!(char)sub_100033ebc(ptr, L"http") && !(char)sub_100033ebc(ptr, L"https") && !((v18 = (char)sub_100034588(ptr, 0), v18)))
                            {
                                v5 = 0;
                                goto LABEL_100034de1;
                            }
                        }
                        else
                        {
                            if ((char)sub_100033ebc(ptr, L"vnd.ms.wmhtml"))
                            {
                                sub_10002fbf0(&v1);
                                p = p;
                                if (sub_100033688(ptr, &v1) >= 0)
                                {
                                    if (...)
                                    {
                                        v5 = 0;
                                        v4 = 0;
                                        if (&v4)
                                        {
                                            v20 = sub_10003751c(v1, &v4);
                                            v21 = v4;
                                        }
                                        else
                                        {
                                            v20 = 2147500035;
                                            v21 = 0;
                                        }
                                        p = v3;
                                        if (v20 >= 0)
                                        {
                                            v5 = (char)(v21 >> 4) & 1;
                                            p = v3;
                                            goto LABEL_100034b1a;
                                        }
                                    }
                                    else
                                    {
                                        v5 = 1;
                                        p = v3;
                                        goto LABEL_100034b1a;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
LABEL_100034650:
                        if (!(char)sub_100033ebc(ptr))
                            goto LABEL_100034663;
                    }
                }
                else
                {
                    if ((char)sub_100033ebc(ptr, "f"))
                    {
                        sub_10002fbf0(&v1);
                        p = p;
                        if (sub_100033688(ptr, &v1) >= 0)
                            v5 = sub_10002fba4(v1, L"smi");
LABEL_100034b1a:
                        v14 = &v1;
LABEL_1000347a5:
                        sub_100030020(v14);
                        goto LABEL_100034de1;
                    }
                }
            }
            else if (p != 5)
            {
                flag8 = p;
                if (p)
                {
                    flag7 = flag8 - 1;
                    if (flag8 != 1)
                    {
                        flag4 = flag7 - 1;
                        if (flag7 == 1)
                        {
                            sub_10002fbf0(&v0);
                            if ((int)sub_100033e00(ptr, &v0) >= 0)
                            {
                                if (!(char)sub_10002fb24(v0, "f") && !(char)sub_10002fb24(v0, L"http") && !(char)sub_10002fb24(v0, L"https") && !(char)sub_10002fb24(v0, L"rtsp") && !(char)sub_10002fb24(v0, L"dlna-playsingle") && !(char)sub_10002fb24(v0, L"dlna-playcontainer"))
                                    sub_100032fd0(v0); /* do not return */
                                v5 = 1;
                                v3 = 1;
                                if ((char)sub_10002fb24(v0, "f"))
                                {
                                    sub_10002fbf0(&v1);
                                    if ((int)sub_100033ef0(ptr, &v1) >= 0)
                                    {
                                        if ((char)sub_100033750(ptr, L"search-ms"))
                                            sub_1000342ec(&v1, &v3); /* do not return */
                                        v5 = sub_1000377f8(ptr, 0, 4);
                                    }
                                    else
                                    {
                                        v5 = 0;
                                    }
                                    sub_100030020(&v1);
                                }
                            }
                            v14 = &v0;
                            goto LABEL_1000347a5;
                        }
                        if (flag4 != 1)
                        {
                            if (flag4 - 1 != 1)
                                goto LABEL_100034d79;
                            if (!(char)sub_100033ebc(ptr, L"res"))
                                sub_100034e1c(ptr); /* do not return */
                        }
                        else if (!(char)sub_100033ebc(ptr, L"http"))
                        {
                            goto LABEL_100034650;
                        }
                    }
                    else
                    {
                        v5 = !(char)sub_100033ebc(ptr, L"mailto");
                        goto LABEL_100034de1;
                    }
                }
                else
                {
                    v5 = sub_100033ebc(ptr, "f");
                    goto LABEL_100034de1;
                }
            }
        }
    }
    else
    {
        if (p <= 18)
        {
            if (p == 18)
            {
                if ((char)sub_100033ebc(ptr, L"res"))
                {
                    if (ptr->field_38)
                        4296016752();
                    return sub_100034cdb(0);
                }
                else
                {
                    if (ptr->field_38)
                        4296016752();
                    return sub_100034d2b(0);
                }
            }
            if (p < 11)
                goto LABEL_100034d79;
            if (p <= 12)
            {
                v27 = &g_10003db30;
                v5 = 0;
                v3 = 0;
                v4 = &g_10003db30;
                do
                {
                    if ((char)sub_100033750(ptr, *(v27)))
                        goto LABEL_100034c5b;
                } while ((v27 = v4 + 8, v3 += 1, v4 = v27, v3 < 4));
            }
            if (p <= 14)
            {
                if (!(char)sub_100033ebc(ptr, L"http") && !(char)sub_100033ebc(ptr, L"vnd.ms.wmhtml") && !(char)sub_100033ebc(ptr, L"https"))
                {
                    v5 = 0;
                    goto LABEL_100034ddc;
                }
                else
                {
LABEL_100034c5b:
                    v5 = 1;
                    goto LABEL_100034ddc;
                }
            }
            if (p != 15)
            {
                if (p != 16)
                {
                    if (p == 17)
                        return _INSERT(v26, 0, 1);
                }
                else
                {
                    v23 = sub_100033ebc(ptr, "f");
                    if (!(char)v23)
                    {
                        v23 = sub_100033ebc(ptr, L"wmpcd");
                        if (!(char)v23)
                        {
                            v23 = sub_100033ebc(ptr, L"wmpdvd");
                            if (!(char)v23)
                                return _INSERT(v26, 0, 1);
                        }
                    }
                    v26 = v23;
                    return _INSERT(v26, 0, 0);
                }
                goto LABEL_100034d79;
            }
            else if (!(char)sub_100033ebc(ptr, L"https"))
            {
LABEL_100034663:
                v18 = sub_100033ebc(ptr);
            }
        }
        else
        {
            v28 = p;
            flag5 = v28 - 19;
            if (v28 != 19)
            {
                flag2 = flag5 - 1;
                if (flag5 == 1)
                {
                    v34 = &g_10003db00;
                    v5 = 0;
                    v35 = 0;
                    v4 = &g_10003db00;
                    do
                    {
                        if ((char)sub_100033750(ptr, *(v34)))
                            return _INSERT(v26, 0, 1);
                    } while ((v35 += 1, v34 = v4 + 8, v4 = v34, (unsigned int)v35 < 6));
                    goto LABEL_100034e06;
                }
                else if (flag2 == 1)
                {
                    return _INSERT(v26, 0, 1);
                }
                else if (flag2 == 2)
                {
                    return _INSERT(v26, 0, 1);
                }
LABEL_100034d79:
                v31 = g_10003e238;
                if (g_10003e238)
                {
                    v32 = ptr;
                    v33 = p;
                    g_10003e238->field_0->field_0();
                }
                goto LABEL_100034ddc;
            }
            else
            {
                v5 = sub_100033ebc(ptr, L"wmpvcd");
LABEL_100034ddc:
                if (p >= 16)
                    return _INSERT(v26, 0, v5);
            }
LABEL_100034de1:
            v36 = p;
            if (((char)(1 << (v36 & 31)) & 5))
            {
                v37 = 1 << (v36 & 31);
                ptr->field_80 = ptr->field_80 | -(0 < v5) & v37;
                ptr->field_82 = ptr->field_82 | v37;
            }
LABEL_100034e06:
            return _INSERT(v26, 0, v5);
        }
    }
    v5 = 1;
    goto LABEL_100034de1;
}
