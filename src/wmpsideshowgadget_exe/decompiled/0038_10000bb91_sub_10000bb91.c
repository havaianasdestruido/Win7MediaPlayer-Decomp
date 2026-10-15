/* sub_10000bb91 @ 0x10000bb91
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000bb91  (179 bytes, 16 basic blocks)
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
    char padding_0[16];
    struct struct_1 *field_10;
    char padding_18[48];
    struct struct_2 *field_48;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

void sub_10000bb91(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long flag2, unsigned long choice, unsigned long flag, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long flag3, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long long *ptr)
{
    unsigned int v3;  // eax
    unsigned long v4;  // rdi
    struct_0 **v5;  // rcx
    char *v6;  // rdx
    struct_0 **v9;  // rcx
    struct_0 **v1;  // [bp+0x20]

    v4 = v3;
    if (v3)
    {
        v9 = v1;
        if (!v1)
            goto LABEL_0x10000bd5f;
        *(v1)->field_10();
    }
    v5 = v1;
    flag = 0;
    choice = 0;
    flag2 = 0;
    flag3 = 0;
    if (!v5)
        4296017320();
    v6 = &flag;
    *(v5)->field_48();
}
