/* sub_7ff24f92181 @ 0x7ff24f92181
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f92181  (103 bytes, 6 basic blocks)
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
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned int field_20;
    unsigned int field_24;
    unsigned int field_28;
    char padding_2c[4];
    unsigned int field_30;
    char padding_34[4];
    unsigned long long field_38;
    unsigned long long field_40;
} struct_1;

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char g_7ff24f91cf0;
extern char g_7ff24f91d10;
extern unsigned int g_7ff24f986b4;

long long sub_7ff24f92181(void)
{
    struct_1 *v2;  // rax
    struct_1 *ptr;  // rbx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // r8
    unsigned long v6;  // rdx
    struct_1 *v7;  // rcx

    ptr = v2;
    if (v2)
    {
        ptr->field_10 = 0;
        ptr->field_18 = 0;
        ptr->field_20 = 0;
        ptr->field_24 = 0;
        ptr->field_28 = 0;
        ptr->field_38 = 0;
        ptr->field_40 = 0;
        ptr->field_30 = 1;
        ptr->field_0 = &g_7ff24f91cf0;
        *((char **)&ptr->padding_8[0]) = &g_7ff24f91d10;
        g_7ff24f986b4 = g_7ff24f986b4 + 1;
    }
    else
    {
        ptr = NULL;
    }
    if (!ptr)
        goto LABEL_0x7ff24f92265;
    v5 = v4;
    v6 = vvar_14{r56|8b};
    v7 = ptr;
    ptr->field_0->field_0();
}
