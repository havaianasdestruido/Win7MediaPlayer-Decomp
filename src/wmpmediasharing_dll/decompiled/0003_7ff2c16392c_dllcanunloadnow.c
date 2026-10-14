/* DllCanUnloadNow @ 0x7ff2c16392c
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c16392c  (73 bytes, 4 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
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

extern long long g_7ff2c161d00;
extern struct_0 *g_7ff2c182e68;
extern struct_1 *g_7ff2c183c50;

void DllCanUnloadNow(void)
{
    unsigned long long v2;  // rbx
    unsigned long long v3;  // rdi
    struct_0 **v4;  // rdi
    struct_1 **v5;  // rcx
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v1;  // [bp+0x8]

    v1 = v2;
    v0 = v3;
    v4 = &g_7ff2c182e68;
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1))
        sub_7ff2c1634c4(g_7ff2c182e68->field_10, 13, &g_7ff2c161d00); /* do not return */
    v5 = &g_7ff2c183c50;
    g_7ff2c183c50->field_18();
}
