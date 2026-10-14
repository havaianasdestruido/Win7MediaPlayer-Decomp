/* sub_7ff3711e25c @ 0x7ff3711e25c
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3711e25c  (348 bytes, 30 basic blocks)
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

typedef struct struct_2 {
    char padding_0[72];
    struct struct_3 *field_48;
} struct_2;

typedef struct struct_0 {
    char padding_0[40];
    struct struct_1 *field_28;
} struct_0;

typedef struct struct_4 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_4;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_7ff3710c9d0;
extern struct_4 *g_7ff37153600;

int sub_7ff3711e25c(void)
{
    int v5;  // r12d
    long long v6;  // r14
    long long v15;  // r15
    long long v16;  // rdi
    long long v17;  // rbx
    unsigned int v18;  // eax
    int v7;  // ebp
    struct_2 *ptr;  // r15
    struct_0 **v9;  // rcx
    char *v10;  // r8
    unsigned long long v11;  // rbx
    unsigned long long v12;  // rdx
    struct_4 *v13;  // rcx
    char v14;  // r13b
    long long v1;  // [bp+0x48]
    char v2;  // [bp+0x50]
    long long v3;  // [bp+0x60]
    unsigned long v4;  // [bp+0x140]

    if (v5 >= (int)v6)
    {
        v7 = v4;
        if ((unsigned int)v4 > (int)v6)
        {
            v9 = ptr->field_48;
            v10 = &v2;
            v12 = v11;
            ptr->field_48->field_0->field_28();
        }
    }
    else
    {
        v7 = v4;
    }
    v13 = g_7ff37153600;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= v14)
        sub_7ff37118d04(g_7ff37153600->field_10, 141, &g_7ff3710c9d0, v1); /* do not return */
    if (v1 != v6)
        8792722899440();
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= v14)
        sub_7ff3711722c(g_7ff37153600->field_10, 143, &g_7ff3710c9d0, 2147942406); /* do not return */
    if (-2147024890 >= (int)v6 && v7 > (int)v6)
    {
        v18 = sub_7ff3711c3f4(v15, v3, v16, v17, v1);
        v13 = g_7ff37153600;
        if (g_7ff37153600 == &g_7ff37153600)
        {
            8792722899728();
        }
        else if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= v14)
        {
            sub_7ff3711722c(g_7ff37153600->field_10, 169, &g_7ff3710c9d0, v18); /* do not return */
        }
    }
    if (v13 != &g_7ff37153600 && (v13->field_1c & 1) && v13->field_19 >= v14)
        sub_7ff37117208(v13->field_10, 170, &g_7ff3710c9d0); /* do not return */
    8792722899728();
}
