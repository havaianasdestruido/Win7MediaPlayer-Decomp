/* sub_100006b85 @ 0x100006b85
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100006b85  (331 bytes, 26 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 10888bb9c3799e1e8b010c0f9088ced376aad63a509fce1727c457b022cdc717
 *   Evidence: analysis/report/rea-evidence/wmpnscfg_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[76];
    char field_4c;
} struct_0;

long long sub_100006b85(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned int a7, unsigned long a8, unsigned long a9, char a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned long a31, unsigned long a32, unsigned long a33, unsigned long a34, unsigned long a35, unsigned long a36, unsigned long long a37, unsigned long a38, unsigned long a39, unsigned long a40, unsigned long a41, unsigned long a42, unsigned long a43, unsigned long a44, unsigned long a45, unsigned long a46, unsigned long a47)
{
    unsigned int v5;  // eax
    unsigned long v6;  // r13
    unsigned long long v7;  // rsi
    unsigned long v8;  // rdi
    unsigned long long v9;  // rsi
    struct_0 *ptr;  // rbx
    unsigned long v11;  // rdi
    char v0;  // [bp+0x0]
    unsigned long long v2;  // [bp+0x20]
    unsigned int v3;  // [bp+0x44]
    unsigned int v4;  // [bp+0x100008]

    if (v5 != 122)
    {
        v4 = 7;
        sub_100005b14(&ptr[1].padding_0[11]);
        sub_100005b14(&ptr[1].padding_0[19]);
        sub_100005b14(&ptr[1].padding_0[27]);
        sub_100005b14(&ptr[1].padding_0[35]);
        ptr->field_4c = v11;
        if (a9 == &vvar_10)
            return sub_100007a20(a37 ^ &v0);
        4294984236();
    }
    else if (v3 > 68)
    {
        4294991632();
    }
    else
    {
        if (a7 > (unsigned int)v6)
        {
            v7 = a7 * 2;
            if (_INSERT(v8 & 4294967295, 0, v7 < 9223372036854775807) == (unsigned int)v8)
                4294991632();
            v9 = v7 * 2;
            if (a9 == v8)
            {
                if (v9 > v6)
                    sub_1000041f8(&a9, v9); /* do not return */
                a9 = &vvar_10;
            }
            else
            {
                if (v9 > v6)
                {
                    if (a9 == &vvar_10)
                        sub_1000041f8(&a9, v9); /* do not return */
                    sub_10000711c(&a9, v9); /* do not return */
                }
                a9 = &vvar_10;
            }
        }
        a5 = vvar_71{r56|8b};
        a4 = &a7;
        v2 = a9;
        4296016168();
    }
}
