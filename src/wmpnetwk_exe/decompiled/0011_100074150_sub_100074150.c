/* sub_100074150 @ 0x100074150
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100074150  (1358 bytes, 111 basic blocks)
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
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_2 *field_8;
    char padding_10[88];
    unsigned int field_68;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_10001e430;
extern struct_0 *g_100153eb8;

int sub_100074150(void)
{
    char v14;  // dl
    struct_1 *v15;  // rsi
    int v20;  // ebx
    struct_0 *v21;  // rcx
    int i;  // r12d
    unsigned int *ptr;  // rax
    unsigned int v24;  // r13d
    unsigned int v25;  // eax
    struct_2 *v26;  // r8
    unsigned long v27;  // r14
    struct_2 *v28;  // rdi
    unsigned int v29;  // edx
    struct_2 *flag3;  // rdi
    struct_2 *addr;  // rdi
    struct_2 *v32;  // r8
    unsigned short *p;  // rcx
    struct_1 *v17;  // rcx
    char flag;  // dl
    struct_2 *v19;  // rdi
    long long v0;  // [bp-0x78]
    long long v1;  // [bp-0x70]
    long long v2;  // [bp-0x68]
    struct_1 *v3;  // [bp-0x60]
    unsigned int v4;  // [bp-0x58]
    unsigned int v5;  // [bp-0x54]
    struct_2 *flag4;  // [bp-0x50]
    unsigned int *ptr3;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    unsigned int *flag5;  // [bp-0x38]
    int choice;  // [bp-0x30]
    unsigned int flag2;  // [bp-0x2c]
    struct_1 *v13;  // [bp+0x28]

    v8 = 18446744073709551614;
    if (g_100153eb8 == &g_100153eb8)
    {
        v15 = v13;
    }
    else if ((g_100153eb8->field_1c & 1))
    {
        if (g_100153eb8->field_19 >= 5)
        {
            v3 = v13;
            *((unsigned int *)&v1) = 1;
            *((unsigned int *)&v0) = 1;
            sub_10006c2b4(g_100153eb8->field_10, 192, &g_10001e430, v14, v0, v1); /* do not return */
        }
        v15 = v13;
    }
    else
    {
        v15 = v13;
    }
    flag3 = NULL;
    flag4 = NULL;
    v4 = 4294967295;
    flag5 = NULL;
    choice = 0;
    flag2 = 0;
    v17 = v15;
    sub_100077340(v17);
    if ((int)sub_100077474(v17) && sub_100077850())
    {
        if (flag == 1)
        {
            if (p)
                goto LABEL_10007428f;
            if (g_100153eb8 == &g_100153eb8)
            {
                v19 = flag3;
            }
            else if ((g_100153eb8->field_1c & 4))
            {
                if (g_100153eb8->field_19 >= 2)
                    sub_100034784(g_100153eb8->field_10, 195, &g_10001e430); /* do not return */
                v19 = flag3;
            }
            else
            {
                v19 = flag3;
            }
        }
        else
        {
            if (!p)
                goto LABEL_1000742dd;
LABEL_10007428f:
            if (!(*(p) != 2 && *(p) != 23))
            {
LABEL_1000742dd:
                if (p)
                {
                    v5 = *(p);
                    sub_1000b73ac(&flag5, &v5);
                }
                else
                {
                    v5 = 2;
                    sub_1000b73ac(&flag5, &v5);
                    v5 = 23;
                    sub_1000b73ac(&flag5, &v5);
                }
                if (p && !choice)
                {
                    v20 = 0;
                    v21 = g_100153eb8;
                    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 4) && g_100153eb8->field_19 >= 4)
                        sub_100036510(g_100153eb8->field_10, 197, &g_10001e430, *(p)); /* do not return */
                    if (!v13->field_10)
                    {
                        v20 = -2147024891;
                        if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 4) && g_100153eb8->field_19 >= 2)
                            sub_100034784(g_100153eb8->field_10, 201, &g_10001e430); /* do not return */
                    }
                    else
                    {
                        if (!(0))
                            goto LABEL_1000746ef;
                    }
                    sub_100077340(v13);
                    v21 = g_100153eb8;
