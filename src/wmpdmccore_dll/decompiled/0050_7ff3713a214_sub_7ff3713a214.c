/* sub_7ff3713a214 @ 0x7ff3713a214
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3713a214  (445 bytes, 31 basic blocks)
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

typedef struct struct_6 {
    char padding_0[152];
    struct struct_7 *field_98;
} struct_6;

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_5 {
    struct struct_3 *field_0;
} struct_5;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

extern struct_0 *g_7ff37153600;

int sub_7ff3713a214(void)
{
    unsigned long long v6[2];  // rdx
    struct_0 **v7;  // rsi
    struct_6 **v16;  // rcx
    struct_0 *v8;  // rcx
    long long v9;  // rcx
    unsigned long long v10;  // rdi
    unsigned long long v12;  // rax
    unsigned long long v13;  // r14
    struct_5 **v15;  // rdx
    struct_1 **flag;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xc0]
    unsigned long long v2;  // [bp-0x58]
    unsigned long long v4[2];  // [bp+0x10]
    unsigned int v5;  // [bp+0x18]

    v4 = v6;
    v2 = 18446744073709551614;
    v7 = &g_7ff37153600;
    v8 = g_7ff37153600;
    if (g_7ff37153600 != &g_7ff37153600 && (1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118ec8(g_7ff37153600->field_10, 156, sub_7ff3710c940, v9, v6); /* do not return */
    v10 = 0;
    if (v9 && v6)
    {
        v12 = 0;
        v5 = 0;
        v13 = 0;
        v1 = 0;
        if (v12 < v6[1])
        {
            if (v13 >= v6[1])
            {
                sub_7ff3711849c(2147942487); /* do not return */
            }
            else if (*((long long *)(v6[0] + v13 * 8)))
            {
                8792722900288();
            }
            else
            {
                flag = NULL;
                v15 = &flag;
                v16 = v9;
                (*((long long *)(*((long long *)v9) + 152)))();
            }
        }
    }
    else
    {
        v10 = 2147942487;
        if (g_7ff37153600 == &g_7ff37153600)
        {
            return;
        }
        else if ((1 & g_7ff37153600->field_1c) && g_7ff37153600->field_19 >= 5)
        {
            sub_7ff3711722c(g_7ff37153600->field_10, 157, sub_7ff3710c940, 2147942487); /* do not return */
        }
    }
    if (v8 == &g_7ff37153600)
    {
        return;
    }
    else if (!(1 & v8->field_1c))
    {
        return;
    }
    else if (v8->field_19 >= 5)
    {
        sub_7ff3711722c(v8->field_10, 164, sub_7ff3710c940, v10 & 4294967295); /* do not return */
    }
    else
    {
        return;
    }
}
