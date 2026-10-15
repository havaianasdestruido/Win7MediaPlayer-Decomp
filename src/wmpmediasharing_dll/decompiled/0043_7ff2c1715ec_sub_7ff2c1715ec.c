/* sub_7ff2c1715ec @ 0x7ff2c1715ec
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c1715ec  (332 bytes, 26 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[76];
    char field_4c;
} struct_0;

long long sub_7ff2c1715ec(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned int a7, unsigned long a8, unsigned long long a9, char a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned long a31, unsigned long a32, unsigned long a33, unsigned long a34, unsigned long a35, unsigned long a36, unsigned long long a37, unsigned long a38, unsigned long a39, unsigned long a40, unsigned long a41, unsigned long a42, unsigned long a43, unsigned long a44, unsigned long a45, unsigned long a46, unsigned long a47)
{
    unsigned int v5;  // eax
    unsigned long v6;  // r13
    unsigned long long v7;  // rbx
    unsigned long long v8;  // rbx
    struct_0 *ptr;  // rdi
    char v0;  // [bp+0x0]
    unsigned long long v2;  // [bp+0x20]
    unsigned int v3;  // [bp+0x44]
    unsigned int v4;  // [bp+0x100008]

    if (v5 != 122)
    {
        v4 = 7;
        sub_7ff2c16df64((struct struct_0 *)&ptr[1].padding_0[11]);
        sub_7ff2c16df64((struct struct_0 *)&ptr[1].padding_0[19]);
        sub_7ff2c16df64((struct struct_0 *)&ptr[1].padding_0[27]);
        sub_7ff2c16df64((struct struct_0 *)&ptr[1].padding_0[35]);
        ptr->field_4c = 0;
        if (a9 == &vvar_10)
            return sub_7ff2c178780(a37 ^ &v0);
        8792537770344();
    }
    else if (v3 > 68)
    {
        8792537709680();
    }
    else
    {
        if (a7 > (unsigned int)v6)
        {
            v7 = a7 * 2;
            if (v7 >= 9223372036854775807)
                8792537709680();
            v8 = v7 * 2;
            if (!a9)
            {
                if (v8 > v6)
                    sub_7ff2c172900(&a9, v8); /* do not return */
                a9 = &vvar_10;
            }
            else
            {
                if (v8 > v6)
                {
                    if (a9 == &vvar_10)
                        sub_7ff2c172900(&a9, v8); /* do not return */
                    sub_7ff2c172934(&a9, v8); /* do not return */
                }
                a9 = &vvar_10;
            }
        }
        a5 = vvar_72{r56|8b};
        a4 = &a7;
        v2 = a9;
        8792538350024();
    }
}
