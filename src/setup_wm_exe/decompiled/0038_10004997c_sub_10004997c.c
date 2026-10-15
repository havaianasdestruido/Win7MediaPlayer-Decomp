/* sub_10004997c @ 0x10004997c
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10004997c  (487 bytes, 37 basic blocks)
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

extern unsigned long long g_100086110;
extern char g_100086f30;
extern long long g_100088818;
extern unsigned int g_100088f68;

int sub_10004997c(unsigned long a0, unsigned int a1, unsigned long long a2)
{
    unsigned int v6;  // edx
    unsigned int choice;  // edx
    unsigned long long *v8;  // rax
    char v0;  // [bp-0xd28]
    unsigned long long flag;  // [bp-0xd08]
    unsigned int v2;  // [bp-0xd00]
    char v3;  // [bp-0xc38]
    unsigned long long v4;  // [bp-0x38]

    v4 = g_100086110 ^ &v0;
    if (a1 <= 272)
    {
        if (a1 != 272)
        {
            v6 = a1 - 2;
            if (a1 == 2)
                4298114744();
            choice = v6 - 13;
            if (v6 != 13)
            {
                if (choice == 1)
                {
                    4298114744();
                }
                else if (choice == 3)
                {
                    4298114744();
                }
            }
            else
            {
                if (!g_100088f68)
                {
                    g_100088f68 = 1;
                    if (g_100088818 && sub_10004fd8c(g_100088818))
                    {
                        v8 = sub_10004fd8c(g_100088818);
                        if ((*(v8) || sub_100066bf8(v8)) && (*((long long *)&g_100086f30) == "K" || *((long long *)&g_100086f30) == "8"))
                            4298114744();
                    }
                    4298114744();
                }
            }
        }
        else
        {
            4298114872();
        }
    }
    else
    {
        if (a1 != 273)
        {
            if (a1 == 307 || a1 > 308 && (a1 <= 310 || a1 == 312))
                sub_100040aa8(); /* do not return */
        }
        else
        {
            if (a2 == 1141)
            {
                if (&v3)
                {
                    v2 = 10;
                    flag = 0;
                    4298115752();
                }
                sub_1000527a0(2, "ERROR: Web Help URL could not be generated.\r\n");
            }
        }
    }
    return sub_10007fa70(v4 ^ &v0);
}
