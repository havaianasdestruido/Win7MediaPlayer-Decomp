/* sub_100001f0c @ 0x100001f0c
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001f0c  (132 bytes, 9 basic blocks)
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

extern unsigned long long g_1000046f0;
extern char g_100004704;
extern char g_100004708;

int sub_100001f0c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4, char a5)
{
    char v4;  // dil
    unsigned long long v5;  // r15
    char v6;  // sil
    char v7;  // r13b
    unsigned long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x28]
    unsigned long long v3;  // [bp+0x30]

    if (v4 == (char)v5)
        goto LABEL_0x100001fc7;
    if (v6 == (char)v5)
    {
        v3 = v5;
        v2 = v5;
        v1 = &vvar_16{r136|8b};
        4296016032();
    }
    if (*((int *)&g_100004704) == (unsigned int)v5)
        goto LABEL_0x100001e45;
    if (g_100004708 < v7)
        if (g_100004708 == (char)v5)
            goto LABEL_100001fa1;
        else
            goto LABEL_0x100001e45;
LABEL_100001fa1:
    if (!(g_1000046f0 >> 16 & 1))
        goto LABEL_0x100001e45;
}
