/* sub_100003ff0 @ 0x100003ff0
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100003ff0  (138 bytes, 8 basic blocks)
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

extern unsigned long long g_100007110;

int sub_100003ff0(unsigned long long a0, unsigned long a1, unsigned long long *ptr, unsigned long long *p)
{
    char v0;  // [bp-0x278]
    unsigned long long v1;  // [bp-0x28]

    v1 = g_100007110 ^ &v0;
    if (ptr && !((*(ptr) = 0, !p)))
    {
        *(p) = 0;
        if (a0)
            4296016096();
    }
    return sub_100005150(v1 ^ &v0);
}
