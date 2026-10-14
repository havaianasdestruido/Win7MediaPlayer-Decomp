/* sub_7ff24f94974 @ 0x7ff24f94974
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f94974  (120 bytes, 10 basic blocks)
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

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
    struct struct_8 *field_18;
    char padding_20[16];
    unsigned int field_30;
    char padding_34[4];
    struct struct_9 *field_38;
} struct_6;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_7 {
    struct struct_0 *field_0;
} struct_7;

typedef struct struct_8 {
    struct struct_2 *field_0;
} struct_8;

typedef struct struct_9 {
    struct struct_4 *field_0;
} struct_9;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern char g_7ff24f91cf0;
extern char g_7ff24f91d10;

int sub_7ff24f94974(struct_6 *ptr)
{
    unsigned int v1;  // edi
    unsigned long v2;  // rdi
    struct_4 **v3;  // rcx
    struct_0 **v4;  // rcx
    struct_2 **p;  // rcx
    struct_2 *v6;  // rdx

    InterlockedExchangeAdd(&ptr->field_30, 4294967295);
    v1 = ptr->field_30;
    v2 = v1 - 1;
    if (v1 + 4294967295 || !ptr)
        return v1 - 1;
    *((char **)&ptr->padding_0[0]) = &g_7ff24f91cf0;
    *((char **)&ptr->padding_0[8]) = &g_7ff24f91d10;
    v3 = ptr->field_38;
    if (ptr->field_38)
        ptr->field_38->field_0->field_10();
    v4 = ptr->field_10;
    if (ptr->field_10)
        ptr->field_10->field_0->field_10();
    p = ptr->field_18;
    if (!p)
        8792418812176();
    v6 = *(p);
    *(p)->field_10();
    return v1 - 1;
}
