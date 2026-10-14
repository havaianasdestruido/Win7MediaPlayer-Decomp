/* sub_10000734f @ 0x10000734f
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000734f  (197 bytes, 13 basic blocks)
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

typedef struct struct_4 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_4;

extern long long g_1000019b8;
extern struct_4 *g_10001c260;

long long sub_10000734f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, struct_2 **a7, unsigned long a8, struct_0 **a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, long long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned int a27)
{
    long long ptr[15];  // rsi
    unsigned int v3;  // eax
    long long v4;  // r8
    long long v5[15];  // r9
    unsigned long v6;  // rdx
    unsigned int v7;  // eax
    struct_0 **v8;  // rcx
    struct_2 **v9;  // rcx
    unsigned int v10;  // ebx
    long long v1;  // [bp+0x20]

    v3 = sub_100006ed4(ptr);
    v4 = ptr[14];
    v5 = ptr + 1;
    v6 = v3;
    *((unsigned int *)&a4) = 25;
    *((unsigned int *)&v1) = v7 * 25;
    if (sub_10000bf60(ptr[12], v3, ptr[14], ptr + 1, v1, a4) >= 0)
    {
        v8 = a9;
        a12 = a9;
        if (a9)
            *(a9)->field_8();
        v9 = a7;
        a13 = a7;
        if (!a7)
        {
            *((unsigned int *)&v1) = a27;
            sub_10000917c(ptr, &a13, &a12, a15, v1); /* do not return */
        }
        *(a7)->field_8();
    }
    else
    {
        if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 4))
            sub_1000041ec(g_10001c260->field_10, 21, &g_1000019b8, v10); /* do not return */
        0x100100600();
    }
}
