/* sub_100037a40 @ 0x100037a40
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100037a40  (470 bytes, 33 basic blocks)
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

extern char g_10003e292;
extern long long g_10003e530;
extern long long g_10003e548;

char sub_100037a40(long long a0)
{
    char *v0;  // [bp-0xa8]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x60]
    char v3;  // [bp-0x50]
    unsigned long flag;  // [bp+0x20]

    if (!g_10003e292)
    {
        return 0;
    }
    else if (!a0)
    {
        return 0;
    }
    else if ((char)sub_100038eac(&g_10003e530, &g_10003e530, a0))
    {
        return 1;
    }
    else
    {
        if ((char)sub_100038eac(&g_10003e530, &g_10003e548, a0) || (char)sub_10002fba4(a0, L"lnk"))
            return 0;
        sub_10002fbf0(&v3);
        sub_10002fbf0(&v2);
        if ((int)sub_10002fd60(&v2, ".", 4294967295) >= 0 && (int)sub_10002fe84(&v2, a0, 4294967295) >= 0)
        {
            sub_10002fbf0(&v1);
            if (v2 && *((short *)v2))
                4296016728();
            if ((int)sub_10002fd60(&v1, L"Software\\Microsoft\\Windows\\CurrentVersion\\PropertySystem\\PropertyHandlers\\", 4294967295) >= 0 && (int)sub_10002fe84(&v1, v2, 4294967295) >= 0)
            {
                flag = 0;
                v0 = &flag;
                4296015904();
            }
            4296016600();
        }
        sub_100038dbc(&g_10003e530, &g_10003e548, a0);
        sub_100030020(&v2);
        sub_100030020(&v3);
        return 0;
        return 0;
    }
}
