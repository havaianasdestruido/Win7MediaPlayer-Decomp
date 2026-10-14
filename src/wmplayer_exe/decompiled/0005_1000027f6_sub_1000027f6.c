/* sub_1000027f6 @ 0x1000027f6
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x1000027f6  (133 bytes, 12 basic blocks)
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

extern long long g_1000046d8;
extern unsigned long long g_1000046f0;
extern unsigned long long g_1000046f8;
extern char g_100004704;
extern char g_100004708;

void sub_1000027f6(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18)
{
    unsigned long v1;  // r15
    unsigned long v2;  // rdi

    if (a18 != v1)
    {
        4296015968();
    }
    else if (v2 != v1)
    {
        4296016096();
    }
    else
    {
        if (*((int *)&g_100004704) != (unsigned int)v1 && (g_100004708 >= 4 || g_100004708 == (char)v1) && ((char)(g_1000046f0 >> 16) & 1) && ((unsigned int)g_1000046f8 & 0x10000) == g_1000046f8)
            4294973484();
        sub_1000017fc(&g_1000046d8);
        4296015920();
    }
}
