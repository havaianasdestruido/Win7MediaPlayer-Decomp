/* _start @ 0x100001c74
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001c74  (202 bytes, 10 basic blocks)
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

extern long long g_100001270;
extern unsigned long long g_100004100;
extern long long g_1000046d8;
extern long long g_1000046e0;
extern unsigned long long g_1000046f0;
extern unsigned long long g_1000046f8;
extern unsigned int g_100004704;
extern char g_100004708;

void _start(void)
{
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdi
    unsigned long long v14;  // r12
    unsigned long long v15;  // r13
    unsigned long long v16;  // r14
    unsigned long long v17;  // r15
    char v0;  // [bp-0x348]
    unsigned long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    unsigned long long v5;  // [bp-0x10]
    unsigned long long v6;  // [bp-0x8]
    unsigned long long v7;  // [bp+0x8]
    unsigned long v8;  // [bp+0x10]
    unsigned long long v9;  // [bp+0x18]

    sub_1000028b8();
    v7 = v11;
    v8 = vvar_18{r56|8b};
    v9 = v12;
    v6 = v13;
    v5 = v14;
    v4 = v15;
    v3 = v16;
    v2 = v17;
    v1 = g_100004100 ^ &v0;
    sub_1000017c4(&g_100001270, sub_100001788, &g_1000046e0, &g_1000046d8);
    if (g_100004704 && (g_100004708 >= 4 || !g_100004708) && ((char)(g_1000046f0 >> 16) & 1) && ((unsigned int)g_1000046f8 & 0x10000) == g_1000046f8)
        4294973484();
    4296016088();
}
