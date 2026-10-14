/* sub_7ff24f94025 @ 0x7ff24f94025
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f94025  (206 bytes, 18 basic blocks)
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

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    char padding_18[48];
    struct struct_5 *field_48;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

void sub_7ff24f94025(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, struct_0 **a5, struct_3 **a6, unsigned long a7, unsigned long choice, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, int a20)
{
    int v2;  // ebx
    struct_0 **v3;  // rsi
    unsigned long long v12;  // rdx
    struct_3 **v13;  // rsi
    unsigned long long v14;  // rdi
    struct_3 **v15;  // rcx
    struct_0 **v4;  // rcx
    char *v5;  // rdx
    struct_0 **v6;  // rcx
    unsigned long v7;  // rdi
    unsigned long long flag;  // rdi
    unsigned long long v9;  // r13
    struct_3 **v10;  // rcx
    unsigned long v11;  // r8
    unsigned int v1;  // [bp+0x100058]

    a16 = 19;
    if (v2 >= (unsigned int)v3)
    {
        v4 = a5;
        v5 = &a16;
        *(a5)->field_40();
    }
    v6 = a5;
    if (a5 != v3)
        *(a5)->field_10();
    if (v2 >= (unsigned int)v3 && a20 == (unsigned int)v7 && (unsigned int)v3 == (unsigned int)v7)
    {
        flag = 0;
        if (v1)
        {
            choice = 0;
            sub_7ff24f93bd0(vvar_39{r56|8b}, &choice); /* do not return */
        }
        else if (v9)
        {
            v10 = a6;
            v11 = &a5;
            v12 = L"UDN";
            *(a6)->field_48();
        }
        else if (!v1)
        {
            if (!(unsigned int)v3)
            {
                choice = 0;
                sub_7ff24f93bd0(vvar_39{r56|8b}, &choice); /* do not return */
            }
            v13 = NULL;
            v14 = 1;
        }
        else
        {
            choice = 0;
            sub_7ff24f93bd0(vvar_39{r56|8b}, &choice); /* do not return */
        }
    }
    v15 = a6;
    if (a6 == v13)
        8792418812208();
    *(a6)->field_10();
}
