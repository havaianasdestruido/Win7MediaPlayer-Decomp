/* sub_10000790c @ 0x10000790c
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x10000790c  (117 bytes, 11 basic blocks)
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
    char padding_4[20];
    unsigned short field_18;
    char padding_1a[90];
    unsigned int field_74;
    char padding_78[12];
    unsigned int field_84;
    char padding_88[96];
    unsigned int field_e8;
    char padding_ec[12];
    unsigned int field_f8;
} struct_0;

extern char g_100000000;
extern char g_10000003c;
extern unsigned int g_10000b37c;

int sub_10000790c(void)
{
    struct_0 *ptr;  // rcx
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    if (*((short *)&g_100000000) != 23117 || (ptr = (struct_0 *)(long long)(long long)(*((int *)&g_10000003c) + &g_100000000), ptr->field_0 != 17744))
    {
LABEL_10000791e:
        v3 = 0;
    }
    else
    {
        v2 = ptr->field_18;
        if (v2 != 267)
        {
            if (v2 != 523)
                goto LABEL_10000791e;
            v3 = 0;
            if (ptr->field_84 > 14)
                v3 = ptr->field_f8;
        }
        else
        {
            v3 = 0;
            if (ptr->field_74 > 14)
                v3 = ptr->field_e8;
        }
    }
    g_10000b37c = v3;
    sub_100007e24(2); /* do not return */
}
