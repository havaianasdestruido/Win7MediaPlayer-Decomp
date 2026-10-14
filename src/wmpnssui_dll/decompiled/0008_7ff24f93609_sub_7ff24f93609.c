/* sub_7ff24f93609 @ 0x7ff24f93609
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f93609  (268 bytes, 21 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_0 {
    char padding_0[64];
    struct struct_1 *field_40;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_7ff24f914a0;
extern long long g_7ff24f986c0;
extern unsigned long long g_7ff24f986d8;
extern char g_7ff24f986e0;
extern char g_7ff24f986ec;
extern char g_7ff24f986f0;

long long sub_7ff24f93609(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, struct_0 **a10)
{
    unsigned long long v4;  // rsi
    int v5;  // eax
    struct_2 **v6;  // r14
    struct_0 **v7;  // rcx
    unsigned long long v8;  // rdx
    int v9;  // ebx
    unsigned int v10;  // r13d
    unsigned long long v11;  // rdi
    int v12;  // r13d
    struct_2 **v13;  // rcx
    int v1;  // [bp+0x60]
    unsigned int v2;  // [bp+0x68]
    int v3;  // [bp+0x6c]

    v4 = 4294967295;
    if (v5 >= (unsigned int)v6)
    {
        v7 = a10;
        a8 = *((unsigned short *)&v6);
        v8 = &a8;
        *(a10)->field_40();
    }
    else if (v9 >= (unsigned int)v6)
    {
        v2 = v10;
        v3 = (unsigned int)v6;
        8792418812184();
    }
    else
    {
        v1 = (unsigned int)v6;
        v11 = v6 & 4294967295;
        if (v9 >= (unsigned int)v6)
        {
            if ((unsigned int)v6 < v12)
            {
                8792418812616();
            }
            else if (v9 >= (unsigned int)v6)
            {
                8792418812384();
            }
        }
        v13 = v6;
        a9 = v6;
        if (v9 >= (unsigned int)v6)
            8792418812192();
        if (*((int *)&g_7ff24f986ec) == (unsigned int)v6)
            goto LABEL_0x7ff24f93b96;
        if (g_7ff24f986f0 < 4)
            if (g_7ff24f986f0 == *((char *)&v6))
                goto LABEL_7ff24f93b58;
            else
                goto LABEL_0x7ff24f93b96;
LABEL_7ff24f93b58:
        if (!(0x8000000000000000 & g_7ff24f986d8))
            goto LABEL_0x7ff24f93b96;
        if ((*((long long *)&g_7ff24f986e0) & 0x8000000000000000) != *((long long *)&g_7ff24f986e0))
            goto LABEL_0x7ff24f93b96;
        sub_7ff24f92b84(g_7ff24f986c0, &g_7ff24f914a0, v12, v9); /* do not return */
    }
}
