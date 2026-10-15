/* sub_1000027ad @ 0x1000027ad
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x1000027ad  (43 bytes, 2 basic blocks)
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

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_100004110;

void sub_1000027ad(void)
{
    unsigned int v3;  // eax
    unsigned long long v4;  // r15
    unsigned long long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x28]

    if (v3 != 6)
        goto LABEL_0x1000027d8;
    v2 = 10;
    v1 = v4;
    g_100004110();
}
