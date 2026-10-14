/* sub_7ff37140c80 @ 0x7ff37140c80
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37140c80  (551 bytes, 45 basic blocks)
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
    long long field_0;
    unsigned long long field_8;
    char padding_10[8];
    unsigned int field_18;
} struct_0;

int sub_7ff37140c80(void)
{
    struct_0 *ptr;  // rcx
    struct_0 *v6;  // rdi
    unsigned long long v15;  // rcx
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rcx
    unsigned long long v19;  // rcx
    struct_0 *v7;  // rdx
    unsigned int v8;  // r14d
    unsigned int flag;  // r15d
    unsigned long long v10;  // rbp
    unsigned int v11;  // eax
    unsigned long long v13;  // rdx
    unsigned long long v0;  // [bp-0x58]
    unsigned short *v1;  // [bp-0x50], Other Possible Types: char
    struct_0 *v2;  // [bp+0x8]
    unsigned long long v3;  // [bp+0x10]
    long long v4;  // [bp+0x18]

    v2 = ptr;
    v0 = 18446744073709551614;
    v6 = (char *)&ptr[1].field_0 + 4;
    if (v7 != v6)
    {
        sub_7ff37134a64(v6);
        if ((int)sub_7ff37134594(v6, v7->field_0, 4294967295) < 0)
            sub_7ff37134a64(v6);
    }
    v8 = 4294967295;
    flag = 0;
    v10 = 0;
    sub_7ff37134410(&v1);
    if ((int)sub_7ff37134594(&v1, v7->field_0, 4294967295) >= 0)
    {
        do
        {
            v11 = sub_7ff37134f54(&v1, ",", 0);
            if (v11 != 4294967295)
            {
                v8 = v8 + v11 + 1;
                if ((v11 < 0 ? -2147024809 : (int)sub_7ff371346e0(&v1, v11)) < 0)
                {
                    sub_7ff37134a64(&v1);
                    return;
                }
            }
            else
            {
                flag = 1;
            }
            if ((!v1 ? 0 : *(v1)) == 1)
            {
                v10 = ptr->field_8;
                v3 = v10;
                v13 = (unsigned long long)ptr->padding_10;
                if (v10 >= v13 && v10 + 1 > v13)
                {
                    if (!ptr->field_0)
                        8792722899160();
                    v16 = ptr->field_18;
                    if (!v16)
                    {
                        v17 = v10 >> 3;
                        if (v17 > 0x400)
                            v19 = 0x400;
                        else
                            v19 = v17;
                        v16 = v19;
                        if (v17 < 4)
                            v16 = 4;
                    }
                    8792722899160();
                }
                v15 = v10 * 16;
                v4 = v15 + ptr->field_0;
                if (v15 + ptr->field_0)
                {
                    sub_7ff371344e0(v4, &v1);
                    ptr->field_8 = ptr->field_8 + 1;
                }
                else
                {
                    ptr->field_8 = ptr->field_8 + 1;
                }
            }
            if (flag == 1 || (unsigned int)v10 == 499)
            {
                sub_7ff37134a64(&v1);
                return;
            }
            sub_7ff37134a64(&v1);
            sub_7ff37134410(&v1);
        } while ((int)sub_7ff37134594(&v1, v7->field_0 + v8 * 2 + 2, 4294967295) >= 0);
    }
    sub_7ff37134a64(&v1);
    return;
}
