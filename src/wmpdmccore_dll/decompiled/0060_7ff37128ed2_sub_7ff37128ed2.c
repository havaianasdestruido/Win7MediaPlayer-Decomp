/* sub_7ff37128ed2 @ 0x7ff37128ed2
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37128ed2  (348 bytes, 30 basic blocks)
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

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
} struct_5;

typedef struct struct_3 {
    char padding_0[64];
    long long field_40;
    char padding_48[120];
    struct struct_4 *field_c0;
} struct_3;

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_7ff3710c980;
extern struct_0 *g_7ff37153600;

int sub_7ff37128ed2(void)
{
    struct_0 *v3;  // r13
    char v4;  // r15b
    unsigned int v5;  // eax
    struct_3 *ptr;  // rsi
    struct_5 **v8;  // rcx
    struct_1 **v9;  // rcx
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned long flag;  // [bp+0x88]
    struct_5 **v2;  // [bp+0x90]

    if (g_7ff37153600 != v3 && (v4 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118bfc(g_7ff37153600->field_10, 62, &g_7ff3710c980, v5, v2); /* do not return */
    if (v5 < 0)
        goto LABEL_0x7ff371292eb;
    if (ptr->field_c0 != v2)
    {
        if (v2)
        {
            v8 = v2;
            *(v2)->field_8();
        }
        v9 = ptr->field_c0;
        if (ptr->field_c0)
            ptr->field_c0->field_0->field_10();
        ptr->field_c0 = NULL;
    }
    if (vvar_28{r56|8b} != ptr->field_40)
        8792722900160();
    v10 = sub_7ff3713cfc8(ptr->field_40, &ptr->padding_48[56], &ptr->padding_48[60], &ptr->padding_48[64]);
    if (g_7ff37153600 != v3 && (v4 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
        sub_7ff3711722c(g_7ff37153600->field_10, 63, &g_7ff3710c980, v10); /* do not return */
    if (v10 < 0)
        goto LABEL_0x7ff371292eb;
    v11 = sub_7ff3712808c(&ptr->padding_0[8]);
    if (g_7ff37153600 != v3 && (v4 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
        sub_7ff3711722c(g_7ff37153600->field_10, 64, &g_7ff3710c980, v11); /* do not return */
    if (v11 >= 0)
        sub_7ff3712acd4(&ptr->padding_0[8], &ptr->padding_48); /* do not return */
    if (!vvar_28{r56|8b})
    {
        flag = 0;
        sub_7ff37120e90(&flag, L"WMPDMC_CORE_EVENT_FAILED_TO_FIND_DEVICE_UPNP_SERVICES"); /* do not return */
    }
    8792722900136();
}
