/* sub_7ff3713b1f0 @ 0x7ff3713b1f0
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3713b1f0  (405 bytes, 35 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
    struct struct_3 *field_18;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern struct_0 *g_7ff37153600;

int sub_7ff3713b1f0(void)
{
    unsigned int v7;  // eax
    unsigned long v8;  // rsi
    struct_1 **choice;  // rbp
    struct_1 **v18;  // rbp
    unsigned long v19;  // rcx
    struct_1 **v20;  // rcx
    struct_0 **v9;  // r13
    unsigned long v10;  // rdi
    struct_1 **v11;  // rbp
    unsigned long v12;  // r15
    struct_1 **v13;  // rcx
    char *v14;  // r8
    unsigned int *ptr;  // r12
    unsigned long v16;  // rdx
    struct_1 **v1;  // [bp+0x60]
    struct_1 **v2;  // [bp+0x70]
    unsigned int v3;  // [bp+0x78]
    unsigned long v4;  // [bp+0xc0]
    unsigned int flag;  // [bp+0x120]
    char v6;  // [bp+0x100008]

    v8 = v7;
    if (g_7ff37153600 != v9 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff3711722c(g_7ff37153600->field_10, 184, sub_7ff3710c940, v7); /* do not return */
    if ((unsigned int)v8 >= vvar_34{r56|8b} && v1 == vvar_34{r56|8b})
    {
        v8 = 2147500035;
        if (g_7ff37153600 != v9 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
            sub_7ff3711722c(g_7ff37153600->field_10, 185, sub_7ff3710c940, 2147500035); /* do not return */
    }
    v10 = vvar_34{r56|8b};
    v4 = vvar_34{r56|8b};
    v11 = (struct_1 **)vvar_34{r56|8b};
    if ((unsigned int)v8 >= (unsigned int)v11)
    {
        if (v3)
        {
            flag = 0;
            if (vvar_34{r56|8b} >= v12)
                sub_7ff3711849c(2147942487); /* do not return */
            v13 = v1;
            v14 = &flag;
            v16 = *(ptr);
            *(v1)->field_18();
        }
        else
        {
            choice = NULL;
            if ((unsigned int)v8 < 0)
            {
                v11 = choice;
            }
            else if (!vvar_34{r56|8b})
            {
                v8 = 2147549183;
                if (g_7ff37153600 == &g_7ff37153600)
                {
                    v11 = choice;
                }
                else if ((g_7ff37153600->field_1c & 1))
                {
                    if (g_7ff37153600->field_19 >= 2)
                        sub_7ff3711722c(g_7ff37153600->field_10, 191, sub_7ff3710c940, 2147549183); /* do not return */
                    v11 = choice;
                }
                else
                {
                    v11 = choice;
                }
            }
            else
            {
                sub_7ff3713b4bc();
                return;
            }
        }
    }
    v18 = v11;
    if (vvar_34{r56|8b} != v18)
    {
        v19 = vvar_34{r56|8b};
        (*((long long *)(*((long long *)&v6) + 16)))();
    }
    v20 = v1;
    if (v1 != v18)
    {
        *(v1)->field_10();
    }
    else if (v2 != v18)
    {
        8792722899208();
    }
}
