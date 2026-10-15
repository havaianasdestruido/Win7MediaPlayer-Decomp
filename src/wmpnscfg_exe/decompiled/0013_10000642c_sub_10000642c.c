/* sub_10000642c @ 0x10000642c
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x10000642c  (221 bytes, 16 basic blocks)
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

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
} struct_1;

extern long long g_1000018e0;
extern struct_0 *g_10000b160;

unsigned int sub_10000642c(struct_1 *a0)
{
    struct_0 *v1;  // rcx
    unsigned int flag;  // ebx

    v1 = g_10000b160;
    if (g_10000b160 != &g_10000b160 && (g_10000b160->field_1c & 1))
        sub_100002038(g_10000b160->field_10, 55, &g_1000018e0); /* do not return */
    flag = 1;
    if (!a0->field_10)
    {
        flag = sub_100006564(a0);
        v1 = g_10000b160;
        if (g_10000b160 != &g_10000b160 && (g_10000b160->field_1c & 2) && g_10000b160->field_19 >= 4)
            sub_10000205c(g_10000b160->field_10, 56, &g_1000018e0, flag); /* do not return */
        if (flag == 1)
            4296016200();
    }
    if (v1 == &g_10000b160)
    {
        return flag;
    }
    else if (!(v1->field_1c & 1))
    {
        return flag;
    }
    else if (v1->field_19 >= 5)
    {
        sub_10000205c(v1->field_10, 58, &g_1000018e0, flag); /* do not return */
    }
    else
    {
        return flag;
    }
}
