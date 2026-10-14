/* DllCanUnloadNow @ 0x7ff37117510
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37117510  (79 bytes, 5 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
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
    char padding_0[24];
    struct struct_2 *field_18;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_7ff3710c9e0;
extern struct_0 *g_7ff37153600;
extern struct_1 *g_7ff37154040;

int DllCanUnloadNow(void)
{
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rdi
    struct_0 **v4;  // rdi
    struct_1 **v5;  // rcx
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v1;  // [bp+0x8]

    v1 = v2;
    v0 = v3;
    v4 = &g_7ff37153600;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 7)
        sub_7ff37117208(g_7ff37153600->field_10, 11, &g_7ff3710c9e0); /* do not return */
    v5 = &g_7ff37154040;
    g_7ff37154040->field_18();
}
