/* sub_10000e740 @ 0x10000e740
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000e740  (210 bytes, 16 basic blocks)
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
    char padding_0[56];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    struct struct_3 *field_8;
    char padding_10[4];
    unsigned int field_14;
    unsigned long long field_18;
    struct struct_0 *field_20;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
    unsigned long long field_8;
} struct_3;

typedef struct struct_0 {
    char padding_0[6];
    unsigned short field_6;
} struct_0;

extern unsigned long long g_10001c138;

int sub_10000e740(struct_0 **a0, unsigned int a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long long *a5, unsigned long long a6)
{
    struct_0 **v5;  // rsi
    struct_2 *cur;  // rbx
    unsigned long v7;  // rdx
    unsigned long v8;  // cc_dep2
    unsigned int v9;  // eax
    unsigned long v10;  // 4131
    unsigned long v11;  // rdi
    char v0;  // [bp-0x78]
    char *v1;  // [bp-0x58], Other Possible Types: unsigned long long
    char v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x30]

    v3 = g_10001c138 ^ &v0;
    v5 = a0;
    cur = "e";
    while (true)
    {
        if (cur->field_0 == 101 && cur->field_14 == a1)
        {
            v7 = cur->field_8->field_0;
            v8 = 1284433310532315729;
            if (cur->field_8->field_0 == 1284433310532315729 && !((v7 = (unsigned long)cur->field_8->field_8, v8 = 12032062737904325553, cur->field_8->field_8 != 12032062737904325553)))
            {
                v9 = 0;
            }
            else
            {
                v10 = _ccall(15, 0, (unsigned long long)(char)(v7 < v8), (unsigned long long)(char)(v7 < v8));
                v9 = -(v7 < v8) + 1 - ((unsigned int)v10 & 1);
            }
            if (!v9)
                break;
        }
        cur += 1;
        if (!cur->field_8)
            return sub_100018f20(v3 ^ &v0);
    }
    v11 = cur->field_20;
    if (cur->field_20)
    {
        v1 = a6;
        sub_10000e5c0(a0, cur->field_18, cur->field_20, a5);
        return sub_100018f20(v3 ^ &v0);
    }
    v1 = &v2;
    *(a0)->field_38();
}
