/* sub_1000120f4 @ 0x1000120f4
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x1000120f4  (229 bytes, 19 basic blocks)
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
    char padding_0[120];
    struct struct_5 *field_78;
    struct struct_6 *field_80;
} struct_4;

typedef struct struct_9 {
    struct struct_7 *field_0;
} struct_9;

typedef struct struct_7 {
    char padding_0[8];
    struct struct_8 *field_8;
} struct_7;

typedef struct struct_12 {
    struct struct_10 *field_0;
} struct_12;

typedef struct struct_10 {
    char padding_0[8];
    struct struct_11 *field_8;
} struct_10;

typedef struct struct_15 {
    char padding_0[8];
    struct struct_16 *field_8;
} struct_15;

typedef struct struct_13 {
    char padding_0[8];
    struct struct_14 *field_8;
} struct_13;

typedef struct struct_5 {
    struct struct_0 *field_0;
} struct_5;

typedef struct struct_6 {
    struct struct_2 *field_0;
} struct_6;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_16 {
    unsigned long long field_0;
} struct_16;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

unsigned int sub_1000120f4(struct_4 *addr, struct_9 **ptr, struct_12 **p, unsigned long long a3, unsigned long long a4)
{
    unsigned long long flag;  // rdi
    struct_4 *v2;  // rsi
    struct_15 **v3;  // rcx
    struct_13 **v4;  // rcx

    flag = 0;
    v2 = addr;
    if (ptr)
        *(ptr) = NULL;
    if (p)
        *(p) = NULL;
    if (!ptr)
    {
        return 2147500035;
    }
    else if (!p)
    {
        return 2147500035;
    }
    else if (!a3)
    {
        return 2147500035;
    }
    else if (!a4)
    {
        return 2147500035;
    }
    else if (!addr->field_78)
    {
        4295069694();
    }
    else if (!addr->field_80)
    {
        4295069694();
    }
    else
    {
        *(ptr) = addr->field_78;
        v3 = addr->field_78;
        if (addr->field_78)
            addr->field_78->field_0->field_8();
        *(p) = addr->field_80;
        v4 = addr->field_80;
        if (!addr->field_80)
            0x100100300();
        addr->field_80->field_0->field_8();
    }
}
