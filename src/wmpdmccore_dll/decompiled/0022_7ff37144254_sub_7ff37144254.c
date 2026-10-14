/* sub_7ff37144254 @ 0x7ff37144254
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37144254  (547 bytes, 47 basic blocks)
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
    char padding_0[336];
    struct struct_1 *field_150;
    struct struct_2 *field_158;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int sub_7ff37144254(void)
{
    unsigned short *v3;  // rdx
    unsigned short *ptr;  // rsi
    unsigned int v13;  // ecx
    unsigned int v14;  // ecx
    unsigned int choice;  // ecx
    unsigned int v16;  // ecx
    struct_0 **v17;  // rcx
    unsigned long long v18;  // rdx
    struct_0 **v19;  // rcx
    unsigned long long v20;  // r8
    unsigned long v21;  // rdi
    unsigned long long v22;  // rcx
    struct_0 **v5;  // rcx
    unsigned int v23;  // edx
    unsigned int v24;  // eax
    unsigned int v25;  // eax
    unsigned int v26;  // edx
    int v27;  // eax
    unsigned long long v28;  // rdi
    unsigned long long v29;  // rdx
    unsigned long long v30;  // r8
    struct_0 **v31;  // rcx
    struct_0 **v6;  // rbx
    unsigned long long flag;  // rdi
    unsigned int v8;  // r8d
    unsigned int v9;  // eax
    unsigned short *v10;  // rcx
    unsigned short *v11;  // rcx
    char v0;  // [bp-0x38]
    int v2;  // [bp+0x18]

    ptr = v3;
    v6 = v5;
    flag = 0;
    if (v8 == 4294967295)
        8792722899336();
    v9 = 0;
    if (v8 <= 0)
        return;
    v10 = ptr;
    while (true)
    {
        v11 = v10;
        if (*(v11) != 9 && *(v11) != 10 && *(v11) != 13 && (*(v11) < 32 || *(v11) > 55295) && (*(v11) < 0xe000 || *(v11) > 65533))
            break;
        v9 += 1;
        v10 = v11 + 1;
        if (v9 >= v8)
        {
            if (v8 <= 0)
            {
                return;
            }
            else if (*(ptr))
            {
                v13 = *(ptr);
                v14 = v13 - 34;
                if (v13 != 34)
                {
                    choice = v14 - 4;
                    if (v14 != 4)
                    {
                        v16 = choice - 1;
                        if (choice == 1)
                        {
                            v18 = L"&apos;";
                        }
                        else if (v16 != 21)
                        {
                            v17 = v6;
                            if (v16 == 23)
                            {
                                v19 = v6;
                                v18 = L"&gt;";
                                v20 = 4294967295;
                                *(v6)->field_158();
                            }
                            *(v6)->field_150();
                        }
                        else
                        {
                            v18 = "&";
                        }
                    }
                    else
                    {
                        v18 = L"&amp;";
                    }
                }
                else
                {
                    v18 = L"&quot;";
                }
                v19 = v6;
                v20 = 4294967295;
                *(v6)->field_158();
            }
            else
            {
                return;
            }
        }
    }
    sub_7ff37134410(&v0);
    if (ptr && &v0)
    {
        sub_7ff37134a64(&v0);
        do
        {
            if (false)
                break;
        } while (*(ptr));
        v21 = (unsigned int)(~(18446744073709551615) - 1) * 2;
        if ((unsigned int)v21 <= 0)
            goto LABEL_7ff37144461;
        v22 = (unsigned int)v21 * 4 / 3 - (unsigned int)v21 / 3 * 3 + v21;
        v23 = v22;
        v24 = (unsigned int)v22 / 76;
        v25 = v24 * 76;
        v26 = v23 - v25;
        if (v23 != v25 && ((char)v26 & 3))
            v22 += 4 - (v26 & 3);
        v27 = (unsigned int)v22 + (v24 + 1) * 2;
        if (2147483647 < v27)
            v27 = 2147483646;
        v2 = v27;
        if (v27 > 0)
            sub_7ff3714a00a(v27 + 8); /* do not return */
        v28 = 2147549183;
    }
    else
    {
LABEL_7ff37144461:
        v28 = 2147942487;
    }
    if ((unsigned int)v28 < 0)
    {
        sub_7ff37134a64(&v0);
        return;
    }
    v29 = L"base64:";
    v30 = 4294967295;
    v31 = v6;
    *(v6)->field_158();
}
