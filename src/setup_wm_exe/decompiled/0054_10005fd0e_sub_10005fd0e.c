/* sub_10005fd0e @ 0x10005fd0e
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10005fd0e  (317 bytes, 31 basic blocks)
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
    char padding_0[616];
    unsigned long long field_268;
    char padding_270[4];
    unsigned int field_274;
    char padding_278[4];
    unsigned int field_27c;
} struct_0;

void sub_10005fd0e(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    struct_0 *ptr;  // rdi
    unsigned long v4;  // rcx
    unsigned int flag2;  // ecx
    unsigned int choice;  // ecx
    unsigned int flag;  // ecx
    int v1;  // [bp+0x34]
    char v2;  // [bp+0x50]

    if (v1 < vvar_71{r56|8b} || ptr->field_27c != vvar_71{r56|8b})
    {
        ptr->field_274 = vvar_71{r56|8b};
        if (ptr->field_268 != vvar_71{r56|8b})
            4298114088();
    }
    v4 = a5;
    if ((unsigned int)v4 == vvar_71{r56|8b})
        4298113904();
    flag2 = v4 - 1;
    if ((unsigned int)v4 != 1)
    {
        choice = flag2 - 1;
        if (flag2 == 1)
            4298113904();
        flag = choice - 1;
        if (choice == 1)
            4298113904();
        if (flag != 1 && flag == 2)
        {
LABEL_10005fd7d:
            ptr->field_274 = vvar_71{r56|8b};
        }
        if (v1 != vvar_71{r56|8b})
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
            if (a7 > vvar_71{r56|8b})
            {
                if (&v2 == vvar_71{r56|8b})
                    goto LABEL_10005ff16;
                goto LABEL_10005fefe;
            }
            else if (&v2 != vvar_71{r56|8b})
            {
LABEL_10005fefe:
                sub_100058214(&v2);
            }
LABEL_10005ff16:
            4298114912();
        }
    }
    else
    {
        goto LABEL_10005fd7d;
    }
}
