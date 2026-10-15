/* sub_100004b44 @ 0x100004b44
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100004b44  (212 bytes, 12 basic blocks)
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

extern unsigned long long g_10000b138;

int sub_100004b44(unsigned short **a0, unsigned short *a1, unsigned long long a2, unsigned int a3, unsigned int a4)
{
    char v0;  // [bp-0x2308]
    unsigned short **v1;  // [bp-0x22a0]
    unsigned int flag;  // [bp-0x2298]
    unsigned int v3;  // [bp-0x2294]
    unsigned long long v4;  // [bp-0x2290]
    unsigned long long choice;  // [bp-0x2288]
    unsigned long long flag2;  // [bp-0x2280]
    unsigned long long flag3;  // [bp-0x2278]
    unsigned int v8;  // [bp-0x2258]
    unsigned long long v9;  // [bp-0x2250]
    unsigned long long v10;  // [bp-0x38]

    v9 = 18446744073709551614;
    v10 = g_10000b138 ^ &v0;
    v3 = a3;
    v4 = a2;
    v1 = a0;
    choice = 0;
    flag2 = 0;
    flag3 = 0;
    v8 = a4;
    if (sub_1000049b8(a0, a1) >= 0 && *(a1) != 125)
    {
        flag = 1;
        4296016600();
    }
    return sub_100007a20(v10 ^ &v0);
}
