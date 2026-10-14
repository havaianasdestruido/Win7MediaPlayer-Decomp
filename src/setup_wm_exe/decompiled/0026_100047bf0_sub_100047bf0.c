/* sub_100047bf0 @ 0x100047bf0
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100047bf0  (583 bytes, 41 basic blocks)
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
extern unsigned long long g_100087a08;
extern unsigned long long g_100087a10;
extern unsigned int g_100088810;
extern unsigned long long g_100088818;
extern unsigned long long g_1000888e8;
extern unsigned long long g_100088ee0;
extern unsigned long long g_100088ee8;
extern long long g_100088ef0;

int sub_100047bf0(void)
{
    unsigned long long v10;  // rbx
    unsigned long long v11;  // rsi
    unsigned int flag;  // edx
    unsigned long v21;  // rdx
    unsigned int flag2;  // edx
    unsigned int choice;  // edx
    unsigned int v24;  // edx
    unsigned long v25;  // r9
    unsigned long long v26;  // r9
    unsigned long long v27;  // rax
    unsigned long long v12;  // rdi
    unsigned long long v13;  // r12
    unsigned long long v14;  // r13
    unsigned long long v15;  // r14
    unsigned long long v16;  // r15
    unsigned long v17;  // rcx
    unsigned int v18;  // edx
    unsigned long v19;  // r9
    char v0;  // [bp-0x4a8]
    unsigned long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v9;  // [bp+0x10]

    v9 = v10;
    v7 = v11;
    v6 = v12;
    v5 = v13;
    v4 = v14;
    v3 = v15;
    v2 = v16;
    v1 = g_100086110 ^ &v0;
    g_1000888e8 = v17;
    if (v18 > 1475)
    {
        flag = v18 - 1476;
        if (v18 == 1476)
        {
            g_100087a10 = v27;
            4298114872();
        }
        v21 = flag - 1;
        if (flag != 1)
        {
            flag2 = v21 - 1;
            if ((unsigned int)v21 == 1)
            {
                g_100088ee0 = v27;
                g_100087a08 = 1;
                4298114872();
            }
            choice = flag2 - 1;
            if (flag2 != 1)
            {
                v24 = choice - 1;
                if (choice == 1)
                    4298114872();
                if (v24 != 8)
                {
                    if (v24 != 13)
                    {
                        sub_1000486ee(v17);
                        return;
                    }
                }
                else
                {
                    if ((unsigned int)v25 < 0)
                    {
                        if ((unsigned int)v25 == 2147954429)
                            4298114912();
                        g_100088810 = v25;
                    }
                    else
                    {
                        if ((unsigned int)v25 == 1)
                            4298114912();
                    }
                    4298114744();
                }
            }
            else
            {
                if (!v26)
                    v27 = 1;
                g_100087a08 = v27;
                if (g_100088ee0)
                    4298114872();
                if (!v27)
                    v27 = 1;
                g_100088ee0 = v27;
                4298114872();
            }
        }
        4298114872();
    }
    else if (v18 != 1475)
    {
        if (v18 != 2 && v18 != 16 && v18 != 18)
        {
            if (v18 != 272)
            {
                if (v18 != 307)
                {
                    if (v18 <= 308)
                    {
                        sub_1000486ee(v17);
                        return;
                    }
                    else if (v18 > 310 && v18 != 312)
                    {
                        sub_1000486ee(v17);
                        return;
                    }
                }
                sub_100040aa8(); /* do not return */
            }
            if (g_100088818)
                4298114912();
            4298114744();
        }
        if (!g_100088ef0)
        {
            sub_1000486ee(g_100088ef0);
            return;
        }
        4298114320();
    }
    else
    {
        g_100088ee8 = v19;
        g_100087a10 = 1;
        4298114872();
    }
}
