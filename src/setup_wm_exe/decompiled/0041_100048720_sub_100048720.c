/* sub_100048720 @ 0x100048720
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100048720  (530 bytes, 36 basic blocks)
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
extern unsigned long long g_100087a18;
extern unsigned long long g_100087a20;
extern unsigned long long g_100087a28;
extern unsigned int g_1000887fc;
extern unsigned int g_100088810;
extern unsigned long long g_1000888e8;
extern unsigned long long g_100088f08;
extern unsigned long long g_100088f10;
extern unsigned long long g_100088f18;

int sub_100048720(unsigned long a0, unsigned int a1, unsigned long a2, unsigned long a3)
{
    unsigned int choice;  // edx
    unsigned long v6;  // rdx
    unsigned int flag3;  // edx
    unsigned int flag2;  // edx
    unsigned int v9;  // edx
    unsigned int v10;  // edx
    char v0;  // [bp-0x2b8]
    char *v1;  // [bp-0x298]
    unsigned long flag;  // [bp-0x268]
    unsigned long long v3;  // [bp-0x38]

    v3 = g_100086110 ^ &v0;
    g_1000888e8 = a0;
    if (a1 > 1476)
    {
        choice = a1 - 1477;
        if (a1 == 1477)
            4298114872();
        v6 = choice - 1;
        if (choice != 1)
        {
            flag3 = v6 - 1;
            if ((unsigned int)v6 == 1)
            {
                g_100087a18 = a3;
                4298114872();
            }
            flag2 = flag3 - 1;
            if (flag3 == 1)
                4298114872();
            v9 = flag2 - 1;
            if (flag2 == 1)
            {
                g_100088810 = a3;
                g_1000887fc = 0;
                4298114744();
            }
            v10 = v9 - 12;
            if (v9 == 12)
                4298114872();
            if (v10 != 3)
            {
                if (v10 != 4)
                    return sub_10007fa70(v3 ^ &v0);
                g_100087a28 = 1;
                g_100088f18 = a3 & 4294967295;
            }
            else
            {
                g_100087a28 = a3 & 4294967295;
                4298114872();
            }
        }
        else
        {
            g_100088f08 = a3;
            g_100087a18 = 1;
        }
        4298114872();
    }
    else if (a1 != 1476)
    {
        if (a1 != 2 && a1 != 16 && a1 != 18)
        {
            if (a1 == 272)
            {
                4295490198();
            }
            else if (a1 == 307)
            {
                sub_100040aa8(); /* do not return */
            }
            else if (a1 <= 308)
            {
                return sub_10007fa70(v3 ^ &v0);
            }
            else if (a1 <= 310)
            {
                sub_100040aa8(); /* do not return */
            }
            else if (a1 == 312)
            {
                sub_100040aa8(); /* do not return */
            }
            else if (a1 == 1475)
            {
                g_100087a20 = 1;
                g_100088f10 = a3 & 4294967295;
                4298114872();
            }
            else
            {
                return sub_10007fa70(v3 ^ &v0);
            }
        }
        flag = 0;
        v1 = &flag;
        g_1000887fc = 0;
        4298113088();
    }
    else
    {
        g_100087a20 = a3 & 4294967295;
        4298114872();
    }
}
