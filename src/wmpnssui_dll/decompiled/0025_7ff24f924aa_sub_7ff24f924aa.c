/* sub_7ff24f924aa @ 0x7ff24f924aa
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f924aa  (101 bytes, 8 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[184];
    struct struct_1 *field_b8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_7ff24f914c0;
extern long long g_7ff24f986c0;
extern unsigned long long g_7ff24f986d8;
extern char g_7ff24f986e0;
extern unsigned int g_7ff24f986ec;
extern char g_7ff24f986f0;

long long sub_7ff24f924aa(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, struct_0 **a9)
{
    int v2;  // eax
    struct_0 **v3;  // rcx
    char *v4;  // rdx
    char v1;  // [bp+0x60]

    if (v2 >= 0)
    {
        v3 = a9;
        v4 = &v1;
        *(a9)->field_b8();
    }
    if (!g_7ff24f986ec)
        goto LABEL_0x7ff24f925b8;
    if (g_7ff24f986f0 < 4)
        if (!g_7ff24f986f0)
            goto LABEL_7ff24f92580;
        else
            goto LABEL_0x7ff24f925b8;
LABEL_7ff24f92580:
    if (!(vvar_18{r56|8b} & g_7ff24f986d8))
        goto LABEL_0x7ff24f925b8;
    if ((*((long long *)&g_7ff24f986e0) & vvar_18{r56|8b}) != *((long long *)&g_7ff24f986e0))
        goto LABEL_0x7ff24f925b8;
    sub_7ff24f923c8(g_7ff24f986c0, &g_7ff24f914c0, v2); /* do not return */
}
