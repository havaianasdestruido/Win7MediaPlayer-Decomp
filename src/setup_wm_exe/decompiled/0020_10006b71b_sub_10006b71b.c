/* sub_10006b71b @ 0x10006b71b
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10006b71b  (404 bytes, 45 basic blocks)
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

long long sub_10006b71b(void)
{
    unsigned int v2;  // eax
    unsigned int flag;  // eax
    long long v12;  // rsi
    long long v13;  // rsi
    long long v15;  // rsi
    long long v17;  // rsi
    unsigned int v18;  // ebx
    unsigned int v4;  // eax
    unsigned int flag2;  // eax
    unsigned int v6;  // eax
    unsigned int choice;  // eax
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v1;  // [bp+0x20]

    if (v2 != vvar_37{r56|4b})
    {
        flag = v1;
        if (flag != 4294967295)
        {
            if (flag <= 25)
            {
                if (flag == 25)
                {
                    4298113976();
                }
                else if (flag > 17)
                {
                    v6 = flag - 18;
                    if (flag == 18)
                        4298113976();
                    choice = v6 - 2;
                    if (v6 == 2)
                        4298113976();
                    v8 = choice - 1;
                    if (choice != 1 && v8 != 2 && v8 == 3)
                        4298113992();
                }
                else if (flag == 17)
                {
                    4298113976();
                }
                else if (flag != vvar_37{r56|4b})
                {
                    v4 = flag - 1;
                    if (flag == 1)
                        4298114032();
                    flag2 = v4 - 9;
                    if (v4 == 9)
                    {
                        4298113976();
                    }
                    else if (flag2 == 1)
                    {
                        4298113992();
                    }
                    else if (flag2 == 2)
                    {
                        4298113992();
                    }
                }
            }
            else
            {
                if (flag > 16409)
                {
                    v9 = flag - 16415;
                    if (flag != 16415)
                    {
                        v10 = v9 - 4;
                        if (v9 == 4)
                            sub_10006b2f4(v17, v18 >> 1); /* do not return */
                        v11 = v10 - 3;
                        if (v10 == 3)
                            sub_10006ae74(v15, v18 >> 1); /* do not return */
                        if (v11 != 5)
                        {
                            if (v11 == 14378)
                                sub_100053eb0(v12, 1); /* do not return */
                        }
                        else
                        {
                            sub_10006b154(v13, v18 >> 1);
                        }
                    }
                }
                else if (flag < 16406 && flag != 30 && flag != 50)
                {
                    if (flag == 51)
                    {
                        4298113976();
                    }
                    else if (flag == 52)
                    {
                        4298113976();
                    }
                }
            }
        }
    }
}
