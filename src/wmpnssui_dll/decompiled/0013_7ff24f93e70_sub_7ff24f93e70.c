/* sub_7ff24f93e70 @ 0x7ff24f93e70
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f93e70  (211 bytes, 16 basic blocks)
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

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
    char padding_18[8];
    struct struct_2 *field_20;
    char padding_28[144];
    struct struct_3 *field_b8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern long long g_7ff24f91460;
extern long long g_7ff24f986c0;
extern unsigned long long g_7ff24f986d8;
extern char g_7ff24f986e0;
extern char g_7ff24f986ec;
extern char g_7ff24f986f0;

long long sub_7ff24f93e70(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, char a7, unsigned long a8, unsigned long a9, struct_0 **a10, struct_0 **a11)
{
    int v4;  // eax
    struct_0 **v5;  // rsi
    struct_0 **v6;  // rcx
    unsigned long v7;  // rdx
    struct_0 **v8;  // rcx
    struct_0 **v9;  // rcx
    unsigned long v10;  // rdx
    struct_0 **v11;  // rcx
    unsigned long v12;  // r12
    char v0;  // [bp+0x0]
    unsigned long long v2;  // [bp+0x350]
    unsigned int *v3;  // [bp+0x100048]

    if (v4 >= (unsigned int)v5)
    {
        v6 = a11;
        v7 = &a10;
        *(a11)->field_b8();
    }
    v8 = a11;
    if (a11 != v5)
    {
        *(a11)->field_10();
    }
    else if (v4 >= (unsigned int)v5)
    {
        v9 = a10;
        v10 = &vvar_7;
        *(a10)->field_20();
    }
    else
    {
        v11 = a10;
        if (a10 != v5)
            *(a10)->field_10();
        if (*((int *)&g_7ff24f986ec) == (unsigned int)v5 || g_7ff24f986f0 < 4 && g_7ff24f986f0 != *((char *)&v5) || !(v12 & g_7ff24f986d8) || (*((long long *)&g_7ff24f986e0) & v12) != *((long long *)&g_7ff24f986e0))
            return sub_7ff24f95db0(v2 ^ &v0);
        sub_7ff24f92b84(g_7ff24f986c0, &g_7ff24f91460, *(v3), v4); /* do not return */
        return sub_7ff24f95db0(v2 ^ &v0);
    }
}
