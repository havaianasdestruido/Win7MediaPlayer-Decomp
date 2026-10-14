/* sub_10006c9c0 @ 0x10006c9c0
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10006c9c0  (515 bytes, 39 basic blocks)
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

extern unsigned long long g_1000062c0;

void sub_10006c9c0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned int a9, unsigned long a10, unsigned int flag, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned short *a16)
{
    unsigned int v4;  // eax
    unsigned short *v5;  // r13
    unsigned short *v14;  // rdi
    unsigned short *v15;  // rdi
    unsigned long v16;  // 4119
    unsigned short *v17;  // r12
    unsigned int v6;  // edi
    unsigned short *v7;  // rsi
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    unsigned int v13;  // eax
    unsigned short *v1;  // [bp+0x20], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp+0x60]
    unsigned int v3;  // [bp+0x64]

    if (v4 != (unsigned int)v5)
        goto LABEL_0x10006cae9;
    if (v6 != (unsigned int)v5)
    {
        if (v7 == v5 && a16 == v5)
        {
            a4 = 2;
            v1 = &g_1000062c0;
            4298113120();
        }
        if (!(~((char)(flag >> 1)) & 1))
        {
            a4 = v5;
            v1 = v5;
            4298113040();
        }
        v8 = flag - 1;
        if (flag != 1 && !((v9 = v8 - 2, v8 == 2)))
        {
            v10 = v9 - 5;
            if (v9 != 5)
            {
                v11 = v10 - 65529;
                if (v10 != 65529 && !((v12 = v11 - 2, v11 == 2)))
                {
                    v13 = v12 - 65533;
                    if (v12 != 65533 && v13 != 2)
                    {
                        if (v13 - 2 == 131078)
                            goto LABEL_10006cb95;
                        if (v7 != v5)
                            goto LABEL_10006cb52;
                    }
                    else
                    {
                        if (v7 != v5)
                        {
LABEL_10006cb52:
                            v14 = v7;
                            do
                            {
                                if (false)
                                    break;
                            } while (*(v14));
                            a4 = (unsigned int)~(18446744073709551615) * 2;
                            v1 = v7;
                            4298113120();
                        }
                    }
                }
                else
                {
                    if (v7 != v5)
                    {
                        a4 = 4;
                        a15 = sub_100053148(v7);
                        v1 = &a15;
                        4298113120();
                    }
                }
            }
            else
            {
LABEL_10006cb95:
                if (v7 != v5)
                {
                    v3 = (unsigned int)v5;
                    v2 = 7;
                    if (((char)(flag >> 18) & 1))
                    {
                        a4 = &v3;
                        v1 = v5;
                        4298113040();
                    }
                    do
                    {
                        if (false)
                            break;
                    } while (*(v15));
                    v16 = _ccall(0, 48, 2, ~(18446744073709551615) + 1, 0);
                    4295490198();
                }
            }
        }
        else
        {
            if (a16 != v5)
            {
                a4 = v3;
                v1 = a16;
                4298113120();
            }
        }
        4298113112();
    }
    else if (v17 == v5)
    {
        4298113112();
    }
    else
    {
        4298113072();
    }
}
