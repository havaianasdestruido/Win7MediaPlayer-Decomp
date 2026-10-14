/* sub_7ff24f9234d @ 0x7ff24f9234d
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f9234d  (92 bytes, 6 basic blocks)
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
    unsigned int field_8;
    uint128_t field_c;
} struct_1;

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern char g_7ff24f91560;
extern unsigned int g_7ff24f986b4;

int sub_7ff24f9234d(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8)
{
    struct_1 *v2;  // rax
    struct_1 *ptr;  // rbx
    uint128_t *p;  // rsi
    uint128_t v5;  // xmm0
    unsigned long v6;  // r8
    unsigned long long v7;  // r12
    unsigned long long v8;  // rdx
    struct_1 *v9;  // rcx
    unsigned int v10;  // edi

    ptr = v2;
    if (v2)
    {
        g_7ff24f986b4 = g_7ff24f986b4 + 1;
        ptr->field_8 = 1;
        ptr->field_0 = &g_7ff24f91560;
        v5 = *(p);
        *((uint128_t *)&(&ptr->field_8)[1]) = v5;
    }
    else
    {
        ptr = NULL;
    }
    if (!ptr)
        return v10;
    v6 = vvar_25{r56|8b};
    v8 = v7;
    v9 = ptr;
    ptr->field_0->field_0();
}
