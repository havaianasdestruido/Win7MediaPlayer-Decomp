/* sub_100003778 @ 0x100003778
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100003778  (125 bytes, 11 basic blocks)
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
    unsigned long long field_8;
    int field_10;
} struct_0;

unsigned int sub_100003778(struct_0 *ptr)
{
    if (ptr->field_10 > 0)
    {
        if (0 < ptr->field_10)
            4294998598();
        4296016616();
    }
    else if (ptr->field_0)
    {
        4296015904();
    }
    else if (ptr->field_8)
    {
        4296015904();
    }
    else
    {
        ptr->field_10 = 0;
        return 0;
    }
}
