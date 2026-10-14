/* sub_10005bb32 @ 0x10005bb32
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10005bb32  (331 bytes, 32 basic blocks)
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

typedef struct struct_1 {
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[80];
    unsigned long long field_60;
    unsigned int field_68;
} struct_1;

typedef struct struct_0 {
    char padding_0[636];
    unsigned int field_27c;
} struct_0;

extern struct_0 *g_100089160;

void sub_10005bb32(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned int a5, unsigned int a6, unsigned int a7)
{
    struct_1 *ptr;  // rdi
    unsigned long v4;  // rcx
    unsigned long v5;  // r12
    unsigned int v6;  // ecx
    unsigned int v7;  // ecx
    unsigned int v8;  // ecx
    int v1;  // [bp+0x34]
    char v2;  // [bp+0x50]

    if (v1 < vvar_77{r56|8b} || g_100089160 != vvar_77{r56|8b} && g_100089160->field_27c != vvar_77{r56|8b})
    {
        ptr->field_68 = vvar_77{r56|8b};
        if (ptr->field_60 != vvar_77{r56|8b})
            4298114088();
    }
    v4 = a5;
    if ((unsigned int)v4 == vvar_77{r56|8b})
        4298113904();
    v6 = v4 - v5;
    if ((unsigned int)v4 != (unsigned int)v5)
    {
        v7 = v6 - v5;
        if (v6 == (unsigned int)v5)
            4298113904();
        v8 = v7 - v5;
        if (v7 == (unsigned int)v5)
            4298113904();
        if (v8 != (unsigned int)v5 && (unsigned int)(v8 - v5) == (unsigned int)v5)
        {
LABEL_10005bb9f:
            ptr->field_68 = vvar_77{r56|8b};
        }
        if (v1 != vvar_77{r56|8b})
        {
            sub_1000527f4();
            4298113688();
        }
        else if (a6 == 4294967295)
        {
            4298114912();
        }
        else
        {
            if (a7 > vvar_77{r56|8b})
            {
                if (&v2 == vvar_77{r56|8b})
                    goto LABEL_10005bd3c;
                goto LABEL_10005bd24;
            }
            else if (&v2 != vvar_77{r56|8b})
            {
LABEL_10005bd24:
                sub_100058214(&v2);
            }
LABEL_10005bd3c:
            4298114912();
        }
    }
    else
    {
        goto LABEL_10005bb9f;
    }
}
