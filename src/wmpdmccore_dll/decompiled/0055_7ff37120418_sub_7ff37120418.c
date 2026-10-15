/* sub_7ff37120418 @ 0x7ff37120418
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37120418  (283 bytes, 31 basic blocks)
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

typedef struct struct_2 {
    unsigned short field_0;
    char padding_2[6];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

int sub_7ff37120418(void)
{
    unsigned long long v2;  // rdi
    struct_2 *ptr;  // rcx
    unsigned int v4;  // eax
    unsigned long long v5;  // rsi
    struct_1 **v7;  // rcx
    char *v8;  // r8
    unsigned long long v9;  // rdx
    unsigned int v10;  // ebx
    unsigned long long v0;  // [bp-0x48]
    unsigned long choice;  // [bp+0x8]

    v0 = 18446744073709551614;
    v2 = 2;
    v4 = ptr->field_0;
    v5 = 4;
    if (v4 <= 13)
    {
        if (v4 != 13)
        {
            if (v4 == 2)
                return;
            if (v4 > 2)
            {
                if (v4 <= 4)
                    return;
                if (v4 <= 7)
                    return;
                if (v4 == 9)
                    goto LABEL_7ff37120494;
                if (v4 == 10)
                {
                    return;
                }
                else if (v4 == 11)
                {
                    return;
                }
            }
        }
        else
        {
LABEL_7ff37120494:
            choice = 0;
            if (ptr->field_8)
            {
                v7 = ptr->field_8;
                v8 = &choice;
                v9 = sub_7ff3710d1e8;
                ptr->field_8->field_0->field_0();
            }
            v10 = 18;
            goto LABEL_7ff37120566;
            goto LABEL_7ff37120566;
        }
    }
    else
    {
        if (v4 >= 16)
        {
            if (v4 <= 17)
            {
                v10 = 3;
LABEL_7ff37120566:
                if (v10 != 2)
                    return;
            }
            else if (v4 == 18)
            {
                return;
            }
            else if (v4 == 19)
            {
                return;
            }
            else if (v4 > 19)
            {
                if (v4 <= 21)
                {
                    return;
                }
                else if (v4 <= 23)
                {
                    return;
                }
            }
        }
    }
    8792722900040();
}
