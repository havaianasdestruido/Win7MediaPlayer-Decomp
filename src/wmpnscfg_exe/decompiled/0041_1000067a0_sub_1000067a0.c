/* sub_1000067a0 @ 0x1000067a0
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000067a0  (127 bytes, 11 basic blocks)
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

void sub_1000067a0(unsigned long a0, unsigned short a1, unsigned long a2, unsigned short *a3)
{
    unsigned long long v5;  // rdi
    unsigned long long v6;  // rcx
    unsigned short *v7;  // rdi
    unsigned long long v8;  // rcx
    unsigned short *v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long flag;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x8]

    v3 = v5;
    if (!a3)
    {
        v6 = 10;
    }
    else if (!*(a3))
    {
        v6 = 14;
    }
    else
    {
        v7 = a3;
        do
        {
            if (false)
                break;
        } while (*(v7));
        v8 = ~(18446744073709551615);
        if (v8 > 3900)
            v8 = 3900;
        v6 = v8 * 2;
    }
    if (a3)
    {
        if (!*(a3))
            a3 = L"<NULL>";
    }
    else
    {
        a3 = L"NULL";
    }
    flag = 0;
    v1 = v6;
    v0 = a3;
    4295000430();
}
