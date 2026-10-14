/* sub_100038dbc @ 0x100038dbc
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100038dbc  (232 bytes, 20 basic blocks)
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

int sub_100038dbc(long long a0, long long a1, unsigned short *a2)
{
    int v3;  // edi
    unsigned long v0;  // [bp-0x28]
    unsigned short v1;  // [bp-0x1c]
    unsigned long v2;  // [bp+0x8]

    if (a0 + 48)
    {
        4296016072();
    }
    else if ((char)sub_100038eac(a0, a1, a2))
    {
        return 0;
    }
    else
    {
        v3 = 0;
        sub_10002fbf0(&v0);
        v1 |= 4;
        if (a2 && *(a2))
        {
            v3 = sub_10002fd60(&v0, a2, 4294967295);
            if (v3 >= 0)
            {
                v2 = v0;
                v3 = sub_100038f84(a1, &v2);
                if (v3 >= 0)
                {
                    v0 = 0;
                    v1 &= 65423;
                }
            }
        }
        sub_100030020(&v0);
        return v3;
    }
}
