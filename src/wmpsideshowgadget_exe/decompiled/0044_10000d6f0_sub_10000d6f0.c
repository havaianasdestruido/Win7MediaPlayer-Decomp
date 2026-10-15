/* sub_10000d6f0 @ 0x10000d6f0
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000d6f0  (202 bytes, 15 basic blocks)
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

typedef struct struct_13 {
    struct struct_9 *field_0;
    struct struct_14 *field_8;
    unsigned long long field_10;
} struct_13;

typedef struct struct_16 {
    struct struct_15 *field_0;
} struct_16;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
} struct_5;

typedef struct struct_7 {
    char padding_0[16];
    struct struct_8 *field_10;
} struct_7;

typedef struct struct_4 {
    struct struct_2 *field_0;
} struct_4;

typedef struct struct_9 {
    char padding_0[32];
    struct struct_10 *field_20;
} struct_9;

typedef struct struct_14 {
    struct struct_12 *field_0;
} struct_14;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_12 {
    struct struct_11 *field_0;
} struct_12;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

void sub_10000d6f0(struct_13 *ptr, unsigned long long a1, unsigned long a2, unsigned int a3)
{
    unsigned long long v13;  // rbx
    unsigned long long v14;  // rsi
    char *v23;  // rdx
    struct_13 *v24;  // rcx
    struct_7 **v25;  // rcx
    struct_5 **v26;  // rcx
    struct_0 **v27;  // rcx
    unsigned long long v15;  // rdi
    unsigned long long v16;  // r12
    unsigned long long v17;  // r13
    struct_16 **v18;  // rcx
    unsigned long v19;  // rdi
    char *v20;  // r8
    unsigned long long v21;  // rdx
    struct_4 **v22;  // r8
    struct_5 **flag3;  // [bp-0x48]
    unsigned long long choice;  // [bp-0x40]
    struct_0 **flag2;  // [bp-0x38]
    unsigned long flag;  // [bp-0x30]
    struct_7 **flag4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x18]
    unsigned long long v6;  // [bp-0x10]
    unsigned long long v7;  // [bp-0x8]
    unsigned long long v9;  // [bp+0x10]
    unsigned long v10;  // [bp+0x18]
    unsigned long long v11;  // [bp+0x20]

    v9 = v13;
    v10 = vvar_14{r56|8b};
    v11 = v14;
    v7 = v15;
    v6 = v16;
    v5 = v17;
    v18 = ptr->field_8;
    choice = 0;
    flag2 = NULL;
    flag3 = NULL;
    flag4 = NULL;
    v19 = a3;
    if (ptr->field_8)
    {
        if (!ptr->field_10)
        {
            flag = 0;
            v20 = &flag;
            v21 = sub_100002ae0;
            ptr->field_8->field_0->field_0();
        }
        else if (!ptr->field_10)
        {
            v25 = flag4;
            if (flag4)
                *(flag4)->field_10();
            v26 = flag3;
            if (flag3)
                *(flag3)->field_10();
            v27 = flag2;
            if (flag2)
                *(flag2)->field_10();
        }
        else if (!a1)
        {
            flag = 0;
            v22 = &flag2;
            v23 = &flag;
            v24 = ptr;
            ptr->field_0->field_20();
        }
        else
        {
            4296017304();
        }
    }
    4296017320();
}
