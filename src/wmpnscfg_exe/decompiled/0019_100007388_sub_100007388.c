/* sub_100007388 @ 0x100007388
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100007388  (160 bytes, 15 basic blocks)
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
    unsigned int field_0;
    char padding_4[52];
    unsigned long long field_38;
    int field_40;
    unsigned int field_44;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_1 *g_10000b198;

unsigned int sub_100007388(struct_0 *ptr, unsigned long a1)
{
    if (ptr)
    {
        if (!ptr->field_0)
        {
            return 0;
        }
        else if (ptr->field_0 == 72)
        {
            if (ptr->field_40 > 0)
            {
                if (0 < ptr->field_40)
                    g_10000b198();
                4296016616();
            }
            else if (ptr->field_38)
            {
                4294998634();
            }
            else
            {
                ptr->field_40 = 0;
                ptr->field_44 = 0;
                4296016648();
            }
        }
    }
    return 2147942487;
}
