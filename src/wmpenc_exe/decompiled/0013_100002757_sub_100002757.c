/* sub_100002757 @ 0x100002757
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100002757  (141 bytes, 15 basic blocks)
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

void sub_100002757(void)
{
    int v2;  // eax
    long long v3;  // r14
    char *v4;  // r12
    char v1;  // [bp+0x30]

    if (((char)v2 & 1))
        4296016408();
    v3 = v2 / 2;
    if ((int)v3 <= 0x400 && (char)sub_100001c38(v3))
    {
        v4 = &(&v1)[-1 * sub_100005700()];
    }
    else if (v3 + 16 < v3)
    {
        v4 = NULL;
    }
    else
    {
        4296016400();
    }
    if (v4)
        4294989360();
    4296016408();
}
