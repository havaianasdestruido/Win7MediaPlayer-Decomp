/* sub_7ff37123730 @ 0x7ff37123730
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37123730  (493 bytes, 36 basic blocks)
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
    char padding_0[64];
    unsigned long long field_40;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_1;

extern long long g_7ff3710c9b0;
extern unsigned long long g_7ff3710d388;
extern struct_1 *g_7ff37153600;

int sub_7ff37123730(void)
{
    unsigned int v2;  // edx
    unsigned long v3;  // r12
    unsigned long v12;  // rcx
    struct_0 *index;  // rcx
    struct_0 *v5;  // rsi
    unsigned long long *ptr;  // r8
    int v7;  // ebx
    unsigned long idx;  // rdi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rdx
    unsigned long long flag;  // r8
    long long v0;  // [bp-0x28]

    v3 = v2;
    v5 = index;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118bfc(g_7ff37153600->field_10, 37, &g_7ff3710c9b0, v3 & 4294967295); /* do not return */
    if (ptr)
    {
        *(ptr) = 0;
        sub_7ff371237d2();
        return;
    }
    v7 = -2147024809;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
        sub_7ff3711722c(g_7ff37153600->field_10, 38, &g_7ff3710c9b0, 2147942487); /* do not return */
    if (!*((long long *)&index[1].padding_0[0]))
    {
        v7 = -2147467259;
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 39, &g_7ff3710c9b0, 2147500037); /* do not return */
    }
    idx = v3;
    if (v3 > *((long long *)&index[1].padding_0[0]))
    {
        v7 = -2147024809;
        if (g_7ff37153600 == &g_7ff37153600)
            return;
        if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 40, &g_7ff3710c9b0, 2147942487); /* do not return */
    }
    else if (v7 >= 0)
    {
        if (v3 >= *((long long *)&index[1].padding_0[0]))
        {
            sub_7ff3711849c(2147942487); /* do not return */
        }
        else if (*((long long *)(index->field_40 + v3 * 16)))
        {
            if (v3 >= *((long long *)&index[1].padding_0[0]))
                sub_7ff3711849c(2147942487); /* do not return */
            v9 = idx * 2;
            v10 = &g_7ff3710d388;
            flag = 0;
            v12 = *((long long *)(index->field_40 + idx * 16));
            (*((long long *)*((long long *)*((long long *)(index->field_40 + idx * 16)))))();
        }
        else
        {
            v7 = -2147418113;
            if (g_7ff37153600 == &g_7ff37153600)
            {
                return;
            }
            else if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
            {
                *((unsigned int *)&v0) = 2147549183;
                sub_7ff37118b5c(g_7ff37153600->field_10, 42, &g_7ff3710c9b0, v3 & 4294967295, v0); /* do not return */
            }
        }
    }
    if (g_7ff37153600 == &g_7ff37153600)
    {
        return;
    }
    else if (!(g_7ff37153600->field_1c & 1))
    {
        return;
    }
    else if (g_7ff37153600->field_19 >= 5)
    {
        sub_7ff3711722c(g_7ff37153600->field_10, 43, &g_7ff3710c9b0, v7); /* do not return */
    }
    else
    {
        return;
    }
}
