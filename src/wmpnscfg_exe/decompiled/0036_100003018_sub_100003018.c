/* sub_100003018 @ 0x100003018
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100003018  (94 bytes, 12 basic blocks)
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

int sub_100003018(void)
{
    int v1;  // eax
    int v2;  // r13d
    int v3;  // edi
    void* *v4;  // rsi
    unsigned long v5;  // r12

    if (v1 != v2)
    {
        if (v1 == 12)
        {
            4294991632();
        }
        else if (!(v1 != 22 && v1 != 34))
        {
            4294991632();
        }
        else if (v1 != 80)
        {
            4294991632();
        }
    }
    if (v3 >= v2 && v3 <= (int)(*(v4))[12])
    {
        *((int *)&(*(v4))[16]) = v3;
        *((short *)(v5 + (char *)*(v4))) = v2;
    }
    4294991632();
}
