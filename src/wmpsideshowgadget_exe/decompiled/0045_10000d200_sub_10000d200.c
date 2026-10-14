/* sub_10000d200 @ 0x10000d200
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000d200  (192 bytes, 15 basic blocks)
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

typedef struct struct_4 {
    char padding_0[56];
    struct struct_5 *field_38;
} struct_4;

typedef struct struct_18 {
    char padding_0[96];
    struct struct_19 *field_60;
    char padding_68[8];
    struct struct_20 *field_70;
    char padding_78[48];
    struct struct_21 *field_a8;
} struct_18;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
} struct_6;

typedef struct struct_11 {
    char padding_0[16];
    struct struct_12 *field_10;
} struct_11;

typedef struct struct_16 {
    char padding_0[16];
    struct struct_17 *field_10;
} struct_16;

typedef struct struct_10 {
    struct struct_8 *field_0;
} struct_10;

typedef struct struct_15 {
    struct struct_13 *field_0;
} struct_15;

typedef struct struct_5 {
    struct struct_0 *field_0;
} struct_5;

typedef struct struct_19 {
    unsigned long long field_0;
} struct_19;

typedef struct struct_20 {
    unsigned long long field_0;
} struct_20;

typedef struct struct_21 {
    unsigned long long field_0;
} struct_21;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_17 {
    unsigned long long field_0;
} struct_17;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
} struct_8;

typedef struct struct_13 {
    char padding_0[16];
    struct struct_14 *field_10;
} struct_13;

typedef struct struct_0 {
    char padding_0[96];
    struct struct_1 *field_60;
    char padding_68[8];
    struct struct_2 *field_70;
    char padding_78[48];
    struct struct_3 *field_a8;
} struct_0;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

unsigned int sub_10000d200(struct_4 *ptr, unsigned int a1)
{
    struct_4 *v5;  // rdi
    struct_18 **v6;  // rcx
    struct_6 **v15;  // rcx
    unsigned long v7;  // rsi
    struct_10 **v8;  // rdx
    struct_18 **v9;  // rcx
    struct_15 **v10;  // rdx
    struct_18 **v11;  // rcx
    char *v12;  // rdx
    struct_16 **v13;  // rcx
    struct_11 **v14;  // rcx
    struct_16 **flag2;  // [bp-0x38]
    unsigned long flag3;  // [bp-0x30]
    struct_11 **choice;  // [bp-0x28]
    unsigned short flag4;  // [bp+0x8]
    struct_6 **flag;  // [bp+0x20]

    v5 = ptr;
    v6 = ptr->field_38;
    v7 = a1;
    flag = NULL;
    choice = NULL;
    flag2 = NULL;
    if (ptr->field_38)
    {
        v8 = &flag;
        ptr->field_38->field_0->field_60();
    }
    v9 = ptr->field_38;
    if (ptr->field_38)
    {
        v10 = &choice;
        ptr->field_38->field_0->field_a8();
    }
    else if (flag)
    {
        v11 = ptr->field_38;
        flag3 = 0;
        flag4 = 0;
        v12 = &flag3;
        ptr->field_38->field_0->field_70();
    }
    v13 = flag2;
    if (flag2)
        *(flag2)->field_10();
    v14 = choice;
    if (choice)
        *(choice)->field_10();
    v15 = flag;
    if (!flag)
        return 0;
    *(flag)->field_10();
}
