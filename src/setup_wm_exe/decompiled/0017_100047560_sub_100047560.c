/* sub_100047560 @ 0x100047560
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100047560  (572 bytes, 50 basic blocks)
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
extern unsigned int g_100086898;
extern unsigned long long g_100086f30;
extern unsigned int g_100088814;
extern long long g_100088820;
extern long long g_100088828;
extern unsigned long long g_100088ed0;
extern unsigned long long g_100088ed8;

int sub_100047560(void)
{
    unsigned int v3;  // edx
    unsigned long long v4;  // r8
    long long v5;  // rcx
    unsigned short v6;  // ax
    unsigned long long v7;  // rcx
    char v0;  // [bp-0x478]
    unsigned long long v1;  // [bp-0x28]

    v1 = g_100086110 ^ &v0;
    if (v3 <= 272)
    {
        if (v3 == 272)
        {
            if (sub_10003bf38() >= 0)
                4298114744();
            if (g_100086898 == 5)
            {
                sub_1000527a0(2, "Service installer failed initializing.  Finishing now.\r\n");
                4298114744();
            }
            4298114744();
        }
        if (v3 != 2 && v3 != 16 && v3 != 18)
        {
            if (v3 == 43)
            {
                if (v4 == 1026)
                {
                    v5 = g_100088820;
                    goto LABEL_1000475c2;
                }
                else
                {
                    if (v4 == 1103)
                    {
                        v5 = g_100088828;
LABEL_1000475c2:
                        if (v5)
                        {
                            sub_10004f908();
                            sub_10007fa70(v1 ^ &v0);
                            return;
                        }
                    }
                }
            }
        }
        else
        {
            if (g_100088ed8)
                4298114320();
            if (g_100088ed0)
                4295491564();
        }
    }
    else if (v3 == 273)
    {
        v6 = v4 >> 16;
        if (!v6)
        {
            if ((unsigned short)v4 == 1026)
            {
                if (!g_100088820)
                {
                    sub_10007fa70(v1 ^ &v0);
                    return;
                }
                v7 = g_100088814 * 6;
                if (*((long long *)(g_100086f30 + v7 * 8 + 32)) == sub_10004d9d8)
                    sub_1000537e4(v7); /* do not return */
                if (!sub_10004f884(g_100088820))
                    4298114912();
                goto LABEL_100047b58;
            }
            else
            {
                if (!v6 && (unsigned short)v4 == 1103)
                {
                    if (g_100088828 && !sub_10004f884(g_100088828))
                        4298114912();
LABEL_100047b58:
                    sub_10007fa70(v1 ^ &v0);
                    return;
                }
            }
        }
    }
    else if (v3 == 307 || v3 > 308 && (v3 <= 310 || v3 == 312))
    {
        4298114368();
    }
    sub_10007fa70(v1 ^ &v0);
    return;
}
