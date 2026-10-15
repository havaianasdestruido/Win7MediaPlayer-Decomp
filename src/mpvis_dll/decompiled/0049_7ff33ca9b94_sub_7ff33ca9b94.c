/* sub_7ff33ca9b94 @ 0x7ff33ca9b94
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca9b94  (183 bytes, 18 basic blocks)
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

extern char g_7ff33cc6128;

int sub_7ff33ca9b94(void)
{
    unsigned int v6;  // eax
    long long v7;  // rdi
    unsigned int v8;  // eax
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rbx
    unsigned short *v1;  // [bp+0x100008]
    unsigned int v2;  // [bp+0x100010], Other Possible Types: unsigned long
    long long v3;  // [bp+0x100018]
    unsigned int v4;  // [bp+0x100028]
    unsigned int v5;  // [bp+0x100030]

    if (!v6 || v4)
    {
        v8 = sub_7ff33ca9944(v3, v7);
        v2 = v8;
        if (v8 < 0)
            goto LABEL_0x7ff33caa623;
        if (v5)
        {
            memset(vvar_31{r56|8b} + 80, 0, 24);
            if (*(v1))
            {
                if (*(v1) != 92)
                {
                    8792667325544();
                }
                else if (v1)
                {
                    if (v9)
                    {
                        8792667325176();
                    }
                    else if (v10)
                    {
                        8792667324640();
                    }
                }
            }
            v2 = &g_7ff33cc6128;
            8792667325040();
        }
    }
    8792667325040();
}
