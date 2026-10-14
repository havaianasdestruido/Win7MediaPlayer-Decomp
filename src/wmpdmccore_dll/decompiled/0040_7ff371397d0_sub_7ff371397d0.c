/* sub_7ff371397d0 @ 0x7ff371397d0
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff371397d0  (510 bytes, 35 basic blocks)
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
    char padding_0[16];
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
} struct_5;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

extern long long g_7ff370f1fe0;
extern struct_0 *g_7ff37153600;
extern long long g_7ff37154108;
extern unsigned long long g_7ff37154120;
extern char g_7ff37154128;
extern unsigned int g_7ff37154134;
extern char g_7ff37154138;

int sub_7ff371397d0(void)
{
    long long v4;  // rcx
    long long v5;  // rsi
    long long v6;  // r8
    unsigned long long v7;  // rdi
    struct_0 *v8;  // rcx
    unsigned long long *ptr;  // r8
    struct_5 **v10;  // rcx
    struct_3 **v11;  // rcx
    struct_1 **v12;  // rcx
    unsigned long long v0;  // [bp-0x38]
    struct_1 **flag;  // [bp+0x8]
    struct_5 **flag2;  // [bp+0x18]
    struct_3 **choice;  // [bp+0x20]

    v0 = 18446744073709551614;
    v5 = v4;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118968(g_7ff37153600->field_10, 139, sub_7ff3710c940, v4, v6); /* do not return */
    v7 = 0;
    flag = NULL;
    choice = NULL;
    flag2 = NULL;
    if (!v4)
    {
        v7 = 2147942487;
        v8 = g_7ff37153600;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 140, sub_7ff3710c940, 2147942487); /* do not return */
    }
    else
    {
        v8 = g_7ff37153600;
    }
    if (!ptr)
    {
        v7 = 2147942487;
        if (v8 == &g_7ff37153600)
            goto LABEL_7ff37139bab;
        if ((v8->field_1c & 1) && v8->field_19 >= 5)
            sub_7ff3711722c(v8->field_10, 141, sub_7ff3710c940, 2147942487); /* do not return */
    }
    else
    {
        *(ptr) = 0;
        if ((unsigned int)v7 >= 0)
        {
            if (g_7ff37154134 && (g_7ff37154138 >= 4 || !g_7ff37154138) && (0x8000000000000000 & g_7ff37154120) && (*((long long *)&g_7ff37154128) & 0x8000000000000000) == *((long long *)&g_7ff37154128))
                sub_7ff371206b8(g_7ff37154108, &g_7ff370f1fe0, v4); /* do not return */
            0x7ff37200500();
        }
        else
        {
            v8 = g_7ff37153600;
        }
    }
    if (v8 != &g_7ff37153600 && (v8->field_1c & 1) && v8->field_19 >= 5)
        sub_7ff3711722c(v8->field_10, 144, sub_7ff3710c940, v7 & 4294967295); /* do not return */
LABEL_7ff37139bab:
    v10 = flag2;
    if (flag2)
        *(flag2)->field_10();
    v11 = choice;
    if (choice)
        *(choice)->field_10();
    v12 = flag;
    if (!flag)
        return;
    *(flag)->field_10();
}
