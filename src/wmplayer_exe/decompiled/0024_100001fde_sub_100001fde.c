/* sub_100001fde @ 0x100001fde
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001fde  (72 bytes, 4 basic blocks)
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

extern char g_100004704;

char sub_100001fde(void)
{
    unsigned long long v4;  // rax
    unsigned long long v5;  // r15
    unsigned long long v1;  // [bp+0x90]
    unsigned int v2;  // [bp+0x100]
    unsigned int v3;  // [bp+0x13c]

    v1 = v4;
    if (v4 != v5)
    {
        v3 = v5;
        v2 = 104;
        4296016056();
    }
    if (*((int *)&g_100004704) == (unsigned int)v5)
        goto LABEL_0x100001e45;
}
