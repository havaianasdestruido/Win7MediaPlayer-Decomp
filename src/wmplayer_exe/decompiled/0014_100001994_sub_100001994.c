/* sub_100001994 @ 0x100001994
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001994  (101 bytes, 6 basic blocks)
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

char sub_100001994(unsigned short *a0)
{
    char *v0;  // [bp-0x28]
    unsigned int flag3;  // [bp+0x8]
    unsigned int flag;  // [bp+0x10]
    unsigned int choice;  // [bp+0x18]
    unsigned long flag2;  // [bp+0x20]

    flag2 = 0;
    flag3 = 0;
    flag = 0;
    choice = 0;
    if (a0 && sub_100001924(a0, L"/SkipFUE"))
        return 0;
    v0 = &flag2;
    4296015888();
}
