/* sub_7ff371390f4 @ 0x7ff371390f4
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff371390f4  (526 bytes, 39 basic blocks)
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

extern struct_0 *g_7ff37153600;

int sub_7ff371390f4(void)
{
    struct_0 *v9;  // r15
    unsigned int v10;  // eax
    unsigned int v12;  // edi
    unsigned int v13;  // edi
    unsigned int v14;  // edi
    unsigned int v15;  // edi
    unsigned int v16;  // eax
    long long v1;  // [bp+0x20]
    long long v2;  // [bp+0x30]
    char v3;  // [bp+0x38], Other Possible Types: long long
    long long v4;  // [bp+0x40]
    char v5;  // [bp+0x48], Other Possible Types: long long
    unsigned int v6;  // [bp+0x90]
    long long v7;  // [bp+0x98]
    unsigned long long v8;  // [bp+0x100008]

    if (g_7ff37153600 != v9 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118bfc(g_7ff37153600->field_10, 125, sub_7ff3710c940, v10, v7); /* do not return */
    if (v10 < 0)
        goto LABEL_0x7ff37139367;
    v12 = sub_7ff37138c48(v7, &v6);
    if (g_7ff37153600 != v9 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
    {
        *((unsigned int *)&v1) = v6;
        sub_7ff37118b5c(g_7ff37153600->field_10, 126, sub_7ff3710c940, v12, v1); /* do not return */
    }
    if (v12 < 0)
        goto LABEL_0x7ff37139367;
    v13 = sub_7ff37135e70(&v2);
    if (g_7ff37153600 != v9 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118bfc(g_7ff37153600->field_10, 127, sub_7ff3710c940, v13, v2); /* do not return */
    if (v13 < 0)
        goto LABEL_0x7ff37139367;
    v14 = sub_7ff37138dc0(v2, v6, &v4);
    if (g_7ff37153600 != v9 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118bfc(g_7ff37153600->field_10, 128, sub_7ff3710c940, v14, v4); /* do not return */
    if (v14 < 0)
        goto LABEL_0x7ff37139367;
    v15 = sub_7ff371360f0(v4, 2, &v3);
    if (g_7ff37153600 != v9 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118bfc(g_7ff37153600->field_10, 129, sub_7ff3710c940, v15, v3); /* do not return */
    if (v15 < 0)
        goto LABEL_0x7ff37139367;
    v16 = sub_7ff37136258(v3, &v5);
    if (g_7ff37153600 != v9 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118abc(g_7ff37153600->field_10, 130, sub_7ff3710c940, v16, v5); /* do not return */
    if (v16 < 0)
        goto LABEL_0x7ff37139367;
    if (v5)
        8792722900136();
    v8 = 0;
    8792722900160();
}
