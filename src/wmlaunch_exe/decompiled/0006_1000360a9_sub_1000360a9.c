/* sub_1000360a9 @ 0x1000360a9
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x1000360a9  (533 bytes, 52 basic blocks)
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

void sub_1000360a9(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5)
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
    v10 = sub_100033ebc(vvar_85{r56|8b}, "f");
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
            4296016568();
    }
    else
    {
        if ((char)sub_100033ebc(vvar_85{r56|8b}, "f") != (char)v9)
            sub_100039cf8(v13); /* do not return */
        if ((char)sub_100033ebc(vvar_85{r56|8b}, L"wmpcd") != (char)v9)
            4296016592();
        if ((char)sub_100033ebc(vvar_85{r56|8b}, L"res") == (char)v9)
        {
            if ((char)sub_100033ebc(vvar_85{r56|8b}, L"wmpdvd") != (char)v9)
            {
                if (*((short *)v13) < 65 || *((short *)v13) > 90)
                {
                    if (*((short *)v13) < 97)
                        goto LABEL_0x100036462;
                    if (*((short *)v13) <= 122)
                        goto LABEL_10003621e;
                    else
                        goto LABEL_0x100036462;
                }
LABEL_10003621e:
                if (*((short *)(v13 + 2)) == v7)
                    4296016592();
                if (*((short *)(v13 + 2)) != (unsigned short)v9)
                    goto LABEL_0x100036462;
            }
            else if ((char)sub_100033ebc(vvar_85{r56|8b}, L"wmpvcd") != (char)v9)
            {
                sub_10002fbf0(&vvar_5);
                if ((int)sub_10002fd60(&vvar_5, v13, v11 & 4294967295) >= (int)v9)
                    4296015984();
                sub_100030020(&vvar_5);
                if (3222082343 < (int)v9)
                    goto LABEL_0x100036462;
                else
                    goto LABEL_1000363ff;
LABEL_1000363ff:
                if (v13 == v9)
                    goto LABEL_0x100036462;
                if ((char)sub_10002fba4(v6, L"file") == (char)v9)
                    sub_100039ca0(v6); /* do not return */
                if (*((short *)v13) != (unsigned short)v9)
                    4296016960();
            }
            else if (!((char)sub_100033ebc(vvar_85{r56|8b}, L"dlna-playsingle") == (char)v9 && (char)sub_100033ebc(vvar_85{r56|8b}, L"dlna-playcontainer") == (char)v9))
            {
                4296016752();
            }
        }
        goto LABEL_1000363ff;
    }
}
