/* sub_100077e2d @ 0x100077e2d
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100077e2d  (533 bytes, 52 basic blocks)
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

void sub_100077e2d(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5)
{
    unsigned short v7;  // ax
    unsigned int v8;  // r12d
    long long v9;  // r14
    char v10;  // al
    unsigned long v11;  // r15
    char v12;  // cc_dep2
    long long v13;  // rsi
    unsigned short v1;  // [bp+0x50]
    unsigned short v2;  // [bp+0x52]
    unsigned short v3;  // [bp+0x54]
    unsigned short v4;  // [bp+0x56]
    unsigned short v5;  // [bp+0x58]
    long long v6;  // [bp+0x100030]

    v1 = v7;
    v2 = (unsigned short)v8 + 45;
    v3 = v2;
    v4 = v7;
    v5 = v9;
    v10 = sub_100075e14(vvar_85{r56|8b}, "f");
    v11 = v8 + 2;
    v12 = v9;
    if (v10 != (char)v9)
    {
        do
        {
            if (!v11)
                break;
        } while (*((short *)v13) == 46);
        if (v10 != v12)
            4298115136();
    }
    else
    {
        if ((char)sub_100075e14(vvar_85{r56|8b}, "f") != (char)v9)
            sub_10007e9a8(v13); /* do not return */
        if ((char)sub_100075e14(vvar_85{r56|8b}, L"wmpcd") != (char)v9)
            4298115112();
        if ((char)sub_100075e14(vvar_85{r56|8b}, "r") == (char)v9)
        {
            if ((char)sub_100075e14(vvar_85{r56|8b}, L"wmpdvd") != (char)v9)
            {
                if (*((short *)v13) < 65 || *((short *)v13) > 90)
                {
                    if (*((short *)v13) < 97)
                        goto LABEL_0x1000781e6;
                    if (*((short *)v13) <= 122)
                        goto LABEL_100077fa2;
                    else
                        goto LABEL_0x1000781e6;
                }
LABEL_100077fa2:
                if (*((short *)(v13 + 2)) == v7)
                    4298115112();
                if (*((short *)(v13 + 2)) != (unsigned short)v9)
                    goto LABEL_0x1000781e6;
            }
            else if ((char)sub_100075e14(vvar_85{r56|8b}, L"wmpvcd") != (char)v9)
            {
                sub_10007d40c(&vvar_5);
                if ((int)sub_10007d57c(&vvar_5, v13, v11 & 4294967295) >= (int)v9)
                    4298113464();
                sub_10007d970(&vvar_5);
                if (3222082343 < (int)v9)
                    goto LABEL_0x1000781e6;
                else
                    goto LABEL_100078183;
LABEL_100078183:
                if (v13 == v9)
                    goto LABEL_0x1000781e6;
                if ((char)sub_10007d3c0(v6, L"file") == (char)v9)
                    sub_10007e950(v6); /* do not return */
                if (*((short *)v13) != (unsigned short)v9)
                    4298116000();
            }
            else if (!((char)sub_100075e14(vvar_85{r56|8b}, L"dlna-playsingle") == (char)v9 && (char)sub_100075e14(vvar_85{r56|8b}, L"dlna-playcontainer") == (char)v9))
            {
                4298115392();
            }
        }
        goto LABEL_100078183;
    }
}
