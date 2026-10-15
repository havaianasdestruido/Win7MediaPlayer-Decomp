/* sub_100001bd0 @ 0x100001bd0
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001bd0  (38 bytes, 3 basic blocks)
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

void sub_100001bd0(void)
{
    unsigned long long v3;  // rax
    unsigned long v4;  // rdi
    unsigned long v5;  // rbx
    unsigned long long flag;  // [bp+0x38]
    unsigned long long choice;  // [bp+0x40]

    if (v3)
        goto LABEL_0x100001c20;
    if (v4 == v5)
        goto LABEL_0x100001c20;
    flag = 0;
    choice = 0;
    4296016280();
}
