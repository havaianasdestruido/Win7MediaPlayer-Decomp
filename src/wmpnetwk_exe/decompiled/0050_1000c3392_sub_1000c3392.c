/* sub_1000c3392 @ 0x1000c3392
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000c3392  (946 bytes, 64 basic blocks)
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

typedef struct struct_0 {
    char padding_0[24];
    long long field_18;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
} struct_5;

typedef struct struct_7 {
    char padding_0[32];
    unsigned long long field_20;
    char padding_28[88];
    unsigned int field_80;
} struct_7;

typedef struct struct_8 {
    char padding_0[24];
    struct struct_9 *field_18;
} struct_8;

typedef struct struct_11 {
    char padding_0[16];
    long long field_10;
} struct_11;

typedef struct struct_12 {
    char padding_0[8];
    struct struct_13 *field_8;
} struct_12;

typedef struct struct_14 {
    char padding_0[8];
    struct struct_15 *field_8;
} struct_14;

typedef struct struct_16 {
    char padding_0[8];
    struct struct_17 *field_8;
} struct_16;

typedef struct struct_18 {
    char padding_0[8];
    struct struct_19 *field_8;
} struct_18;

typedef struct struct_20 {
    char padding_0[8];
    struct struct_21 *field_8;
} struct_20;

typedef struct struct_22 {
    char padding_0[8];
    struct struct_23 *field_8;
} struct_22;

typedef struct struct_24 {
    char padding_0[8];
    struct struct_25 *field_8;
} struct_24;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_17 {
    unsigned long long field_0;
} struct_17;

typedef struct struct_19 {
    unsigned long long field_0;
} struct_19;

typedef struct struct_21 {
    unsigned long long field_0;
} struct_21;

typedef struct struct_23 {
    unsigned long long field_0;
} struct_23;

typedef struct struct_25 {
    unsigned long long field_0;
} struct_25;

typedef struct struct_10 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_10;

extern long long g_100002660;
extern long long g_10001dcb8;
extern struct_8 *g_100152100;
extern struct_10 *g_100153eb8;
extern long long g_100159e08;
extern unsigned long long g_100159e20;
extern char g_100159e28;
extern unsigned int g_100159e34;
extern char g_100159e38;

int sub_1000c3392(void)
{
    unsigned int v20;  // eax
    unsigned int v21;  // r13d
    void* v29;  // rdi
    void* ptr;  // rdx
    struct_5 **v31;  // rcx
    void* p;  // rdx
    struct_3 **v33;  // rcx
    unsigned int v34;  // r14d
    unsigned int v35;  // r12d
    struct_7 *ptr11;  // rsi
    unsigned int v37;  // edx
    struct_0 *v22;  // rsi
    char *v38;  // rdx
    unsigned long long choice;  // rdi
    struct_8 **v40;  // rcx
    unsigned int v41;  // r13d
    void* addr;  // rdx
    unsigned long long v43;  // rdi
    struct_12 **v44;  // rcx
    void* ptr3;  // rdx
    struct_14 **v46;  // rcx
    void* ptr4;  // rdx
    char v23;  // bl
    struct_16 **v48;  // rcx
    void* ptr5;  // rdx
    struct_18 **v50;  // rcx
    void* ptr6;  // rdx
    struct_20 **v52;  // rcx
    void* ptr7;  // rdx
    struct_22 **v54;  // rcx
    void* ptr8;  // rdx
    struct_24 **v56;  // rcx
    void* ptr9;  // rdx
    char flag;  // bl
    struct_1 **v26;  // rcx
    void* ptr10;  // rdx
    struct_3 **v28;  // rcx
    void* v1;  // [bp+0x60]
    unsigned int v2;  // [bp+0x68]
    unsigned int v3;  // [bp+0x6c]
    char v4;  // [bp+0x90]
    char v5;  // [bp+0x98]
    int v6;  // [bp+0xa0]
    unsigned long long v7;  // [bp+0xa8]
    unsigned long long flag2;  // [bp+0xb8]
    void* v9;  // [bp+0xc0]
    unsigned int v10;  // [bp+0xc8]
    void* v11;  // [bp+0xd0]
    void* v12;  // [bp+0xd8]
    char v13;  // [bp+0xf0]
    void* v14;  // [bp+0xf8]
    struct_11 *v15;  // [bp+0x120]
    void* v16;  // [bp+0x170]
    void* v17;  // [bp+0x178]
    void* v18;  // [bp+0x188]
    char v19;  // [bp+0x200]

    if (v20 == v21)
    {
        flag2 = 0;
        sub_100035db8(&v13, v22->field_18); /* do not return */
    }
    if (!v23)
    {
        ptr9 = v29 - 24;
        InterlockedExchangeAdd(ptr9 + 16, 4294967295);
        flag = 0;
        if ((int)ptr9[16] - 1 <= 0)
        {
            v26 = *((long long *)ptr9);
            (*((long long *)(*((long long *)*((long long *)ptr9)) + 8)))();
        }
        ptr10 = v1 - 24;
        InterlockedExchangeAdd(ptr10 + 16, 4294967295);
        if ((int)ptr10[16] - 1 <= 0)
        {
            v28 = *((long long *)ptr10);
            (*((long long *)(*((long long *)*((long long *)ptr10)) + 8)))();
        }
    }
    else
    {
        ptr = v29 - 24;
        InterlockedExchangeAdd(ptr + 16, 4294967295);
        flag = 0;
        if ((int)ptr[16] - 1 <= 0)
        {
            v31 = *((long long *)ptr);
            (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
        }
        p = v1 - 24;
        InterlockedExchangeAdd(p + 16, 4294967295);
        if ((int)p[16] - 1 <= 0)
        {
            v33 = *((long long *)p);
            (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
        }
    }
    if (v34 != 4294967295)
        goto LABEL_0x1000c3177;
    v10 = v35;
    v37 = ptr11->field_80;
    v38 = v37 & 4;
    if (!((char)v37 & 4) && ((char)v37 & 8))
        flag = 1;
    if (!(unsigned int)v38 && !((char)v37 & 8))
    {
        if (v2 == 4294967295 || ptr11->field_20)
            flag = 1;
        if (v2 != 4294967295)
        {
            sub_10004cfb8(&v5, &v9);
            v38 = &v2;
            sub_1000b73ac(&v7, &v2);
        }
    }
    if (flag == 1)
    {
        if (v3 == 4294967295)
            goto LABEL_1000c3646;
        sub_10004cfb8(&v5, &v11);
        v38 = &v3;
        sub_1000b73ac(&v7, &v3);
    }
    if (((char)(v37 >> 2) & 1) != 1)
        goto LABEL_1000c3670;
LABEL_1000c3646:
    sub_10004cfb8(&v5, &v12);
    v38 = &v4;
    sub_1000b73ac(&v7, &v4);
LABEL_1000c3670:
    choice = 0;
    if (v6 > 0)
    {
        v40 = &g_100152100;
        g_100152100->field_18();
    }
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1))
    {
        if (0 <= vvar_143{r56|4b})
            v41 = 5;
        if (g_100153eb8->field_19 >= v41)
            sub_10003be94(g_100153eb8->field_10, 199, &g_10001dcb8, vvar_143{r56|4b}, v15->field_10); /* do not return */
    }
    if (g_100159e34 && (g_100159e38 >= 4 || !g_100159e38) && (0x8000000000000000 & g_100159e20) && (*((long long *)&g_100159e28) & 0x8000000000000000) == *((long long *)&g_100159e28))
        sub_10003b2ec(g_100159e08, &g_100002660, (!v15 ? 4294967295 : (int)v15->field_10), vvar_143{r56|4b}); /* do not return */
    addr = v14 - 24;
    v43 = 18446744073709551615;
    InterlockedExchangeAdd(addr + 16, 4294967295);
    if ((int)addr[16] + 4294967295 <= 0)
    {
        v44 = *((long long *)addr);
        (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
    }
    else if (v7)
    {
        4297066584();
    }
    else
    {
        sub_10004d050(&v5);
        ptr3 = v12 - 24;
        InterlockedExchangeAdd(ptr3 + 16, 4294967295);
        if ((int)ptr3[16] + 18446744073709551615 <= 0)
        {
            v46 = *((long long *)ptr3);
            (*((long long *)(*((long long *)*((long long *)ptr3)) + 8)))();
        }
        ptr4 = v11 - 24;
        InterlockedExchangeAdd(ptr4 + 16, 4294967295);
        if ((int)ptr4[16] + 18446744073709551615 <= 0)
        {
            v48 = *((long long *)ptr4);
            (*((long long *)(*((long long *)*((long long *)ptr4)) + 8)))();
        }
        ptr5 = v9 - 24;
        InterlockedExchangeAdd(ptr5 + 16, 4294967295);
        if ((int)ptr5[16] + 18446744073709551615 <= 0)
        {
            v50 = *((long long *)ptr5);
            (*((long long *)(*((long long *)*((long long *)ptr5)) + 8)))();
        }
        ptr6 = v18 - 24;
        InterlockedExchangeAdd(ptr6 + 16, 4294967295);
        if ((int)ptr6[16] + 18446744073709551615 <= 0)
        {
            v52 = *((long long *)ptr6);
            (*((long long *)(*((long long *)*((long long *)ptr6)) + 8)))();
        }
        ptr7 = v17 - 24;
        InterlockedExchangeAdd(ptr7 + 16, 4294967295);
        if ((int)ptr7[16] + 18446744073709551615 <= 0)
        {
            v54 = *((long long *)ptr7);
            (*((long long *)(*((long long *)*((long long *)ptr7)) + 8)))();
        }
        ptr8 = v16 - 24;
        InterlockedExchangeAdd(ptr8 + 16, 4294967295);
        if ((int)ptr8[16] + 18446744073709551615 > 0)
            sub_1000e2854(&v19); /* do not return */
        v56 = *((long long *)ptr8);
        (*((long long *)(*((long long *)*((long long *)ptr8)) + 8)))();
    }
}
