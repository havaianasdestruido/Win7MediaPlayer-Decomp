/* sub_100001de8 @ 0x100001de8
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001de8  (201 bytes, 13 basic blocks)
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

void sub_100001de8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4)
{
    unsigned int v4;  // eax
    unsigned long v5;  // r15
    char v6;  // dil
    char v7;  // r13b
    char v0;  // [bp+0x0]
    unsigned long v2;  // [bp+0x20]
    unsigned long long v3;  // [bp+0x310]

    if (v4 != (unsigned int)v5 && v6 == (char)v5)
    {
        if (*((int *)&g_100004704) != (unsigned int)v5)
        {
            if (g_100004708 < v7 && g_100004708 != (char)v5)
            {
                sub_1000017fc(&g_1000046d8);
                sub_100002890(v3 ^ &v0);
                return;
            }
            if (!((char)(g_1000046f0 >> 16) & 1))
            {
                sub_1000017fc(&g_1000046d8);
                sub_100002890(v3 ^ &v0);
                return;
            }
            else if (((unsigned int)g_1000046f8 & 0x10000) == g_1000046f8)
            {
                4294973484();
            }
            else
            {
                sub_1000017fc(&g_1000046d8);
                sub_100002890(v3 ^ &v0);
                return;
            }
        }
        else
        {
            sub_1000017fc(&g_1000046d8);
            sub_100002890(v3 ^ &v0);
            return;
        }
    }
    v2 = &vvar_31{r136|8b};
    4296015888();
}
