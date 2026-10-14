/* sub_7ff24f953a0 @ 0x7ff24f953a0
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f953a0  (141 bytes, 5 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern unsigned long long g_7ff24f98108;

void sub_7ff24f953a0(void)
{
    char v0;  // [bp-0x78]
    char *v1;  // [bp-0x58]
    char v2;  // [bp-0x48]
    uint128_t v3;  // [bp-0x40]
    uint128_t v4;  // [bp-0x30]
    uint128_t v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x10]

    v6 = g_7ff24f98108 ^ &v0;
    v3 = 5656050911524246355795058107748495007;
    v4 = 61151128941270618281607049395032992522;
    v5 = 154863115168743016931739054695040061999;
    v1 = &v2;
    0x7ff24f96100();
}
