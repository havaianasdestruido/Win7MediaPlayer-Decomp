/* sub_10000e828 @ 0x10000e828
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000e828  (237 bytes, 25 basic blocks)
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

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

unsigned int sub_10000e828(struct_3 **a0, unsigned int *p, struct_2 **ptr)
{
    struct_2 **v1;  // r9
    unsigned int v2;  // r8d

    v1 = ptr;
    if (!ptr)
        return 2147500035;
    *(ptr) = NULL;
    v2 = *(p);
    if ((v2 || p[1] || p[2] || p[3]) && (v2 == 1811229265 && p[1] == 299055434 && p[2] == 3221246897 && p[3] == 2801432911 || !v2 && p[1] == v2 && p[2] == 192 && p[3] == 0x46000000 || v2 == 0x20400 && !p[1] && p[2] == 192 && p[3] == 0x46000000 || v2 == (int)a0[3] && p[1] == *((int *)((char *)&a0[3] + 4)) && p[2] == (int)a0[4] && p[3] == *((int *)((char *)&a0[4] + 4))))
    {
        *(ptr) = a0;
        *(a0)->field_8();
    }
    return 2147500034;
}
