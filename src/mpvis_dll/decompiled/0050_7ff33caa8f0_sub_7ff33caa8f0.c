/* sub_7ff33caa8f0 @ 0x7ff33caa8f0
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33caa8f0  (180 bytes, 18 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

int sub_7ff33caa8f0(void)
{
    unsigned int v2;  // eax
    char *v3;  // r13
    unsigned long v4;  // rdi
    char *v5;  // rsi
    char v1;  // [bp+0x30]

    if (v3[v2])
    {
        v4 = v2 + 1;
        if ((unsigned int)v4 <= 0x400 && (char)sub_7ff33ca9580(v4 & 4294967295))
        {
            v5 = &(&v1)[-1 * sub_7ff33cc1480()];
        }
        else
        {
            if (v4 + 16 < (v4 & 4294967295))
                v5 = NULL;
            else
                8792667324632();
        }
        if (v5)
            8792667066888();
    }
    else if (!v3)
    {
        8792667324632();
    }
    else
    {
        8792667324768();
    }
}
