/* sub_10000bfe3 @ 0x10000bfe3
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000bfe3  (171 bytes, 12 basic blocks)
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

long long sub_10000bfe3(void)
{
    unsigned int v8;  // eax
    unsigned long long v9;  // rsi
    unsigned short *ptr;  // rdi
    unsigned long v11;  // 4113
    unsigned int v12;  // eax
    long long v1;  // [bp+0x20]
    unsigned short *v2;  // [bp+0x100008]
    unsigned int v3;  // [bp+0x100010]
    unsigned long v4;  // [bp+0x100018]
    unsigned long v5;  // [bp+0x100020], Other Possible Types: unsigned long long
    char v6;  // [bp+0x100040]
    unsigned long v7;  // [bp+0x100078]

    if (!v8)
    {
        if (v9)
            4296015960();
        v7 = v5;
        v11 = *(ptr);
        v6 = 0;
        if ((unsigned short)v11 != 76 && *(ptr) != 108)
        {
            v12 = sub_10000af88(v4, ptr);
            v3 = v12;
            if (v12 < 0)
                goto LABEL_0x10000bf43;
            if (*(v2) != 61)
                goto LABEL_0x10000c4ff;
            *((char *)&v1) = *((int *)&v6);
            sub_10000b110(v4, vvar_18{r56|8b} + 112, 0, v2, v1); /* do not return */
        }
        4296016192();
    }
    v5 = 0;
    4296015936();
}
