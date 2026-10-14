/* sub_1000029c7 @ 0x1000029c7
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x1000029c7  (69 bytes, 6 basic blocks)
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

long long sub_1000029c7(void)
{
    unsigned long v1;  // rax
    unsigned short *v2;  // r13
    unsigned short *v3;  // r15
    unsigned short *v4;  // r12
    unsigned short *v5;  // r13
    unsigned short *v6;  // r12

    if (!((v1 - (char *)v2 ^ v3 - v4) & 18446744073709551614))
    {
        do
        {
        } while (v6 < v3 && (v6 += 2, v5 += 2, *(v6) != *(v5)));
        if (*(v6))
            goto LABEL_0x10000299b;
    }
}
