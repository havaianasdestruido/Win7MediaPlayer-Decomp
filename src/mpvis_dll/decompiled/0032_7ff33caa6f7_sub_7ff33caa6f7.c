/* sub_7ff33caa6f7 @ 0x7ff33caa6f7
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33caa6f7  (205 bytes, 22 basic blocks)
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
    unsigned short field_0;
} struct_0;

extern char g_7ff33ca36d0;

int sub_7ff33caa6f7(void)
{
    int v2;  // eax
    long long v3;  // r15
    unsigned int v12;  // eax
    long long v4;  // rbp
    unsigned long v5;  // rbx
    long long v7;  // rbp
    struct_0 **ptr;  // rdi
    unsigned short *v9;  // rsi
    long long v10;  // r8
    int v11;  // r14d
    long long v1;  // [bp+0x20]

    if (v2 != (int)v3)
    {
        if (vvar_61{r56|4b} + 1 < 14)
            goto LABEL_0x7ff33caa6ea;
        v4 = v3;
    }
    else
    {
        v4 = *((long long *)&(&g_7ff33ca36d0)[8 + 16 * v5]);
    }
    v7 = v4;
    if (v7 != v3)
    {
        if ((int)sub_7ff33ca9944(ptr, v9) < (int)v3)
            goto LABEL_0x7ff33caa7c9;
        if (*(v9) == 123)
        {
            *((int *)&v1) = v3;
            v10 = v7;
            if (v11 == (int)v3)
            {
                if (sub_7ff33ca9acc(ptr, v9, v10, 0, v1) < (int)v3)
                    goto LABEL_0x7ff33caa7c9;
                else
                    goto LABEL_7ff33caa796;
            }
            else if (sub_7ff33ca9acc(ptr, v9, v10, v11, v1) < (int)v3)
            {
                *(ptr) = *(ptr);
                *((int *)&v1) = v3;
                sub_7ff33ca9acc(ptr, v9, v7, 0, v1);
            }
LABEL_7ff33caa796:
            v12 = *(ptr)->field_0;
            if (v12 >= 9 && (v12 <= 10 || v12 == 13 || v12 == 32))
                8792667325544();
        }
    }
}
