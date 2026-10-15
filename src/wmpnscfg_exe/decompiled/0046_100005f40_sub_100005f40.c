/* sub_100005f40 @ 0x100005f40
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100005f40  (189 bytes, 10 basic blocks)
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

extern char g_100000000;

void sub_100005f40(unsigned int *ptr, unsigned long a1)
{
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rdi
    unsigned long long v11;  // r12
    unsigned long long v12;  // r13
    unsigned long long v13;  // r14
    unsigned long v14;  // rbx
    unsigned int v15;  // ecx
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v3;  // [bp+0x8]
    unsigned long v4;  // [bp+0x10]
    unsigned long long v5;  // [bp+0x18]
    unsigned long long v6;  // [bp+0x20]

    v3 = v8;
    v4 = vvar_22{r56|8b};
    v5 = v9;
    v6 = v10;
    v2 = v11;
    v1 = v12;
    v0 = v13;
    v14 = *((long long *)&(&g_100000000)[ptr[2]]);
    v15 = a1 - ptr[3] - &g_100000000 >> 3;
    if (!v14)
        4295001130();
    if (v14 != 18446744073709551615 && v14)
        4295001118();
    4295001142();
}
