/* sub_100002f57 @ 0x100002f57
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x100002f57  (205 bytes, 22 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a
 *   Evidence: analysis/report/rea-evidence/wmpenc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned short field_0;
} struct_0;

extern char g_1000016e0;

long long sub_100002f57(void)
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
            goto LABEL_0x100002f4a;
        v4 = v3;
    }
    else
    {
        v4 = *((long long *)&(&g_1000016e0)[8 + 16 * v5]);
    }
    v7 = v4;
    if (v7 != v3)
    {
        if ((int)sub_1000023c0(ptr, v9) < (int)v3)
            goto LABEL_0x100003029;
        if (*(v9) == 123)
        {
            *((int *)&v1) = v3;
            v10 = v7;
            if (v11 == (int)v3)
            {
                if (sub_100003064(ptr, v9, v10, 0, v1) < (int)v3)
                    goto LABEL_0x100003029;
                else
                    goto LABEL_100002ff6;
            }
            else if (sub_100003064(ptr, v9, v10, v11, v1) < (int)v3)
            {
                *(ptr) = *(ptr);
                *((int *)&v1) = v3;
                sub_100003064(ptr, v9, v7, 0, v1);
            }
LABEL_100002ff6:
            v12 = *(ptr)->field_0;
            if (v12 >= 9 && (v12 <= 10 || v12 == 13 || v12 == 32))
                4296016320();
        }
    }
}
