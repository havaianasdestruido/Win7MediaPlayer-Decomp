/* sub_10000172c @ 0x10000172c
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x10000172c  (63 bytes, 6 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f1726e36b8a016069b7d9eef811f5ca3799bfed355423f70f51947e67d2ef4f
 *   Evidence: analysis/report/rea-evidence/wmpconfig_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[36];
    unsigned int field_24;
} struct_0;

extern char g_100000000;

struct_0 * sub_10000172c(unsigned int a0)
{
    struct_0 *v1;  // rax
    struct_0 *v2;  // rax

    v1 = sub_1000016a0(&g_100000000);
    if (!(unsigned int)v1)
        return v1;
    v2 = sub_1000016e0(&g_100000000, a0 - &g_100000000);
    if (!v2)
        return v2;
    return ~(v2->field_24 >> 31) & 1;
}
