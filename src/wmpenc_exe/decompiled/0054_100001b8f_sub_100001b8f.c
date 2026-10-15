/* sub_100001b8f @ 0x100001b8f
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100001b8f  (72 bytes, 6 basic blocks)
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

int sub_100001b8f(void)
{
    unsigned long long v4;  // rax
    unsigned long v5;  // rdi
    unsigned long v1;  // [bp+0x100010]
    unsigned int v2;  // [bp+0x100030]
    unsigned int v3;  // [bp+0x100034]

    if (!v4)
        goto LABEL_0x100001b31;
    if (!(v2 >> 12 & 1))
        goto LABEL_0x100001b7c;
    if (!((char)(v3 >> 8) & 1))
    {
        if (v5 < v1)
            goto LABEL_0x100001b31;
        0x100100100();
    }
}
