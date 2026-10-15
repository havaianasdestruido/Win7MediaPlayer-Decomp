/* sub_1000770a4 @ 0x1000770a4
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x1000770a4  (406 bytes, 35 basic blocks)
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

int sub_1000770a4(unsigned long a0, unsigned short *a1)
{
    unsigned short v6[2];  // r12
    unsigned short v7[2];  // r15
    unsigned int i;  // ebx
    unsigned short ptr[2];  // rsi
    unsigned short v10[2];  // r8
    long long v11;  // rdx
    unsigned short v0[2];  // [bp-0x78], Other Possible Types: char
    char v1;  // [bp-0x58]
    char v2;  // [bp-0x48]
    unsigned short v4[2];  // [bp+0x10]
    unsigned short v5[2];  // [bp+0x18]

    v4 = a1;
    sub_10007d40c(&v0);
    v6 = NULL;
    v7 = NULL;
    sub_10007d40c(&v2);
    sub_10007d40c(&v1);
    if (!a1)
    {
        i = 0;
    }
    else if (*(a1) == 63)
    {
        i = sub_10007d57c(&v0, a1, 4294967295);
        if (i < 0)
        {
            sub_100075a38(a0);
            4298115432();
        }
        ptr = &v0[1];
        do
        {
            if (!ptr)
                break;
            if (ptr[0] != 38)
            {
                v5 = ptr;
                4298115432();
            }
            ptr[0] = 0;
            v7 = &ptr[1];
            ptr = NULL;
        } while (i >= 0);
        if (i < 0)
        {
            sub_100075a38(a0);
            4298115432();
        }
        goto LABEL_100077315;
    }
    else if (*(a1) == 35)
    {
        v6 = a1 + 1;
        i = 0;
LABEL_100077315:
        if (!v6)
            goto LABEL_1000772d4;
        v10 = v6;
        v11 = "#";
LABEL_1000772fc:
        i = sub_100075b14(a0, v11, v10, 0);
    }
    else if (*(a1) == 38)
    {
        v7 = a1 + 2;
        i = 0;
LABEL_1000772d4:
        if (v7 && (i = (unsigned int)(int)sub_100077c44(v7, 4294967295, &v1), i >= 0))
        {
            v10 = (unsigned short [2])v1;
            v11 = "&";
            goto LABEL_1000772fc;
        }
    }
    else
    {
        i = 2147942487;
        if (!(0))
            goto LABEL_100077315;
    }
    sub_10007d970(&v1);
    sub_10007d970(&v2);
    sub_10007d970(&v0);
    return i;
}
