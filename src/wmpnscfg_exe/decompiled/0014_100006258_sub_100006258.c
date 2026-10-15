/* sub_100006258 @ 0x100006258
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100006258  (218 bytes, 16 basic blocks)
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
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_1000018e0;
extern struct_0 *g_10000b160;

void sub_100006258(void* a0)
{
    unsigned long long v6;  // rsi
    unsigned long long v7;  // rdi
    unsigned long long v8;  // r12
    unsigned long long v9;  // r13
    unsigned long long v10;  // rbx
    unsigned int flag;  // eax
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    unsigned long long v3;  // [bp-0x18]
    unsigned long long v4;  // [bp-0x10]
    unsigned long long v5;  // [bp+0x8]

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = 18446744073709551614;
    v5 = v10;
    if (g_10000b160 != &g_10000b160 && (g_10000b160->field_1c & 1))
        sub_100002038(g_10000b160->field_10, 20, &g_1000018e0); /* do not return */
    flag = sub_10000642c(a0);
    if (g_10000b160 != &g_10000b160 && (g_10000b160->field_1c & 2) && g_10000b160->field_19 >= 4)
        sub_10000205c(g_10000b160->field_10, 21, &g_1000018e0, flag); /* do not return */
    if (flag == 1)
        4296015912();
    sub_100006650(a0);
    if (g_10000b160 != &g_10000b160 && (g_10000b160->field_1c & 1) && g_10000b160->field_19 >= 5)
        sub_100006110(g_10000b160->field_10, 25, &g_1000018e0, 0); /* do not return */
    4296015904();
}
