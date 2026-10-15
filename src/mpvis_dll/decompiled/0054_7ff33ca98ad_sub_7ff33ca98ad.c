/* sub_7ff33ca98ad @ 0x7ff33ca98ad
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca98ad  (136 bytes, 17 basic blocks)
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

typedef struct struct_0 {
    unsigned short field_0;
} struct_0;

int sub_7ff33ca98ad(void)
{
    unsigned long long v1;  // rax
    unsigned short *v2;  // rsi
    struct_0 **v3;  // rdi
    unsigned int v4;  // eax

    if (!v1)
        return;
    if (*(v2) != 61)
    {
LABEL_7ff33ca991a:
    }
    else if ((int)sub_7ff33ca9944(v3) >= 0)
    {
        v4 = *(v3)->field_0;
        if (v4 >= 9 && (v4 <= 10 || v4 == 13 || v4 == 32))
            8792667325544();
        if ((int)sub_7ff33ca9944(v3) >= 0 && (int)sub_7ff33ca9944(v3) >= 0)
            goto LABEL_7ff33ca991a;
    }
    8792667324640();
}
