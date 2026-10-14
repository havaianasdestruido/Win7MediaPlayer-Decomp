/* sub_7ff371307f8 @ 0x7ff371307f8
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff371307f8  (460 bytes, 41 basic blocks)
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

extern long long g_7ff3710c960;
extern struct_0 *g_7ff37153600;

int sub_7ff371307f8(void)
{
    struct_0 *v1;  // rcx
    long long v2;  // rdx
    unsigned long long v11;  // rbx
    unsigned int v4;  // ebx
    void* p;  // rcx
    unsigned int v6;  // ecx
    unsigned long v7;  // rdx
    unsigned long long v8;  // r8
    unsigned long v9;  // rbx
    unsigned long long v10;  // rdi

    v1 = g_7ff37153600;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118d04(g_7ff37153600->field_10, 56, &g_7ff3710c960, v2); /* do not return */
    if (!v2)
    {
        v4 = 2147942487;
        if (g_7ff37153600 == &g_7ff37153600)
        {
            return;
        }
        else if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
        {
            sub_7ff3711722c(g_7ff37153600->field_10); /* do not return */
        }
    }
    else
    {
        *((unsigned long long *)v2) = 0;
        if (!(long long)p[112])
        {
            v4 = 2147500036;
            v1 = g_7ff37153600;
            if (g_7ff37153600 == &g_7ff37153600)
            {
                return;
            }
            else if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
            {
                sub_7ff3711722c(v1->field_10); /* do not return */
            }
        }
        else
        {
            v6 = 0;
            v7 = 0;
            v4 = 2147500037;
            if ((int)(long long)p[112])
            {
                v8 = 0;
                do
                {
                    if (v7 >= (long long)p[112])
                        sub_7ff3711849c(2147942487); /* do not return */
                    if (*((int *)((long long)p[104] + v8 + 8)) == 1)
                    {
                        v9 = v6;
                        *((unsigned int *)&p[136]) = v6;
                        if (v9 >= (long long)p[112])
                            sub_7ff3711849c(2147942487); /* do not return */
                        v10 = (long long)p[104];
                        v11 = v9 * 56;
                        if (*((long long *)(v11 + v10 + 16)))
                            8792722900080();
                        *((unsigned long long *)v2) = 0;
                        if (*((long long *)(v11 + v10 + 16)))
                            v4 = 2147942414;
                        else
                            v4 = 0;
                        v1 = g_7ff37153600;
                        if (g_7ff37153600 == &g_7ff37153600)
                        {
                            return;
                        }
                        else if ((g_7ff37153600->field_1c & 1))
                        {
                            if (g_7ff37153600->field_19 >= 5)
                                sub_7ff37118638(g_7ff37153600->field_10, 59, &g_7ff3710c960, 0); /* do not return */
                            goto LABEL_7ff3713088c;
                        }
                    }
                } while ((v6 += 1, v7 = (unsigned long)(v7 + 1), v8 += 56, v6 < (int)p[112]));
                goto LABEL_7ff3713088c;
            }
            v1 = g_7ff37153600;
        }
    }
LABEL_7ff3713088c:
    if (v1 == &g_7ff37153600)
    {
        return;
    }
    else if (!(v1->field_1c & 1))
    {
        return;
    }
    else if (v1->field_19 >= 5)
    {
        sub_7ff3711722c(v1->field_10, 60, &g_7ff3710c960, v4); /* do not return */
    }
    else
    {
        return;
    }
}
