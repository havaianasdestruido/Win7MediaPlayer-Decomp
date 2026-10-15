/* sub_100031138 @ 0x100031138
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100031138  (327 bytes, 24 basic blocks)
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

extern long long g_10003d270;
extern char g_10003e21d;

int sub_100031138(void)
{
    long long v12;  // rcx
    unsigned int flag;  // [bp-0xb8]
    char *v1;  // [bp-0xb0]
    char v2;  // [bp-0x98]
    char v3;  // [bp-0x88]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x60]
    char v6;  // [bp-0x50]
    char v7;  // [bp-0x40]
    char v8;  // [bp-0x30]
    int v10;  // [bp+0x10]
    char v11;  // [bp+0x18]

    v10 = -2147024891;
    sub_100033184(&v2);
    if ((int)sub_10003343c(&v2, 2, v12) >= 0 && (int)sub_100033554(&v2) == 4)
    {
        v10 = sub_1000323ac(&v2, 1000);
        v10 = v10;
        if (!g_10003e21d)
            goto LABEL_1000311e0;
        if (v10 >= 0)
        {
            sub_10003269c(&g_10003d270, &v2);
        }
        else
        {
            if (v10 != -2147013895)
                goto LABEL_1000311e0;
            sub_1000325e0(&g_10003d270, &v2, v10);
        }
    }
LABEL_1000311e0:
    if (v10 < 0 && v10 != -2147013895)
    {
        v1 = &v11;
        flag = 0;
        4296016616();
    }
    sub_10002f874(&v8);
    sub_100030020(&v7);
    sub_100030020(&v6);
    sub_100030020(&v5);
    sub_100030020(&v4);
    sub_100030020(&v3);
    sub_100030020(&v2);
    return;
}
