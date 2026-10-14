/* sub_1000396b8 @ 0x1000396b8
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x1000396b8  (210 bytes, 18 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern unsigned long long g_100030a98;

long long sub_1000396b8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, char a7, unsigned long a8, long long ptr, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned int a17)
{
    unsigned int v2;  // eax
    long long v3;  // r12
    char v4;  // al
    long long p;  // rbx
    char v6;  // al
    long long v7;  // rdi
    unsigned long long v1;  // [bp+0x20]

    if (v2 != (int)v3)
        goto LABEL_0x1000397b4;
    v4 = v3;
    if (p != v3)
        v4 = *((short *)p) != (unsigned short)v3;
    if (v4 != (char)v3 && a17 != (int)v3)
    {
        sub_10002fbf0(&vvar_9);
        sub_10002fd60(&vvar_9);
        v6 = v3;
        if (vvar_9 != v3)
            v6 = *((short *)vvar_9) != (unsigned short)v3;
        if (v6 != (char)v3)
        {
            if (vvar_9 != v3)
            {
                v1 = &g_100030a98;
                4296016608();
            }
            sub_100039098(v7, vvar_9);
        }
        sub_100030020(&vvar_9);
    }
    sub_100030020(&vvar_7);
}