LABEL_1000746ef:
                    if (v21 != &g_100153eb8 && (v21->field_1c & 1) && v21->field_19 >= (v20 >= 0 ? 5 : 2))
                    {
                        *((unsigned int *)&v0) = v13->field_10;
                        sub_10003be4c(v21->field_10, 202, &g_10001e430, v20, v0); /* do not return */
                    }
                    if (!flag5)
                        return;
                    4297066584();
                }
                if (flag == 1)
                    sub_10011c760(p, &v4); /* do not return */
                v19 = flag3;
                i = 0;
                v19 = flag3;
                if (choice)
                {
                    ptr = flag5;
                    ptr3 = ptr;
                    do
                    {
                        if (i < 0 || i >= choice)
                            4297065992();
                        v24 = *(ptr);
                        v5 = 0;
                        v25 = sub_1000e75e0(v24, &flag4, &v5);
                        if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 4) && g_100153eb8->field_19 >= 4)
                            sub_100036510(g_100153eb8->field_10, 199, &g_10001e430, v25); /* do not return */
                        if (v25 >= 0)
                        {
                            v26 = flag4;
                            if (v26)
                            {
                                v27 = v5;
                                v28 = v26;
                                v29 = v4;
                                do
                                {
                                    v29 = flag;
                                    addr = v28;
                                    if (addr >= v26 && (addr & 4294967295) - (char *)v26 <= v27 - 448)
                                    {
                                        if (flag != 1 && addr->field_68 != 1 && !((v32 = v26, addr->field_68 == 5)) || flag && (v24 != 2 || v29 != *((int *)&addr->padding_0[4])) && (v32 = v26, v24 != 23 || !((v32 = v26, v29 == *((int *)&addr[1].padding_0[0])))))
                                            continue;
                                        if ((int)sub_10007369c(addr, -(0 < flag) & p, v13) >= 0)
                                        {
                                            v29 = v4;
                                            v32 = flag4;
                                        }
                                        else
                                        {
                                            goto LABEL_1000745b6;
                                        }
                                    }
                                    else
                                    {
                                        if (g_100153eb8 != &g_100153eb8)
                                        {
                                            if ((g_100153eb8->field_1c & 4))
                                            {
                                                if (g_100153eb8->field_19 >= 2)
                                                {
                                                    *((unsigned int *)&v2) = v27;
                                                    sub_10006c464(g_100153eb8->field_10, 200, &g_10001e430, 2147549183, addr, v26, v2); /* do not return */
                                                }
                                                goto LABEL_1000745b6;
                                            }
                                            else
                                            {
                                                goto LABEL_1000745b6;
                                            }
                                        }
                                        else
                                        {
                                            goto LABEL_1000745b6;
                                        }
                                    }
                                    v26 = v32;
                                    v29 = flag;
                                    v28 = addr->field_8;
                                } while (addr->field_8);
                            }
                        }
LABEL_1000745b6:
                        i += 1;
                        ptr = ptr3 + 1;
                        ptr3 = ptr;
                    } while (i < choice);
                    v19 = flag4;
                }
            }
            else if (g_100153eb8 == &g_100153eb8)
            {
                v19 = flag3;
            }
            else if ((g_100153eb8->field_1c & 4))
            {
                if (g_100153eb8->field_19 >= 2)
                    sub_100036510(g_100153eb8->field_10, 196, &g_10001e430, *(p)); /* do not return */
                v19 = flag3;
            }
            else
            {
                v19 = flag3;
            }
        }
    }
    else
    {
        if (g_100153eb8 == &g_100153eb8)
        {
            v19 = flag3;
        }
        else if ((g_100153eb8->field_1c & 4))
        {
            if (g_100153eb8->field_19 >= 2)
                sub_100034784(g_100153eb8->field_10, 193, &g_10001e430); /* do not return */
            v19 = flag3;
        }
        else
        {
            v19 = flag3;
        }
    }
    sub_10011bdb8(v19); /* do not return */
}
