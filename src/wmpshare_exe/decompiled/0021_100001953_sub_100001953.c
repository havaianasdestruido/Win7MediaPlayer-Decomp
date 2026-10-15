/* sub_100001953 @ 0x100001953
 *
 * MODULE   : wmpshare_exe  (bin/wmpshare.exe)
 * ADDRESS  : 0x100001953  (110 bytes, 3 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): ab95a6aa118e853d71b326b68a409f24a6276f47e34ca9e8049f7d49b4825a51
 *   Evidence: analysis/report/rea-evidence/wmpshare_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern unsigned long long g_100003220;
extern char g_1000032b8;
extern unsigned long long g_100003318;

long long sub_100001953(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long flag, char a7, char a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, char a17)
{
    unsigned long long v2;  // rax
    unsigned long long v1;  // [bp+0x20]

    if (!v2)
    {
        g_100003318 = a16;
        *((int **)&g_1000032b8) = &vvar_17;
        sub_1000019c3(); /* do not return */
    }
    flag = 0;
    a5 = &vvar_8;
    a4 = &vvar_7;
    v1 = &g_100003220;
    4294974920();
}
