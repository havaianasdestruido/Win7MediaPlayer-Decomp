/* sub_7ff37130ea0 @ 0x7ff37130ea0
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37130ea0  (734 bytes, 60 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[96];
    unsigned short field_60;
    unsigned short field_62;
    char padding_64[60];
    long long field_a0;
    char padding_a8[80];
    unsigned long long field_f8;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_1;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_6 {
    struct struct_4 *field_0;
} struct_6;

typedef struct struct_9 {
    struct struct_7 *field_0;
} struct_9;

typedef struct struct_12 {
    struct struct_10 *field_0;
} struct_12;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_7 {
    char padding_0[16];
    struct struct_8 *field_10;
} struct_7;

typedef struct struct_10 {
    char padding_0[16];
    struct struct_11 *field_10;
} struct_10;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

extern long long g_7ff3710c960;
extern unsigned long long g_7ff3710cad8;
extern struct_1 *g_7ff37153600;

int sub_7ff37130ea0(void)
{
    struct_0 *ptr;  // r15
    unsigned long v12;  // rdi
    unsigned long long v21;  // r8
    long long v22;  // rdx
    unsigned int v13;  // esi
    struct_2 **v35;  // rcx
    unsigned long v36;  // rcx
    struct_1 **v14;  // rdi
    unsigned long long v15;  // r12
    unsigned long v16;  // r14
    unsigned long v17;  // rcx
    unsigned long v18;  // rcx
    unsigned long long v19;  // rbx
    unsigned long long v20;  // rdx
    char v3;  // [bp+0x58]
    unsigned int v4;  // [bp+0x64], Other Possible Types: unsigned short
    unsigned long long v5;  // [bp+0xc0], Other Possible Types: unsigned long
    struct_2 **choice;  // [bp+0x1a8]
    unsigned long v7;  // [bp+0x1b8]
    char v8;  // [bp+0x100008]
    char v9;  // [bp+0x100078]
    char v10;  // [bp+0x100080]

    *((int *)&ptr->field_f8) = vvar_80{r56|8b};
    if (v12 != vvar_80{r56|8b})
        8792722900160();
    v7 = vvar_80{r56|8b};
    v5 = vvar_80{r56|8b};
    v13 = sub_7ff37133c80(&v7);
    v14 = &g_7ff37153600;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff3711722c(g_7ff37153600->field_10, 67, &g_7ff3710c960, v13); /* do not return */
    v15 = &g_7ff3710cad8;
    if (v13 >= vvar_80{r56|8b})
    {
        v16 = v7;
        v5 = v16;
        if (v16 == vvar_80{r56|8b})
        {
            v10 = 1;
            v18 = v16 + 112;
            v20 = v19;
            (*((long long *)(*((long long *)&v9) + 336)))();
        }
        v17 = v16;
        (*((long long *)(*((long long *)&v8) + 8)))();
    }
    else
    {
        if (!v13)
        {
            sub_7ff37134410(&v3);
            v4 = (unsigned short)v4 | 4;
            v21 = 4294967295;
            v22 = ptr->field_a0;
            if (!(int)sub_7ff37134594(&v3, v22, 4294967295))
            {
                choice = NULL;
                v14 = (struct_1 **)v3;
                if (v14)
                {
                    8792722899240();
                }
                else if (v14)
                {
                    8792722899240();
                }
                else if (v14)
                {
                    8792722899240();
                }
                else
                {
                    v35 = choice;
                    if (choice)
                        *(choice)->field_10();
                }
            }
            sub_7ff37134a64(&v3);
            if (!v13)
                8792722900160();
        }
        if (!vvar_80{r56|8b})
        {
            if (v13)
                goto LABEL_0x7ff37132c11;
            ptr->field_60 = 65535;
            ptr->field_62 = 0;
        }
        v5 = 0;
        v36 = vvar_80{r56|8b};
        (*((long long *)(*((long long *)&v8) + 16)))();
    }
}
