/* sub_100017914 @ 0x100017914
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100017914  (274 bytes, 18 basic blocks)
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

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[12];
    struct struct_2 *field_10;
    unsigned int field_18;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
    unsigned long long field_8;
    char padding_10[16];
    unsigned long long field_20;
    char padding_28[8];
    unsigned int field_30;
    unsigned int field_34;
    char padding_38[8];
    struct struct_0 *field_40;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[12];
    struct struct_0 *field_10;
    unsigned int field_18;
} struct_0;

struct_2 * sub_100017914(struct_1 *ptr, unsigned int a1, unsigned int a2, unsigned int a3)
{
    unsigned long pos;  // rbp
    unsigned long v2;  // rcx
    struct_0 *p;  // rdi

    pos = a2;
    if (!ptr->field_40)
    {
        v2 = ptr->field_34;
        if (v2)
        {
            if (18446744073709551615 / v2 >= 32)
                v2 *= 32;
            else
                4295012220();
        }
        if (18446744073709551615 - v2 < 8)
            4295012220();
        4296017176();
    }
    else
    {
        p = ptr->field_40;
        if (!p)
            4295012220();
        ptr->field_40 = p->field_10;
        p->field_0 = a1;
        p->field_18 = a3;
        ptr->field_8 = ptr->field_8 + 1;
        p->field_10 = *((long long *)(ptr->field_0 + pos * 8));
        *((struct_0 **)(ptr->field_0 + pos * 8)) = p;
        if (ptr->field_8 <= ptr->field_20)
            return p;
        if (ptr->field_30)
            return p;
        sub_100017820(ptr, sub_100017714(ptr) & 4294967295);
        return p;
    }
}
