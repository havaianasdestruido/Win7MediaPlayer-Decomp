/* sub_10000cf8c @ 0x10000cf8c
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000cf8c  (143 bytes, 13 basic blocks)
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
    char padding_0[16];
    struct struct_0 *field_10;
    char padding_18[1];
    char field_19;
    char field_1a;
    char padding_1b[1];
    unsigned int field_1c;
} struct_0;

unsigned int sub_10000cf8c(unsigned int a0, struct_0 *a1, unsigned int *ptr, unsigned long a3)
{
    struct_0 *cur;  // rbx

    *(ptr) = 0;
    cur = a1;
    if (a0 != 4)
    {
        if (a0 != 5)
            return 87;
        if ((cur->field_1a & 1) && cur->field_10)
        {
            memset(cur->field_10, 0, 16);
        }
        else
        {
            if ((cur->field_1a & 2) && cur->field_10)
                cur = cur->field_10;
LABEL_10000d018:
            cur->field_10 = NULL;
            cur->field_19 = 0;
            cur->field_1c = 0;
            goto LABEL_10000d018;
        }
        return 0;
    }
    4296015904();
}
