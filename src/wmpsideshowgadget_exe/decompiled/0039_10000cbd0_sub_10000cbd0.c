/* sub_10000cbd0 @ 0x10000cbd0
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000cbd0  (173 bytes, 16 basic blocks)
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
    char padding_18[8];
    struct struct_2 *field_20;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    char padding_18[96];
    struct struct_5 *field_78;
} struct_3;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
} struct_6;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

extern unsigned long long g_100001988[4];

void sub_10000cbd0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4, struct_0 **a5, struct_3 **a6, struct_6 **a7)
{
    struct_0 **v1;  // rcx
    unsigned long v2;  // r9
    unsigned long long flag2;  // rdx
    struct_3 **v12;  // rcx
    struct_0 **v13;  // rcx
    struct_3 **v14;  // rbx
    struct_3 **v15;  // rcx
    struct_6 **v16;  // rcx
    unsigned long v3;  // rdx
    unsigned long long choice;  // r8
    struct_3 **v5;  // rbx
    unsigned long long v6;  // rsi
    unsigned long v7;  // rdi
    unsigned long long flag;  // rdi
    unsigned long v9;  // r9
    unsigned long long v10;  // r8

    v1 = a5;
    if (a5)
    {
        v2 = &a7;
        v3 = vvar_9{r56|4b} + 2;
        choice = 0;
        *(a5)->field_20();
    }
    v5 = a6;
    if (v5)
    {
        v6 = sub_10000ecd8("audio", 4294967295);
        if (!v6)
        {
            4295012220();
        }
        else if (!g_100001988[v7])
        {
            flag = 0;
            v9 = &vvar_4;
            v10 = v6;
            flag2 = 0;
            v12 = v5;
            *(v5)->field_78();
        }
        else
        {
            4296017304();
        }
    }
    else
    {
        v13 = a5;
        if (a5)
            *(a5)->field_10();
        v14 = a6;
        if (!v14)
        {
            v16 = a7;
            if (!a7)
                goto LABEL_0x10000cd55;
            *(a7)->field_10();
        }
        v15 = v14;
        *(v15)->field_10();
    }
}
