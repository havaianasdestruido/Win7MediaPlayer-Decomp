/* sub_100067483 @ 0x100067483
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100067483  (348 bytes, 32 basic blocks)
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
    char padding_0[80];
    unsigned long long field_50;
    char padding_58[8];
    unsigned int field_60;
    unsigned int field_64;
} struct_0;

void sub_100067483(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    struct_0 *ptr;  // rdi
    unsigned long v4;  // rcx
    unsigned int flag2;  // ecx
    unsigned int choice;  // ecx
    unsigned int flag;  // ecx
    int v1;  // [bp+0x34]
    char v2;  // [bp+0x50]

    if (v1 < vvar_63{r56|8b} || ptr->field_64 != vvar_63{r56|8b})
    {
        ptr->field_60 = vvar_63{r56|8b};
        if (ptr->field_50 != vvar_63{r56|8b})
            4298114088();
    }
    v4 = a5;
    if ((unsigned int)v4 != vvar_63{r56|8b})
    {
        flag2 = v4 - 1;
        if ((unsigned int)v4 != 1)
        {
            choice = flag2 - 1;
            if (flag2 == 1)
                4298113904();
            flag = choice - 1;
            if (choice == 1)
            {
                4298113904();
            }
            else if (flag != 1)
            {
                if (flag == 2)
                {
                    sub_1000526dc(4, "##### Service XML download Complete\r\n"); /* do not return */
                }
                else if (v1 != vvar_63{r56|8b})
                {
                    sub_1000527f4(2, "ERROR: Package download failure has occured.  Result: 0x%x.\r\n");
                    4298113688();
                }
                else if (a6 == 4294967295)
                {
                    4298114912();
                }
                else
                {
                    if (a7 > vvar_63{r56|8b})
                    {
                        if (&v2 != vvar_63{r56|8b})
                            goto LABEL_100067698;
                        else
                            4298114912();
                    }
                    else
                    {
                        if (&v2 != vvar_63{r56|8b})
LABEL_100067698:
                        else
                            4298114912();
                    }
                    sub_100058214(&v2);
                    4298114912();
                }
            }
        }
        else
        {
            ptr->field_60 = vvar_63{r56|8b};
        }
        sub_1000526dc(4); /* do not return */
    }
    4298113904();
}
