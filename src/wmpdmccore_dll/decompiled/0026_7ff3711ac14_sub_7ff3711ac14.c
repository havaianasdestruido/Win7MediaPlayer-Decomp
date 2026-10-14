/* sub_7ff3711ac14 @ 0x7ff3711ac14
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3711ac14  (630 bytes, 43 basic blocks)
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

typedef struct struct_3 {
    char padding_0[80];
    struct struct_4 *field_50;
} struct_3;

typedef struct struct_1 {
    char padding_0[56];
    struct struct_2 *field_38;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff370f1fd0;
extern long long g_7ff370f2010;
extern long long g_7ff3710c9d0;
extern struct_0 *g_7ff37153600;
extern long long g_7ff37154108;
extern unsigned long long g_7ff37154120;
extern char g_7ff37154128;
extern unsigned int g_7ff37154134;
extern char g_7ff37154138;

int sub_7ff3711ac14(void)
{
    long long v5;  // rdx
    long long v6;  // rdi
    int v7;  // ebx
    unsigned long long v8;  // r8
    struct_3 *v9;  // rcx
    struct_3 *ptr;  // rsi
    struct_1 **v11;  // rcx
    char *v12;  // r8
    long long v13;  // rdx
    long long v0;  // [bp-0x58]
    long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x38]
    unsigned int flag;  // [bp+0x10]

    v2 = 18446744073709551614;
    v6 = v5;
    if (g_7ff37154134 && (g_7ff37154138 >= 4 || !g_7ff37154138) && (0x8000000000000000 & g_7ff37154120) && (*((long long *)&g_7ff37154128) & 0x8000000000000000) == *((long long *)&g_7ff37154128))
        sub_7ff371206b8(g_7ff37154108, &g_7ff370f1fd0, v5); /* do not return */
    if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118638(g_7ff37153600->field_10, 65, &g_7ff3710c9d0, v5); /* do not return */
    v7 = 0;
    flag = 0;
    if (!v5)
    {
        v7 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 66, &g_7ff3710c9d0, 2147942487); /* do not return */
    }
    if (!v8)
    {
        v7 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 67, &g_7ff3710c9d0, 2147942487); /* do not return */
    }
    else if (v7 >= 0)
    {
        ptr = &v9->field_50;
        if (!*((long long *)&ptr->padding_0[0]))
        {
            0x7ff37200500();
        }
        else if (v7 >= 0)
        {
            v11 = *((long long *)&ptr->padding_0[0]);
            v12 = &flag;
            v13 = v5;
            (*((long long *)(*((long long *)*((long long *)&ptr->padding_0[0])) + 56)))();
        }
    }
    if (g_7ff37154134 && (g_7ff37154138 >= 4 || !g_7ff37154138) && (0x8000000000000000 & g_7ff37154120) && (*((long long *)&g_7ff37154128) & 0x8000000000000000) == *((long long *)&g_7ff37154128))
    {
        *((unsigned int *)&v1) = 2;
        *((int *)&v0) = v7;
        sub_7ff37120600(g_7ff37154108, &g_7ff370f2010, v5, flag, v0, v1); /* do not return */
    }
    if (g_7ff37153600 == &g_7ff37153600)
    {
        return;
    }
    else if (!(1 & g_7ff37153600->field_1c))
    {
        return;
    }
    else if (g_7ff37153600->field_19 >= 5)
    {
        sub_7ff3711722c(g_7ff37153600->field_10, 72, &g_7ff3710c9d0, v7); /* do not return */
    }
    else
    {
        return;
    }
}
