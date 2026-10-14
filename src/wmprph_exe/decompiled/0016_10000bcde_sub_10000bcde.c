/* sub_10000bcde @ 0x10000bcde
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000bcde  (216 bytes, 24 basic blocks)
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

extern char g_100011130;

int sub_10000bcde(void)
{
    unsigned int v6;  // eax
    long long v7;  // rdi
    unsigned int v8;  // eax
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rbx
    unsigned long long v12;  // rbx
    unsigned short *v1;  // [bp+0x100008]
    unsigned int v2;  // [bp+0x100010], Other Possible Types: unsigned long
    long long v3;  // [bp+0x100018]
    unsigned int v4;  // [bp+0x100028]
    unsigned int v5;  // [bp+0x100030]

    if (!v6 || v4)
    {
        v8 = sub_10000af88(v3, v7);
        v2 = v8;
        if (v8 >= 0)
        {
            if (v5)
            {
                memset(vvar_31{r56|8b} + 80, 0, 24);
                if (*(v1))
                {
                    if (*(v1) != 92)
                    {
                        4296016648();
                    }
                    else if (v1)
                    {
                        if (v9)
                        {
                            4296015960();
                        }
                        else if (v10)
                        {
                            4296017128();
                        }
                    }
                }
                v2 = &g_100011130;
                4296016192();
            }
        }
        else
        {
            if (v9)
                4296015960();
            if (!v12)
                goto LABEL_0x10000bf6e;
            4296017128();
        }
    }
    4296016192();
}
