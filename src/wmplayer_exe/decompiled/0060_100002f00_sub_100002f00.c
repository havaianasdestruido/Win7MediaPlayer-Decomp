/* sub_100002f00 @ 0x100002f00
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100002f00  (29 bytes, 2 basic blocks)
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

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_0 {
    char padding_0[8];
    unsigned int field_8;
} struct_0;

unsigned int sub_100002f00(unsigned long a0, unsigned long long a1, unsigned long a2, struct_1 *a3)
{
    sub_100002e94(a1, a3, a3[2].field_8);
    return 1;
}
