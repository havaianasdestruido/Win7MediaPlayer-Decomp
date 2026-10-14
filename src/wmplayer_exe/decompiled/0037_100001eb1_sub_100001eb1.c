/* sub_100001eb1 @ 0x100001eb1
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001eb1  (69 bytes, 3 basic blocks)
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

void sub_100001eb1(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, char a10, unsigned long a10, unsigned long a11)
{
    unsigned int v3;  // eax
    unsigned int v4;  // r15d
    unsigned int v5;  // r13d
    unsigned long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x58]

    if (v3 != v4)
        4296016000();
    a4 = &vvar_10;
    v2 = v5;
    v1 = &vvar_16{r136|4b};
    0x100100000();
}
