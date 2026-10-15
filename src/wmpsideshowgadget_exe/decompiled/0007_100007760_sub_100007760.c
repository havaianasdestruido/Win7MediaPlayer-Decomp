/* sub_100007760 @ 0x100007760
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100007760  (400 bytes, 32 basic blocks)
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

typedef struct struct_1 {
    char padding_0[96];
    long long field_60;
    char padding_68[8];
    unsigned long long field_70;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_0;

extern long long g_1000019b8;
extern struct_0 *g_10001c260;

long long sub_100007760(struct_1 *a0, unsigned long a1, unsigned int *ptr)
{
    unsigned long v6;  // rax
    unsigned int v7;  // eax
    unsigned int v8;  // eax
    unsigned long v9;  // rax
    long long v0;  // [bp-0x28]
    long long v1;  // [bp-0x20]
    long long v2;  // [bp-0x18]
    long long v3;  // [bp-0x10]
    unsigned long flag;  // [bp+0x18]

    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 16))
    {
        *((unsigned int *)&v3) = ptr[4];
        *((unsigned int *)&v2) = ptr[3];
        *((unsigned int *)&v1) = ptr[2];
        *((unsigned int *)&v0) = ptr[1];
        sub_100004ddc(g_10001c260->field_10, 23, &g_1000019b8, *(ptr), v0, v1, v2, v3); /* do not return */
    }
    if (!ptr)
        return v9;
    v6 = ptr[4] - 10;
    if (ptr[4] != 10)
    {
        if ((unsigned int)v6 != 1)
        {
            if (g_10001c260 == &g_10001c260)
            {
                return v6;
            }
            else if ((g_10001c260->field_1c & 8))
            {
                sub_1000041c8(g_10001c260->field_10, 24, &g_1000019b8); /* do not return */
            }
            else
            {
                return v6;
            }
        }
        if (!a0->field_70)
        {
            if (a0->field_70)
                4295012220();
            v7 = sub_100006ed4(a0);
            flag = 0;
            *((unsigned int *)&v0) = 1;
            sub_10000cf9c(a0->field_60, v7, &flag, ptr[2], v0); /* do not return */
        }
        4296017296();
    }
    else
    {
        if (!a0->field_70)
        {
            flag = 0;
            if (a0->field_70)
                4295012220();
            v8 = sub_100006ed4(a0);
            *((unsigned int *)&v0) = 0;
            sub_10000cf9c(a0->field_60, v8, &flag, ptr[2], v0); /* do not return */
        }
        4296017296();
    }
}
