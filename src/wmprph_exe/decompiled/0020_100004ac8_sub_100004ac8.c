/* sub_100004ac8 @ 0x100004ac8
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100004ac8  (221 bytes, 20 basic blocks)
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

typedef struct struct_0 {
    char padding_0[264];
    unsigned int field_108;
} struct_0;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_1 {
    struct struct_2 *field_0;
    struct struct_3 *field_8;
} struct_1;

typedef struct struct_5 {
    struct struct_6 *field_0;
    struct struct_7 *field_8;
} struct_5;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

void sub_100004ac8(void)
{
    unsigned int v3;  // eax
    struct_0 *p;  // r12
    struct_4 **ptr;  // r14
    struct_1 **v6;  // r15
    struct_1 **v7;  // rcx
    unsigned short v8[7];  // rbx
    struct_5 **v1;  // [bp+0x48]
    struct_5 **v2;  // [bp+0x50]

    if ((v3 & 0x300000))
        4296016760();
    p->field_108 = p->field_108 | vvar_45{r56|4b} + 24;
    if (*(ptr) != v6)
    {
        v7 = *(ptr);
        *(v7)->field_8();
    }
    if ((v8[0] == 77 || v8[0] == 109) && (v8[1] == 83 || v8[1] == 115) && (v8[2] == 72 || v8[2] == 104) && (v8[3] == 84 || v8[3] == 116) && (v8[4] == 77 || v8[4] == 109) && (v8[5] == 76 || v8[5] == 108) && v8[6] == 58)
    {
        v2 = v6;
        *(v7)->field_0();
    }
    v1 = v6;
    *(v7)->field_0();
}
