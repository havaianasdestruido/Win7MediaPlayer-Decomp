/* sub_7ff3711b5ec @ 0x7ff3711b5ec
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3711b5ec  (547 bytes, 38 basic blocks)
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
    char padding_0[64];
    struct struct_4 *field_40;
} struct_3;

typedef struct struct_1 {
    char padding_0[24];
    struct struct_2 *field_18;
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

extern long long g_7ff370f2000;
extern long long g_7ff370f2010;
extern long long g_7ff3710c9d0;
extern struct_0 *g_7ff37153600;
extern long long g_7ff37154108;
extern unsigned long long g_7ff37154120;
extern char g_7ff37154128;
extern unsigned int g_7ff37154134;
extern char g_7ff37154138;

int sub_7ff3711b5ec(void)
{
    long long v3;  // rdx
    long long v4;  // rsi
    unsigned long long v13;  // r8
    long long v14;  // rdx
    long long v5;  // r8
    int v6;  // ebx
    struct_3 *v8;  // rcx
    struct_3 *ptr;  // rdi
    struct_1 **v10;  // rcx
    unsigned int v11;  // r9d
    unsigned long v12;  // r9
    long long v0;  // [bp-0x28]
    long long v1;  // [bp-0x20]

    v4 = v3;
    if (g_7ff37154134 && (g_7ff37154138 >= 4 || !g_7ff37154138) && (0x8000000000000000 & g_7ff37154120) && (*((long long *)&g_7ff37154128) & 0x8000000000000000) == *((long long *)&g_7ff37154128))
        sub_7ff371206b8(g_7ff37154108, &g_7ff370f2000, v3); /* do not return */
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118968(g_7ff37153600->field_10, 85, &g_7ff3710c9d0, v3, v5); /* do not return */
    v6 = 0;
    if (!v3)
    {
        v6 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 86, &g_7ff3710c9d0, 2147942487); /* do not return */
    }
    if (!v5)
    {
        v6 = -2147024809;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 87, &g_7ff3710c9d0, 2147942487); /* do not return */
    }
    ptr = &v8->field_40;
    if (!*((long long *)&ptr->padding_0[0]))
    {
        if (v6 >= 0)
            0x7ff37200500();
    }
    else
    {
        if (v6 >= 0)
        {
            v10 = *((long long *)&ptr->padding_0[0]);
            v12 = v11;
            v13 = v5;
            v14 = v3;
            (*((long long *)(*((long long *)*((long long *)&ptr->padding_0[0])) + 24)))();
        }
    }
    if (g_7ff37154134 && (g_7ff37154138 >= 4 || !g_7ff37154138) && (0x8000000000000000 & g_7ff37154120) && (*((long long *)&g_7ff37154128) & 0x8000000000000000) == *((long long *)&g_7ff37154128))
    {
        *((unsigned int *)&v1) = 4;
        *((int *)&v0) = v6;
        sub_7ff37120600(g_7ff37154108, &g_7ff370f2010, v3, 0, v0, v1); /* do not return */
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
        sub_7ff3711722c(g_7ff37153600->field_10, 91, &g_7ff3710c9d0, v6); /* do not return */
    }
    else
    {
        return;
    }
}
