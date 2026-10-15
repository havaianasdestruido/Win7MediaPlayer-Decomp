/* sub_7ff3711be81 @ 0x7ff3711be81
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3711be81  (437 bytes, 30 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_8 {
    char padding_0[8];
    unsigned long long field_8;
} struct_8;

typedef struct struct_4 {
    struct struct_2 *field_0;
} struct_4;

typedef struct struct_7 {
    struct struct_5 *field_0;
} struct_7;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
} struct_5;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;


int sub_7ff3711be81(void)
{
    struct_0 **v14;  // r15
    struct_0 **v15;  // rdi
    struct_0 **v26;  // rcx
    struct_0 **v16;  // rbx
    struct_8 *v17;  // r12
    unsigned long v18;  // rsi
    struct_0 **v5;  // [bp+0x40]
    struct_0 **v6;  // [bp+0x48], Other Possible Types: unsigned long long
    char v8;  // [bp+0x58]
    struct_0 **v9;  // [bp+0x60]
    char v10;  // [bp+0x68]
    unsigned int v12;  // [bp+0x128]
    struct_0 **v13;  // [bp+0x138]

    v15 = v14;
    v5 = v14;
    v12 = (unsigned int)v14;
    v16 = v14;
    v13 = v16;
    if (*((int *)(v17->field_8 + 24)) > (unsigned int)v14)
    {
        v12 = (unsigned int)v14;
        8792722900072();
    }
    else if ((unsigned int)v18 >= (unsigned int)v14)
    {
        v6 = L"equals";
        if (v14 != L"equals")
        {
            v10 = *((char *)&v14);
            8792722900136();
        }
        v10 = 1;
        v9 = L"equals";
        v6 = L"SourceURL";
        v8 = 88;
        8792722900136();
    }
    else
    {
        if (v16 == v14)
            8792722900160();
        v26 = v16;
        *(v16)->field_10();
    }
}
