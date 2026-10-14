/* sub_100003c5f @ 0x100003c5f
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100003c5f  (91 bytes, 8 basic blocks)
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

void sub_100003c5f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, int a6)
{
    int v2;  // eax
    int v3;  // r12d
    int v4;  // ebx
    int v1;  // [bp+0x20], Other Possible Types: unsigned int

    if (v2 < v3)
    {
        if (a6 <= v3)
            goto LABEL_0x100003d18;
        4296016552();
    }
    if (v4 != v3)
        v1 = 1;
    else
        v1 = v3;
    sub_100002134(); /* do not return */
}
