/* sub_7ff37139c1c @ 0x7ff37139c1c
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37139c1c  (562 bytes, 34 basic blocks)
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
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_2 {
    struct struct_1 *field_0;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned long long g_7ff370f1818;
extern unsigned long long g_7ff37153138;
extern struct_0 *g_7ff37153600;

int sub_7ff37139c1c(void)
{
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdi
    long long v28;  // rdx
    int v29;  // edi
    struct_2 **v32;  // rcx
    char *v33;  // r8
    unsigned long long v34;  // rdx
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13
    unsigned long long v22;  // r15
    unsigned long long v23;  // rbx
    unsigned int v24;  // r8d
    unsigned long v25;  // rsi
    struct_0 *v26;  // rcx
    long long v27;  // rcx
    char v0;  // [bp-0x1b8]
    long long v1;  // [bp-0x198]
    long long v2;  // [bp-0x190]
    long long v3;  // [bp-0x188]
    struct_2 **flag;  // [bp-0x170]
    unsigned long long flag2;  // [bp-0x168]
    unsigned long choice;  // [bp-0x160]
    unsigned long long v7;  // [bp-0x140]
    unsigned long v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x28]
    unsigned long long v10;  // [bp-0x20]
    unsigned long long v11;  // [bp-0x18]
    unsigned long long v12;  // [bp-0x10]
    unsigned long long v13;  // [bp-0x8]
    unsigned long long v15;  // [bp+0x18]
    unsigned long v16;  // [bp+0x20]

    v13 = v18;
    v12 = v19;
    v11 = v20;
    v10 = v21;
    v9 = v22;
    v7 = 18446744073709551614;
    v15 = v23;
    v16 = vvar_72{r56|8b};
    v8 = g_7ff37153138 ^ &v0;
    v25 = v24;
    v26 = g_7ff37153600;
    if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
    {
        *((unsigned int *)&v2) = v24;
        sub_7ff37121194(g_7ff37153600->field_10, 145, sub_7ff3710c940, v27, v28, v2); /* do not return */
    }
    v29 = 0;
    flag = NULL;
    choice = 0;
    flag2 = 0;
    if (!v27)
    {
        v29 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 146, sub_7ff3710c940, 2147942487); /* do not return */
    }
    if (!v28)
    {
        v29 = -2147024809;
        if (g_7ff37153600 == &g_7ff37153600)
        {
            8792722900160();
        }
        else if ((1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
        {
            sub_7ff3711722c(g_7ff37153600->field_10, 147, sub_7ff3710c940, 2147942487); /* do not return */
        }
    }
    else
    {
        *((unsigned long long *)v28) = 0;
        if (v29 >= 0)
        {
            if (v24)
            {
                v29 = sub_7ff371397d0(v27, 3, &flag);
                v26 = g_7ff37153600;
                if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
                {
                    *((int *)&v3) = v29;
                    *((unsigned int *)&v1) = 3;
                    sub_7ff37135a28(g_7ff37153600->field_10, 148, sub_7ff3710c940, v27, v1, flag, v3); /* do not return */
                }
            }
            else
            {
                v29 = sub_7ff371397d0(v27, 1, &flag);
                v26 = g_7ff37153600;
                if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
                {
                    *((int *)&v3) = v29;
                    *((unsigned int *)&v1) = 1;
                    sub_7ff37135a28(g_7ff37153600->field_10, 149, sub_7ff3710c940, v27, v1, flag, v3); /* do not return */
                }
            }
            if (v29 >= 0)
            {
                v32 = flag;
                v33 = &choice;
                v34 = &g_7ff370f1818;
                *(flag)->field_0();
            }
        }
        else
        {
            v26 = g_7ff37153600;
        }
    }
    if (v26 != &g_7ff37153600 && (1 & v26->field_1c) && v26->field_19 >= 5)
        sub_7ff3711722c(v26->field_10, 155, sub_7ff3710c940, v29); /* do not return */
    8792722900160();
}
