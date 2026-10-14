/* sub_7ff24f95184 @ 0x7ff24f95184
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f95184  (105 bytes, 6 basic blocks)
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
    char padding_0[28];
    unsigned int field_1c;
    struct struct_3 *field_20;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char g_7ff24f91dd0;
extern char g_7ff24f91df0;
extern char g_7ff24f91e20;
extern unsigned int g_7ff24f986b4;

int sub_7ff24f95184(struct_2 *ptr)
{
    unsigned int v1;  // edi
    unsigned long v2;  // rdi
    struct_0 **p;  // rcx
    struct_0 *v4;  // rdx

    InterlockedExchangeAdd(&ptr->field_1c, 4294967295);
    v1 = ptr->field_1c;
    v2 = v1 - 1;
    if (!v1 + 4294967295 && ptr)
    {
        *((char **)&ptr->padding_0[0]) = &g_7ff24f91dd0;
        *((char **)&ptr->padding_0[8]) = &g_7ff24f91df0;
        *((char **)&ptr->padding_0[16]) = &g_7ff24f91e20;
        p = ptr->field_20;
        if (!p)
        {
            g_7ff24f986b4 = g_7ff24f986b4 - 1;
            8792418377174();
        }
        v4 = *(p);
        *(p)->field_10();
    }
    return v1 - 1;
}
