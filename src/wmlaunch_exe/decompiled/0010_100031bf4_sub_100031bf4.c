/* sub_100031bf4 @ 0x100031bf4
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100031bf4  (472 bytes, 40 basic blocks)
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

typedef struct struct_0 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_0;

extern long long g_100023188;
extern unsigned long long g_10003d110;
extern struct_0 *g_10003daf8;

int sub_100031bf4(void)
{
    unsigned int v5;  // edx
    unsigned int *ptr;  // r8
    unsigned long long v7;  // rsi
    long long v8;  // rcx
    unsigned int v9;  // eax
    unsigned int v11;  // eax
    char v0;  // [bp-0x348]
    char p;  // [bp-0x2e8]
    unsigned int v2;  // [bp-0x2c8]
    unsigned long long v3;  // [bp-0x48]

    v3 = g_10003d110 ^ &v0;
    v2 = v5;
    sub_10002fbf0(&p);
    if (g_10003daf8 != &g_10003daf8 && (g_10003daf8->field_3c & 1) && g_10003daf8->field_39 >= 7)
        sub_100030b94(g_10003daf8->field_30, 17, &g_100023188); /* do not return */
    *(ptr) = 0;
    v7 = 4;
    if (sub_100033554(v8) == 4)
    {
        v9 = sub_100033340(v8, 0, &p);
        if (v9 >= 0)
        {
            if (p)
                4296016320();
            v9 = 2147942487;
        }
    }
    else
    {
        v11 = sub_1000339d4(v8, &p);
        v9 = v11;
    }
    if (g_10003daf8 != &g_10003daf8 && (g_10003daf8->field_3c & 1) && g_10003daf8->field_39 >= 7)
        sub_100030cf8(g_10003daf8->field_30, 18, &g_100023188); /* do not return */
    if (v9 >= 0)
    {
        4296016264();
    }
    else if (g_10003daf8 == &g_10003daf8)
    {
        sub_100030020(&p);
        sub_10003a9b0(v3 ^ &v0);
        return;
    }
    else if (!(g_10003daf8->field_3c & 1))
    {
        sub_100030020(&p);
        sub_10003a9b0(v3 ^ &v0);
        return;
    }
    else if (g_10003daf8->field_39 >= 7)
    {
        sub_100030b94(g_10003daf8->field_30, 25, &g_100023188); /* do not return */
    }
    else
    {
        sub_100030020(&p);
        sub_10003a9b0(v3 ^ &v0);
        return;
    }
}
