/* sub_7ff24f9362b @ 0x7ff24f9362b
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f9362b  (74 bytes, 7 basic blocks)
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

typedef struct struct_0 {
    char padding_0[72];
    struct struct_1 *field_48;
    char padding_50[104];
    struct struct_2 *field_b8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

void sub_7ff24f9362b(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned short a8, unsigned long a9, struct_0 **a10)
{
    int v1;  // eax
    unsigned long long v2;  // r14
    struct_0 **v3;  // rcx
    unsigned int v4;  // esi
    unsigned long v5;  // rdx
    unsigned long long v6;  // rdi
    unsigned long long v7;  // rdx
    struct_0 **v8;  // rcx
    unsigned long v10;  // r8

    if (v1 >= (unsigned int)v2 && a8 == (unsigned short)v2)
    {
        v3 = a10;
        v5 = v4;
        *(a10)->field_48();
    }
    a7 = L"00-00-00-00-00-00";
    if (v2 != L"00-00-00-00-00-00")
        8792418812168();
    v6 = L"00-00-00-00-00-00";
    v7 = L"00-00-00-00-00-00";
    v8 = a10;
    v10 = v4;
    *(a10)->field_b8();
}
