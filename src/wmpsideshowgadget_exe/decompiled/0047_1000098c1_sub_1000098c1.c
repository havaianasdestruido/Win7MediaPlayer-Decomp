/* sub_1000098c1 @ 0x1000098c1
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x1000098c1  (201 bytes, 14 basic blocks)
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

typedef struct struct_4 {
    char padding_0[56];
    struct struct_5 *field_38;
} struct_4;

typedef struct struct_2 {
    char padding_0[96];
    struct struct_3 *field_60;
} struct_2;

typedef struct struct_6 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_6;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_5 {
    struct struct_2 *field_0;
} struct_5;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern long long g_1000019b8;
extern struct_6 *g_10001c260;

long long sub_1000098c1(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, struct_0 **a6)
{
    struct_0 **v8;  // rcx
    int v9;  // eax
    struct_0 **v10;  // r14
    char *v11;  // r9
    char *v12;  // r8
    struct_4 *ptr;  // rax
    struct_2 **v14;  // rcx
    unsigned long v15;  // rdx
    struct_6 **v16;  // rdx
    char v1;  // [bp+0x40]
    char v2;  // [bp+0x48]
    char v3;  // [bp+0x60]
    char v4;  // [bp+0x68]
    char v5;  // [bp+0x70]
    int v6;  // [bp+0x4a0]
    struct_4 *v7;  // [bp+0x100018]

    v8 = a6;
    if (v9 >= (unsigned int)v10 && a6 != v10)
    {
        v11 = &v3;
        v12 = &v5;
        if ((int)sub_10000bb58(v7, &v4, &v5, &v3, &v1) >= (unsigned int)v10)
        {
            ptr = v7;
            v14 = ptr->field_38;
            if (ptr->field_38 != v10 && &v2 != v10)
            {
                v15 = &vvar_32{r128|8b};
                ptr->field_38->field_0->field_60();
            }
        }
        v6 = (unsigned int)v10;
        4295069866();
    }
    v16 = &g_10001c260;
    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 8))
        sub_1000041c8(g_10001c260->field_10, 36, &g_1000019b8); /* do not return */
    if (a6 == v10)
        4296017320();
    *(a6)->field_10();
}
