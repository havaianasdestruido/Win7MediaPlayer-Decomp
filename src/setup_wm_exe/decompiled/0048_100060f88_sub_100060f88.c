/* sub_100060f88 @ 0x100060f88
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100060f88  (459 bytes, 32 basic blocks)
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
    char padding_0[32];
    struct struct_1 *field_20;
    char padding_28[8];
    struct struct_2 *field_30;
    struct struct_3 *field_38;
    char padding_40[72];
    long long field_88;
} struct_0;

typedef struct struct_4 {
    char padding_0[64];
    unsigned long long field_40;
} struct_4;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

typedef struct struct_2 {
    unsigned short field_0;
} struct_2;

typedef struct struct_3 {
    unsigned short field_0;
} struct_3;

extern unsigned long long g_100086110;

int sub_100060f88(struct_0 *ptr, long long a1)
{
    unsigned short *v5;  // r9
    unsigned short *v6;  // r9
    unsigned short *v7;  // rax
    long long v8;  // rax
    struct_4 *v9;  // rax
    unsigned short *v10;  // r9
    char v0;  // [bp-0x258]
    unsigned int v1;  // [bp-0x238]
    unsigned short i;  // [bp-0x228]
    unsigned long long v3;  // [bp-0x28]

    v3 = g_100086110 ^ &v0;
    if (!a1)
        return sub_10007fa70(v3 ^ &v0);
    v5 = &ptr->field_30->field_0;
    if (ptr->field_30)
    {
        do
        {
            if (false)
                break;
        } while (*(v5));
        v1 = (unsigned int)(~(18446744073709551615) - 1) * 2 + 2;
        sub_100057834(0); /* do not return */
    }
    else
    {
        v6 = &ptr->field_38->field_0;
        if (ptr->field_38)
        {
            do
            {
                if (false)
                    break;
            } while (*(v6));
            v1 = (unsigned int)(~(18446744073709551615) - 1) * 2 + 2;
            sub_100057834(0, a1, L"TYPE"); /* do not return */
        }
        else
        {
            v7 = sub_100061b6c(ptr);
            if (v7)
            {
                do
                {
                    if (false)
                        break;
                } while (*(v7));
                v1 = (unsigned int)(~(18446744073709551615) - 1) * 2 + 2;
                sub_100057834(0, a1, 0); /* do not return */
            }
            else
            {
                if (ptr->field_88)
                {
                    v8 = sub_100060ec4(ptr);
                    v9 = sub_10005cf68(ptr->field_88, v8);
                    if (v9 && v9->field_40)
                        4298115416();
                }
                v10 = &ptr->field_20->field_0;
                if (ptr->field_20)
                {
                    do
                    {
                        if (false)
                            break;
                    } while (*(v10));
                    v1 = (unsigned int)(~(18446744073709551615) - 1) * 2 + 2;
                    sub_100057834(0, a1, L"DESCRIPTION"); /* do not return */
                }
                else
                {
                    sub_10003a080(&i, 255, L"%lu", sub_100061aa4(ptr, 1));
                    do
                    {
                        if (false)
                            break;
                    } while (i);
                    v1 = (unsigned int)(~(18446744073709551615) - 1) * 2 + 2;
                    sub_100057834(0, a1); /* do not return */
                }
            }
        }
    }
}
