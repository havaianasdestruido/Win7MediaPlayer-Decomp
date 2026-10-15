/* sub_10000cdf8 @ 0x10000cdf8
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000cdf8  (256 bytes, 26 basic blocks)
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
    char padding_18[16];
    struct struct_2 *field_28;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
    char padding_18[56];
    struct struct_7 *field_50;
    struct struct_8 *field_58;
    struct struct_9 *field_60;
} struct_5;

typedef struct struct_10 {
    char padding_0[16];
    struct struct_11 *field_10;
    char padding_18[48];
    struct struct_12 *field_48;
} struct_10;

typedef struct struct_15 {
    char padding_0[16];
    struct struct_16 *field_10;
} struct_15;

typedef struct struct_13 {
    char padding_0[176];
    struct struct_14 *field_b0;
} struct_13;

typedef struct struct_17 {
    char padding_0[176];
    struct struct_18 *field_b0;
} struct_17;

typedef struct struct_19 {
    char padding_0[16];
    struct struct_20 *field_10;
} struct_19;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_16 {
    unsigned long long field_0;
} struct_16;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_18 {
    unsigned long long field_0;
} struct_18;

typedef struct struct_20 {
    unsigned long long field_0;
} struct_20;

long long sub_10000cdf8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, struct_0 **flag, struct_10 **a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, struct_3 **a11, unsigned long a12, unsigned long a13, struct_15 **ptr)
{
    unsigned int v3;  // eax
    struct_0 **v4;  // rcx
    unsigned long long v13;  // rdx
    unsigned long v14;  // r8
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdx
    unsigned long v17;  // r8
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdx
    struct_10 **v20;  // rcx
    char *v21;  // r8
    unsigned long long v22;  // rsi
    char *v5;  // rdx
    unsigned long long v23;  // rdx
    struct_13 **v24;  // rcx
    struct_15 **v25;  // rdx
    struct_17 *v26;  // r8
    struct_19 *v27;  // rdx
    struct_15 **v28;  // rcx
    struct_10 **v29;  // rcx
    struct_3 **v6;  // rcx
    struct_0 **v7;  // rcx
    unsigned long v8;  // rdi
    unsigned int choice;  // edi
    unsigned long v10;  // rdi
    unsigned long v11;  // r8
    unsigned long long v12;  // rsi
    struct_5 **v1;  // [bp+0x20], Other Possible Types: char
    struct_13 **p;  // [bp+0x100040]

    if (!v3)
    {
        v4 = flag;
        v5 = &v1;
        *(flag)->field_28();
    }
    v6 = a11;
    if (a11)
        *(a11)->field_10();
    v7 = flag;
    if (flag)
        *(flag)->field_10();
    if (!v3)
    {
        v1 = (struct_5 **)v1;
        if (v1 && a5)
        {
            if ((unsigned int)v8)
            {
                choice = (unsigned int)v8 - 1;
                if ((unsigned int)v8 == 1)
                {
                    v17 = &ptr;
                    v19 = v18;
                    *(v1)->field_58();
                }
                v10 = choice - 1;
                if (choice == 1)
                {
                    v14 = &ptr;
                    v16 = v15;
                    *(v1)->field_60();
                }
                else if ((unsigned int)v10 == 1)
                {
                    v11 = &ptr;
                    v13 = v12;
                    *(v1)->field_50();
                }
            }
            else
            {
                v20 = a5;
                flag = 0;
                v21 = &flag;
                v23 = v22;
                *(a5)->field_48();
            }
        }
        if (ptr)
        {
            v24 = p;
            v25 = ptr;
            v26 = *(p);
            *(p)->field_b0();
        }
    }
    if (v1)
    {
        *(v1)->field_10();
    }
    else if (ptr)
    {
        v27 = *(ptr);
        v28 = ptr;
        *(ptr)->field_10();
    }
    else
    {
        v29 = a5;
        if (!a5)
            goto LABEL_0x10000cf85;
        *(a5)->field_10();
    }
}
