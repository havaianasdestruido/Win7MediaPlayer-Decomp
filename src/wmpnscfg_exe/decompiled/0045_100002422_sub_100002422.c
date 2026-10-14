/* sub_100002422 @ 0x100002422
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100002422  (105 bytes, 11 basic blocks)
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

long long sub_100002422(void)
{
    unsigned long long v1;  // rbx
    unsigned long long v2;  // rbx
    unsigned long long v3;  // r13
    unsigned long long v4;  // rbx
    unsigned long long v6;  // rax
    unsigned int v7;  // eax

    v2 = v1;
    if (v2 != v3)
    {
        while (true)
        {
            v4 = v2;
            if (*((short *)v4) != (unsigned short)v3)
            {
                if (*((short *)v4) == 47)
                    break;
                v2 = v4 + 2;
            }
            else
            {
                if (*((short *)v4) == 47)
                    v6 = v4;
                else
                    v6 = v3;
                v4 = v6;
                break;
            }
        }
        if (v4 != v3 && v1 + v7 * 2 - v4 >> 1 >= vvar_39{r56|8b})
            4295001178();
    }
}
