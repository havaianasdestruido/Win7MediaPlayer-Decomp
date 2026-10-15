/* sub_100003e64 @ 0x100003e64
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100003e64  (120 bytes, 11 basic blocks)
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

long long sub_100003e64(void)
{
    struct_0 **ptr;  // rsi
    unsigned short *v2;  // rax
    unsigned short *v3;  // rbx

    *(ptr) = v2;
    if (*(v2) != 37 && v2 != v3 && *(v2) != *((unsigned short *)&v3))
    {
        if (*(v2) != 37)
        {
            g_10000b1a8();
        }
        else if (v2 != v3 && v2 - *(ptr) >> 1 <= 31)
        {
            4294998830();
        }
    }
}
