/* sub_10000204d @ 0x10000204d
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x10000204d  (39 bytes, 3 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 883d9616dfc7586fa88c58013f70e055df9328f3cfc3ef39898c15c6970fb0db
 *   Evidence: analysis/report/rea-evidence/wmplayer_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

void sub_10000204d(void)
{
    unsigned int v4;  // eax
    unsigned long long v5;  // r15
    unsigned int v1;  // [bp+0x58]
    unsigned int v2;  // [bp+0x5c]
    unsigned long long v3;  // [bp+0x68]

    if (v4 != 183)
    {
        v3 = v5;
        v2 = v5;
        v1 = v5;
        4296015976();
    }
    4296016096();
}
