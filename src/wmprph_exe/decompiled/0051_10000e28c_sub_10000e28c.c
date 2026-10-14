/* sub_10000e28c @ 0x10000e28c
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000e28c  (161 bytes, 12 basic blocks)
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
    char padding_0[8];
    unsigned int field_8;
    char field_c;
} struct_0;

int sub_10000e28c(struct_0 *ptr, unsigned long long a1, unsigned long long a2)
{
    int v2;  // ebx

    if (a1 && a2)
    {
        if ((ptr->field_c & 32))
        {
            v2 = 0;
            if (!ptr->field_8 || ptr->field_8 > 2147483647)
                v2 = -2147024809;
            if (v2 < 0)
                return v2;
            4296016976();
        }
        else
        {
            sub_10000e828(); /* do not return */
        }
    }
    return -2147024809;
}
