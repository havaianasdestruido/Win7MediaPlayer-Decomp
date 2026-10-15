/* sub_10000919a @ 0x10000919a
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000919a  (173 bytes, 17 basic blocks)
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

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_8 {
    struct struct_6 *field_0;
} struct_8;

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
} struct_6;

typedef struct struct_5 {
    struct struct_3 *field_0;
} struct_5;

typedef struct struct_11 {
    struct struct_9 *field_0;
} struct_11;

typedef struct struct_12 {
    char padding_0[88];
    struct struct_13 *field_58;
} struct_12;

typedef struct struct_16 {
    struct struct_14 *field_0;
} struct_16;

typedef struct struct_14 {
    char padding_0[8];
    struct struct_15 *field_8;
} struct_14;

typedef struct struct_22 {
    struct struct_20 *field_0;
} struct_22;

typedef struct struct_20 {
    char padding_0[8];
    struct struct_21 *field_8;
} struct_20;

typedef struct struct_19 {
    struct struct_17 *field_0;
} struct_19;

typedef struct struct_25 {
    struct struct_23 *field_0;
} struct_25;

typedef struct struct_26 {
    char padding_0[96];
    struct struct_27 *field_60;
} struct_26;

typedef struct struct_30 {
    struct struct_28 *field_0;
} struct_30;

typedef struct struct_28 {
    char padding_0[16];
    struct struct_29 *field_10;
} struct_28;

typedef struct struct_33 {
    struct struct_31 *field_0;
} struct_33;

typedef struct struct_31 {
    char padding_0[16];
    struct struct_32 *field_10;
} struct_31;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_9 {
    char padding_0[8];
    struct struct_10 *field_8;
} struct_9;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_21 {
    unsigned long long field_0;
} struct_21;

typedef struct struct_17 {
    char padding_0[8];
    struct struct_18 *field_8;
} struct_17;

typedef struct struct_23 {
    char padding_0[8];
    struct struct_24 *field_8;
} struct_23;

typedef struct struct_27 {
    unsigned long long field_0;
} struct_27;

typedef struct struct_29 {
    unsigned long long field_0;
} struct_29;

typedef struct struct_32 {
    unsigned long long field_0;
} struct_32;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_18 {
    unsigned long long field_0;
} struct_18;

typedef struct struct_24 {
    unsigned long long field_0;
} struct_24;

long long sub_10000919a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned int a11)
{
    unsigned int v1;  // eax
    struct_2 **ptr;  // rdi
    struct_16 **p;  // rdi
    struct_14 **v12;  // rcx
    struct_22 **addr;  // rbx
    struct_20 **v14;  // rcx
    struct_19 **v15;  // r8
    struct_25 **v16;  // rdx
    struct_26 **v17;  // rsi
    struct_26 **v18;  // rcx
    struct_30 **ptr3;  // rbx
    struct_28 **v20;  // rcx
    struct_0 **ptr4;  // rcx
    struct_33 **ptr5;  // rdi
    struct_31 **v22;  // rcx
    struct_0 *v4;  // rdx
    struct_8 **ptr6;  // rbx
    struct_6 **v6;  // rcx
    struct_5 **v7;  // r8
    struct_11 **v8;  // rdx
    struct_12 **v9;  // rsi
    struct_12 **v10;  // rcx

    if (v1)
    {
        ptr4 = *(ptr);
        a7 = ptr4;
        if (ptr4)
        {
            v4 = *(ptr4);
            *(ptr4)->field_8();
        }
        v6 = *(ptr6);
        a8 = v6;
        if (!v6)
        {
            v7 = &a7;
            v8 = &a8;
            v10 = v9;
            *(v9)->field_58();
        }
        *(v6)->field_8();
    }
    else if ((v1 + 1) * 25 < a11)
    {
        v12 = *(p);
        a7 = v12;
        if (v12)
            *(v12)->field_8();
        v14 = *(addr);
        a8 = v14;
        if (!v14)
        {
            v15 = &a7;
            v16 = &a8;
            v18 = v17;
            *(v17)->field_60();
        }
        *(v14)->field_8();
    }
    else
    {
        v20 = *(ptr3);
        if (*(ptr3))
            *(ptr3)->field_0->field_10();
        v22 = *(ptr5);
        if (!*(ptr5))
            return (v1 + 1) * 25;
        *(ptr5)->field_0->field_10();
    }
}
