/* sub_100006bf0 @ 0x100006bf0
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100006bf0  (158 bytes, 14 basic blocks)
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

typedef struct struct_0 {
    char padding_0[96];
    unsigned int field_60;
    char padding_64[4];
    long long field_68;
    unsigned long long field_70;
    unsigned long long field_78;
} struct_0;

typedef struct struct_1 {
    char padding_0[12];
    unsigned int field_c;
} struct_1;

void sub_100006bf0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13)
{
    struct_0 *v2;  // rdi
    unsigned int v3;  // eax
    struct_1 *ptr;  // rbx
    unsigned long v5;  // rcx
    unsigned long long v6;  // rcx
    unsigned long long v7;  // rbp
    unsigned long v8;  // r12
    long long v9;  // r14
    long long v10;  // r12
    long long v1;  // [bp+0x20]

    *((unsigned int *)&v1) = 25;
    if (sub_10000c728(v2->field_68, v2->field_60, &v2->field_70, v3 * 25, v1))
        sub_100016014(v9, v10);
    v5 = ptr->field_c;
    v6 = v5 - (unsigned int)v5 / 25 * 25;
    v7 = v6 & 4294967295;
    if (v7 >= v2->field_78)
    {
        4295012220();
    }
    else if (*((long long *)(v2->field_70 + v6 * 8)))
    {
        4296017296();
    }
    else if (*((long long *)(v2->field_70 + v7 * 8)) != v8)
    {
        4295012220();
    }
    else
    {
        4296017320();
    }
}
