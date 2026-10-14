/* sub_100014b48 @ 0x100014b48
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100014b48  (173 bytes, 17 basic blocks)
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

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_2 {
    struct struct_3 *field_0;
    char padding_8[8];
    struct struct_4 *field_10;
} struct_2;

typedef struct struct_8 {
    struct struct_5 *field_0;
} struct_8;

typedef struct struct_5 {
    struct struct_6 *field_0;
    char padding_8[8];
    struct struct_7 *field_10;
} struct_5;

typedef struct struct_9 {
    char padding_0[16];
    struct struct_10 *field_10;
} struct_9;

typedef struct struct_11 {
    char padding_0[16];
    struct struct_12 *field_10;
} struct_11;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

extern unsigned long long g_1000028d8;

int sub_100014b48(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, struct_2 **choice, unsigned long flag2, struct_9 **p, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17)
{
    long long v1;  // rax
    struct_11 *v11;  // rdx
    struct_9 **v12;  // rcx
    int v5;  // edi
    struct_2 **v6;  // rcx
    char *v7;  // r8
    unsigned long long v8;  // rdx
    struct_8 **ptr;  // rsi
    struct_2 **v10;  // rcx

    if (v1)
        sub_10001493c(v1, 0); /* do not return */
    if (v5 >= 0)
    {
        v6 = choice;
        flag2 = 0;
        v7 = &flag2;
        v8 = &g_1000028d8;
        *(choice)->field_0();
    }
    if (ptr)
    {
        if (v5 >= 0)
        {
            v10 = NULL;
            *(ptr) = choice;
            choice = 0;
            goto LABEL_100014c54;
        }
        else
        {
            *(ptr) = NULL;
        }
    }
    v10 = choice;
LABEL_100014c54:
    if (p)
    {
        v11 = *(p);
        v12 = p;
        *(p)->field_10();
    }
    else if (v10)
    {
        *(v10)->field_10();
    }
    else
    {
        return v5;
    }
}
