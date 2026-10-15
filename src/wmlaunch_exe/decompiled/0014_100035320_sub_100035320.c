/* sub_100035320 @ 0x100035320
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100035320  (406 bytes, 35 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

int sub_100035320(unsigned long a0, unsigned short *a1)
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
    sub_10002fbf0(&v0);
    v6 = NULL;
    v7 = NULL;
    sub_10002fbf0(&v2);
    sub_10002fbf0(&v1);
    if (!a1)
    {
        i = 0;
    }
    else if (*(a1) == 63)
    {
        i = sub_10002fd60(&v0, a1, 4294967295);
        if (i < 0)
        {
            sub_100033ae0(a0);
            4296016720();
        }
        ptr = &v0[1];
        do
        {
            if (!ptr)
                break;
            if (ptr[0] != 38)
            {
                v5 = ptr;
                4296016720();
            }
            ptr[0] = 0;
            v7 = &ptr[1];
            ptr = NULL;
        } while (i >= 0);
        if (i < 0)
        {
            sub_100033ae0(a0);
            4296016720();
        }
        goto LABEL_100035591;
    }
    else if (*(a1) == 35)
    {
        v6 = a1 + 1;
        i = 0;
LABEL_100035591:
        if (!v6)
            goto LABEL_100035550;
        v10 = v6;
        v11 = "#";
LABEL_100035578:
        i = sub_100033bbc(a0, v11, v10, 0);
    }
    else if (*(a1) == 38)
    {
        v7 = a1 + 2;
        i = 0;
LABEL_100035550:
        if (v7 && (i = (unsigned int)(int)sub_100035ec0(v7, 4294967295, &v1), i >= 0))
        {
            v10 = (unsigned short [2])v1;
            v11 = "&";
            goto LABEL_100035578;
        }
    }
    else
    {
        i = 2147942487;
        if (!(0))
            goto LABEL_100035591;
    }
    sub_100030020(&v1);
    sub_100030020(&v2);
    sub_100030020(&v0);
    return i;
}
