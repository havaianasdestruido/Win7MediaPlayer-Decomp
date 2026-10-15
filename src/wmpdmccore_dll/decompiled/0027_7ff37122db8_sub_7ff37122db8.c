/* sub_7ff37122db8 @ 0x7ff37122db8
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37122db8  (572 bytes, 43 basic blocks)
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

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_5 {
    struct struct_3 *field_0;
} struct_5;

typedef struct struct_6 {
    char padding_0[64];
    unsigned long long field_40;
    long long field_48;
} struct_6;

typedef struct struct_7 {
    char padding_0[8];
    unsigned long long field_8;
} struct_7;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff3710c9b0;
extern struct_0 *g_7ff37153600;

int sub_7ff37122db8(void)
{
    long long v5;  // rdx
    long long v6;  // rsi
    unsigned long long v15;  // rbx
    struct_7 *p;  // rbx
    struct_1 **v17;  // rcx
    unsigned long long v7;  // r9
    unsigned long long v8;  // r8
    unsigned long long v9;  // rdi
    unsigned long long v10;  // r9
    unsigned long long v11;  // r8
    struct_6 *ptr;  // rcx
    long long v13;  // rbx
    unsigned long v14;  // rdx
    struct_5 **v0;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x40]
    struct_1 **flag;  // [bp-0x28]
    long long choice;  // [bp-0x20]

    v6 = v5;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
    {
        v1 = v7;
        v0 = v8;
        sub_7ff37122adc(g_7ff37153600->field_10, 17, &g_7ff3710c9b0, v5); /* do not return */
    }
    v9 = 0;
    if (!v5)
    {
        v9 = 2147942487;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 18, &g_7ff3710c9b0, 2147942487); /* do not return */
    }
    if (!v10)
    {
        v9 = 2147942487;
        if (g_7ff37153600 == &g_7ff37153600)
            return;
        if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 19, &g_7ff3710c9b0, 2147942487); /* do not return */
    }
    else if ((unsigned int)v9 >= 0)
    {
        flag = NULL;
        choice = 0;
        if (v11)
        {
            v0 = &flag;
            0x7ff37200500();
        }
        if ((unsigned int)v9 >= 0)
        {
            if (v5 != choice)
                8792722900160();
            v13 = ptr->field_48;
            if (v13 >= *((long long *)&ptr[1].padding_0[0]))
            {
                v14 = v13 + 1;
                if (!(char)sub_7ff3712407c(&ptr->field_40, v14))
                    sub_7ff3711849c(2147942414); /* do not return */
            }
            v15 = v13 * 16;
            p = v15 + ptr->field_40;
            if (v15 + ptr->field_40)
            {
                *((struct_1 ***)&p->padding_0[0]) = flag;
                v17 = flag;
                if (flag)
                {
                    *(flag)->field_8();
                }
                else if (!choice)
                {
                    p->field_8 = 0;
                    if (choice)
                        sub_7ff3711849c(2147942414); /* do not return */
                }
                else
                {
                    8792722900080();
                }
            }
            ptr->field_48 = ptr->field_48 + 1;
            if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
                sub_7ff37117208(g_7ff37153600->field_10, 23, &g_7ff3710c9b0); /* do not return */
        }
        8792722900160();
    }
    if (g_7ff37153600 == &g_7ff37153600)
    {
        return;
    }
    else if (!(g_7ff37153600->field_1c & 1))
    {
        return;
    }
    else if (g_7ff37153600->field_19 >= 5)
    {
        sub_7ff3711722c(g_7ff37153600->field_10, 24, &g_7ff3710c9b0, v9 & 4294967295); /* do not return */
    }
    else
    {
        return;
    }
}
