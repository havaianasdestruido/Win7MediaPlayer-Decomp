/* sub_7ff3713d4fc @ 0x7ff3713d4fc
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3713d4fc  (458 bytes, 33 basic blocks)
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
    char padding_0[16];
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern struct_0 *g_7ff37153600;

int sub_7ff3713d4fc(void)
{
    struct_0 *v12;  // rcx
    struct_0 **v13;  // rsi
    unsigned int v21;  // eax
    unsigned long long v22;  // rdx
    struct_0 **v23;  // rsi
    char *v25;  // r8
    struct_1 **v24;  // rcx
    unsigned long v14;  // r14
    unsigned int v15;  // eax
    int v16;  // eax
    unsigned long long v17;  // rsi
    unsigned long long v18;  // rdi
    unsigned int v19;  // ebx
    unsigned int v20;  // r12d
    unsigned long v1;  // [bp+0x38]
    unsigned long long v2;  // [bp+0x40]
    unsigned int v3;  // [bp+0x58]
    unsigned int v4;  // [bp+0x5c]
    unsigned int v5;  // [bp+0x60]
    unsigned int v6;  // [bp+0x64]
    unsigned int v7;  // [bp+0x68]
    unsigned int v8;  // [bp+0x6c]
    unsigned int flag;  // [bp+0x70]
    unsigned long long choice;  // [bp+0x78]
    struct_1 **v11;  // [bp+0xa0]

    v12 = g_7ff37153600;
    if (g_7ff37153600 != v13 && ((char)v14 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
        sub_7ff3711722c(g_7ff37153600->field_10, 238, sub_7ff3710c940, v15); /* do not return */
    if (v16 >= 0)
    {
        v17 = 0;
        v18 = 0;
        if ((unsigned int)v2 > 0)
        {
            while (true)
            {
                v3 = v14;
                choice = 0;
                v8 = v14;
                v5 = v14;
                v7 = v14;
                v6 = v14;
                flag = 0;
                v4 = 0;
                if (v12 != &g_7ff37153600 && ((char)v14 & v12->field_1c) && v12->field_19 >= 5)
                    sub_7ff3711722c(v12->field_10, 239, sub_7ff3710c940, 0); /* do not return */
                if (v18 >= v2)
                    sub_7ff3711849c(2147942487); /* do not return */
                v25 = &v3;
                v19 = sub_7ff37148ce0(v11, *((long long *)(v1 + v18 * 8)), &v3);
                if (g_7ff37153600 != &g_7ff37153600 && ((char)v14 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
                    sub_7ff3711722c(g_7ff37153600->field_10, 240, sub_7ff3710c940, v19); /* do not return */
                if (v19 >= 0)
                {
                    v3 = v20;
                    v4 = vvar_82{r56|4b};
                    if (v18 >= v2)
                        sub_7ff3711849c(2147942487); /* do not return */
                    v25 = &v3;
                    v21 = sub_7ff37148dcc(v11, *((long long *)(v1 + v18 * 8)), &v3);
                    if (g_7ff37153600 != &g_7ff37153600 && ((char)v14 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
                        sub_7ff3711722c(g_7ff37153600->field_10, 241, sub_7ff3710c940, v21); /* do not return */
                }
                v22 = 0;
                sub_7ff37148e7c(&v3, 0);
                v17 += v14;
                v18 += v14;
                if ((unsigned int)v17 >= (unsigned int)v2)
                    break;
                v12 = g_7ff37153600;
            }
            v23 = &g_7ff37153600;
        }
        else
        {
            v23 = &g_7ff37153600;
        }
    }
    v24 = v11;
    if (v11)
        *(v11)->field_10();
}
