/* sub_1000034c7 @ 0x1000034c7
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x1000034c7  (77 bytes, 8 basic blocks)
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

long long sub_1000034c7(void)
{
    unsigned int v3;  // eax
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rsi
    unsigned long long v6;  // rbx
    unsigned long long v1;  // [bp+0x100020]
    unsigned long long v2;  // [bp+0x100078]

    if (!v3)
    {
        if (v4)
            4296015920();
        v5 = v1;
        v2 = v5;
        if (1)
            goto LABEL_0x1000034f3;
        else
            goto LABEL_100003a4b;
    }
LABEL_100003a4b:
    if (!v5)
    {
        if (!v6)
            goto LABEL_0x1000039bf;
        4296016408();
    }
    4296015920();
}
