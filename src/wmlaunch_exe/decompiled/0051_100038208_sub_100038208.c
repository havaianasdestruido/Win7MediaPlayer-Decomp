/* sub_100038208 @ 0x100038208
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100038208  (226 bytes, 19 basic blocks)
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

extern long long g_10003e590;

void sub_100038208(unsigned long long *a0)
{
    int v2;  // ebx
    char v3;  // sil
    unsigned int v4;  // eax
    char v0;  // [bp-0x18]

    v2 = 0;
    v3 = 1;
    while (true)
    {
        v2 = sub_1000306dc(a0, ".", v2);
        if (v2 > -1)
        {
            v2 += 1;
            v4 = sub_1000306dc(a0, ",", v2);
            if (v4 == 4294967295)
            {
                if (*(a0))
                    4296016320();
                v4 = 0;
                v3 = 0;
            }
            sub_10002fbf0(&v0);
            if ((int)sub_10002fd60(&v0, *(a0) + v2 * 2, v4 - v2 & 4294967295) >= 0)
            {
                sub_100038dbc(&g_10003e590, &g_10003e590, v0);
                4296016072();
            }
            sub_100030020(&v0);
        }
        else
        {
            v3 = 0;
        }
        if (!v3)
            return;
    }
}
