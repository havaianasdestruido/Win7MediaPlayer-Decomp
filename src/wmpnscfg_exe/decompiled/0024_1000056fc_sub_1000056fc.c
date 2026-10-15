/* sub_1000056fc @ 0x1000056fc
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000056fc  (149 bytes, 14 basic blocks)
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

long long sub_1000056fc(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, char *a13)
{
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    char *v5;  // rcx
    char *v6;  // rbx
    char *v1;  // [bp+0x20]
    char v2;  // [bp+0x78]

    a5 = v3;
    v4 = v3 + 1;
    if (v4 >= v3)
    {
        v5 = v4;
        if (v5 != v6)
        {
            if ((unsigned long long)(18446744073709551615 / (uint128_t)v5) >= 2)
            {
                if (v5 > 0x200)
                    sub_1000041f8(&a13); /* do not return */
            }
            else
            {
                4294991632();
            }
        }
        a13 = &v2;
        if (&v2 != v6)
        {
            a4 = v3;
            v1 = &v2;
            4296016592();
        }
    }
    else if (a13 != &v2)
    {
        4294984236();
    }
}
