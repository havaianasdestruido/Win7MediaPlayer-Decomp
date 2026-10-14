/* sub_7ff33ca9ce4 @ 0x7ff33ca9ce4
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca9ce4  (517 bytes, 41 basic blocks)
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

int sub_7ff33ca9ce4(void)
{
    unsigned int v15;  // eax
    unsigned int v16;  // eax
    unsigned int v17;  // eax
    unsigned short *v18;  // rax
    unsigned long long v19;  // rsi
    unsigned long long v20;  // rbx
    unsigned short *v21;  // rdi
    char v0;  // [bp-0x1b0]
    long long v2;  // [bp+0x20]
    unsigned short *v3;  // [bp+0x100008]
    unsigned int v4;  // [bp+0x100010]
    long long v5;  // [bp+0x100018]
    unsigned long long v6;  // [bp+0x100020]
    unsigned long long v7;  // [bp+0x100028]
    unsigned int v8;  // [bp+0x100030]
    unsigned long v9;  // [bp+0x100038]
    char *v10;  // [bp+0x100048], Other Possible Types: unsigned long long
    unsigned long v11;  // [bp+0x100058]
    unsigned long long v12;  // [bp+0x100060]
    unsigned long long v13;  // [bp+0x100068]
    unsigned int v14;  // [bp+0x100318]

    if (!v15)
    {
        v16 = sub_7ff33ca9944(v5, vvar_21{r56|8b} + 160);
        v4 = v16;
        if (v16 < 0)
            goto LABEL_0x7ff33caa623;
        v17 = sub_7ff33ca9944(v5, v3);
        v4 = v17;
        if (v17 < 0)
            goto LABEL_0x7ff33caa623;
        v18 = v3;
        if (*(v18) == 61)
        {
            if (v8)
            {
                v12 = 0;
                v13 = 0;
                v11 = v9;
                *((char *)&v2) = 0;
                sub_7ff33ca8d8c(v5, vvar_21{r56|8b} + 80, vvar_21{r56|8b} + 160, v18, v2); /* do not return */
            }
            if (v14)
                sub_7ff33ca9888(v5, v18); /* do not return */
            v7 = 0;
            v6 = 0;
            0x7ff33d00300();
        }
        else if (v19)
        {
            8792667325176();
        }
        else if (v20)
        {
            8792667324640();
        }
    }
    else
    {
        if (*(v21))
        {
            if (*(v21) != 92)
            {
                8792667325544();
            }
            else if (v21)
            {
                if (v19)
                {
                    8792667325176();
                }
                else if (v20)
                {
                    8792667324640();
                }
            }
        }
        if (v8)
        {
            v6 = 0;
            0x7ff33d00300();
        }
        else if (!v14)
        {
            v6 = 0;
            0x7ff33d00300();
        }
        else
        {
            if (!v10)
            {
                if ((char)sub_7ff33ca9580(520))
                {
                    v10 = &v0;
                    if (!&v0)
                    {
                        if (v19)
                        {
                            8792667325176();
                        }
                        else if (v20)
                        {
                            8792667324640();
                        }
                    }
                }
                else
                {
                    8792667324632();
                }
            }
            8792667325136();
        }
    }
}
