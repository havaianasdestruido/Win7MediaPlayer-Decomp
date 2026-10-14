/* sub_100002c44 @ 0x100002c44
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100002c44  (133 bytes, 6 basic blocks)
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

int sub_100002c44(unsigned long a0, unsigned long long a1, unsigned long long *ptr)
{
    char v0;  // [bp-0xb8]
    unsigned long long *v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x48]

    v2 = g_100007110 ^ &v0;
    v1 = ptr;
    if (a1 && ptr)
    {
        *(ptr) = 0;
        4296016112();
    }
    return sub_100005150(v2 ^ &v0);
}
