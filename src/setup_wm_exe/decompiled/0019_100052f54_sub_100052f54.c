/* sub_100052f54 @ 0x100052f54
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100052f54  (461 bytes, 45 basic blocks)
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

unsigned int sub_100052f54(unsigned long long a0, unsigned long a1, unsigned int a2)
{
    unsigned int v3;  // r13d
    unsigned short *v4;  // rsi
    unsigned int v13;  // ecx
    unsigned short *v14;  // rdi
    unsigned int v15;  // edx
    unsigned short *v16;  // rdi
    unsigned int v17;  // eax
    unsigned short *v18;  // rcx
    unsigned long long v19;  // rax
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax
    unsigned short *v5;  // r8
    unsigned int v6;  // edx
    unsigned int v7;  // ebx
    unsigned short *v8;  // r12
    unsigned short *cur;  // r14
    unsigned long long v10;  // r15
    unsigned int v11;  // ecx
    unsigned int flag;  // ecx
    unsigned short *v0;  // [bp-0x38]
    unsigned short *v2;  // [bp+0x20], Other Possible Types: unsigned int

    v3 = a2;
    v2 = NULL;
    if ((int)sub_100052cbc(&v2) < 0)
        return 0;
    v4 = v2;
    v5 = NULL;
    v6 = 1;
    v0 = NULL;
    v7 = 0;
    v8 = v4;
    cur = v4;
    v10 = 0;
    v2 = 1;
    do
    {
        v11 = *(cur);
        if (v11)
        {
            flag = v11 - 44;
            if (v11 != 44)
            {
                v13 = flag - 1;
                if (flag == 1)
                {
                    *(cur) = 0;
                    v3 = 1;
                    v5 = &v4[(unsigned int)v10 + 1];
                    v0 = v5;
                    goto LABEL_1000530d8;
                }
                else if (v13 == 38 || v13 == 70)
                {
                    4298115416();
                }
            }
        }
        else
        {
            v2 = 0;
        }
        *(cur) = 0;
        if (v8)
        {
            v14 = v8;
            do
            {
                if (false)
                    break;
            } while (*(v14));
            v15 = 1;
            if (~(18446744073709551615) != 1)
                goto LABEL_100053048;
        }
        v15 = 0;
LABEL_100053048:
        if (v5)
        {
            v16 = v5;
            do
            {
                if (false)
                    break;
            } while (*(v16));
            v17 = 1;
            if (~(18446744073709551615) != 1)
                goto LABEL_100053068;
        }
        v17 = 0;
LABEL_100053068:
        v7 = 0;
        if (v15)
        {
            v18 = v8;
            if (!v17)
            {
                v19 = sub_100052d68(v18);
                v5 = v0;
                if (v3)
                {
                    v7 = v19 <= a0;
                    goto LABEL_1000530c9;
                }
            }
            else
            {
                v20 = sub_100052d68(v18);
                v21 = sub_100052d68(v0);
                v5 = v0;
                if (v20 <= a0)
                {
                    if (a0 <= v21)
                        v7 = 1;
                    else
                        v7 = 0;
                }
LABEL_1000530c7:
                goto LABEL_1000530c7;
            }
        }
        else if (!v17)
        {
LABEL_1000530c9:
            v3 = 0;
            v8 = &v4[(unsigned int)v10 + 1];
            v6 = v2;
        }
        else
        {
            v19 = sub_100052d68(v5);
            v5 = v0;
            if (v3)
            {
                v7 = a0 <= v19;
                goto LABEL_1000530c9;
            }
            v7 = a0 == v19;
            goto LABEL_1000530c9;
        }
LABEL_1000530d8:
        v10 += 1;
        cur += 1;
    } while (!v7 && v6);
    if (!v4)
        return v7;
    4295490210();
    return v7;
}
