/* sub_10004176a @ 0x10004176a
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10004176a  (680 bytes, 68 basic blocks)
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
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_2 {
    char padding_0[376];
    long long field_178;
} struct_2;

typedef struct struct_15 {
    char padding_0[352];
    long long field_160;
    char padding_168[8];
    struct struct_16 *field_170;
    struct struct_17 *field_178;
    struct struct_12 *field_180;
} struct_15;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
} struct_6;

typedef struct struct_20 {
    char padding_0[16];
    struct struct_21 *field_10;
} struct_20;

typedef struct struct_12 {
    char padding_0[96];
    struct struct_13 *field_60;
    struct struct_14 *field_68;
    char padding_70[8];
    unsigned long long field_78;
    unsigned int field_80;
    char padding_84[100];
    unsigned long long field_e8;
} struct_12;

typedef struct struct_8 {
    char padding_0[32];
    struct struct_9 *field_20;
} struct_8;

typedef struct struct_10 {
    char padding_0[16];
    struct struct_11 *field_10;
} struct_10;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    char padding_18[40];
    struct struct_5 *field_40;
} struct_3;

typedef struct struct_1 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_1;

typedef struct struct_18 {
    char padding_0[8];
    struct struct_19 *field_8;
} struct_18;

typedef struct struct_16 {
    struct struct_3 *field_0;
} struct_16;

typedef struct struct_17 {
    struct struct_6 *field_0;
} struct_17;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_21 {
    unsigned long long field_0;
} struct_21;

typedef struct struct_13 {
    struct struct_8 *field_0;
} struct_13;

typedef struct struct_14 {
    struct struct_10 *field_0;
} struct_14;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_19 {
    unsigned long long field_0;
} struct_19;

extern long long g_10001dca8;
extern long long g_10001e430;
extern long long g_10001e5a0;
extern struct_1 *g_100153eb8;
extern unsigned int g_100158698;
extern unsigned int g_1001588c8;

int sub_10004176a(void)
{
    unsigned long v8;  // cc_op
    unsigned long v9;  // cc_dep1
    struct_0 *v18;  // r12
    struct_20 **v19;  // rcx
    struct_12 *p;  // rbx
    unsigned int v21;  // esi
    struct_8 **v22;  // rcx
    unsigned long long v23;  // rdx
    struct_10 **v24;  // rcx
    struct_3 **v25;  // rcx
    unsigned long long v26;  // rdx
    struct_3 **v27;  // rcx
    unsigned long v10;  // cc_dep2
    unsigned int v28;  // esi
    struct_1 *v29;  // rdi
    int v31;  // r15d
    unsigned int v32;  // r13d
    void* addr;  // rdx
    struct_18 **v34;  // rcx
    struct_20 **v35;  // rcx
    unsigned long v11;  // cc_ndep
    unsigned long v12;  // 4101
    unsigned int v13;  // r13d
    struct_0 *v14;  // rdi
    struct_2 *v15;  // r14
    struct_15 *ptr;  // r14
    struct_6 **v17;  // rcx
    unsigned long long v0;  // [bp-0x8]
    struct_20 **v2;  // [bp+0x60], Other Possible Types: unsigned long
    unsigned int v3;  // [bp+0x80]
    unsigned int v4;  // [bp+0x9c]
    void* v5;  // [bp+0x2c8]
    char v6;  // [bp+0x368]

    v12 = _ccall(4, v8, v9, v10, v11);
    if (!((char)v12) && ((char)v13 & v14->field_1c) && v14->field_19 >= 5)
        sub_100034834(v14->field_10, 120, &g_10001e5a0, v15->field_178); /* do not return */
    v17 = ptr->field_178;
    if (v17 != vvar_95{r56|8b})
    {
        *((int *)&ptr->field_178) = vvar_95{r56|8b};
        *(v17)->field_10();
    }
    if (v14 != v18 && ((char)v13 & v14->field_1c) && v14->field_19 >= 5)
        sub_100034834(v14->field_10, 121, &g_10001e5a0, v2); /* do not return */
    v19 = v2;
    if (v19 != vvar_95{r56|8b})
    {
        v2 = vvar_95{r56|8b};
        *(v19)->field_10();
    }
    p = ptr->field_180;
    if (p != vvar_95{r56|8b})
    {
        if (v14 != v18 && ((char)v21 & v14->field_1c))
            sub_100034784(v14->field_10, 30, &g_10001dca8); /* do not return */
        if (p->field_e8 != vvar_95{r56|8b})
        {
            4297065528();
        }
        else if (p->field_80 != vvar_95{r56|8b})
        {
            v22 = p->field_60;
            v23 = p->field_78;
            p->field_60->field_0->field_20();
        }
        else
        {
            v24 = p->field_68;
            if (v24 != vvar_95{r56|8b})
            {
                *((int *)&p->field_68) = vvar_95{r56|8b};
                *(v24)->field_10();
            }
        }
    }
    else
    {
        v25 = ptr->field_170;
        if (ptr->field_170 != vvar_95{r56|8b})
            ptr->field_170->field_0->field_40();
        v26 = 5;
        if (v14 != v18 && ((char)v13 & v14->field_1c) && v14->field_19 >= 5)
            sub_100034834(v14->field_10, 123, &g_10001e5a0, ptr->field_170); /* do not return */
        v27 = ptr->field_170;
        if (v27 != vvar_95{r56|8b})
        {
            *((int *)&ptr->field_170) = vvar_95{r56|8b};
            *(v27)->field_10();
        }
        if (ptr->field_160 != vvar_95{r56|8b})
            sub_10008c764(ptr->field_160); /* do not return */
        if (v4 != vvar_95{r56|8b})
        {
            if ((int)sub_100077474() != vvar_95{r56|8b} && sub_100077850() != vvar_95{r56|8b})
            {
                g_1001588c8 = v28;
                4297065232();
            }
            v29 = g_100153eb8;
            if (g_100153eb8 != v18 && (g_100153eb8->field_1c & 4) && g_100153eb8->field_19 >= (char)v13)
                sub_100034784(g_100153eb8->field_10, 137, &g_10001e430); /* do not return */
        }
        if (v3 != vvar_95{r56|8b})
        {
            if ((int)sub_100077474() != vvar_95{r56|8b} && sub_100077850() != vvar_95{r56|8b})
            {
                if (g_100158698 == vvar_95{r56|8b})
                    4297067056();
                4297065424();
            }
            v29 = g_100153eb8;
            if (g_100153eb8 == v18)
                goto LABEL_100041d4c;
        }
        if (v14 != v18 && ((char)v21 & v14->field_1c))
        {
            if (vvar_95{r56|8b} <= v31)
                v32 = 5;
            if (v29->field_19 >= v32)
            {
                [D] Unsupported jumpkind Ijk_NoDecode at address 4295236917()
                v0 = 5;
            }
        }
LABEL_100041d4c:
        sub_1000e2e18(&v6);
        addr = v5 - 24;
        InterlockedExchangeAdd(addr + 16, 4294967295);
        if ((int)addr[16] - 1 > vvar_95{r56|8b})
        {
            v35 = v2;
            if (v2 == vvar_95{r56|8b})
                goto LABEL_0x100041d8e;
            *(v2)->field_10();
        }
        v34 = *((long long *)addr);
        (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
    }
}
