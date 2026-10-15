/* sub_7ff33cc0734 @ 0x7ff33cc0734
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cc0734  (373 bytes, 34 basic blocks)
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
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_7ff33c91638;
extern struct_0 *g_7ff33c91648;
extern int g_7ff33cce6f0;
extern unsigned int g_7ff33cd12fc;
extern char g_7ff33cd1300;
extern void* g_7ff33cd1308;
extern unsigned long long g_7ff33cd1310;

unsigned int sub_7ff33cc0734(unsigned long a0, unsigned int flag2, unsigned long a2)
{
    unsigned long long flag;  // rdi
    unsigned long long v2;  // rsi
    unsigned long long choice;  // rdi
    unsigned long v4;  // gs
    unsigned long long v5;  // 4101
    struct_0 **cur;  // rsi
    unsigned long v7;  // rcx

    if (flag2)
    {
        choice = 1;
        if (flag2 != 1)
            return 1;
        v5 = InterlockedCompareExchange64(&g_7ff33cd1300, *((long long *)(*((long long *)(48 + v4)) + 8)), 0);
        if (v5 && (0 == v5 ? 0 : v5) != *((long long *)(*((long long *)(48 + v4)) + 8)))
            8792667324944();
        if (g_7ff33cd12fc)
            8792667065984();
        cur = &g_7ff33c91638;
        g_7ff33cd12fc = 1;
        if (true)
        {
            do
            {
                if (false)
                    return 0;
                v7 = *(cur);
                if (*(cur))
                    (*(cur))();
                cur += 1;
            } while (cur < &g_7ff33c91648);
            if (false)
                return 0;
            8792667065972();
        }
        else
        {
            8792667065972();
        }
    }
    else if (g_7ff33cce6f0 > 0)
    {
        flag = 1;
        g_7ff33cce6f0 = g_7ff33cce6f0 - 1;
        if (InterlockedCompareExchange64(&g_7ff33cd1300, 1, 0))
        {
            8792667324944();
        }
        else if (g_7ff33cd12fc != 2)
        {
            8792667065984();
        }
        else if (g_7ff33cd1310)
        {
            v2 = g_7ff33cd1308 - 8;
            while (true)
            {
                if (v2 < g_7ff33cd1310)
                {
                    8792667324640();
                }
                else if (*((long long *)v2))
                {
                    (*((long long *)v2))();
                }
                else
                {
                    v2 -= 8;
                }
            }
        }
        else
        {
            g_7ff33cd12fc = 0;
            InterlockedExchange64(&g_7ff33cd1300, 0);
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
