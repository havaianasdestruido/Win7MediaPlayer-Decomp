/* sub_100004588 @ 0x100004588
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100004588  (80 bytes, 10 basic blocks)
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

int sub_100004588(unsigned short *a0, unsigned long long a1)
{
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdi
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v1;  // [bp+0x8]
    unsigned long long v2;  // [bp+0x10]

    v1 = v3;
    v2 = v4;
    v0 = v5;
    if (a0 && *(a0))
    {
        if (a1 && *((short *)a1))
        {
            if (*(a0) != *((short *)a1))
                4296016320();
            4296016320();
        }
        4296016320();
    }
    return sub_1000045ea();
}
