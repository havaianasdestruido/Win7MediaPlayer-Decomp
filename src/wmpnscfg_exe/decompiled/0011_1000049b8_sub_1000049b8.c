/* sub_1000049b8 @ 0x1000049b8
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000049b8  (172 bytes, 18 basic blocks)
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

extern struct_1 *g_10000b1a8;

unsigned int sub_1000049b8(struct_0 **ptr, unsigned short *p)
{
    unsigned short *addr;  // rcx
    unsigned int v2;  // eax
    unsigned int v3;  // eax

    addr = &*(ptr)->field_0;
    v2 = *(addr);
    if (v2 >= 9 && (v2 <= 10 || v2 == 13 || v2 == 32))
        g_10000b1a8();
    if (!*(addr))
    {
        return 2147614729;
    }
    else if (*(addr) == 39)
    {
        g_10000b1a8();
    }
    else
    {
        v3 = *(ptr)->field_0;
        if (v3 >= 9 && (v3 <= 10 || v3 == 13 || v3 == 32))
        {
            *(p) = 0;
            return 0;
        }
        g_10000b1a8();
    }
}
