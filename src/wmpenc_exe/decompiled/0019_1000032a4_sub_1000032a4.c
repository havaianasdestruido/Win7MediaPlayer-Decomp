/* sub_1000032a4 @ 0x1000032a4
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x1000032a4  (95 bytes, 13 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a
 *   Evidence: analysis/report/rea-evidence/wmpenc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

long long sub_1000032a4(void)
{
    int v4;  // eax
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rbx
    unsigned short *v1;  // [bp+0x100008]
    int v2;  // [bp+0x100010]
    unsigned int v3;  // [bp+0x100030]

    v2 = v4;
    if (v4 >= 0)
    {
        if (v3 && *(v1) == 123)
            4296016112();
        if (*(v1) == 125)
            goto LABEL_0x10000337b;
    }
    else if (v5)
    {
        4296015920();
    }
    else
    {
        if (!v6)
            goto LABEL_0x1000033a6;
        4296016408();
    }
}
