/* sub_100008fdc @ 0x100008fdc
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100008fdc  (341 bytes, 24 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    char padding_0[32];
    struct struct_0 *field_20;
} struct_2;

typedef struct struct_0 {
    char padding_0[56];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

extern unsigned int g_100011b08;

unsigned long long sub_100008fdc(struct_2 *idx, unsigned short *ptr)
{
    unsigned long flag6;  // r14
    unsigned long v11;  // rdi
    unsigned short *p;  // rcx
    char v13;  // al
    unsigned long v14;  // rdi
    unsigned long long v0;  // [bp-0x68]
    unsigned int v1;  // [bp-0x60]
    unsigned long flag5;  // [bp-0x58]
    unsigned int flag;  // [bp-0x50]
    unsigned short choice;  // [bp-0x4c]
    unsigned long flag7;  // [bp-0x40]
    unsigned int flag2;  // [bp-0x38]
    unsigned short flag3;  // [bp-0x34]

    flag6 = 0;
    flag7 = 0;
    flag2 = 0;
    flag3 = 0;
    if (!g_100011b08)
        sub_10000e010(&flag7); /* do not return */
    flag5 = 0;
    flag = 0;
    choice = 0;
    if (!g_100011b08)
        sub_10000e010(&flag5); /* do not return */
    v11 = flag6;
    if (idx->field_20)
    {
        p = &idx->field_20->field_38->field_0;
        v13 = 0;
        if (p)
            v13 = *(p);
        v11 = flag6;
        if (v13)
        {
            if (p)
                4296016992();
            v11 = flag6;
        }
    }
    v14 = v11;
    if (!ptr)
    {
        sub_10000e1f8(&flag5);
        sub_10000e1f8(&flag7);
        return 0;
    }
    else if (v14)
    {
        v1 = 4294967295;
        v0 = L"video";
        4296016336();
    }
    else
    {
        *(ptr) = 65535;
        sub_10000e1f8(&flag5);
        sub_10000e1f8(&flag7);
        return 0;
    }
}
