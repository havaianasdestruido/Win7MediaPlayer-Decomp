/* sub_10000b775 @ 0x10000b775
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000b775  (136 bytes, 17 basic blocks)
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

unsigned int sub_10000b775(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7)
{
    unsigned short *v1;  // rax
    unsigned short *v2;  // rsi
    struct_0 **v3;  // rdi
    unsigned int v4;  // eax

    if (!v1)
        return 2147942414;
    if (*(v2) != 61)
    {
LABEL_10000b7e2:
    }
    else if (sub_10000af88(v3, v2) >= 0)
    {
        v4 = *(v3)->field_0;
        if (v4 >= 9 && (v4 <= 10 || v4 == 13 || v4 == 32))
            4296016648();
        if (sub_10000af88(v3, v1) >= 0 && sub_10000af88(v3, v2) >= 0)
            goto LABEL_10000b7e2;
    }
    4296017128();
}
