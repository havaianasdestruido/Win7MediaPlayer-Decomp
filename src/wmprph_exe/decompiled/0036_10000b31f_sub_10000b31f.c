/* sub_10000b31f @ 0x10000b31f
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000b31f  (141 bytes, 15 basic blocks)
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

void sub_10000b31f(void)
{
    int v2;  // eax
    long long v3;  // r14
    char *v4;  // r12
    char v1;  // [bp+0x30]

    if (((char)v2 & 1))
        4296017128();
    v3 = v2 / 2;
    if ((int)v3 <= 0x400 && (char)sub_10000a800(v3))
    {
        v4 = &(&v1)[-1 * sub_10000f300()];
    }
    else if (v3 + 16 < v3)
    {
        v4 = NULL;
    }
    else
    {
        4296017120();
    }
    if (v4)
        4295029296();
    4296017128();
}
