/* sub_10007b514 @ 0x10007b514
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10007b514  (660 bytes, 50 basic blocks)
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

extern long long g_1000062c0;
extern long long g_1000871c0;
extern unsigned int g_1000871e8;
extern long long g_1000871f0;
extern long long g_100087208;
extern char g_10008895c;
extern long long g_100088c10;

unsigned int sub_10007b514(unsigned long a0, long long a1, char a2)
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
    sub_100074b9c(&g_100088c10, L"UNCRetryTimeout", 60000, 0, v0, 0, 0, 0);
    sub_10007b398(&g_1000871c0);
    v11 = sub_10007b8a8(&g_1000871c0, &g_100087208, a1);
    if (v11 != 4294967295)
    {
        sub_10007bad8(&g_100087208, v11);
        4298113904();
    }
    v12 = sub_10007b8a8(&g_1000871c0, &g_1000871f0, a1);
    if (v12 != 4294967295)
    {
        sub_10007bad8(&g_1000871f0, v12);
        4298113904();
    }
    else if (g_10008895c)
    {
        g_1000871e8 = g_1000871e8 - 1;
        4298114208();
    }
    else if (a2)
    {
        sub_10007d40c(&v1);
        sub_1000750dc(&v3);
        sub_10007d40c(&v2);
        sub_100075160(a1, &v3);
        v13 = sub_100075804(&v3, &g_1000062c0);
        if (v13 >= 0)
        {
            v13 = sub_100075298(&v3, 10, &v1);
            if (v13 >= 0)
            {
                v13 = sub_100075d58(&v3, &v2);
                if (v13 >= 0)
                {
                    ptr = v1;
                    v15 = 0;
                    if (ptr)
                        v15 = *(ptr);
                    if (!v15)
                    {
                        v13 = sub_10007a13c(ptr);
                        if (v13 < 0 && v12 != 4294967295)
                        {
                            sub_10007b398(&g_1000871c0);
                            if (sub_10007b8a8(&g_1000871c0, &g_100087208, a1) != 4294967295)
                                4298113904();
                            if (g_10008895c)
                            {
                                g_1000871e8 = g_1000871e8 - 1;
                                4298114208();
                            }
                        }
                    }
                    else if (ptr)
                    {
                        4298113472();
                    }
                    else
                    {
                        sub_10007e90c(v2); /* do not return */
                    }
                }
            }
        }
        sub_10007d970(&v2);
        sub_1000783b0(&v9);
        sub_10007d970(&v8);
        sub_10007d970(&v7);
        sub_10007d970(&v6);
        sub_10007d970(&v5);
        sub_10007d970(&v4);
        sub_10007d970(&v3);
        sub_10007d970(&v1);
        return v13;
    }
    else
    {
        return 0;
    }
}
