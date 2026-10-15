/* sub_1000db1c6 @ 0x1000db1c6
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000db1c6  (872 bytes, 64 basic blocks)
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

typedef struct struct_7 {
    char padding_0[16];
    struct struct_8 *field_10;
    struct struct_9 *field_18;
} struct_7;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
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
    char padding_0[200];
    struct struct_6 *field_c8;
} struct_5;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

extern long long g_10001dc98;
extern struct_0 *g_100153eb8;

int sub_1000db1c6(void)
{
    int v13;  // eax
    struct_7 **v14;  // rdi
    long long v23;  // rsi
    long long v24;  // rsi
    unsigned int v25;  // eax
    long long v26;  // rsi
    long long v27;  // rsi
    long long v28;  // r14
    long long v29;  // rbx
    unsigned int v30;  // eax
    struct_0 **v31;  // rsi
    void* ptr;  // rdx
    struct_0 **v15;  // rdx
    unsigned long long flag2;  // rdi
    struct_1 **v34;  // rcx
    void* p;  // rdx
    struct_3 **v36;  // rcx
    struct_0 **v37;  // rsi
    void* addr;  // rdx
    unsigned long long flag4;  // rdi
    struct_1 **v40;  // rcx
    void* ptr3;  // rdx
    struct_3 **v42;  // rcx
    char v16;  // r12b
    unsigned long long v43;  // rsi
    struct_5 **v44;  // rcx
    char *v45;  // r8
    unsigned long long v46;  // rdx
    struct_0 **v47;  // rsi
    void* ptr4;  // rdx
    unsigned long long flag3;  // rdi
    struct_1 **v50;  // rcx
    void* ptr5;  // rdx
    struct_3 **v52;  // rcx
    struct_7 **v17;  // rcx
    struct_7 **v53;  // rcx
    char *v54;  // rdx
    void* v18;  // rdi
    char *v19;  // r9
    char *v20;  // r8
    long long v21;  // r13
    unsigned int v22;  // eax
    long long v1;  // [bp+0x20]
    long long v2;  // [bp+0x28]
    unsigned short flag;  // [bp+0x34]
    char v4;  // [bp+0x38], Other Possible Types: unsigned int
    unsigned int v5;  // [bp+0x50]
    struct_7 **v6;  // [bp+0x58]
    void* v7;  // [bp+0x60]
    unsigned int choice;  // [bp+0x68]
    char *v9;  // [bp+0x70]
    void* v10;  // [bp+0x80]
    struct_5 **v11;  // [bp+0x88]
    char v12;  // [bp+0x98]

    if (v13 >= (unsigned int)v14)
    {
        v53 = v6;
        v54 = &v5;
        *(v6)->field_18();
    }
    v15 = &g_100153eb8;
    if (g_100153eb8 != &g_100153eb8 && (v16 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= v16)
        sub_100036510(g_100153eb8->field_10, 47, &g_10001dc98, v13); /* do not return */
    v17 = v6;
    if (v6 != v14)
        *(v6)->field_10();
    v18 = v10;
    if (v5)
    {
        v19 = &v4;
        v20 = v9;
        v22 = sub_1000dbbac(L"HomeUsers", v21, v20, &v4);
        if (v22 < 0)
        {
            if (g_100153eb8 != &g_100153eb8 && (v16 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= v16)
            {
                *((unsigned int *)&v1) = v22;
                sub_10003b678(g_100153eb8->field_10, 36, &g_10001dc98, v23, v1); /* do not return */
            }
            v4 = 0;
        }
        else if (v4)
        {
LABEL_1000db560:
            flag = 0;
            if (v43)
            {
                v44 = v11;
                v45 = &flag;
                v46 = v43;
                *(v11)->field_c8();
            }
            v47 = &g_100153eb8;
            ptr4 = v18 - 24;
            InterlockedExchangeAdd(ptr4 + 16, 4294967295);
            flag3 = 0;
            if ((int)ptr4[16] - 1 > 0)
            {
                ptr5 = v7 - 24;
                InterlockedExchangeAdd(ptr5 + 16, 4294967295);
                if ((int)ptr5[16] - 1 > 0)
                    goto LABEL_0x1000db647;
                v52 = *((long long *)ptr5);
                (*((long long *)(*((long long *)*((long long *)ptr5)) + 8)))();
            }
            v50 = *((long long *)ptr4);
            (*((long long *)(*((long long *)*((long long *)ptr4)) + 8)))();
        }
        else if (g_100153eb8 != &g_100153eb8 && (v16 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 4)
        {
            sub_1000347a8(g_100153eb8->field_10, 37, &g_10001dc98, v24); /* do not return */
        }
    }
    if ((int)v18[16])
    {
        v19 = &v4;
        v20 = v9;
        v25 = sub_1000dbbac(v18, v21, v20, &v4);
        if (v25 >= 0)
        {
            if (v4)
                goto LABEL_1000db560;
            if (g_100153eb8 != &g_100153eb8 && (v16 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 4)
                sub_10003b3bc(g_100153eb8->field_10, 39, &g_10001dc98, v18, v27); /* do not return */
        }
        else if (g_100153eb8 != &g_100153eb8 && (v16 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= v16)
        {
            *((unsigned int *)&v2) = v25;
            sub_10008efe4(g_100153eb8->field_10, 38, &g_10001dc98, v18, v26, v2); /* do not return */
        }
    }
    choice = 0;
    v19 = &choice;
    v20 = &v12;
    v30 = sub_1000dc1cc(v28, v29, &v12, &choice);
    if (v30 < 0)
    {
        v31 = &g_100153eb8;
        if (g_100153eb8 != &g_100153eb8 && (v16 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= v16)
        {
            *((unsigned int *)&v1) = v30;
            sub_10003b678(g_100153eb8->field_10, 40, &g_10001dc98, v29, v1); /* do not return */
        }
        ptr = v18 - 24;
        InterlockedExchangeAdd(ptr + 16, 4294967295);
        flag2 = 0;
        if ((int)ptr[16] - 1 > 0)
        {
            p = v7 - 24;
            InterlockedExchangeAdd(p + 16, 4294967295);
            if ((int)p[16] - 1 > 0)
                goto LABEL_0x1000db647;
            v36 = *((long long *)p);
            (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
        }
        v34 = *((long long *)ptr);
        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
    }
    else if (!choice)
    {
        v37 = &g_100153eb8;
        if (g_100153eb8 != &g_100153eb8 && (v16 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 4)
            sub_1000347a8(g_100153eb8->field_10, 41, &g_10001dc98, v29); /* do not return */
        addr = v18 - 24;
        InterlockedExchangeAdd(addr + 16, 4294967295);
        flag4 = 0;
        if ((int)addr[16] - 1 > 0)
        {
            ptr3 = v7 - 24;
            InterlockedExchangeAdd(ptr3 + 16, 4294967295);
            if ((int)ptr3[16] - 1 > 0)
                goto LABEL_0x1000db647;
            v42 = *((long long *)ptr3);
            (*((long long *)(*((long long *)*((long long *)ptr3)) + 8)))();
        }
        v40 = *((long long *)addr);
        (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
    }
    goto LABEL_1000db560;
}
