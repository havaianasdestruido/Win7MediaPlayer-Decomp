/* sub_7ff3b16367c @ 0x7ff3b16367c
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b16367c  (373 bytes, 34 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern long long g_7ff3b131718;
extern long long g_7ff3b131760;
extern struct_0 *g_7ff3b131768;
extern struct_0 *g_7ff3b131778;
extern int g_7ff3b17cac0;
extern unsigned int g_7ff3b17d4e4;
extern char g_7ff3b17d4e8;
extern void* g_7ff3b17d4f0;
extern unsigned long long g_7ff3b17d4f8;

int sub_7ff3b16367c(void)
{
    unsigned int flag2;  // edx
    unsigned long long flag;  // rdi
    unsigned long long v3;  // rsi
    unsigned long long choice;  // rdi
    unsigned long v5;  // gs
    unsigned long long v6;  // 4101
    struct_0 **cur;  // rsi
    unsigned long v8;  // rcx

    if (flag2)
    {
        choice = 1;
        if (flag2 != 1)
            return;
        v6 = InterlockedCompareExchange64(&g_7ff3b17d4e8, *((long long *)(*((long long *)(48 + v5)) + 8)), 0);
        if (v6 && (0 == v6 ? 0 : v6) != *((long long *)(*((long long *)(48 + v5)) + 8)))
            8792790009120();
        if (g_7ff3b17d4e4)
            sub_7ff3b163f20(31); /* do not return */
        cur = &g_7ff3b131768;
        g_7ff3b17d4e4 = 1;
        if (true)
        {
            do
            {
                if (false)
                    return;
                v8 = *(cur);
                if (*(cur))
                    (*(cur))();
                cur += 1;
            } while (cur < &g_7ff3b131778);
            if (false)
                return;
            sub_7ff3b163f14(&g_7ff3b131718, &g_7ff3b131760); /* do not return */
        }
        else
        {
            sub_7ff3b163f14(&g_7ff3b131718, &g_7ff3b131760); /* do not return */
        }
    }
    else if (g_7ff3b17cac0 > 0)
    {
        flag = 1;
        g_7ff3b17cac0 = g_7ff3b17cac0 - 1;
        if (InterlockedCompareExchange64(&g_7ff3b17d4e8, 1, 0))
            8792790009120();
        if (g_7ff3b17d4e4 != 2)
            sub_7ff3b163f20(31); /* do not return */
        if (!g_7ff3b17d4f8)
        {
            g_7ff3b17d4e4 = 0;
            InterlockedExchange64(&g_7ff3b17d4e8, 0);
            return;
        }
        v3 = g_7ff3b17d4f0 - 8;
        while (true)
        {
            if (v3 < g_7ff3b17d4f8)
            {
                8792790007832();
            }
            else if (*((long long *)v3))
            {
                (*((long long *)v3))();
            }
            else
            {
                v3 -= 8;
            }
        }
    }
    else
    {
        return;
    }
}
