/* sub_100005150 @ 0x100005150
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100005150  (57 bytes, 6 basic blocks)
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

extern char g_100007110;

void sub_100005150(unsigned long long a0)
{
    unsigned long v1;  // rcx
    unsigned long long v0;  // [bp+0x8]

    if (a0 == *((long long *)&g_100007110))
    {
        v1 = __ROL__(a0, 16);
        if (!(unsigned short)v1)
            return;
        a0 = __ROR__(v1, 16);
    }
    v0 = a0;
    4296016304();
}
