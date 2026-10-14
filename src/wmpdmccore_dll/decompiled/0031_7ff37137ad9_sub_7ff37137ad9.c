/* sub_7ff37137ad9 @ 0x7ff37137ad9
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37137ad9  (484 bytes, 40 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_4;

extern struct_4 *g_7ff37153600;

int sub_7ff37137ad9(void)
{
    void* v5;  // r15
    void* ptr;  // r14
    struct_0 **v14;  // rcx
    struct_0 *v15;  // r8
    int v7;  // ebx
    unsigned long v8;  // rsi
    unsigned long long v9;  // rdi
    unsigned long long v10;  // rsi
    void* p;  // rdx
    struct_2 **v12;  // rcx
    void* addr;  // rdx
    int <0x7ff37137ad9[is_3]|Stack bp, 1 B>;  // [bp+0x0]
    int flag;  // [bp+0x0]
    void* v2;  // [bp+0x40]
    void* v3;  // [bp+0x48]
    char v4;  // [bp+0x68]

    if ((int)v2[16] != (unsigned int)v5 && (int)v3[16] != (unsigned int)v5 && ptr != v5 && &<0x7ff37137ad9[is_3]|Stack bp, 1 B> != v5)
    {
        if ((int)v2[16] >= (unsigned int)v5)
            8792722899240();
        flag = 1;
        if ((int)v2[16] >= (unsigned int)v5)
        {
            8792722899240();
        }
        else if ((int)v2[16] >= (unsigned int)v5)
        {
            8792722899240();
        }
        else if ((int)v2[16] >= (unsigned int)v5)
        {
            8792722899240();
        }
        else if (v7 >= (unsigned int)v5)
        {
            if ((unsigned int)v8 == (unsigned int)v5)
            {
                if (v2 == v5)
                {
                    v9 = 4294967295;
                }
                else if ((int)v3[16] < (unsigned int)v5)
                {
                    v9 = 4294967295;
                }
                else
                {
                    8792722899240();
                }
                v10 = _INSERT(v5 & 4294967295, 0, (unsigned int)v5 <= -1);
                if ((unsigned int)v8 == (unsigned int)v5)
                    sub_7ff37120dfc(&v4, ":"); /* do not return */
            }
            if ((unsigned int)v10 == 1)
            {
                if (flag == (unsigned int)v10)
                {
                    *((unsigned int *)ptr) = 1;
                }
                else if ((int)v2[16] >= (unsigned int)v5)
                {
                    8792722899240();
                }
                else if ((int)v2[16] >= (unsigned int)v5)
                {
                    8792722899240();
                }
                else if ((int)v2[16] >= (unsigned int)v5)
                {
                    8792722899240();
                }
            }
        }
    }
    else
    {
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 99, sub_7ff3710c940, 2147942487); /* do not return */
    }
    p = v3 - 24;
    InterlockedExchangeAdd(p + 16, 4294967295);
    if ((int)p[16] + 4294967295 <= (unsigned int)v5)
    {
        v12 = *((long long *)p);
        (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
    }
    addr = v2 - 24;
    InterlockedExchangeAdd(addr + 16, 4294967295);
    if ((int)addr[16] + 4294967295 > (unsigned int)v5)
        return;
    v14 = *((long long *)addr);
    v15 = *((long long *)*((long long *)addr));
    (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
}
