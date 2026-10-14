/* sub_1000014f4 @ 0x1000014f4
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x1000014f4  (117 bytes, 11 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f1726e36b8a016069b7d9eef811f5ca3799bfed355423f70f51947e67d2ef4f
 *   Evidence: analysis/report/rea-evidence/wmpconfig_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
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
extern unsigned int g_100002124;

int sub_1000014f4(void)
{
    struct_0 *ptr;  // rcx
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    if (*((short *)&g_100000000) != 23117 || (ptr = (struct_0 *)(long long)(long long)(*((int *)&g_10000003c) + &g_100000000), ptr->field_0 != 17744))
    {
LABEL_100001506:
        v3 = 0;
    }
    else
    {
        v2 = ptr->field_18;
        if (v2 != 267)
        {
            if (v2 != 523)
                goto LABEL_100001506;
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
    g_100002124 = v3;
    sub_1000017f4(2); /* do not return */
}
