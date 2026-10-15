/* sub_1000111a9 @ 0x1000111a9
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x1000111a9  (233 bytes, 20 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_2 *field_8;
} struct_0;

typedef struct struct_4 {
    struct struct_5 *field_0;
    struct struct_6 *field_8;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

void sub_1000111a9(void)
{
    unsigned int v3;  // eax
    unsigned int v4;  // ebx
    struct_3 **ptr;  // r13
    struct_0 **v6;  // r15
    struct_0 **v7;  // rcx
    unsigned short v8[7];  // r12
    struct_4 **v1;  // [bp+0x80]
    unsigned int v2;  // [bp+0x100130]

    if ((v3 & 0x300000))
        4296016568();
    v2 |= v4 + 24;
    if (*(ptr) != v6)
    {
        v7 = *(ptr);
        *(v7)->field_8();
    }
    if ((v8[0] == 77 || v8[0] == 109) && (v8[1] == 83 || v8[1] == 115) && (v8[2] == 72 || v8[2] == 104) && (v8[3] == 84 || v8[3] == 116) && (v8[4] == 77 || v8[4] == 109) && (v8[5] == 76 || v8[5] == 108) && v8[6] == 58)
        4296015928();
    v1 = v6;
    *(v7)->field_0();
}
