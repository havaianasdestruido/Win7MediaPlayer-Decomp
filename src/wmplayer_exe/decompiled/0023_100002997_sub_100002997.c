/* sub_100002997 @ 0x100002997
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100002997  (149 bytes, 4 basic blocks)
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

extern unsigned long long g_100004100;
extern unsigned long long g_100004108;
extern unsigned int g_100004150;
extern unsigned int g_100004154;
extern unsigned long long g_100004160;
extern unsigned long long g_100004270;
extern char g_100004288;
extern unsigned long long g_1000042e8;

void sub_100002997(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long flag, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, char a11)
{
    unsigned long long v5;  // rax
    unsigned long long v6;  // rsi
    unsigned long v7;  // rbx
    unsigned long long v1;  // [bp+0x20]
    char v2;  // [bp+0x68]
    char v3;  // [bp+0x70]
    unsigned long v4;  // [bp+0x78]

    if (!v5)
    {
        g_1000042e8 = a10;
        *((int **)&g_100004288) = &vvar_11;
        g_100004160 = a10;
        g_100004270 = v7;
        g_100004150 = 3221226505;
        g_100004154 = 1;
        v4 = g_100004100;
        v4 = g_100004108;
        4296016184();
    }
    flag = 0;
    a5 = &v2;
    a4 = &v3;
    v1 = v6;
    4296016192();
}
