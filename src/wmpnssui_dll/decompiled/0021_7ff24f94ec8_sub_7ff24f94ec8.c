/* sub_7ff24f94ec8 @ 0x7ff24f94ec8
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f94ec8  (125 bytes, 9 basic blocks)
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
    char padding_0[16];
    struct struct_3 *field_10;
    char padding_18[40];
    struct struct_4 *field_40;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_4 {
    unsigned short field_0;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

unsigned int sub_7ff24f94ec8(struct_2 *p)
{
    unsigned short *v2;  // rdi
    struct_2 *ptr;  // rsi
    struct_0 **v5;  // rcx
    struct_2 *v0;  // [bp-0x18]

    v2 = &p->field_40->field_0;
    if (!p->field_40)
        return 2147942487;
    do
    {
        if (false)
            break;
    } while (*(v2));
    ptr = &p->field_10;
    if (!*((long long *)&ptr->padding_0[0]))
    {
        v0 = ptr;
        8792418812224();
    }
    v5 = *((long long *)&ptr->padding_0[0]);
    (*((long long *)(*((long long *)*((long long *)&ptr->padding_0[0])) + 16)))();
}
