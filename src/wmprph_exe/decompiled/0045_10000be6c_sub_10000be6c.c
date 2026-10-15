/* sub_10000be6c @ 0x10000be6c
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000be6c  (95 bytes, 13 basic blocks)
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

long long sub_10000be6c(void)
{
    int v4;  // eax
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rbx
    unsigned short *v1;  // [bp+0x100008]
    int v2;  // [bp+0x100010]
    unsigned int v3;  // [bp+0x100030]

    v2 = v4;
    if (v4 >= 0)
    {
        if (v3 && *(v1) == 123)
            4296016280();
        if (*(v1) == 125)
            goto LABEL_0x10000bf43;
    }
    else if (v5)
    {
        4296015960();
    }
    else
    {
        if (!v6)
            goto LABEL_0x10000bf6e;
        4296017128();
    }
}
