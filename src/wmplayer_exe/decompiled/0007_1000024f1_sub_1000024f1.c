/* sub_1000024f1 @ 0x1000024f1
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x1000024f1  (113 bytes, 11 basic blocks)
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

void sub_1000024f1(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, char a9)
{
    unsigned long long *v3;  // rax
    unsigned long long *v4;  // rsi
    unsigned long long v5;  // r15
    unsigned long long *v6;  // r14
    unsigned long long *v7;  // r12
    char *v1;  // [bp+0x20]
    char v2;  // [bp+0x7c]

    v4 = v3;
    if (v5 && v6 && v7)
    {
        if (v3)
        {
            if (!a9)
                v7();
            v1 = &v2;
            v6();
        }
    }
    else
    {
        if (v3)
            v3();
    }
    4296015952();
}
