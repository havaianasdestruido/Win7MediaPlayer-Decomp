/* sub_100004d4f @ 0x100004d4f
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100004d4f  (473 bytes, 35 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 10888bb9c3799e1e8b010c0f9088ced376aad63a509fce1727c457b022cdc717
 *   Evidence: analysis/report/rea-evidence/wmpnscfg_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_10000b1a8;

long long sub_100004d4f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned int a13, unsigned long a14)
{
    unsigned int v8;  // eax
    unsigned long v9;  // rbx
    unsigned short *v10;  // rsi
    unsigned long long v11;  // rdi
    unsigned long v13;  // rsi
    unsigned long v14;  // rdi
    unsigned int v15;  // ebx
    char *v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x74]
    unsigned long v3;  // [bp+0x98]
    unsigned long long flag;  // [bp+0xa0]
    unsigned long long choice;  // [bp+0xa8]
    char v6;  // [bp+0x2d0]
    unsigned int v7;  // [bp+0x2330]

    if (v8 == (unsigned int)v9)
    {
        if (sub_1000049b8(vvar_32{r56|8b}, &v6) < 0)
            goto LABEL_0x100005441;
        if (sub_1000049b8(vvar_32{r56|8b}, v10) < 0)
            goto LABEL_0x100005441;
        if (*(v10) == 61)
        {
            if (v2)
            {
                flag = 0;
                choice = 0;
                v3 = a14;
                if ((int)sub_10000423c(vvar_32{r56|8b}, &v3, &v6, v10) < 0 && v11)
                    4296016320();
            }
            else
            {
                if (!v7 && a13)
                {
                    a11 = 0;
                    v1 = &a11;
                    4296016248();
                }
                if ((int)sub_1000046e8(vvar_32{r56|8b}, v10) < 0)
                    goto LABEL_0x100005441;
            }
        }
        else
        {
            if (v11)
                4296016320();
        }
    }
    else
    {
        if (*((short *)v13) != (unsigned short)v9)
        {
            if (*((short *)v13) != 92)
            {
                g_10000b1a8();
            }
            else if (v13 != v9 && v14 != v9)
            {
                4296016320();
            }
        }
        if (v2 != (unsigned int)v9)
        {
            a11 = v9;
            v1 = &a11;
            4296016248();
        }
        v15 = v7;
        if (v15)
        {
            v15 = 1;
            v7 = v15;
            4294998830();
        }
        a11 = 0;
        v1 = &a11;
        4296016248();
    }
}
