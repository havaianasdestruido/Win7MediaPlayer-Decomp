/* sub_100014842 @ 0x100014842
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100014842  (241 bytes, 27 basic blocks)
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

typedef struct struct_24 {
    char padding_0[40];
    unsigned long long field_28;
    char padding_30[72];
    struct struct_25 *field_78;
    char padding_80[40];
    struct struct_26 *field_a8;
    char padding_b0[16];
    struct struct_27 *field_c0;
    struct struct_28 *field_c8;
    struct struct_29 *field_d0;
    struct struct_30 *field_d8;
    struct struct_31 *field_e0;
    struct struct_32 *field_e8;
    struct struct_33 *field_f0;
    struct struct_34 *field_f8;
    char padding_100[96];
    struct struct_35 *field_160;
    struct struct_36 *field_168;
} struct_24;

typedef struct struct_22 {
    char padding_0[16];
    struct struct_23 *field_10;
} struct_22;

typedef struct struct_20 {
    char padding_0[16];
    struct struct_21 *field_10;
} struct_20;

typedef struct struct_18 {
    char padding_0[16];
    struct struct_19 *field_10;
} struct_18;

typedef struct struct_16 {
    char padding_0[16];
    struct struct_17 *field_10;
} struct_16;

typedef struct struct_14 {
    char padding_0[16];
    struct struct_15 *field_10;
} struct_14;

typedef struct struct_12 {
    char padding_0[16];
    struct struct_13 *field_10;
} struct_12;

typedef struct struct_10 {
    char padding_0[16];
    struct struct_11 *field_10;
} struct_10;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
} struct_8;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
} struct_6;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_25 {
    struct struct_0 *field_0;
} struct_25;

typedef struct struct_26 {
    struct struct_2 *field_0;
} struct_26;

typedef struct struct_27 {
    struct struct_4 *field_0;
} struct_27;

typedef struct struct_28 {
    struct struct_6 *field_0;
} struct_28;

typedef struct struct_29 {
    struct struct_8 *field_0;
} struct_29;

typedef struct struct_30 {
    struct struct_10 *field_0;
} struct_30;

typedef struct struct_31 {
    struct struct_12 *field_0;
} struct_31;

typedef struct struct_32 {
    struct struct_14 *field_0;
} struct_32;

typedef struct struct_33 {
    struct struct_16 *field_0;
} struct_33;

typedef struct struct_34 {
    struct struct_18 *field_0;
} struct_34;

typedef struct struct_35 {
    struct struct_20 *field_0;
} struct_35;

typedef struct struct_36 {
    struct struct_22 *field_0;
} struct_36;

typedef struct struct_23 {
    unsigned long long field_0;
} struct_23;

typedef struct struct_21 {
    unsigned long long field_0;
} struct_21;

typedef struct struct_19 {
    unsigned long long field_0;
} struct_19;

typedef struct struct_17 {
    unsigned long long field_0;
} struct_17;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

void sub_100014842(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4)
{
    struct_24 *ptr;  // rbx
    struct_22 **v2;  // rcx
    struct_4 **v11;  // rcx
    struct_2 **v12;  // rcx
    struct_0 **v13;  // rcx
    struct_20 **v3;  // rcx
    struct_18 **v4;  // rcx
    struct_16 **v5;  // rcx
    struct_14 **v6;  // rcx
    struct_12 **v7;  // rcx
    struct_10 **v8;  // rcx
    struct_8 **v9;  // rcx
    struct_6 **v10;  // rcx

    v2 = ptr->field_168;
    if (ptr->field_168)
        ptr->field_168->field_0->field_10();
    v3 = ptr->field_160;
    if (ptr->field_160)
        ptr->field_160->field_0->field_10();
    v4 = ptr->field_f8;
    if (ptr->field_f8)
        ptr->field_f8->field_0->field_10();
    v5 = ptr->field_f0;
    if (ptr->field_f0)
        ptr->field_f0->field_0->field_10();
    v6 = ptr->field_e8;
    if (ptr->field_e8)
        ptr->field_e8->field_0->field_10();
    v7 = ptr->field_e0;
    if (ptr->field_e0)
        ptr->field_e0->field_0->field_10();
    v8 = ptr->field_d8;
    if (ptr->field_d8)
        ptr->field_d8->field_0->field_10();
    v9 = ptr->field_d0;
    if (ptr->field_d0)
        ptr->field_d0->field_0->field_10();
    v10 = ptr->field_c8;
    if (ptr->field_c8)
        ptr->field_c8->field_0->field_10();
    v11 = ptr->field_c0;
    if (ptr->field_c0)
        ptr->field_c0->field_0->field_10();
    v12 = ptr->field_a8;
    if (ptr->field_a8)
        ptr->field_a8->field_0->field_10();
    v13 = ptr->field_78;
    if (ptr->field_78)
    {
        ptr->field_78->field_0->field_10();
    }
    else if (ptr->field_28)
    {
        4296016232();
    }
    else
    {
        return;
    }
}
