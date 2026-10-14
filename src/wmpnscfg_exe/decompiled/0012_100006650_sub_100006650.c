/* sub_100006650 @ 0x100006650
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100006650  (213 bytes, 17 basic blocks)
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
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_0;

extern long long g_1000018e0;
extern struct_0 *g_10000b160;

unsigned long long sub_100006650(unsigned long long *ptr)
{
    if (g_10000b160 != &g_10000b160)
    {
        if ((g_10000b160->field_1c & 1))
        {
            sub_100002038(g_10000b160->field_10, 65, &g_1000018e0); /* do not return */
        }
        else if (g_10000b160 != &g_10000b160 && (g_10000b160->field_1c & 1))
        {
            sub_100002038(g_10000b160->field_10, 59, &g_1000018e0); /* do not return */
        }
    }
    if (ptr[2])
    {
        ptr[2] = 0;
        4296016192();
    }
    if (g_10000b160 != &g_10000b160 && (g_10000b160->field_1c & 1))
        sub_100002038(g_10000b160->field_10, 61, &g_1000018e0); /* do not return */
    if (ptr[1])
    {
        ptr[1] = 0;
        4296016192();
    }
    else if (g_10000b160 == &g_10000b160)
    {
        return 0;
    }
    else if ((g_10000b160->field_1c & 1))
    {
        sub_100002038(g_10000b160->field_10, 67, &g_1000018e0); /* do not return */
    }
    else
    {
        return 0;
    }
}
