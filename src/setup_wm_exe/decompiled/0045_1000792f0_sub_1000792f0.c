/* sub_1000792f0 @ 0x1000792f0
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x1000792f0  (470 bytes, 33 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): f069226052de289452ef5ff9dd67557193c15308c5351bc7b70b6692b350951b
 *   Evidence: analysis/report/rea-evidence/setup_wm_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern char g_10008895e;
extern long long g_100088c60;
extern long long g_100088c78;

char sub_1000792f0(long long a0)
{
    char *v0;  // [bp-0xa8]
    char v1;  // [bp-0x70]
    char v2;  // [bp-0x60]
    char v3;  // [bp-0x50]
    unsigned long flag;  // [bp+0x20]

    if (!g_10008895e)
    {
        return 0;
    }
    else if (!a0)
    {
        return 0;
    }
    else if ((char)sub_10007beec(&g_100088c60, &g_100088c60, a0))
    {
        return 1;
    }
    else
    {
        if ((char)sub_10007beec(&g_100088c60, &g_100088c78, a0) || (char)sub_10007d3c0(a0, "l"))
            return 0;
        sub_10007d40c(&v3);
        sub_10007d40c(&v2);
        if ((int)sub_10007d57c(&v2, ".", 4294967295) >= 0 && (int)sub_10007d7d4(&v2, a0, 4294967295) >= 0)
        {
            sub_10007d40c(&v1);
            if (v2 && *((short *)v2))
                4298115152();
            if ((int)sub_10007d57c(&v1, L"Software\\Microsoft\\Windows\\CurrentVersion\\PropertySystem\\PropertyHandlers\\", 4294967295) >= 0 && (int)sub_10007d7d4(&v1, v2, 4294967295) >= 0)
            {
                flag = 0;
                v0 = &flag;
                4298113088();
            }
            4298115416();
        }
        sub_10007bdfc(&g_100088c60, &g_100088c78, a0);
        sub_10007d970(&v2);
        sub_10007d970(&v3);
        return 0;
        return 0;
    }
}
