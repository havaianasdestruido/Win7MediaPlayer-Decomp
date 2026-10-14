/* sub_1000020d8 @ 0x1000020d8
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000020d8  (211 bytes, 11 basic blocks)
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

void sub_1000020d8(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, char a4, unsigned short *a5)
{
    unsigned long long v13;  // rdi
    unsigned short *v14;  // rdx
    unsigned long long v15;  // rcx
    unsigned short *v16;  // rdi
    unsigned long long v17;  // rcx
    char *v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    unsigned short *v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x30]
    char *v6;  // [bp-0x28]
    unsigned long long v7;  // [bp-0x20]
    unsigned long long flag;  // [bp-0x18]
    unsigned long long v9;  // [bp-0x8]
    unsigned long v11;  // [bp+0x20]
    char v12;  // [bp+0x38]

    v11 = a3;
    v9 = v13;
    v14 = a5;
    if (!v14)
    {
        v15 = 10;
    }
    else if (!*(v14))
    {
        v15 = 14;
    }
    else
    {
        v16 = v14;
        do
        {
            if (false)
                break;
        } while (*(v16));
        v17 = ~(18446744073709551615);
        if (v17 > 3900)
            v17 = 3900;
        v15 = v17 * 2;
    }
    if (v14)
    {
        if (!*(v14))
            v14 = L"<NULL>";
    }
    else
    {
        v14 = L"NULL";
    }
    flag = 0;
    v7 = 4;
    v6 = &v12;
    v5 = v15;
    v4 = v14;
    v3 = 8;
    v2 = &vvar_4;
    v1 = 8;
    v0 = &v11;
    4295000430();
}
