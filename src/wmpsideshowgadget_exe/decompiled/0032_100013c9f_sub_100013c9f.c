/* sub_100013c9f @ 0x100013c9f
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100013c9f  (198 bytes, 17 basic blocks)
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

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[8];
    struct struct_5 *field_10;
} struct_3;

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    struct struct_2 *field_10;
} struct_0;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
} struct_6;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

extern unsigned long long g_1000036c0;
extern unsigned long long g_100003800;
extern unsigned long long g_10001c480;
extern unsigned long long g_10001e060;

long long sub_100013c9f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, struct_3 **flag3, struct_0 **a6)
{
    struct_3 **v3;  // r9
    int v4;  // eax
    unsigned long long flag2;  // rcx
    unsigned long v14;  // rdx
    struct_0 **v15;  // rcx
    struct_3 **v5;  // rsi
    char *v6;  // r8
    unsigned long long v7;  // rdx
    struct_0 **v8;  // rcx
    struct_3 **v9;  // rcx
    char *v10;  // r8
    unsigned long long v11;  // rdx
    struct_3 **v12;  // rcx
    unsigned long flag;  // [bp+0x50]
    unsigned long long choice;  // [bp+0x58]

    v3 = flag3;
    if (v4 >= 0)
    {
        if (v3)
        {
            if (a6)
            {
                flag = 0;
                choice = 0;
                v10 = &flag;
                v11 = &g_1000036c0;
                v12 = v3;
                *(v3)->field_0();
            }
LABEL_100013cbb:
            v5 = v3;
            v3 = NULL;
            flag3 = 0;
            if (a6)
            {
                v6 = &flag3;
                v7 = &g_100003800;
                v8 = a6;
                *(a6)->field_0();
            }
            if (v5)
            {
                v9 = v5;
                *(v5)->field_10();
            }
        }
        else if (!(!a6))
        {
            goto LABEL_100013cbb;
        }
    }
    flag2 = 0;
    g_10001c480 = v3;
    v14 = g_10001e060 + 8;
    flag3 = 0;
    if ((!(0 < g_10001e060) & g_10001e060 + 8))
    {
        4295069694();
    }
    else if (a6)
    {
        v15 = a6;
        *(a6)->field_10();
    }
    else
    {
        if (1)
            goto LABEL_0x100013d95;
        else
            goto LABEL_0x100013d8f;
    }
}
