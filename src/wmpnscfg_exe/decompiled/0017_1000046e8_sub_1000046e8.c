/* sub_1000046e8 @ 0x1000046e8
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000046e8  (157 bytes, 16 basic blocks)
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
    unsigned short field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned long long g_10000b138;
extern struct_1 *g_10000b1a8;

int sub_1000046e8(struct_0 **a0, unsigned short *a1)
{
    unsigned int v4;  // eax
    char v0;  // [bp-0x2038]
    unsigned short v1[4096];  // [bp-0x2018]
    unsigned long long v2;  // [bp-0x18]

    v2 = g_10000b138 ^ &v0;
    if (*(a1) != 61)
    {
LABEL_100004767:
    }
    else if (sub_1000049b8(a0, a1) >= 0)
    {
        v4 = *(a0)->field_0;
        if (v4 >= 9 && (v4 <= 10 || v4 == 13 || v4 == 32))
            g_10000b1a8();
        if (sub_1000049b8(a0, &v1) >= 0 && sub_1000049b8(a0, a1) >= 0)
            goto LABEL_100004767;
    }
    return sub_100007a20(v2 ^ &v0);
}
