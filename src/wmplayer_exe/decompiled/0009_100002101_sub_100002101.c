/* sub_100002101 @ 0x100002101
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100002101  (179 bytes, 9 basic blocks)
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

void sub_100002101(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, char a10, unsigned long a11, unsigned long a12)
{
    unsigned int v3;  // eax
    unsigned long long v4;  // r15
    unsigned int v5;  // r12d
    unsigned long long v1;  // [bp+0x20]
    unsigned short v2;  // [bp+0x170]

    if (v3 == (unsigned int)v4)
    {
        a4 = &vvar_10;
        v1 = v4;
        0x100100000();
    }
    if ((char)sub_100001994(vvar_21{r56|8b}) != (char)v4 && v5 != (unsigned int)v4)
    {
        if (vvar_21{r56|8b} != v4)
            4296016040();
        a4 = 10;
        v1 = v4;
        g_100004110();
    }
    v2 = v4;
    4294979364();
}
