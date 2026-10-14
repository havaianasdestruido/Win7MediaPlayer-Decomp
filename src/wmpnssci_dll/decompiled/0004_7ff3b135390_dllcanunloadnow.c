/* DllCanUnloadNow @ 0x7ff3b135390
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b135390  (73 bytes, 4 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_0;

typedef struct struct_1 {
    char padding_0[24];
    struct struct_2 *field_18;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_7ff3b132070;
extern struct_0 *g_7ff3b17be78;
extern struct_1 *g_7ff3b17d390;

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
    v4 = &g_7ff3b17be78;
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 1))
        sub_7ff3b134f88(g_7ff3b17be78->field_10, 13, &g_7ff3b132070); /* do not return */
    v5 = &g_7ff3b17d390;
    g_7ff3b17d390->field_18();
}
