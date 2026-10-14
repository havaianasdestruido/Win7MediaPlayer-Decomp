/* sub_100001c38 @ 0x100001c38
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100001c38  (104 bytes, 9 basic blocks)
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

char sub_100001c38(unsigned long long a0)
{
    unsigned long long v2;  // rdx
    int <0x100001c38[is_1]|Stack bp-0x18, 1 B>;  // [bp-0x18]
    unsigned long v0;  // [bp-0x18]

    v0 = g_100007110 ^ &<0x100001c38[is_1]|Stack bp-0x18, 1 B>;
    v2 = a0 + 0x2000;
    return sub_100005150(v0 ^ &v0);
}
