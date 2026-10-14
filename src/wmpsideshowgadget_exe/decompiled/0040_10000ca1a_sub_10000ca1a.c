/* sub_10000ca1a @ 0x10000ca1a
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000ca1a  (164 bytes, 16 basic blocks)
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
    char padding_0[32];
    struct struct_1 *field_20;
} struct_0;

typedef struct struct_2 {
    char padding_0[120];
    struct struct_3 *field_78;
} struct_2;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
} struct_6;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
} struct_8;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

extern unsigned long long g_100001988[4];

void sub_10000ca1a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, struct_8 **a4, char a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, struct_0 **a14)
{
    struct_0 **v2;  // rcx
    unsigned long long flag2;  // r8
    struct_2 **v12;  // rcx
    struct_8 **v14;  // rcx
    unsigned long v4;  // r9
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rsi
    unsigned long v7;  // rdi
    unsigned long long flag;  // rdi
    unsigned long v9;  // r9
    unsigned long long v10;  // r8
    unsigned long long flag3;  // rdx
    struct_2 **v1;  // [bp+0x20]

    v2 = a14;
    if (a14)
    {
        flag2 = 0;
        v4 = &a4;
        v5 = 2;
        *(a14)->field_20();
    }
    else if (v1)
    {
        v6 = sub_10000ecd8("Audio", 4294967295);
        if (!v6)
        {
            4295012220();
        }
        else if (!g_100001988[v7])
        {
            flag = 0;
            v9 = &vvar_5;
            v10 = v6;
            flag3 = 0;
            v12 = v1;
            *(v1)->field_78();
        }
        else
        {
            4296017304();
        }
    }
    else
    {
        v14 = a4;
        if (!a4)
            goto LABEL_0x10000cb28;
        *(a4)->field_10();
    }
}
