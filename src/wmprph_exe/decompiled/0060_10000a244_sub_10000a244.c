/* sub_10000a244 @ 0x10000a244
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000a244  (174 bytes, 11 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
} struct_4;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned int field_28;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

unsigned int sub_10000a244(struct_2 *ptr, unsigned long long a1, unsigned long a2, struct_4 **a3, unsigned int a4)
{
    struct_4 **v1;  // rsi
    unsigned long v2;  // cc_ndep
    unsigned long v3;  // 4140
    struct_2 *p;  // rdi
    struct_4 **v5;  // rcx
    struct_0 **v6;  // rcx
    unsigned long long v7;  // rax

    v1 = a3;
    if (a4 == 3)
    {
        v3 = _ccall(0, 48, (unsigned long long)(a4 + 5), a2 - a1 >> 3 & 4294967295, v2);
        4295028054();
    }
    ptr->field_10 = a1;
    ptr->field_18 = a2;
    p = &ptr->field_8;
    if (p)
    {
        if (a3)
        {
            v5 = a3;
            *(a3)->field_8();
        }
        v6 = (struct_0 **)p->padding_0;
        if (p->padding_0)
            (*((long long *)(*((long long *)&p->padding_0) + 16)))();
        *((struct_0 ***)&p->padding_0[0]) = NULL;
    }
    v7 = ptr->field_10;
    ptr->field_28 = a4;
    ptr->field_20 = v7;
    return 0;
}
