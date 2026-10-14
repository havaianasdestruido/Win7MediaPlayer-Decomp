/* sub_10000b164 @ 0x10000b164
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000b164  (214 bytes, 11 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern unsigned int g_100011978;
extern unsigned long long g_100011b10;
extern unsigned short g_100011b18;
extern unsigned long long g_100011b20;
extern unsigned short g_100011b28;
extern unsigned long long g_100011b30;
extern unsigned short g_100011b38;

unsigned int sub_10000b164(void)
{
    unsigned short *v3;  // rax
    unsigned short *v4;  // r14
    unsigned short **v5;  // r13
    unsigned short *v1;  // [bp+0x100010]
    unsigned long long v2;  // [bp+0x100040]

    v1 = v3;
    if (v3 == v4)
    {
        _security_check_cookie(v2 ^ vvar_10{r56|8b});
        return 2147942414;
    }
    if (sub_10000af88(v5, v3) < (unsigned int)v4)
        4296017128();
    if (!((char)g_100011978 & 1))
    {
        g_100011b18 = 8;
        g_100011b28 = 19;
        g_100011978 = g_100011978 | 1;
        g_100011b38 = 17;
        g_100011b10 = "S";
        g_100011b20 = "D";
        g_100011b30 = "B";
    }
    4296016192();
}
