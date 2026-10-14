/* sub_10000e1f8 @ 0x10000e1f8
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000e1f8  (138 bytes, 14 basic blocks)
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

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[4];
    unsigned short field_c;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

unsigned long long sub_10000e1f8(struct_0 *ptr)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax

    v1 = ptr->field_c;
    if (((char)v1 & 32))
    {
        if (((unsigned short)v1 & 0x1000))
        {
            if (ptr->field_0)
                ptr->field_0->field_0 = 0;
            v2 = sub_10000e79c(ptr, ptr);
            ptr->field_c = ptr->field_c & 61407;
            return v2;
        }
        else
        {
            return v1;
        }
    }
    if (((char)v1 & 16))
    {
        ptr->field_0 = NULL;
        v3 = _INSERT(v1, 0, (unsigned short)v1 & 65519);
        ptr->field_c = v3;
        return v3;
    }
    if (!((char)v1 & 68))
    {
        return sub_10000dfa4();
    }
    else if (ptr->field_0)
    {
        4296017360();
    }
    else
    {
        ptr->field_c = ptr->field_c & 65471;
        return 65471;
    }
}
