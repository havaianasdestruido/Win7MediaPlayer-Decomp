/* sub_10000259c @ 0x10000259c
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x10000259c  (214 bytes, 11 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a
 *   Evidence: analysis/report/rea-evidence/wmpenc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern unsigned long long g_1000078a8;
extern unsigned short g_1000078b0;
extern unsigned long long g_1000078b8;
extern unsigned short g_1000078c0;
extern unsigned long long g_1000078c8;
extern unsigned short g_1000078d0;
extern unsigned int g_1000078d8;

int sub_10000259c(void)
{
    unsigned short *v3;  // rax
    unsigned short *v4;  // r14
    unsigned short **v5;  // r13
    unsigned short *v1;  // [bp+0x100010]
    unsigned long long v2;  // [bp+0x100040]

    v1 = v3;
    if (v3 == v4)
        return sub_100005150(v2 ^ vvar_10{r56|8b});
    if (sub_1000023c0(v5, v3) < (unsigned int)v4)
        4296016408();
    if (!((char)g_1000078d8 & 1))
    {
        g_1000078b0 = 8;
        g_1000078c0 = 19;
        g_1000078d8 = g_1000078d8 | 1;
        g_1000078d0 = 17;
        g_1000078a8 = "S";
        g_1000078b8 = "D";
        g_1000078c8 = "B";
    }
    4296016152();
}
