/* sub_10000206f @ 0x10000206f
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x10000206f  (51 bytes, 7 basic blocks)
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

void sub_10000206f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned long a31, unsigned long a32, unsigned long a33, unsigned long a34, unsigned long a35, unsigned long a36, unsigned long a37, char a38, unsigned short a39)
{
    unsigned int v1;  // ebx
    long long v2;  // r15
    unsigned int v3;  // ebx
    long long v4;  // rax

    if (!((char)v1 & a38) || (unsigned short)v2 != a39)
        v3 = v2;
    if (v4 != v2 && v3 == (int)v2)
        sub_100001b20(v4); /* do not return */
    sub_100001848(vvar_63{r56|8b}, v3); /* do not return */
}
