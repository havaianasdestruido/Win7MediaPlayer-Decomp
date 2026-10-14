/* sub_100006895 @ 0x100006895
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100006895  (150 bytes, 10 basic blocks)
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

extern long long g_1000018d0;
extern struct_0 *g_10000b160;

int sub_100006895(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned int a11, char a12, unsigned long a12, unsigned long a13)
{
    unsigned int v3;  // eax
    unsigned int v4;  // edi
    char v5;  // bl
    unsigned int v6;  // edi
    unsigned long long v7;  // rsi
    unsigned int v8;  // edi
    char *v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x68]

    if (!v3)
    {
        a11 &= v4;
        a4 = &vvar_12;
        v1 = &a11;
        v2 = 4;
        4296016208();
    }
    if (g_10000b160 != vvar_24{r56|8b} && (v5 & g_10000b160->field_1c) && g_10000b160->field_19 >= 5)
        sub_10000205c(g_10000b160->field_10, 32, &g_1000018d0, !v6); /* do not return */
    if (!v7)
        return !v8;
    4296016320();
}
