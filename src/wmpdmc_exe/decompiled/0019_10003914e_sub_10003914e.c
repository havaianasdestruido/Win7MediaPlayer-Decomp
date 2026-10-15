/* sub_10003914e @ 0x10003914e
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10003914e  (1090 bytes, 85 basic blocks)
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

typedef struct struct_4 {
    char padding_0[512];
    struct struct_5 *field_200;
    char padding_208[112];
    unsigned long long field_278;
    char padding_280[80];
    struct struct_6 *field_2d0;
    char padding_2d8[16];
    unsigned int field_2e8;
    char padding_2ec[4];
    char field_2f0;
    char padding_2f1[99];
    char field_354;
} struct_4;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_3 *field_20;
} struct_2;

typedef struct struct_0 {
    char padding_0[320];
    struct struct_1 *field_140;
} struct_0;

typedef struct struct_7 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_7;

typedef struct struct_5 {
    struct struct_0 *field_0;
} struct_5;

typedef struct struct_6 {
    struct struct_2 *field_0;
} struct_6;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_100008e80;
extern struct_7 *g_1000dedd8;

int sub_10003914e(void)
{
    unsigned int v6;  // eax
    long long v7;  // r15
    char *v16;  // r8
    unsigned int v17;  // ebx
    unsigned int v18;  // ebx
    long long v19;  // rdx
    unsigned long v20;  // rdi
    struct_2 **v21;  // rcx
    unsigned long v22;  // rdx
    struct_4 *ptr;  // rsi
    struct_7 **v30;  // rdi
    unsigned int v31;  // r12d
    unsigned int v32;  // ebx
    unsigned int v9;  // r14d
    unsigned long v10;  // rbp
    unsigned int v11;  // r14d
    unsigned int v12;  // r12d
    unsigned long v13;  // rdi
    unsigned int v14;  // ebx
    long long v15;  // rdx
    long long v1;  // [bp+0x20]
    long long v2;  // [bp+0x28]
    unsigned int v3;  // [bp+0xb0]
    unsigned int v4;  // [bp+0xb8]
    unsigned int v5;  // [bp+0xc0]

    if (v6 != (int)v7)
    {
        v4 = v7;
        if ((int)sub_10002f2cc(ptr, &v4) >= (int)v7)
        {
            v9 = v7;
            v5 = v7;
            v10 = v4;
            v11 = v9;
            if ((int)sub_10002f374(ptr, &v5) >= (int)v7)
            {
                if (v5 == (unsigned int)v10)
                    v11 = v12;
                else
                    v11 = v9;
            }
            v5 = 4294967295;
            v3 = 4294967295;
            v13 = v10;
            if (v10 >= *((long long *)&ptr->padding_280[0]))
                sub_100046abc(2147942487); /* do not return */
            v14 = sub_100023738(*((long long *)(ptr->field_278 + v10 * 8)), &v3);
            if (g_1000dedd8 != &g_1000dedd8 && (g_1000dedd8->field_1c & 1) && g_1000dedd8->field_19 >= 5)
            {
                *((unsigned int *)&v2) = v3;
                *((unsigned int *)&v1) = v10;
                sub_100021118(g_1000dedd8->field_10, 552, &g_100008e80, v14, v1, v2); /* do not return */
            }
            if (v14 >= (int)v7)
            {
                if (v10 >= *((long long *)&ptr->padding_280[0]))
                    sub_100046abc(2147942487); /* do not return */
                sub_1000244bc(*((long long *)(ptr->field_278 + v10 * 8)), 0);
                if (v10 >= *((long long *)&ptr->padding_280[0]))
                    sub_100046abc(2147942487); /* do not return */
                v15 = &vvar_188{r136|8b};
                if ((int)sub_1000226cc(*((long long *)(ptr->field_278 + v10 * 8)), &vvar_188{r136|8b}) >= (int)v7)
                {
                    v4 = v7;
                    v16 = &v4;
                    v15 = vvar_188{r136|8b};
                    if ((int)sub_10002ee5c(ptr, v15, &v4) >= (int)v7)
                        4297065480();
                }
                if (v13 >= *((long long *)&ptr->padding_280[0]))
                    sub_100046abc(2147942487); /* do not return */
                v17 = ~(-(0 < *((long long *)(ptr->field_278 + v13 * 8))));
                v18 = v17 & 2147500037;
                if ((v17 & 2147500037) >= 0)
                {
                    v19 = _INSERT(v15, 0, 1);
                    sub_10005c80c(*((long long *)(ptr->field_278 + v13 * 8)), v19);
                    v16 = 0x1;
                    sub_1000445e8(&ptr->field_278, v13, 1);
                }
                v20 = 0;
                if (v18 >= 0)
                {
                    if (ptr->field_2d0)
                        4297067720();
                    if (v18 >= 0)
                    {
                        v21 = ptr->field_2d0;
                        if (ptr->field_2d0)
                        {
                            v22 = v3;
                            ptr->field_2d0->field_0->field_20();
                        }
                    }
                }
                if (v18 >= 0 && ptr->field_2d0)
                    4297067720();
                if (v18 >= 0)
                {
                    if (ptr->field_2d0)
                        4297067720();
                    if (v18 >= 0)
                        sub_1000398dc(ptr); /* do not return */
                }
                4297067696();
            }
        }
        4297065488();
    }
    else if (g_1000dedd8 == v30)
    {
        return;
    }
    else if (!((char)v31 & g_1000dedd8->field_1c))
    {
        return;
    }
    else if (g_1000dedd8->field_19 >= 5)
    {
        sub_100020d8c(g_1000dedd8->field_10, 559, &g_100008e80, v32); /* do not return */
    }
    else
    {
        return;
    }
}
