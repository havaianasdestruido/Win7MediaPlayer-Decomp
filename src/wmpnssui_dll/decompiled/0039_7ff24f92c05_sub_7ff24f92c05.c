/* sub_7ff24f92c05 @ 0x7ff24f92c05
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f92c05  (121 bytes, 6 basic blocks)
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

typedef struct struct_1 {
    struct struct_2 *field_0;
    char padding_8[16];
    unsigned long long field_18;
    char padding_20[16];
    unsigned int field_30;
    char padding_34[4];
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned int field_50;
} struct_1;

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char g_7ff24f91ba0;
extern char g_7ff24f91bc0;
extern char g_7ff24f91c00;
extern unsigned int g_7ff24f986b4;

int sub_7ff24f92c05(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
    struct_1 *v2;  // rax
    struct_1 *ptr;  // rbx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // r8
    unsigned long v6;  // rdx
    struct_1 *v7;  // rcx
    unsigned int v8;  // edi

    ptr = v2;
    if (v2)
    {
        g_7ff24f986b4 = g_7ff24f986b4 + 1;
        ptr->field_18 = 0;
        ptr->field_0 = &g_7ff24f91ba0;
        ptr->field_30 = 1;
        *((char **)&ptr->padding_8[0]) = &g_7ff24f91bc0;
        ptr->field_38 = 0;
        ptr->field_40 = 0;
        ptr->field_48 = 0;
        ptr->field_50 = 0;
        *((char **)&ptr->padding_8[8]) = &g_7ff24f91c00;
    }
    else
    {
        ptr = NULL;
    }
    if (!ptr)
        return v8;
    v5 = v4;
    v6 = vvar_22{r56|8b};
    v7 = ptr;
    ptr->field_0->field_0();
}
