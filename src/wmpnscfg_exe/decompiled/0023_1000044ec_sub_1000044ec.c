/* sub_1000044ec @ 0x1000044ec
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000044ec  (149 bytes, 14 basic blocks)
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

long long sub_1000044ec(void)
{
    int v5;  // eax
    char *v6;  // rbx
    char *v7;  // rcx
    unsigned int v1;  // [bp+0x30]
    int v2;  // [bp+0x38]
    char *v3;  // [bp+0x70]
    char v4;  // [bp+0x78]

    v2 = v5;
    if (!((char)v5 & 1))
    {
        v1 = v5 / 2;
        v3 = v6;
        v7 = v1;
        if (v1 != v6)
        {
            if ((unsigned long long)(18446744073709551615 / (uint128_t)v7) < 1)
            {
                4294991632();
            }
            else if (v7 > 0x100)
            {
                sub_1000041f8(&v3, v7); /* do not return */
            }
        }
        v3 = &v4;
        if (&v4 != v6)
        {
            4294998942();
        }
        else if (&v4 != v6)
        {
            4294984236();
        }
    }
}
