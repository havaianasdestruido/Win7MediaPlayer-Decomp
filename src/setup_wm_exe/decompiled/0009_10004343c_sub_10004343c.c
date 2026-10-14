/* sub_10004343c @ 0x10004343c
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10004343c  (713 bytes, 61 basic blocks)
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

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned long long g_100086110;
extern unsigned int g_100086890;
extern unsigned int g_100086898;
extern char g_100086f30;
extern unsigned int g_1000887ec;
extern unsigned int g_100088810;
extern struct_0 *g_100088818;
extern unsigned long long g_1000888e8;
extern unsigned int g_100088e98;
extern unsigned int g_100088e9c;

int sub_10004343c(void)
{
    unsigned long v3;  // rcx
    unsigned int v4;  // edx
    unsigned long v8;  // r9
    unsigned int v5;  // edx
    unsigned int v6;  // edx
    long long v7;  // rax
    char v0;  // [bp-0x858]
    unsigned long long v1;  // [bp-0x18]

    v1 = g_100086110 ^ &v0;
    g_1000888e8 = v3;
    if (v4 > 312)
    {
        v5 = v4 - 1478;
        if (v4 != 1478)
        {
            v6 = v5 - 7;
            if (v5 != 7)
            {
                if (v6 == 4)
                    sub_1000532e8(); /* do not return */
                if (v6 != 7)
                {
                    sub_10007fa70(v1 ^ &v0);
                    return;
                }
                if ((unsigned int)v8 < 0)
                    goto LABEL_1000437aa;
                if (g_100088818 && g_100088818->field_0)
                {
LABEL_1000435e2:
                    4298114744();
                }
                if (g_100086898 == 5)
                {
                    if (!g_100088818 || !((v7 = (long long)(unsigned long long)sub_10004fe1c(), v7)))
                    {
                        g_100086890 = 0;
                        4298114744();
                    }
                    if (sub_1000646dc(v7) && *((long long *)&g_100086f30) != "8")
                    {
                        g_100086890 = 0;
                        *((unsigned int *)(sub_10004fe1c(g_100088818) + 296)) = 0;
                        4298114744();
                    }
                    goto LABEL_1000435e2;
                }
            }
            else
            {
                if (g_100088818)
                {
                    if ((unsigned int)v8 >= 0)
                        4298114256();
LABEL_1000437aa:
                    if (g_100086898 == 5)
                    {
                        g_100086890 = 0;
                        4298114744();
                    }
                    g_100088810 = v8;
                    if (g_1000887ec)
                        4298114744();
                    4298114912();
                }
            }
        }
        else
        {
            if (!v8)
            {
                if (g_100088818 && g_100086898 == 1)
                {
                    if (!sub_10003c004())
                    {
                        if (g_1000887ec)
                            4298114744();
                        4298114912();
                    }
                    else
                    {
                        g_100086898 = 0;
                        sub_100050d6c(g_100088818, v3);
                    }
                }
                else
                {
                    if (g_100086898 != 5)
                    {
                        g_100088810 = 1;
                        if (!g_1000887ec)
                            4298114912();
                        4298114744();
                    }
                }
            }
            else
            {
                g_100088e9c = 1;
                if (g_100088e98)
                    4298114744();
            }
        }
    }
    else if (v4 == 312)
    {
        4298114368();
    }
    else if (v4 != 272)
    {
        if (v4 != 273)
        {
            if (v4 == 307)
            {
                4298114368();
            }
            else if (v4 <= 308)
            {
                sub_10007fa70(v1 ^ &v0);
                return;
            }
            else if (v4 <= 310)
            {
                4298114368();
            }
            else
            {
                sub_10007fa70(v1 ^ &v0);
                return;
            }
        }
    }
    else
    {
        if (sub_10003bf38() >= 0)
            sub_100053900(5, 1, 0, 0); /* do not return */
    }
    sub_10007fa70(v1 ^ &v0);
    return;
}
