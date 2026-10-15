/* sub_7ff24f9613c @ 0x7ff24f9613c
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f9613c  (99 bytes, 5 basic blocks)
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
    char padding_0[8];
    unsigned long long field_8;
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_2 {
    char padding_0[3];
    char field_3;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

void sub_7ff24f9613c(unsigned long long a0, struct_1 *p, void* ptr)
{
    unsigned long long v1;  // r9
    struct_2 *addr;  // rcx

    v1 = a0;
    if ((*((char *)ptr) & 4))
        a0 = (int)ptr[4] + a0 & -((int)ptr[8]);
    addr = p->field_10->field_8 + p->field_8;
    if ((addr->field_3 & 15))
        v1 += addr->field_3 & 0xfffffff0;
    sub_7ff24f95db0(v1 ^ *((long long *)((*((int *)ptr) & 0xfffffff8) + a0)));
    return;
}
