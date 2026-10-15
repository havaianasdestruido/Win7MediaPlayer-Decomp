/* sub_10000e32b @ 0x10000e32b
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000e32b  (115 bytes, 12 basic blocks)
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

void sub_10000e32b(void)
{
    unsigned int v2;  // eax
    unsigned long v3;  // rbp
    long long v4;  // rdi
    unsigned long v5;  // r14
    unsigned int v6;  // ebx
    unsigned long v1;  // [bp+0x58]

    v3 = v2 + 1;
    if (v2 >= (unsigned int)v3)
        goto LABEL_0x10000e3e1;
    if (v2 < 1)
        goto LABEL_0x10000e31a;
    v1 = sub_10000e6f0(v4, v3 & 4294967295);
    if (v1 != v5)
    {
        v6 = v5;
        if (v3 == v5 || v3 > 2147483647)
            v6 = 2147942487;
        if (v6 >= (unsigned int)v5)
            4296016976();
        sub_10000e79c(v4, &v1);
    }
}
