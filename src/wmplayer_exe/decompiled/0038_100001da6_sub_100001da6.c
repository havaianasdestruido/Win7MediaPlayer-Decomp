/* sub_100001da6 @ 0x100001da6
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001da6  (66 bytes, 3 basic blocks)
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

void sub_100001da6(void)
{
    unsigned short *v3;  // rax
    unsigned short *v4;  // r15
    char v1;  // [bp+0x50]
    unsigned short *v2;  // [bp+0x60]

    v2 = v3;
    v1 = sub_100001924(v3, L"/SuppressDialogs") != v4;
    sub_100001924(v3, L"/SafeModeOK");
    4296016240();
}
