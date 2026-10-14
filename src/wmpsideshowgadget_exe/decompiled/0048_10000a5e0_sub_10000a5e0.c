/* sub_10000a5e0 @ 0x10000a5e0
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000a5e0  (199 bytes, 14 basic blocks)
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
    char padding_0[52];
    unsigned int field_34;
    char padding_38[8];
    struct struct_0 *field_40;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_0 *field_10;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_2;

typedef struct struct_3 {
    char padding_0[24];
    struct struct_4 *field_18;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

extern struct_3 *g_10001c100;

void sub_10000a5e0(struct_1 *ptr, unsigned long long a1, struct_2 *cur, unsigned long a3)
{
    unsigned long long v6;  // rbx
    unsigned long long v7;  // rsi
    struct_0 *v17;  // rdi
    struct_3 **v18;  // rcx
    unsigned long long v8;  // rdi
    unsigned long long v9;  // r12
    unsigned long long v10;  // rsi
    unsigned long v11;  // rcx
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v1;  // [bp+0x8]
    unsigned long v2;  // [bp+0x10]
    unsigned long long v3;  // [bp+0x18]
    unsigned long long v4;  // [bp+0x20]

    v1 = v6;
    v2 = vvar_64{r56|8b};
    v3 = v7;
    v4 = v8;
    v0 = v9;
    v10 = a1;
    if (!ptr->field_40)
    {
        v11 = ptr->field_34;
        if (v11)
        {
            if (18446744073709551615 / v11 < 32)
                goto LABEL_10000a656;
            v11 *= 32;
        }
        if (18446744073709551615 - v11 >= 8)
            4296017176();
LABEL_10000a656:
        4295012220();
    }
    else
    {
        v17 = ptr->field_40;
        if (ptr->field_40)
        {
            v18 = &g_10001c100;
            ptr->field_40 = ptr->field_40->field_10;
            g_10001c100->field_18();
        }
        4295012220();
    }
}
