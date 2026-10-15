/* sub_100004341 @ 0x100004341
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100004341  (202 bytes, 21 basic blocks)
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
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_10000b1a8;

long long sub_100004341(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, char a14, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned long a31, unsigned long a32, unsigned long a33, unsigned long a34, unsigned long a35, unsigned long a36, unsigned long a37, unsigned long a38, unsigned long a39, unsigned long a40, unsigned long a41, unsigned long a42, unsigned long a43, unsigned long a44, unsigned long a45, unsigned short a46)
{
    unsigned long v3;  // rbx
    unsigned int v4;  // eax
    unsigned long v5;  // rcx
    unsigned short v1;  // [bp+0x78]
    unsigned short v2;  // [bp+0x7a]

    a13 = v3;
    v5 = v4 + 2;
    if (v5 != v3)
    {
        if ((unsigned long long)(18446744073709551615 / v5) < 2)
        {
            4294991632();
        }
        else if (v5 > 128)
        {
            sub_1000041f8(&a13); /* do not return */
        }
    }
    a13 = &vvar_14;
    if (&vvar_14 == v3)
    {
        if (14 == (unsigned int)v3)
            goto LABEL_0x1000046a9;
        sub_1000049a4(14);
    }
    else if (a46 != (unsigned short)v3)
    {
        g_10000b1a8();
    }
    else
    {
        v1 = v3;
        v2 = v3;
        if (a13 != v3)
            4296016672();
        4294991632();
    }
}
