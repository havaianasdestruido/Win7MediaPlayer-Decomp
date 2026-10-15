/* sub_100001b20 @ 0x100001b20
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001b20  (41 bytes, 2 basic blocks)
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

extern unsigned long long g_100004100;

void sub_100001b20(unsigned long a0)
{
    unsigned long long v5;  // rbx
    unsigned long long v6;  // rdi
    char v0;  // [bp-0x68]
    unsigned long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // [bp+0x10]

    v4 = v5;
    v2 = v6;
    v1 = g_100004100 ^ &v0;
    4296016320();
}
