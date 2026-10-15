/* sub_10000af88 @ 0x10000af88
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000af88  (172 bytes, 18 basic blocks)
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
    unsigned short field_0;
} struct_0;

unsigned int sub_10000af88(struct_0 **ptr, unsigned short *p)
{
    unsigned short *addr;  // rcx
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    addr = &*(ptr)->field_0;
    v2 = *(addr);
    if (v2 >= 9 && (v2 <= 10 || v2 == 13 || v2 == 32))
        4296016648();
    if (!*(addr))
    {
        return 2147614729;
    }
    else if (*(addr) == 39)
    {
        4296016648();
    }
    else
    {
        v3 = *(ptr)->field_0;
        if (v3 >= 9 && (v3 <= 10 || v3 == 13 || v3 == 32))
        {
            *(p) = 0;
            return 0;
        }
        4296016648();
    }
}
