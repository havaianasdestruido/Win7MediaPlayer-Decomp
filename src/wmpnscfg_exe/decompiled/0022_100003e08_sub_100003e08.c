/* sub_100003e08 @ 0x100003e08
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100003e08  (162 bytes, 14 basic blocks)
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

typedef struct struct_2 {
    unsigned short field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

extern struct_4 *g_10000b1c0;
extern struct_3 *g_10000b1e0;

void sub_100003e08(void)
{
    unsigned int v3;  // eax
    unsigned int v4;  // eax
    unsigned short *ptr;  // rbx
    unsigned int v1;  // [bp+0x24]
    unsigned short *ptr3;  // [bp+0x28]

    v4 = v3 * 2;
    if (v4 < 100)
        v4 = 1000;
    v1 = v4;
    if (v4 * 2 <= 4294967295)
        g_10000b1c0();
    ptr3 = ptr;
    g_10000b1e0();
}
