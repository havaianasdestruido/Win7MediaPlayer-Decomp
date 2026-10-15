/* sub_100002d1e @ 0x100002d1e
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100002d1e  (110 bytes, 10 basic blocks)
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
    int field_8;
    unsigned int field_c;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_1 *g_10000b1a0;
extern struct_0 *g_10000ba20;

void sub_100002d1e(void)
{
    struct_0 *ptr;  // rbx
    char flag;  // [bp+0x30]

    flag = 1;
    ptr = g_10000ba20;
    if (ptr && ptr->field_8 > 0)
    {
        if (ptr->field_8 <= 0)
            4296016616();
        g_10000b1a0();
    }
    if (!ptr)
    {
        g_10000ba20 = 0;
        4296016656();
    }
    else if (ptr->field_0)
    {
        4296015904();
    }
    else
    {
        ptr->field_8 = 0;
        ptr->field_c = 0;
        4294998524();
    }
}
