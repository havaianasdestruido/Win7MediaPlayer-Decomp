/* sub_10002de13 @ 0x10002de13
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10002de13  (205 bytes, 22 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned short field_0;
} struct_0;

extern char g_100023a70;

int sub_10002de13(void)
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
            goto LABEL_0x10002de06;
        v4 = v3;
    }
    else
    {
        v4 = *((long long *)&(&g_100023a70)[8 + 16 * v5]);
    }
    v7 = v4;
    if (v7 != v3)
    {
        if ((int)sub_10002d27c(ptr, v9) < (int)v3)
            goto LABEL_0x10002dee5;
        if (*(v9) == 123)
        {
            *((int *)&v1) = v3;
            v10 = v7;
            if (v11 == (int)v3)
            {
                if (sub_10002df20(ptr, v9, v10, 0, v1) < (int)v3)
                    goto LABEL_0x10002dee5;
                else
                    goto LABEL_10002deb2;
            }
            else if (sub_10002df20(ptr, v9, v10, v11, v1) < (int)v3)
            {
                *(ptr) = *(ptr);
                *((int *)&v1) = v3;
                sub_10002df20(ptr, v9, v7, 0, v1);
            }
LABEL_10002deb2:
            v12 = *(ptr)->field_0;
            if (v12 >= 9 && (v12 <= 10 || v12 == 13 || v12 == 32))
                4296016400();
        }
    }
}
