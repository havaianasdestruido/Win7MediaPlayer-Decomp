/* sub_1000376bc @ 0x1000376bc
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x1000376bc  (308 bytes, 29 basic blocks)
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

unsigned long long sub_1000376bc(long long a0, unsigned int *ptr)
{
    int v3;  // edi
    unsigned long v0;  // [bp-0x18]
    unsigned int flag;  // [bp+0x10]

    v3 = 0;
    *(ptr) = 0;
    if ((char)sub_100033ebc())
    {
        *(ptr) = 9;
        return 0;
    }
    else if ((char)sub_100033ebc(a0, L"wmpdvd"))
    {
        *(ptr) = 8;
        return 0;
    }
    else
    {
        if (!(char)sub_100033ebc(a0, "f"))
        {
            sub_10002fbf0(&v0);
            if ((int)sub_100033e00(a0, &v0) >= 0)
                v3 = sub_100037010(v0, ptr);
        }
        else
        {
            sub_10002fbf0(&v0);
            if ((int)sub_100033688(a0, &v0) >= 0 && ((int)sub_10003727c(&v0, ptr) >= 0 || !((v3 = (int)sub_1000370c0(v0, ptr), v3 < 0))))
            {
                flag = 0;
                if (&flag)
                    sub_10003751c(v0, &flag);
                sub_10003734c(&v0, 1); /* do not return */
            }
        }
        sub_100030020(&v0);
        return v3;
    }
}
