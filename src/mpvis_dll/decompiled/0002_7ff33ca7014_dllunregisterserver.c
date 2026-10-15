/* DllUnregisterServer @ 0x7ff33ca7014
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca7014  (137 bytes, 13 basic blocks)
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
    unsigned long long field_0;
    struct struct_1 *field_8;
    char padding_10[32];
    struct struct_2 *field_30;
} struct_0;

typedef struct struct_7 {
    char padding_0[16];
    struct struct_8 *field_10;
    char padding_18[32];
    struct struct_9 *field_38;
} struct_7;

typedef struct struct_6 {
    struct struct_3 *field_0;
} struct_6;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    char padding_18[32];
    struct struct_5 *field_38;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

extern long long g_7ff33ccecb0;
extern struct_0 *g_7ff33ccecd0;

int DllUnregisterServer(void)
{
    unsigned long long flag;  // rcx
    struct_6 **v4;  // r9
    char *v5;  // r8
    unsigned long long flag3;  // rdx
    struct_7 **v7;  // rcx
    char *v8;  // rdx
    struct_7 **v9;  // rcx
    struct_7 **flag2;  // [bp+0x8]
    char v1;  // [bp+0x10]
    unsigned long choice;  // [bp+0x18]

    if (!g_7ff33ccecd0)
    {
        return;
    }
    else if (!g_7ff33ccecd0->field_0)
    {
        choice = 0;
        flag2 = NULL;
        v4 = &flag2;
        v5 = &choice;
        flag3 = 0;
        if ((int)sub_7ff33ca8068(&g_7ff33ccecb0, 0, &choice, &flag2) >= 0)
        {
            v7 = flag2;
            v8 = &v1;
            *(flag2)->field_38();
        }
        v9 = flag2;
        if (!flag2)
            8792667325344();
        *(flag2)->field_10();
    }
    else if (g_7ff33ccecd0->field_30)
    {
        g_7ff33ccecd0->field_30();
    }
    else
    {
        flag = 0;
        g_7ff33ccecd0->field_8();
    }
}
