/* sub_1000073d5 @ 0x1000073d5
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x1000073d5  (203 bytes, 13 basic blocks)
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
    char padding_8[120];
    unsigned long long field_80;
} struct_2;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
} struct_5;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_7 {
    char padding_0[16];
    struct struct_8 *field_10;
} struct_7;

typedef struct struct_0 {
    char padding_0[104];
    struct struct_1 *field_68;
} struct_0;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

int sub_1000073d5(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, struct_5 **a7, unsigned long choice, struct_3 **a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, long long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned int a27, unsigned long a28, unsigned long a29, unsigned long a30)
{
    unsigned long long flag;  // rcx
    struct_2 *v3;  // rsi
    long long v4;  // rdx
    struct_5 **v5;  // rdi
    struct_2 *v6;  // rcx
    int v7;  // ebx
    struct_3 **v8;  // rcx
    struct_5 **v9;  // rcx
    long long v1;  // [bp+0x20]

    flag = 0;
    choice = 0;
    if (v3->field_80)
    {
        if (0 < v3->field_80)
        {
            v4 = a15;
            v5 = a7;
            v6 = v3;
            v3->field_0->field_68();
        }
        4295012220();
    }
    else
    {
        if (v7 >= 0)
        {
            v8 = a9;
            a13 = a9;
            if (a9)
                *(a9)->field_8();
            v9 = a7;
            a12 = v9;
            if (!v9)
            {
                *((unsigned int *)&v1) = a27;
                sub_10000917c(v3, &a12, &a13, a15, v1); /* do not return */
            }
            *(v9)->field_8();
        }
    }
}
