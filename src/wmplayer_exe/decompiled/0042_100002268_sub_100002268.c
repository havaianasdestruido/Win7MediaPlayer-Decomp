/* sub_100002268 @ 0x100002268
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100002268  (45 bytes, 3 basic blocks)
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

long long sub_100002268(void)
{
    unsigned long v1;  // rax
    unsigned long v2;  // rdi
    unsigned long long v3;  // rcx

    v3 = v1 + v2;
    if ((unsigned int)v3 < (unsigned int)v2)
        goto LABEL_0x1000023e6;
    if (v3 * 2 > 4294967295)
        goto LABEL_0x1000023e6;
    4296015960();
}
