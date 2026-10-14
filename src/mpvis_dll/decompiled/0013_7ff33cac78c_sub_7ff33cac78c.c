/* sub_7ff33cac78c @ 0x7ff33cac78c
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cac78c  (376 bytes, 34 basic blocks)
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

typedef struct struct_5 {
    struct struct_1 *field_0;
    char padding_8[2472];
    struct struct_6 *field_9b0;
    struct struct_3 *field_9b8;
    struct struct_4 *field_9c0;
} struct_5;

typedef struct struct_1 {
    char padding_0[144];
    struct struct_2 *field_90;
} struct_1;

typedef struct struct_6 {
    char padding_0[104];
    unsigned long long field_68;
    char padding_70[56];
    unsigned long long field_a8;
} struct_6;

typedef struct struct_3 {
    char padding_0[168];
    unsigned long long field_a8;
} struct_3;

typedef struct struct_4 {
    char padding_0[168];
    unsigned long long field_a8;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_0 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    unsigned int field_3c;
} struct_0;

extern long long g_7ff33ca3208;
extern struct_0 *g_7ff33ccdcc0;

int sub_7ff33cac78c(void)
{
    struct_5 *v2;  // rdi
    unsigned int v3;  // eax
    struct_5 *v4;  // rcx
    unsigned int v5;  // eax
    long long v6;  // r12
    char v1;  // [bp+0x40]

    if ((char)sub_7ff33cab75c(v2))
    {
        v3 = sub_7ff33cab44c(v2);
        if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
            sub_7ff33caaf00(g_7ff33ccdcc0->field_30, 20, &g_7ff33ca3208, v3); /* do not return */
        if (vvar_65{r56|4b})
            sub_7ff33cac6a0(v2); /* do not return */
        if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
            sub_7ff33caaed4(g_7ff33ccdcc0->field_30, 21, &g_7ff33ca3208); /* do not return */
        sub_7ff33cad738(&v1); /* do not return */
    }
    if (!v2->field_9b0->field_68)
    {
        v4 = v2;
        v2->field_0->field_90();
    }
    v5 = sub_7ff33cb6790(v2->field_9b0);
    if (!(v5 >= 0 && !((v5 = (unsigned int)(unsigned long long)sub_7ff33cb6790(v2->field_9b8), v5 < 0 || (v5 = (unsigned int)(unsigned long long)sub_7ff33cb6790(v2->field_9c0), v5 < 0)))))
    {
        if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
            sub_7ff33caaf00(g_7ff33ccdcc0->field_30, 22, &g_7ff33ca3208, v5); /* do not return */
    }
    else if (v2->field_9b0->field_a8 && v2->field_9b8->field_a8 && v2->field_9c0->field_a8)
    {
        sub_7ff33cad440(v2, v6);
        sub_7ff33cb686c(v2->field_9b0); /* do not return */
    }
    sub_7ff33cad738(&v1); /* do not return */
}
