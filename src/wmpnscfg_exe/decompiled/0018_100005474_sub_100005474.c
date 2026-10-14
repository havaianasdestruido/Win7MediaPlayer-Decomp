/* sub_100005474 @ 0x100005474
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100005474  (225 bytes, 15 basic blocks)
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
extern struct_1 *g_10000b1e0;

int sub_100005474(struct_0 **ptr, unsigned long long a1, unsigned long a2)
{
    unsigned short *flag;  // r12
    unsigned int v6;  // ebx
    unsigned short *v7;  // r12
    char v0;  // [bp-0x2088]
    unsigned short *choice;  // [bp-0x2058]
    unsigned short v2[4096];  // [bp-0x2048]
    unsigned long long v3;  // [bp-0x48]

    v3 = g_10000b138 ^ &v0;
    flag = NULL;
    choice = NULL;
    if (a1)
    {
        v6 = sub_100003dbc();
        v7 = choice;
    }
    else
    {
        v6 = 2147500035;
        v7 = flag;
    }
    if (v6 < 0)
        return sub_100007a20(v3 ^ &v0);
    *(ptr) = v7;
    if (*(v7) && sub_1000049b8(ptr, &v2) >= 0)
        4296016600();
    g_10000b1e0();
}
