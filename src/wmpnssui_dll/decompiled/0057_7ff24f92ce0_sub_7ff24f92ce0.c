/* sub_7ff24f92ce0 @ 0x7ff24f92ce0
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f92ce0  (100 bytes, 5 basic blocks)
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

typedef struct struct_2 {
    char padding_0[56];
    struct struct_3 *field_38;
} struct_2;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

unsigned int sub_7ff24f92ce0(struct_2 *ptr, unsigned long a1, unsigned long long a2)
{
    struct_2 *v1;  // rsi
    unsigned long long v2;  // rdi
    struct_4 **v3;  // rcx

    v1 = ptr;
    v2 = 2147942487;
    if (!a2)
        return 2147942487;
    v3 = ptr->field_38;
    if (!ptr->field_38)
        8792418812288();
    ptr->field_38->field_0->field_10();
}
