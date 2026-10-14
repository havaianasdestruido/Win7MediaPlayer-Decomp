/* sub_7ff24f9285c @ 0x7ff24f9285c
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f9285c  (124 bytes, 9 basic blocks)
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
    char padding_0[24];
    struct struct_1 *field_18;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_7ff24f914e0;
extern long long g_7ff24f986c0;
extern unsigned long long g_7ff24f986d8;
extern char g_7ff24f986e0;
extern unsigned int g_7ff24f986ec;
extern char g_7ff24f986f0;

long long sub_7ff24f9285c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, struct_0 **a8, unsigned long a9)
{
    int v1;  // eax
    struct_0 **v2;  // rcx
    unsigned long long v3;  // r8
    unsigned long long v4;  // rdx
    unsigned long long v5;  // rdi
    unsigned long long v6;  // r9
    unsigned long v7;  // rsi

    if (v1 >= 0)
    {
        v2 = a8;
        v3 = L"ShareMedia";
        v4 = L"Microsoft.NetworkAndSharingCenter";
        v6 = v5;
        *(a8)->field_18();
    }
    else if (g_7ff24f986ec)
    {
        if (g_7ff24f986f0 < 4 && g_7ff24f986f0)
            return v1;
        if (!(v7 & g_7ff24f986d8))
        {
            return v1;
        }
        else if ((*((long long *)&g_7ff24f986e0) & v7) == *((long long *)&g_7ff24f986e0))
        {
            sub_7ff24f923c8(g_7ff24f986c0, &g_7ff24f914e0, v1); /* do not return */
        }
        else
        {
            return v1;
        }
    }
    else
    {
        return v1;
    }
}
