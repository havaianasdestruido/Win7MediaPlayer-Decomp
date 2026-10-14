/* sub_7ff3713d103 @ 0x7ff3713d103
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3713d103  (502 bytes, 36 basic blocks)
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

int sub_7ff3713d103(void)
{
    struct_0 *v13;  // rcx
    struct_0 **v14;  // rsi
    unsigned long ptr;  // r12
    unsigned int v23;  // ebx
    unsigned long long v24;  // rdx
    struct_0 **v25;  // rsi
    char *v27;  // r8
    struct_1 **v26;  // rcx
    unsigned long v15;  // r15
    unsigned int v16;  // eax
    int v17;  // eax
    unsigned long long v18;  // rsi
    unsigned long long v19;  // rdi
    unsigned int v20;  // ebx
    unsigned int *p;  // r13
    unsigned long v1;  // [bp+0x48]
    unsigned long long v2;  // [bp+0x50]
    unsigned int v3;  // [bp+0x68]
    unsigned int v4;  // [bp+0x6c]
    unsigned int v5;  // [bp+0x70]
    unsigned int v6;  // [bp+0x74]
    unsigned int v7;  // [bp+0x78]
    unsigned int v8;  // [bp+0x7c]
    unsigned int flag;  // [bp+0x80]
    unsigned long long choice;  // [bp+0x88]
    struct_1 **v11;  // [bp+0xc0]
    unsigned int v12;  // [bp+0x100008]

    v13 = g_7ff37153600;
    if (g_7ff37153600 != v14 && ((char)v15 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
        sub_7ff3711722c(g_7ff37153600->field_10, 230, sub_7ff3710c940, v16); /* do not return */
    if (v17 >= 0)
    {
        v18 = 0;
        v19 = 0;
        if ((unsigned int)v2 > 0)
        {
            while (true)
            {
                v3 = v15;
                choice = 0;
                v8 = v15;
                v5 = v15;
                v7 = v15;
                v6 = v15;
                flag = 0;
                v4 = 0;
                if (v13 != &g_7ff37153600 && ((char)v15 & v13->field_1c) && v13->field_19 >= 5)
                    sub_7ff3711722c(v13->field_10, 231, sub_7ff3710c940, 0); /* do not return */
                if (v19 >= v2)
                    sub_7ff3711849c(2147942487); /* do not return */
                v27 = &v3;
                v20 = sub_7ff37148ce0(v11, *((long long *)(v1 + v19 * 8)), &v3);
                if (g_7ff37153600 != &g_7ff37153600 && ((char)v15 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
                    sub_7ff3711722c(g_7ff37153600->field_10, 232, sub_7ff3710c940, v20); /* do not return */
                if (v20 >= 0)
                {
                    *(p) = v3;
                    *((unsigned int *)ptr) = v4;
                    if (!v4)
                    {
                        v3 &= v4;
                        v4 = v15;
                        if (v19 >= v2)
                            sub_7ff3711849c(2147942487); /* do not return */
                        v27 = &v3;
                        v23 = sub_7ff37148dcc(v11, *((long long *)(v1 + v19 * 8)), &v3);
                        if (g_7ff37153600 != &g_7ff37153600 && ((char)v15 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
                            sub_7ff3711722c(g_7ff37153600->field_10, 233, sub_7ff3710c940, v23); /* do not return */
                        if (v23 >= 0)
                            v12 = v15;
                    }
                }
                v24 = 0;
                sub_7ff37148e7c(&v3, 0);
                v18 += v15;
                v19 += v15;
                if ((unsigned int)v18 >= (unsigned int)v2)
                    break;
                v13 = g_7ff37153600;
            }
            v25 = &g_7ff37153600;
        }
        else
        {
            v25 = &g_7ff37153600;
        }
    }
    v26 = v11;
    if (v11)
        *(v11)->field_10();
}
