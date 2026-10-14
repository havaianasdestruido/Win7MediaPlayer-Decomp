/* sub_10000d3ec @ 0x10000d3ec
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000d3ec  (266 bytes, 27 basic blocks)
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

typedef struct struct_10 {
    char padding_0[16];
    struct struct_11 *field_10;
} struct_10;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
    char padding_18[56];
    struct struct_7 *field_50;
    struct struct_8 *field_58;
    struct struct_9 *field_60;
} struct_5;

typedef struct struct_12 {
    char padding_0[16];
    struct struct_13 *field_10;
    char padding_18[48];
    struct struct_14 *field_48;
} struct_12;

typedef struct struct_15 {
    char padding_0[16];
    struct struct_16 *field_10;
    char padding_18[48];
    struct struct_17 *field_48;
} struct_15;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

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

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_16 {
    unsigned long long field_0;
} struct_16;

typedef struct struct_17 {
    unsigned long long field_0;
} struct_17;

long long sub_10000d3ec(unsigned long a0, struct_10 **a1, unsigned long a2, unsigned long a3, struct_5 **a4, struct_12 **a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, struct_3 **a11, unsigned long a12, unsigned long a13, struct_10 **a14)
{
    unsigned int v2;  // eax
    unsigned int v3;  // ebx
    unsigned int choice;  // edi
    unsigned long long v13;  // rdi
    unsigned long v14;  // r8
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdx
    unsigned long v17;  // r8
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdx
    unsigned long v20;  // r8
    unsigned long long v21;  // rsi
    struct_0 **v4;  // rcx
    unsigned long long v22;  // rdx
    struct_15 *v23;  // r9
    char *v24;  // r8
    unsigned long long v25;  // rsi
    unsigned long long v26;  // rdx
    struct_12 **v27;  // rcx
    struct_5 **v28;  // rcx
    struct_10 **v29;  // rcx
    struct_12 **v30;  // rcx
    unsigned long v5;  // rdx
    struct_3 **v6;  // rcx
    struct_0 **v7;  // rcx
    struct_10 **v8;  // rdx
    struct_5 **v9;  // rcx
    struct_12 **ptr;  // rax
    unsigned long v11;  // rdi
    struct_0 **flag;  // [bp+0x20], Other Possible Types: unsigned long

    v3 = v2;
    if (!v2)
    {
        v4 = flag;
        v5 = &a4;
        *(flag)->field_28();
    }
    v6 = a11;
    if (a11)
        *(a11)->field_10();
    v7 = flag;
    if (flag)
        *(flag)->field_10();
    v8 = a1;
    if (!v3)
    {
        v9 = a4;
        if (v9)
        {
            ptr = a5;
            if (ptr)
            {
                if ((unsigned int)v11)
                {
                    choice = (unsigned int)v11 - 1;
                    if ((unsigned int)v11 == 1)
                    {
                        v20 = &a14;
                        v22 = v21;
                        *(v9)->field_58();
                    }
                    v13 = choice - 1;
                    if (choice == 1)
                    {
                        v17 = &a14;
                        v19 = v18;
                        *(v9)->field_60();
                    }
                    else if ((unsigned int)v13 == 1)
                    {
                        v14 = &a14;
                        v16 = v15;
                        *(v9)->field_50();
                    }
                }
                else
                {
                    flag = 0;
                    v23 = *(ptr);
                    v24 = &flag;
                    v26 = v25;
                    v27 = ptr;
                    *(ptr)->field_48();
                }
            }
        }
        if (!a14)
            goto LABEL_0x10000d52c;
        v3 = sub_10000d57c(vvar_45{r56|8b});
        v8 = a14;
        if (!v3)
            goto LABEL_0x10000d52c;
        else
            goto LABEL_10000d535;
    }
LABEL_10000d535:
    v28 = a4;
    if (a4)
        *(a4)->field_10();
    v29 = a14;
    if (a14)
        *(a14)->field_10();
    v30 = a5;
    if (!a5)
        return v3;
    *(a5)->field_10();
}
