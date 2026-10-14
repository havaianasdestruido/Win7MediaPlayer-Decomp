/* sub_10009bcda @ 0x10009bcda
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10009bcda  (622 bytes, 60 basic blocks)
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

typedef struct struct_16 {
    char padding_0[16];
    struct struct_17 *field_10;
} struct_16;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_0 *field_8;
} struct_1;

typedef struct struct_2 {
    unsigned short field_0;
    char padding_2[6];
    unsigned short field_8;
} struct_2;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
} struct_5;

typedef struct struct_3 {
    char padding_0[256];
    struct struct_4 *field_100;
} struct_3;

typedef struct struct_9 {
    char padding_0[8];
    struct struct_10 *field_8;
} struct_9;

typedef struct struct_7 {
    char padding_0[256];
    struct struct_8 *field_100;
} struct_7;

typedef struct struct_11 {
    char padding_0[8];
    long long field_8;
} struct_11;

typedef struct struct_14 {
    char padding_0[8];
    struct struct_15 *field_8;
} struct_14;

typedef struct struct_12 {
    char padding_0[256];
    struct struct_13 *field_100;
} struct_12;

typedef struct struct_18 {
    char padding_0[8];
    long long field_8;
} struct_18;

typedef struct struct_21 {
    char padding_0[8];
    struct struct_22 *field_8;
} struct_21;

typedef struct struct_19 {
    char padding_0[16];
    struct struct_20 *field_10;
} struct_19;

typedef struct struct_23 {
    char padding_0[8];
    long long field_8;
} struct_23;

typedef struct struct_17 {
    unsigned long long field_0;
} struct_17;

typedef struct struct_0 {
    char padding_0[140];
    unsigned int field_8c;
} struct_0;

typedef struct struct_6 {
    struct struct_3 *field_0;
} struct_6;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_10 {
    struct struct_7 *field_0;
} struct_10;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_15 {
    struct struct_12 *field_0;
} struct_15;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

typedef struct struct_22 {
    struct struct_19 *field_0;
} struct_22;

typedef struct struct_20 {
    unsigned long long field_0;
} struct_20;

extern char g_1000df6c4;
extern char g_1000df6d8;
extern char g_1000df704;
extern char g_1000df724;
extern char g_1000df728;
extern char g_1000df768;
extern char g_1000df7c0;
extern char g_1000df7c8;
extern char g_1000df7dc;
extern char g_1000df81c;
extern char g_1000df820;
extern unsigned int g_1000df824;
extern char g_1000df828;
extern char g_1000df850;
extern char g_1000df870;
extern char g_1000df8a8;
extern char g_1000df8c8;
extern char g_1000df8d8;
extern char g_1000df8ec;
extern char g_1000df8f8;

int sub_10009bcda(void)
{
    int v4;  // eax
    struct_16 **v5;  // r12
    unsigned long long v12;  // cc_dep2
    unsigned short *ptr;  // rdi, Other Possible Types: struct_16 **, struct_2 *, long long
    struct_16 **v14;  // rdx
    struct_16 **v15;  // rdx
    struct_1 *idx4;  // rsi, Other Possible Types: struct_18 *, long long
    struct_5 *p;  // rsi
    struct_3 **v18;  // rcx
    struct_16 **v19;  // rdx
    unsigned int v6;  // ebx
    struct_9 *addr;  // rsi
    struct_7 **v21;  // rcx
    struct_11 *v22;  // rsi
    struct_14 *ptr3;  // rsi
    struct_12 **v24;  // rcx
    unsigned long v25;  // cc_ndep
    unsigned long v26;  // 4107
    long long v7;  // rsi
    struct_21 *ptr4;  // rsi
    struct_19 **v28;  // rcx
    long long v29;  // rsi
    long long v30;  // rdi
    struct_23 *v31;  // rsi
    struct_16 **v32;  // rdx
    long long v8;  // rdi
    struct_16 **v33;  // rcx
    struct_16 **v9;  // r8
    unsigned int v10;  // ecx
    unsigned long long v11;  // cc_op
    struct_16 **v1;  // [bp+0x50], Other Possible Types: char
    struct_16 **v2;  // [bp+0x58]
    char v3;  // [bp+0x68]

    if (v4 >= (unsigned int)v5)
    {
        if (g_1000df824 == v6)
            sub_10009c74c(v7, v8, v2); /* do not return */
        if (*((int *)&g_1000df870) == v6)
        {
            v9 = sub_10009ca74;
            goto LABEL_10009c102;
        }
        if (*((int *)&g_1000df81c) != v6 && *((int *)&g_1000df728) != v6)
        {
            if (*((int *)&g_1000df7c0) == v6)
            {
                v9 = 0x4;
                goto LABEL_10009bd7c;
            }
            if (*((int *)&g_1000df820) == v6)
            {
                v10 = idx4->field_8->field_8c;
                ptr->field_0 = 11;
                v11 = 7;
                v12 = (v5 & 4294967295) - (v10 >> 2 & 2) & 4294967295;
                goto LABEL_10009c0bd;
            }
            if (*((int *)&g_1000df704) == v6)
            {
                v9 = 0x1;
LABEL_10009bd7c:
                sub_10009d214(ptr, v2);
                v14 = v2;
                goto LABEL_10009c0dd;
            }
            if (*((int *)&g_1000df8c8) == v6)
            {
                v15 = ptr;
                sub_10009c4a0(idx4, v15);
                v14 = v15;
                goto LABEL_10009c0dd;
            }
            else
            {
                if (*((int *)&g_1000df8a8) == v6)
                {
                    v18 = p->field_8;
                    p->field_8->field_0->field_100();
                }
                if (*((int *)&g_1000df6c4) == v6)
                {
                    v19 = v2;
                    v9 = sub_10009ca38;
                    sub_10009d3e8(ptr, v19, sub_10009ca38);
                    if (*((unsigned short *)&v5) == *((short *)ptr))
                    {
                        v21 = addr->field_8;
                        addr->field_8->field_0->field_100();
                    }
                }
                else
                {
                    if (*((int *)&g_1000df8f8) == v6)
                        sub_10005ed08(v22->field_8, &v1); /* do not return */
                    if (*((int *)&g_1000df7dc) == v6)
                    {
                        v24 = ptr3->field_8;
                        ptr3->field_8->field_0->field_100();
                    }
                    if (*((int *)&g_1000df8d8) == v6)
                    {
                        if (v2 != v5)
                            sub_10009d1b8(v2, &v1); /* do not return */
                        v11 = 5;
                        v12 = (char)(v5 & 4294967295) - *((char *)&v5);
                        ptr->field_0 = 11;
LABEL_10009c0bd:
                        v26 = _ccall(v11, 0, v12, v25);
                        ptr->field_8 = -((unsigned short)v26 & 1);
                    }
                    else if (*((int *)&g_1000df7c8) == v6)
                    {
                        *(ptr) = *((unsigned short *)&v5);
                        v19 = &v3;
                        if ((int)sub_10009df60(idx4->field_8, &v3) == (unsigned int)v5)
                        {
                            v1 = v5;
                            sub_1000a01ac(&v1); /* do not return */
                        }
                    }
                    else
                    {
                        if (*((int *)&g_1000df6d8) == v6)
                        {
                            v28 = ptr4->field_8;
                            ptr4->field_8->field_0->field_10();
                        }
                        if (*((int *)&g_1000df8ec) == v6)
                            goto LABEL_10009c07b;
                        if (*((int *)&g_1000df828) == v6)
                        {
LABEL_10009c07b:
                            sub_10009c134(v29, v30); /* do not return */
                        }
                        if (*((int *)&g_1000df850) == v6)
                            sub_10009dec0(v31->field_8, &v1); /* do not return */
                        if (*((int *)&g_1000df724) == v6)
                        {
                            v32 = L"DirectUI";
                            sub_10009d39c(ptr);
                            v14 = v32;
LABEL_10009c0dd:
                            v19 = v14;
                        }
                        else if (*((int *)&g_1000df768) == v6)
                        {
                            v9 = v2;
                            v19 = ptr;
                            sub_10009c32c(idx4, v19, v9);
                        }
                    }
                }
            }
        }
        else
        {
            v9 = sub_10009ca44;
LABEL_10009c102:
            v19 = v2;
            sub_10009d3e8(ptr, v19);
        }
    }
    v33 = v2;
    if (v2 == v5)
        return;
    *(v2)->field_10();
}
