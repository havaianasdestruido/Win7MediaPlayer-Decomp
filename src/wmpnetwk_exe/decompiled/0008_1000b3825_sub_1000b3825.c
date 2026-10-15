/* sub_1000b3825 @ 0x1000b3825
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000b3825  (2094 bytes, 125 basic blocks)
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

typedef struct struct_3 {
    char padding_0[104];
    long long field_68;
} struct_3;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
    struct struct_8 *field_18;
} struct_6;

typedef struct struct_11 {
    char padding_0[8];
    struct struct_12 *field_8;
} struct_11;

typedef struct struct_13 {
    char padding_0[8];
    struct struct_14 *field_8;
} struct_13;

typedef struct struct_9 {
    char padding_0[8];
    struct struct_10 *field_8;
} struct_9;

typedef struct struct_15 {
    char padding_0[8];
    struct struct_16 *field_8;
} struct_15;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
} struct_4;

typedef struct struct_17 {
    char padding_0[8];
    struct struct_18 *field_8;
} struct_17;

typedef struct struct_19 {
    char padding_0[16];
    struct struct_20 *field_10;
} struct_19;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_16 {
    unsigned long long field_0;
} struct_16;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_18 {
    unsigned long long field_0;
} struct_18;

typedef struct struct_20 {
    unsigned long long field_0;
} struct_20;

typedef struct struct_2 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_2;

extern long long g_100002c80;
extern long long g_10001dcd8;
extern struct_2 *g_100153eb8;
extern long long g_100159e08;
extern unsigned long long g_100159e20;
extern char g_100159e28;
extern unsigned int g_100159e34;
extern char g_100159e38;

int sub_1000b3825(void)
{
    int v27;  // eax
    int v28;  // ebp
    unsigned short *v34;  // r14
    int v35;  // ecx
    unsigned short *v36;  // rdi
    long long v37;  // r15
    unsigned int v38;  // r15d
    void* ptr13;  // rbx
    char v40;  // al
    long long *v41;  // rax
    unsigned long long v42;  // r9
    unsigned int *p;  // r13
    unsigned long v29;  // rdi
    struct_3 *v44;  // r14
    char *v45;  // r8
    unsigned int v46;  // eax
    unsigned int *ptr3;  // r13
    void* v49;  // rdi
    void* v50;  // rax
    void* v51;  // r14
    void* ptr;  // rsi
    unsigned long long v52;  // rdi
    unsigned int v56;  // r15d
    unsigned int v57;  // ebx
    void* v31;  // rdi
    unsigned int v58;  // edi
    unsigned long long v59;  // rdi
    void* ptr5;  // rdx
    unsigned long v61;  // rcx
    void* ptr6;  // rdx
    struct_11 **v63;  // rcx
    void* ptr7;  // rdx
    struct_13 **v65;  // rcx
    void* ptr8;  // rdx
    struct_9 **v67;  // rcx
    unsigned short *v32;  // rdi
    void* ptr9;  // rdx
    struct_15 **v69;  // rcx
    void* ptr10;  // rdx
    struct_4 **v71;  // rcx
    struct_6 **v72;  // rcx
    void* ptr11;  // rdx
    struct_17 **v74;  // rcx
    struct_19 **ptr12;  // rcx
    struct_19 *v76;  // rdx
    int v33;  // ecx
    long long v1;  // [bp+0x20]
    char *v2;  // [bp+0x28], Other Possible Types: long long
    unsigned int *addr;  // [bp+0x30], Other Possible Types: long long
    long long *v4;  // [bp+0x38], Other Possible Types: long long
    long long v5;  // [bp+0x40]
    long long v6;  // [bp+0x48]
    char v7;  // [bp+0x80]
    struct_6 **flag;  // [bp+0x88]
    char v9;  // [bp+0x90]
    char v10;  // [bp+0x98]
    char v11;  // [bp+0xa0]
    char v12;  // [bp+0xa8]
    void* v13;  // [bp+0xb0], Other Possible Types: char
    struct_19 **v14;  // [bp+0xc0]
    void* v15;  // [bp+0xc8]
    char v16;  // [bp+0xd0]
    struct_3 *v17;  // [bp+0x120]
    long long v18;  // [bp+0x128]
    long long v19;  // [bp+0x130]
    unsigned int v20;  // [bp+0x140]
    char *v21;  // [bp+0x148]
    unsigned int v22;  // [bp+0x150]
    unsigned int v23;  // [bp+0x158]
    unsigned int v24;  // [bp+0x160]
    unsigned int *v25;  // [bp+0x178]
    long long *v26;  // [bp+0x180]

    v28 = v27;
    if (v27 >= (unsigned int)v29)
    {
        v31 = ptr;
        do
        {
            if (false)
                break;
        } while (*((short *)v31));
        v32 = NULL;
        v33 = ~(18446744073709551615) - 1;
        if (v33 < 0 || v33 > (int)ptr[12])
            sub_100036284(2147942487); /* do not return */
        *((int *)&ptr[16]) = v33;
        *((unsigned short *)((char *)ptr + 2 * v33)) = 0;
    }
    else
    {
        if ((int)ptr[12] < (unsigned int)v32)
            goto LABEL_0x1000b42e7;
        *((unsigned int *)&ptr[16]) = (unsigned int)v32;
        *((unsigned short *)ptr) = *((unsigned short *)&v32);
    }
    if (g_100153eb8 != &g_100153eb8 && (2 & g_100153eb8->field_1c))
    {
        v45 = 0x5;
        if (g_100153eb8->field_19 >= ((unsigned int)v32 <= v28 ? 2 : 5))
            sub_10003ba64(g_100153eb8->field_10, 420, &g_10001dcd8, v28, ptr); /* do not return */
    }
    if (v28 >= (unsigned int)v32)
    {
        if (v34 == v32)
        {
            v35 = (unsigned int)v32;
        }
        else
        {
            v36 = v34;
            do
            {
                if (false)
                    break;
            } while (*(v36));
            v35 = ~(18446744073709551615) - 1;
        }
        sub_1000361b0(&v9, v34, v35);
        sub_100035db8(&v16, v37); /* do not return */
    }
    v38 = 0;
    if (v28 < 0)
    {
LABEL_1000b42d3:
        v56 = v23;
        v57 = v24;
LABEL_1000b3af9:
        v58 = sub_1000b49b4(v28);
        v59 = (v58 == 2147746661 ? 2147746670 : v58);
        if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1) && g_100153eb8->field_19 >= (0 <= (unsigned int)v59 ? 5 : 2))
        {
            *((unsigned int *)&v2) = *(v25);
            *((unsigned int *)&v1) = *(p);
            sub_10009b810(g_100153eb8->field_10, 425, &g_10001dcd8, v59 & 4294967295, v1, v2, *(v26)); /* do not return */
        }
        if (g_100159e34 && (g_100159e38 >= 4 || !g_100159e38) && (0x8000000000000000 & g_100159e20) && (*((long long *)&g_100159e28) & 0x8000000000000000) == *((long long *)&g_100159e28))
        {
            *((unsigned int *)&v6) = v59;
            *((unsigned int *)&v5) = *(p);
            *((unsigned int *)&v4) = v22;
            *((unsigned int *)&addr) = v20;
            *((unsigned int *)&v2) = v57;
            *((unsigned int *)&v1) = v56;
            sub_10009a224(g_100159e08, &g_100002c80, v18, v19, v1, v2, addr, v4, v5, v6); /* do not return */
        }
        ptr5 = ptr - 24;
        InterlockedExchangeAdd(ptr5 + 16, 4294967295);
        if ((int)ptr5[16] + 4294967295 <= 0)
        {
            v61 = *((long long *)ptr5);
            (*((long long *)(*((long long *)*((long long *)ptr5)) + 8)))();
        }
        ptr6 = v9 - 24;
        InterlockedExchangeAdd(ptr6 + 16, 4294967295);
        if ((int)ptr6[16] + 18446744073709551615 <= 0)
        {
            v63 = *((long long *)ptr6);
            (*((long long *)(*((long long *)*((long long *)ptr6)) + 8)))();
        }
        ptr7 = v15 - 24;
        InterlockedExchangeAdd(ptr7 + 16, 4294967295);
        if ((int)ptr7[16] + 18446744073709551615 <= 0)
        {
            v65 = *((long long *)ptr7);
            (*((long long *)(*((long long *)*((long long *)ptr7)) + 8)))();
        }
        ptr8 = v11 - 24;
        InterlockedExchangeAdd(ptr8 + 16, 4294967295);
        if ((int)ptr8[16] + 18446744073709551615 <= 0)
        {
            v67 = *((long long *)ptr8);
            (*((long long *)(*((long long *)*((long long *)ptr8)) + 8)))();
        }
        ptr9 = v12 - 24;
        InterlockedExchangeAdd(ptr9 + 16, 4294967295);
        if ((int)ptr9[16] + 18446744073709551615 <= 0)
        {
            v69 = *((long long *)ptr9);
            (*((long long *)(*((long long *)*((long long *)ptr9)) + 8)))();
        }
        ptr10 = v10 - 24;
        InterlockedExchangeAdd(ptr10 + 16, 4294967295);
        if ((int)ptr10[16] + 18446744073709551615 <= 0)
        {
            v71 = *((long long *)ptr10);
            (*((long long *)(*((long long *)*((long long *)ptr10)) + 8)))();
        }
        v72 = flag;
        if (flag)
            *(flag)->field_10();
        ptr11 = v13 - 24;
        InterlockedExchangeAdd(ptr11 + 16, 4294967295);
        if ((int)ptr11[16] + 18446744073709551615 <= 0)
        {
            v74 = *((long long *)ptr11);
            (*((long long *)(*((long long *)*((long long *)ptr11)) + 8)))();
        }
        ptr12 = v14;
        if (!ptr12)
            return;
        v76 = *(ptr12);
        *(ptr12)->field_10();
    }
    v40 = (int)ptr13[24];
    if ((v40 & 64))
    {
        if ((int)ptr13[36] == 1 && (int)ptr13[32] == 2)
        {
            v41 = v26;
            v42 = v23;
            *(p) = 0;
            v44 = v17;
            v2 = &v9;
            v45 = &v10;
            *((unsigned int *)&v1) = v24;
            v38 = 1;
            v46 = sub_1000b0ea0(v44->field_68, ptr13 + 40, &v10, v42, v1, &v9, p, v41);
            v4 = v41;
            addr = p;
            goto LABEL_1000b3eef;
        }
        else if ((int)ptr13[36] == 9 && (int)ptr13[32] == 17)
        {
            4297065544();
        }
    }
    else
    {
        if (!(v40 & 32))
        {
            if ((v40 & 1))
            {
LABEL_1000b3d43:
                *(p) = 0;
                sub_1000b1774(v17->field_68, &v10); /* do not return */
            }
            if ((v40 & 4) && sub_10008ff30(ptr13) == 2)
            {
                v49 = sub_10008ffb4(ptr13, 0);
                v50 = sub_10008ffb4(ptr13, 1);
                if (((char)v49[24] & 32) && ((char)v50[24] & 64))
                {
                    v51 = v50;
                    goto LABEL_1000b3e16;
                }
                else
                {
                    if (((char)v49[24] & 64) && ((char)v50[24] & 32))
                    {
                        v51 = v49;
                        v49 = v50;
LABEL_1000b3e16:
                        if (v49 && v51)
                        {
                            if ((int)v51[36] == 9 && (int)v51[32] == 17)
                                4297065544();
                            if (!(char)v49[36])
                            {
                                v44 = v17;
                                if ((int)v49[32] == (int)v51[32])
                                {
                                    v42 = v24;
                                    v45 = v23;
                                    *(p) = 0;
                                    v38 = 1;
                                    addr = &v9;
                                    *((unsigned int *)&v1) = v22;
                                    v46 = sub_1000a4768(0, v44->field_68, v45, v42, v1, v21, &v9, v26);
                                    v4 = v26;
                                    v2 = v21;
LABEL_1000b3eef:
                                    v28 = v46;
                                }
LABEL_1000b3a77:
                                v52 = 0;
                                if (v28 >= 0)
                                {
                                    if (v38)
                                        sub_1000aab48(v44->field_68, v10, v25); /* do not return */
                                    sub_100035fe0(&v15);
                                    sub_100035fe0(&v13);
                                    sub_100035fe0(&v11);
                                    sub_100035ef8(&v12, &v10);
                                    if (v28 >= 0)
                                        sub_1000b0a54(v44->field_68, ptr13, &v12, &v11, &v7, &v13); /* do not return */
                                    v56 = v23;
                                    v57 = v24;
                                    goto LABEL_1000b3af9;
                                    goto LABEL_1000b3af9;
                                }
                                else
                                {
                                    goto LABEL_1000b42d3;
                                }
                            }
                        }
                    }
                }
            }
        }
        else if ((char)ptr13[36] == 1)
        {
            if ((int)ptr13[32] == 2)
            {
                *(ptr3) = 0;
                *((unsigned int *)&v1) = v22;
                sub_1000b13f4(v17->field_68, &v10, v23, v24, v1, v21, &v9, ptr3, v26); /* do not return */
            }
            if ((char)ptr13[36] == 1 && ((int)ptr13[32] == 1 || (int)ptr13[32] == 19 || (int)ptr13[32] == 17))
                goto LABEL_1000b3d43;
        }
    }
    v44 = v17;
    goto LABEL_1000b3a77;
}
