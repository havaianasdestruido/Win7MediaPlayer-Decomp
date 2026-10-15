/* sub_100003810 @ 0x100003810
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100003810  (209 bytes, 19 basic blocks)
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

unsigned int sub_100003810(unsigned short *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x58]

    if (!*(a0))
        return 0;
    if ((*(a0) == 77 || *(a0) == 109) && (a0[1] == 83 || a0[1] == 115) && (a0[2] == 72 || a0[2] == 104) && (a0[3] == 84 || a0[3] == 116) && (a0[4] == 77 || a0[4] == 109) && (a0[5] == 76 || a0[5] == 108) && a0[6] == 58)
    {
        v0 = a1;
        4296017200();
    }
    4296016280();
}
