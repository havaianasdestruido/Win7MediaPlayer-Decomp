/* sub_7ff24f942c7 @ 0x7ff24f942c7
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f942c7  (130 bytes, 13 basic blocks)
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
    char padding_18[40];
    struct struct_2 *field_40;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

void sub_7ff24f942c7(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, struct_0 **a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, char a13, unsigned long long a14)
{
    int v1;  // ebx
    struct_0 **v2;  // rsi
    unsigned short cur[18];  // rcx
    struct_0 **v3;  // rcx
    unsigned long v4;  // rdx
    struct_0 **v5;  // rcx
    unsigned long long v6;  // r8
    struct_0 **v7;  // rdx
    unsigned short v8[18];  // rdi
    struct_0 **v9;  // rdx

    if (v1 >= (unsigned int)v2)
    {
        v3 = a5;
        v4 = &vvar_13;
        *(a5)->field_40();
    }
    v5 = a5;
    if (a5 != v2)
        *(a5)->field_10();
    if (v1 >= (unsigned int)v2)
    {
        v6 = a14;
        v7 = 0x80;
        cur = &v8[17];
        do
        {
            if ((char *)&v7[268435439] + 6 == v2 || *((short *)v6) == *((unsigned short *)&v2))
                break;
        } while ((cur[0] = (unsigned short)*((short *)v6), v6 += 2, cur += 2, v9 = v7 - 1, v7 -= 1, v7 != 0x1));
        if (v7 == v2)
            cur = &cur[1];
        cur[0] = *((unsigned short *)&v2);
    }
    8792418812208();
}
