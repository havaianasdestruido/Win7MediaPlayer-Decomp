/* sub_100049368 @ 0x100049368
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100049368  (352 bytes, 30 basic blocks)
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
    char padding_0[312];
    unsigned int field_138;
} struct_0;

extern unsigned long long g_100086110;
extern char g_100086f30;
extern unsigned int g_1000887ec;
extern unsigned int g_1000887f4;
extern int g_100088810;
extern long long g_100088818;
extern unsigned int g_10008889c;

long long sub_100049368(void)
{
    struct_0 *v4;  // rax
    char v0;  // [bp-0x248]
    char v1;  // [bp-0x228]
    unsigned long long v2;  // [bp-0x18]

    v2 = g_100086110 ^ &v0;
    if (*((long long *)&g_100086f30) != "8")
    {
        if (*((long long *)&g_100086f30) == "K")
        {
            g_1000887f4 = (g_100088810 != 862969 ? 1 : g_1000887f4);
            4298114256();
        }
        if (g_100088810 == 862968 && &v1)
            sub_1000529a4(&v1, 260); /* do not return */
        if (g_100088810 >= 0 && *((long long *)&g_100086f30) == "6")
        {
            if (!g_10008889c)
                sub_10003cdf0(); /* do not return */
            sub_10003cdf0(); /* do not return */
        }
        if (g_100088810 == 862969 || g_100088810 == -1072878853)
            sub_10004ab34(); /* do not return */
        if (g_100088810 >= 0 && !g_1000887ec)
            goto LABEL_100049439;
    }
    else if (g_100088810 != 862969)
    {
        if (g_100088818)
        {
            v4 = sub_10004fe1c(g_100088818);
            if (v4 && !v4->field_138)
                4298114752();
        }
LABEL_100049439:
        g_1000887f4 = 1;
    }
    return sub_10007fa70(v2 ^ &v0);
}
