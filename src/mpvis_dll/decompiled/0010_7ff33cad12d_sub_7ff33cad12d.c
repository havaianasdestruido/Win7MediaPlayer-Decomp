/* sub_7ff33cad12d @ 0x7ff33cad12d
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cad12d  (619 bytes, 50 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    unsigned int field_3c;
} struct_0;

typedef struct struct_1 {
    char padding_0[272];
    long long field_110;
    char field_118;
    char padding_119[2187];
    unsigned int field_9a4;
    unsigned int field_9a8;
    char padding_9ac[4];
    struct struct_2 *field_9b0;
    long long field_9b8;
    long long field_9c0;
    char padding_9c8[1048];
    unsigned int field_de0;
} struct_1;

typedef struct struct_2 {
    char padding_0[96];
    unsigned int field_60;
    unsigned int field_64;
} struct_2;

extern long long g_7ff33ca3208;
extern struct_0 *g_7ff33ccdcc0;

int sub_7ff33cad12d(void)
{
    unsigned int v5;  // eax
    unsigned int v6;  // ecx
    unsigned long v15;  // rdx
    unsigned int v7;  // ebp
    struct_0 *v8;  // rcx
    struct_1 *ptr;  // rbx
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    unsigned int v13;  // eax
    unsigned int index[26];  // rcx
    unsigned int v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x24]
    unsigned int v3;  // [bp+0x28]
    unsigned int v4;  // [bp+0x2c]

    if (!v5)
        goto LABEL_0x7ff33cad3ab;
    v6 = (v3 - v1) * (v4 - v2);
    if (v6 > 1310000)
    {
        v7 = 210;
        if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
            sub_7ff33caaf3c(g_7ff33ccdcc0->field_30); /* do not return */
    }
    else if (v6 > 40000)
    {
        v7 = 209;
        if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
            sub_7ff33caaf3c(g_7ff33ccdcc0->field_30); /* do not return */
    }
    else if (v6 >= 30000)
    {
        v7 = 209;
        if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
            sub_7ff33caaf3c(g_7ff33ccdcc0->field_30); /* do not return */
    }
    else
    {
        v7 = 208;
        v8 = g_7ff33ccdcc0;
        if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
        {
            sub_7ff33caaf3c(v8->field_30); /* do not return */
        }
    }
    v10 = sub_7ff33cb6068(ptr->field_9b0, ptr->field_110, v7);
    if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
        sub_7ff33caaf00(g_7ff33ccdcc0->field_30, 28, &g_7ff33ca3208, v10); /* do not return */
    if (v10 < 0)
        ptr->field_118 = 0;
    v11 = sub_7ff33cb6068(ptr->field_9b8, ptr->field_110, v7);
    if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
        sub_7ff33caaf00(g_7ff33ccdcc0->field_30, 29, &g_7ff33ca3208, v11); /* do not return */
    if (v11 < 0)
        ptr->field_118 = 0;
    v12 = sub_7ff33cb6068(ptr->field_9c0, ptr->field_110, v7);
    if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
        sub_7ff33caaf00(g_7ff33ccdcc0->field_30, 30, &g_7ff33ca3208, v12); /* do not return */
    if (v12 < 0)
        ptr->field_118 = 0;
    v13 = sub_7ff33cb6790(ptr->field_9b0);
    if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
        sub_7ff33caaf00(g_7ff33ccdcc0->field_30, 31, &g_7ff33ca3208, v13); /* do not return */
    index = ptr->field_9b0;
    v15 = ptr->field_de0;
    ptr->field_9a8 = index[25];
    ptr->field_9a4 = index[24];
    sub_7ff33cb5ff0(index, v15);
    sub_7ff33cb686c(ptr->field_9b0); /* do not return */
}
