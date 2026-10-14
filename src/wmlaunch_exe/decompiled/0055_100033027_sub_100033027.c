/* sub_100033027 @ 0x100033027
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100033027  (251 bytes, 18 basic blocks)
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

int sub_100033027(void)
{
    int v8;  // eax
    int v9;  // ebx
    unsigned int v10;  // edi
    unsigned long v1;  // [bp+0x20]
    unsigned long long v2;  // [bp+0x28]
    unsigned long long v3;  // [bp+0x30]
    unsigned long v4;  // [bp+0x38]
    unsigned long v5;  // [bp+0x48]
    unsigned long long v6;  // [bp+0x50]
    unsigned long long v7;  // [bp+0x58]

    if (v8 >= 0)
    {
        if ((unsigned short)v5 != 4127)
            v9 = -2147418113;
        if (v9 >= 0)
        {
            v10 = 0;
            if ((unsigned int)v6 > 0)
            {
                do
                {
                    sub_100030a5c(&v1, *((long long *)(v7 + vvar_62{r56|8b})));
                    if (v1)
                        4296016720();
                    if ((char)sub_10002fb24(v1, v4))
                    {
                        sub_100030020(&v1);
                        break;
                    }
                } while ((sub_100030020(&v1), v10 += 1, v10 < (unsigned int)v6));
            }
        }
    }
    if (!&v5)
    {
        sub_100030020(&v4);
        return;
    }
    v1 = v5;
    v2 = v6;
    v3 = v7;
    0x100100400();
}
