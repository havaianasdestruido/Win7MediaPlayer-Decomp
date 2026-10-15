/* sub_10000adc2 @ 0x10000adc2
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000adc2  (177 bytes, 18 basic blocks)
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

long long sub_10000adc2(void)
{
    unsigned int v2;  // eax
    char *v3;  // r13
    char v4;  // bl
    unsigned long v5;  // rdi
    char *v6;  // r12
    char v1;  // [bp+0x30]

    if (v3[v2] != v4)
    {
        v5 = v2 + 1;
        if ((unsigned int)v5 <= 0x400 && (char)sub_10000a800(v5 & 4294967295))
        {
            v6 = &(&v1)[-1 * sub_10000f300()];
        }
        else
        {
            if (v5 + 16 < (v5 & 4294967295))
                v6 = NULL;
            else
                4296017120();
        }
        if (v6)
            4295029320();
    }
    else if (v3)
    {
        4296016024();
    }
    else
    {
        4296017120();
    }
}
