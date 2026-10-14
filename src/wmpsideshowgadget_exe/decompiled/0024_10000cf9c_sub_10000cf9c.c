/* sub_10000cf9c @ 0x10000cf9c
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000cf9c  (218 bytes, 20 basic blocks)
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
} struct_0;

typedef struct struct_7 {
    char padding_0[56];
    struct struct_8 *field_38;
    struct struct_9 *field_40;
} struct_7;

typedef struct struct_12 {
    char padding_0[120];
    struct struct_13 *field_78;
    char padding_80[40];
    struct struct_14 *field_a8;
} struct_12;

typedef struct struct_11 {
    struct struct_10 *field_0;
} struct_11;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_8 {
    struct struct_2 *field_0;
} struct_8;

typedef struct struct_9 {
    struct struct_6 *field_0;
} struct_9;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_2 {
    char padding_0[120];
    struct struct_3 *field_78;
    char padding_80[40];
    struct struct_4 *field_a8;
} struct_2;

typedef struct struct_6 {
    struct struct_5 *field_0;
} struct_6;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

void sub_10000cf9c(struct_7 *ptr, unsigned int flag3, unsigned long a2, unsigned long a3, unsigned int flag2)
{
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rsi
    struct_0 **v19;  // rdx
    struct_11 **v20;  // rcx
    unsigned long long v10;  // rdi
    unsigned long long v11;  // r12
    struct_7 *v12;  // rsi
    unsigned int flag4;  // edx
    struct_12 **v14;  // rcx
    char *v15;  // rdx
    unsigned long choice;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    struct_0 **flag;  // [bp+0x8]
    unsigned long long v5;  // [bp+0x10]
    unsigned long v6;  // [bp+0x18]

    v5 = v8;
    v6 = vvar_29{r56|8b};
    v3 = v9;
    v2 = v10;
    v1 = v11;
    flag = NULL;
    v12 = ptr;
    if (!ptr->field_38)
    {
        v14 = ptr->field_38;
        if (v14)
        {
            if (flag2 == 1)
            {
                choice = 0;
                if (flag)
                {
                    v15 = &choice;
                    *(v14)->field_a8();
                }
            }
            else
            {
                v19 = flag;
                *(v14)->field_78();
            }
        }
        v20 = ptr->field_40;
        ptr->field_40->field_0->field_0();
    }
    else if (flag3)
    {
        flag4 = flag3 - 1;
        if (flag3 == 1)
        {
            4295069694();
        }
        else if (flag4 == 1)
        {
            4295069694();
        }
        else if (flag4 != 2)
        {
            4296017320();
        }
        else
        {
            4295069694();
        }
    }
    else
    {
        4295069694();
    }
}
