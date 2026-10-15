/* sub_100032734 @ 0x100032734
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100032734  (660 bytes, 50 basic blocks)
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

extern long long g_100023cf8;
extern long long g_10003d270;
extern unsigned int g_10003d298;
extern long long g_10003d2a0;
extern long long g_10003d2b8;
extern char g_10003e21d;
extern long long g_10003e4e0;

unsigned int sub_100032734(unsigned long a0, long long a1, char a2)
{
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    unsigned int v13;  // eax
    unsigned short *ptr;  // rdi
    char v15;  // al
    long long v0;  // [bp-0xf8]
    unsigned short *v1;  // [bp-0xd8]
    char v2;  // [bp-0xc8]
    char v3;  // [bp-0xb8]
    char v4;  // [bp-0xa8]
    char v5;  // [bp-0x90]
    char v6;  // [bp-0x80]
    char v7;  // [bp-0x70]
    char v8;  // [bp-0x60]
    char v9;  // [bp-0x50]

    *((unsigned int *)&v0) = 0;
    sub_100036cc8(&g_10003e4e0, L"UNCRetryTimeout", 60000, 0, v0, 0, 0, 0);
    sub_1000325b8(&g_10003d270);
    v11 = sub_100032ac8(&g_10003d270, &g_10003d2b8, a1);
    if (v11 != 4294967295)
    {
        sub_100032d78(&g_10003d2b8, v11);
        4296016152();
    }
    v12 = sub_100032ac8(&g_10003d270, &g_10003d2a0, a1);
    if (v12 != 4294967295)
    {
        sub_100032d78(&g_10003d2a0, v12);
        4296016152();
    }
    else if (g_10003e21d)
    {
        g_10003d298 = g_10003d298 - 1;
        4296016064();
    }
    else if (a2)
    {
        sub_10002fbf0(&v1);
        sub_100033184(&v3);
        sub_10002fbf0(&v2);
        sub_100033208(a1, &v3);
        v13 = sub_1000338ac(&v3, &g_100023cf8);
        if (v13 >= 0)
        {
            v13 = sub_100033340(&v3, 10, &v1);
            if (v13 >= 0)
            {
                v13 = sub_100033e00(&v3, &v2);
                if (v13 >= 0)
                {
                    ptr = v1;
                    v15 = 0;
                    if (ptr)
                        v15 = *(ptr);
                    if (!v15)
                    {
                        v13 = sub_100031138(ptr);
                        if (v13 < 0 && v12 != 4294967295)
                        {
                            sub_1000325b8(&g_10003d270);
                            if (sub_100032ac8(&g_10003d270, &g_10003d2b8, a1) != 4294967295)
                                4296016152();
                            if (g_10003e21d)
                            {
                                g_10003d298 = g_10003d298 - 1;
                                4296016064();
                            }
                        }
                    }
                    else if (ptr)
                    {
                        4296016320();
                    }
                    else
                    {
                        sub_100039c5c(v2); /* do not return */
                    }
                }
            }
        }
        sub_100030020(&v2);
        sub_10002f874(&v9);
        sub_100030020(&v8);
        sub_100030020(&v7);
        sub_100030020(&v6);
        sub_100030020(&v5);
        sub_100030020(&v4);
        sub_100030020(&v3);
        sub_100030020(&v1);
        return v13;
    }
    else
    {
        return 0;
    }
}
