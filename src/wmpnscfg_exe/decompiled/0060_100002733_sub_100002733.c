/* sub_100002733 @ 0x100002733
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100002733  (91 bytes, 9 basic blocks)
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

extern long long g_1000018f0;
extern struct_0 *g_10000b160;

void sub_100002733(void)
{
    unsigned long v1;  // r13
    long long v2;  // rax
    unsigned long v3;  // rax
    unsigned long v4;  // r13
    unsigned int v5;  // esi

    if (g_10000b160 != &g_10000b160 && (g_10000b160->field_1c & 2) && g_10000b160->field_19 >= 4)
        sub_100002098(g_10000b160->field_10, (unsigned int)v1 + 13, &g_1000018f0, v2); /* do not return */
    if (v3 == v4)
    {
        if (v5 < (unsigned int)v4)
            goto LABEL_0x100002a40;
        4296016624();
    }
    4296016632();
}
