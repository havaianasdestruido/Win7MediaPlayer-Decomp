/* sub_7ff24f93c8c @ 0x7ff24f93c8c
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f93c8c  (83 bytes, 5 basic blocks)
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

typedef struct struct_0 {
    char padding_0[64];
    struct struct_1 *field_40;
} struct_0;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

unsigned int sub_7ff24f93c8c(struct_2 *p, unsigned int *ptr)
{
    unsigned int *v2;  // rdi
    struct_0 **v3;  // rcx
    char *v4;  // r8
    unsigned long long flag;  // rdx
    char v1;  // [bp+0x18]

    v2 = ptr;
    if (!ptr)
    {
        return 2147942487;
    }
    else if (p->field_38)
    {
        v3 = p->field_38;
        *(ptr) = 0;
        v4 = &v1;
        flag = 0;
        *(v3)->field_40();
    }
    else
    {
        return 2147942487;
    }
}
