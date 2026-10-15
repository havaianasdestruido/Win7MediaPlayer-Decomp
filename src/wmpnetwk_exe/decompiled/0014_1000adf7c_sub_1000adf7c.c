/* sub_1000adf7c @ 0x1000adf7c
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000adf7c  (1705 bytes, 108 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 306467d280e99d0616e839278a4db5bed684f002ae284c3678cabb5251459cb3
 *   Evidence: analysis/report/rea-evidence/wmpnetwk_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_1 {
    char padding_0[24];
    unsigned int field_18;
    char padding_1c[8];
    unsigned int field_24;
    void* field_28;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_2 {
    char padding_0[24];
    struct struct_3 *field_18;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern char g_100000000;
extern long long g_10001dcd8;
extern struct_2 *g_100152100;
extern struct_0 *g_100153eb8;

int sub_1000adf7c(void)
{
    long long v32;  // rcx
    struct_1 *v33;  // r9
    int v42;  // esi
    unsigned int flag17;  // edx
    unsigned int v44;  // edx
    unsigned int flag15;  // edx
    unsigned int flag16;  // edx
    char *v47;  // rdx
    int v48;  // edi
    char v49;  // cl
    unsigned long long v50;  // rdi
    struct_1 *v51;  // r15
    struct_1 *ptr;  // rbp
    int v52;  // eax
    unsigned long v53;  // rcx
    unsigned long v54;  // rcx
    unsigned long v55;  // rcx
    struct_2 **v56;  // rcx
    unsigned int v35;  // edx
    unsigned long v36;  // r12
    struct_0 *v37;  // rcx
    unsigned long long flag11;  // rsi
    int flag8;  // edi
    char flag;  // r13b
    struct_1 *flag14;  // r15
    long long v0;  // [bp-0xe8]
    unsigned long flag12;  // [bp-0xd8]
    int flag6;  // [bp-0xd0]
    unsigned int flag7;  // [bp-0xcc]
    unsigned long flag13;  // [bp-0xc8]
    int flag9;  // [bp-0xc0]
    unsigned int flag10;  // [bp-0xbc]
    unsigned int choice;  // [bp-0xb8]
    unsigned int v8;  // [bp-0xa4]
    unsigned int flag4;  // [bp-0xa0]
    unsigned int v10;  // [bp-0x9c]
    unsigned int v11;  // [bp-0x98]
    unsigned int flag5;  // [bp-0x94]
    unsigned int v13;  // [bp-0x90]
    unsigned int v14;  // [bp-0x8c]
    unsigned int flag3;  // [bp-0x88]
    unsigned int v16;  // [bp-0x84]
    unsigned int v17;  // [bp-0x80]
    unsigned int v18;  // [bp-0x7c]
    unsigned int v19;  // [bp-0x78]
    unsigned int v20;  // [bp-0x74]
    unsigned int v21;  // [bp-0x68]
    unsigned int v22;  // [bp-0x64]
    unsigned int v23;  // [bp-0x60]
    unsigned int v24;  // [bp-0x5c]
    unsigned int v25;  // [bp-0x58]
    unsigned int v26;  // [bp-0x54]
    struct_1 *v27;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v28;  // [bp-0x48]
    long long v29;  // [bp+0x8]
    char flag2;  // [bp+0x10]
    long long *v31;  // [bp+0x28]

    v29 = v32;
    v28 = 18446744073709551614;
    ptr = v33;
    v36 = v35;
    v37 = g_100153eb8;
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1) && g_100153eb8->field_19 >= 5)
    {
        *((unsigned int *)&v0) = v36;
        sub_10009c29c(g_100153eb8->field_10, 356, &g_10001dcd8, v32, v0, v33); /* do not return */
    }
    flag11 = 0;
    flag12 = 0;
    flag6 = 0;
    flag7 = 0;
    flag13 = 0;
    flag8 = 0;
    flag9 = 0;
    flag10 = 0;
    flag2 = 0;
    flag = 0;
    flag14 = NULL;
    v27 = 0;
    if ((unsigned int)(v36 - 1) > 79)
    {
        v42 = -2147024809;
        if (g_100153eb8 != &g_100153eb8)
        {
            if ((2 & g_100153eb8->field_1c))
            {
                if (g_100153eb8->field_19 >= 2)
                    sub_100036510(g_100153eb8->field_10, 357, &g_10001dcd8, v36 & 4294967295); /* do not return */
                goto LABEL_1000ae8b6;
            }
            else
            {
                goto LABEL_1000ae8b6;
            }
            goto LABEL_1000ae8b6;
        }
    }
    else if (!*((int *)&(&g_100000000)[1400688 + 4 * v36]))
    {
        v42 = -2147220628;
        if (g_100153eb8 != &g_100153eb8)
        {
            if ((2 & g_100153eb8->field_1c))
            {
                if (g_100153eb8->field_19 >= 2)
                    sub_100036510(g_100153eb8->field_10, 358, &g_10001dcd8, v36 & 4294967295); /* do not return */
                goto LABEL_1000ae8b6;
            }
            else
            {
                goto LABEL_1000ae8b6;
            }
            goto LABEL_1000ae8b6;
        }
    }
    else
    {
        flag17 = v36;
        v44 = flag17 - 1;
        if (flag17 != 1)
        {
            flag15 = v44 - 25;
            if (v44 == 25)
            {
                v8 = 188;
                sub_1000b73ac(&flag12, &v8);
                v18 = 186;
                sub_1000b73ac(&flag12, &v18);
                v24 = 348;
                sub_1000b73ac(&flag12, &v24);
                flag4 = 1;
                sub_1000b73ac(&flag13, &flag4);
                v11 = 7;
                v47 = &v11;
                sub_1000b73ac(&flag13, &v11);
                v48 = flag9;
                goto LABEL_1000ae37d;
            }
            flag16 = flag15 - 1;
            if (flag15 == 1)
            {
                v14 = 188;
                sub_1000b73ac(&flag12, &v14);
                v21 = 186;
                sub_1000b73ac(&flag12, &v21);
                v16 = 348;
                v47 = &v16;
                sub_1000b73ac(&flag12, &v16);
                v48 = flag8;
                goto LABEL_1000ae37d;
            }
            if (flag16 == 1)
            {
                v23 = 404;
                sub_1000b73ac(&flag12, &v23);
                v10 = 187;
                sub_1000b73ac(&flag12, &v10);
                v20 = 373;
                sub_1000b73ac(&flag12, &v20);
                flag5 = 1;
                sub_1000b73ac(&flag13, &flag5);
                v25 = 7;
                v47 = &v25;
                sub_1000b73ac(&flag13, &v25);
                v48 = flag9;
                goto LABEL_1000ae37d;
            }
            if (flag16 == 2)
            {
                v22 = 404;
                sub_1000b73ac(&flag12, &v22);
                v19 = 187;
                sub_1000b73ac(&flag12, &v19);
                v26 = 373;
                v47 = &v26;
                sub_1000b73ac(&flag12, &v26);
                v48 = flag8;
                goto LABEL_1000ae37d;
            }
            v42 = -2147220628;
            if (g_100153eb8 != &g_100153eb8)
            {
                if ((2 & g_100153eb8->field_1c))
                {
                    if (g_100153eb8->field_19 >= 2)
                        sub_100036510(g_100153eb8->field_10, 359, &g_10001dcd8, v36 & 4294967295); /* do not return */
                    goto LABEL_1000ae8b6;
                }
                else
                {
                    goto LABEL_1000ae8b6;
                }
                goto LABEL_1000ae8b6;
            }
        }
        else
        {
            v13 = 311;
            sub_1000b73ac(&flag12, &v13);
            flag3 = 1;
            sub_1000b73ac(&flag13, &flag3);
            v17 = 2;
            v47 = &v17;
            sub_1000b73ac(&flag13, &v17);
            v48 = flag9;
LABEL_1000ae37d:
            if (!flag6)
            {
                v42 = -2147220628;
                v37 = g_100153eb8;
                if (g_100153eb8 != &g_100153eb8)
                {
                    if ((2 & g_100153eb8->field_1c))
                    {
                        if (g_100153eb8->field_19 >= 2)
                            sub_100036510(g_100153eb8->field_10, 360, &g_10001dcd8, v36 & 4294967295); /* do not return */
                        goto LABEL_1000ae8b6;
                    }
                    else
                    {
                        goto LABEL_1000ae8b6;
                    }
                    goto LABEL_1000ae8b6;
                }
            }
            else
            {
                choice = sub_10009d730(ptr);
                v49 = ptr->field_18;
                if ((v49 & 32) == 32)
                {
                    flag2 = 1;
                    v50 = &g_100000000;
                    v51 = flag14;
                }
                else
                {
                    if ((v49 & 64) != 64 || !v48)
                        goto LABEL_1000ae807;
                    v27 = ptr;
                    v52 = 0;
                    if (v48 > 0)
                    {
                        v47 = ptr->field_24;
                        v53 = flag13;
                        do
                        {
                            v54 = v53;
                            if (*((int *)v54) == (unsigned int)v47)
                                goto LABEL_1000ae449;
                        } while ((v52 = (int)(v52 + 1), v55 = (unsigned long)(v54 + 4), v53 = (unsigned long)(v54 + 4), v52 < v48));
                    }
                    v52 = -1;
LABEL_1000ae449:
                    if (v52 != -1 && !((v50 = (unsigned long long)&g_100000000, !*((long long *)&(&g_100000000)[122096 + 8 * ptr->field_24]) && ptr->field_24 != 8 || ptr->field_24 == 7 && !(int)ptr->field_28[16])))
                    {
                        flag = 1;
                        v51 = ptr;
                    }
                    else
                    {
                        v37 = g_100153eb8;
                        if (g_100153eb8 == &g_100153eb8)
                        {
                            goto LABEL_1000ae82b;
                        }
                        else if (!(2 & g_100153eb8->field_1c))
                        {
                            goto LABEL_1000ae82b;
                        }
                        else if (g_100153eb8->field_19 >= 5)
                        {
                            *((int *)&v0) = *((int *)0x24);
                            sub_10003be4c(g_100153eb8->field_10, 361, &g_10001dcd8, v36 & 4294967295, v0); /* do not return */
                        }
                        goto LABEL_1000ae82b;
                    }
                }
                if (choice == 1 || choice == 2)
                {
                    if (flag != 1 || flag6 <= 1 || choice == 1)
                    {
                        v56 = &g_100152100;
                        g_100152100->field_18();
                    }
                    v42 = -2147220628;
                    v37 = g_100153eb8;
                    if (g_100153eb8 != &g_100153eb8)
                    {
                        if ((2 & g_100153eb8->field_1c))
                        {
                            if (g_100153eb8->field_19 >= 2)
                            {
                                *((unsigned int *)&v0) = v51->field_24;
                                sub_10003be4c(g_100153eb8->field_10, 363, &g_10001dcd8, v36 & 4294967295, v0); /* do not return */
                            }
                            goto LABEL_1000ae8b6;
                        }
                        else
                        {
                            goto LABEL_1000ae8b6;
                        }
                        goto LABEL_1000ae8b6;
                    }
                }
                else
                {
LABEL_1000ae807:
                    v37 = g_100153eb8;
LABEL_1000ae82b:
                    v42 = -2147220628;
                    if (v37 != &g_100153eb8)
                    {
                        if ((2 & v37->field_1c) && v37->field_19 >= 2)
                            sub_100036510(v37->field_10, 362, &g_10001dcd8, v36 & 4294967295); /* do not return */
LABEL_1000ae8b6:
                        if (v37 != &g_100153eb8 && (v37->field_1c & 1) && v37->field_19 >= (v42 >= 0 ? 5 : 2))
                            sub_10003ba64(v37->field_10, 364, &g_10001dcd8, v42, *(v31)); /* do not return */
                    }
                }
            }
        }
    }
    if (flag13)
    {
        4297066584();
    }
    else if (flag12)
    {
        4297066584();
    }
    else
    {
        return;
    }
}
