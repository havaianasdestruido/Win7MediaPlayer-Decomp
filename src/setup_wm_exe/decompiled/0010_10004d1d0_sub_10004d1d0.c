/* sub_10004d1d0 @ 0x10004d1d0
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10004d1d0  (790 bytes, 60 basic blocks)
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

extern long long g_1000255c0;
extern unsigned long long g_100086110;
extern unsigned long long g_100088818;
extern long long g_100088830;
extern long long g_100088e00;
extern unsigned long long g_100088e18;
extern char g_100088e20;
extern unsigned int g_100088e2c;
extern char g_100088e30;
extern unsigned int g_100088f80;
extern unsigned int g_100088f84;
extern unsigned int g_100088f88;
extern unsigned long long g_100088f90;
extern unsigned int g_100088f98;

long long sub_10004d1d0(long long a0, unsigned int a1, unsigned long long a2, long long a3)
{
    char v0;  // [bp-0x508]
    unsigned long long v1;  // [bp-0x38]

    v1 = g_100086110 ^ &v0;
    if (a1 <= 273)
    {
        if (a1 != 273)
        {
            if (!(a1 != 2 && a1 != 16 && a1 != 18))
            {
                4298114872();
            }
            else if (a1 != 32)
            {
                if (a1 != 43)
                {
                    if (a1 == 272)
                    {
                        if (sub_10003bf38() < 0)
                            return sub_10007fa70(v1 ^ &v0);
                        if (g_100088e2c && (g_100088e30 >= 4 || !g_100088e30) && (0x8000000000000000 & g_100088e18) && (*((long long *)&g_100088e20) & 0x8000000000000000) == *((long long *)&g_100088e20))
                            sub_10003a31c(g_100088e00, &g_1000255c0, 0); /* do not return */
                        4298114872();
                    }
                }
                else
                {
                    if (a2 == 1162 && g_100088830)
                    {
                        sub_10004f908(g_100088830, a3, 0);
                        return sub_10007fa70(v1 ^ &v0);
                    }
                }
            }
            else
            {
                if (!g_100088f84)
                {
                    if (!g_100088f90)
                        4298114600();
                    4298114592();
                }
            }
        }
        else
        {
            if ((unsigned short)a2 == 1162)
            {
                if (!(unsigned short)(a2 >> 16) && g_100088830 && !sub_10004f884(g_100088830))
                    4298114912();
            }
            else
            {
                if (((unsigned short)a2 == 1122 || (unsigned short)a2 == 1124) && !(unsigned short)(a2 >> 16))
                    4298114928();
            }
        }
    }
    else
    {
        if (a1 == 275)
        {
            g_100088f98 = g_100088f98 + 1000;
            if (g_100088f98 > 25000)
                sub_1000526dc(3, "  TIMEOUT: Service Info retrieval timed out.\r\n"); /* do not return */
            sub_10004cbc4(a0, g_100088f80);
        }
        else if (a1 == 307)
        {
            sub_100040aa8(); /* do not return */
        }
        else if (a1 > 308)
        {
            if (a1 <= 310)
            {
                sub_100040aa8(); /* do not return */
            }
            else if (a1 == 312)
            {
                sub_100040aa8(); /* do not return */
            }
            else if (a1 != 1485)
            {
                if (a1 == 1492 && !g_100088f88)
                    4298114728();
            }
            else
            {
                if (!g_100088f88)
                {
                    if (g_100088818 && (int)a3 >= 0)
                        sub_100050d6c();
                    else
                        4298114728();
                }
            }
        }
    }
    return sub_10007fa70(v1 ^ &v0);
}
