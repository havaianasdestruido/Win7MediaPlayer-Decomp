/* sub_1000064ba @ 0x1000064ba
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x1000064ba  (237 bytes, 22 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

long long sub_1000064ba(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, struct_2 **a8, unsigned long a9, struct_0 **a10, unsigned long a11, unsigned long a12, unsigned long choice, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, long long a18, unsigned long a19, unsigned long a20, unsigned long a21)
{
    unsigned long v4;  // rdx
    unsigned long long v5;  // r8
    struct_2 **v14;  // rcx
    unsigned int v15;  // r15d
    unsigned long long flag;  // rcx
    unsigned long v7;  // rdx
    unsigned long v8;  // rdx
    unsigned long v9;  // rdx
    unsigned int v10;  // ebx
    unsigned int v11;  // esi
    int v12;  // edi
    struct_0 **v13;  // rcx
    long long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x100068]
    unsigned long long v3;  // [bp+0x100080]

    v4 = v2;
    v5 = v3;
    flag = 0;
    a16 = v3;
    choice = 0;
    if ((unsigned int)v4)
    {
        v7 = (unsigned int)v4 - 1;
        if ((unsigned int)v4 != 1)
        {
            v8 = (unsigned int)v7 - 1;
            if ((unsigned int)v7 != 1)
            {
                v9 = v8;
                if ((unsigned int)v9 == 1)
                {
                    v10 = 0xbebc200;
                    v9 = v8;
                }
            }
            else
            {
                v10 = 0x17d78400;
                v9 = v8;
            }
        }
        else
        {
            v10 = 0x11e1a300;
            v9 = v7;
        }
    }
    else
    {
        v10 = 0x5f5e100;
        v9 = v4;
    }
    a7 = v10 + v11;
    if (v3)
    {
        if (0 < v3)
            4296017312();
        4295012220();
    }
    else
    {
        if (v12 >= 0)
        {
            v13 = a10;
            a16 = a10;
            if (a10)
                *(a10)->field_8();
            v14 = a8;
            a11 = a8;
            if (!a8)
            {
                *((unsigned int *)&v1) = v15;
                sub_10000917c(vvar_33{r56|8b}, &a11, &a16, a18, v1); /* do not return */
            }
            *(a8)->field_8();
        }
    }
}
