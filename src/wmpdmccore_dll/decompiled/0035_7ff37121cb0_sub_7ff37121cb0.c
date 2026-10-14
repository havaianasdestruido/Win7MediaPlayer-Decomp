/* sub_7ff37121cb0 @ 0x7ff37121cb0
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37121cb0  (501 bytes, 37 basic blocks)
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
    char padding_50[16];
    unsigned int field_60;
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

extern long long g_7ff3710c9c0;
extern struct_0 *g_7ff37153600;

int sub_7ff37121cb0(void)
{
    long long v4;  // rdx
    long long v5;  // rdi
    unsigned long long v6;  // r8
    unsigned long long v7;  // r8
    struct_6 *ptr;  // rcx
    long long v9;  // rbp
    unsigned long v10;  // rdx
    unsigned long long v11;  // rsi
    struct_7 *p;  // rsi
    struct_1 **v13;  // rcx
    struct_5 **v0;  // [bp-0x78], Other Possible Types: unsigned long long
    struct_1 **flag;  // [bp-0x68]
    unsigned long long choice;  // [bp-0x60]

    v5 = v4;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
    {
        v0 = v6;
        sub_7ff37118968(g_7ff37153600->field_10, 35, &g_7ff3710c9c0, v4); /* do not return */
    }
    if (!v4)
    {
        if (g_7ff37153600 != &g_7ff37153600)
        {
            if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
                sub_7ff3711722c(g_7ff37153600->field_10, 36, &g_7ff3710c9c0, 2147942487); /* do not return */
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
                sub_7ff3711722c(g_7ff37153600->field_10, 41, &g_7ff3710c9c0, 2147942487); /* do not return */
            }
            else
            {
                return;
            }
        }
        else
        {
            return;
        }
    }
    flag = NULL;
    choice = 0;
    if (v7)
    {
        v0 = &flag;
        0x7ff37200500();
    }
    else if (v4)
    {
        8792722900160();
    }
    else
    {
        v9 = ptr->field_48;
        if (v9 >= *((long long *)&ptr->padding_50[0]))
        {
            v10 = v9 + 1;
            if (!(char)sub_7ff3712407c(&ptr->field_40, v10))
                sub_7ff3711849c(2147942414); /* do not return */
        }
        v11 = v9 * 16;
        p = v11 + ptr->field_40;
        if (v11 + ptr->field_40)
        {
            *((struct_1 ***)&p->padding_0[0]) = flag;
            v13 = flag;
            if (flag)
            {
                *(flag)->field_8();
            }
            else if (choice)
            {
                8792722900080();
            }
            else
            {
                p->field_8 = 0;
                if (choice)
                    sub_7ff3711849c(2147942414); /* do not return */
            }
        }
        ptr->field_48 = ptr->field_48 + 1;
        ptr->field_60 = v9;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 40, &g_7ff3710c9c0, v9 & 4294967295); /* do not return */
        8792722900160();
    }
}
