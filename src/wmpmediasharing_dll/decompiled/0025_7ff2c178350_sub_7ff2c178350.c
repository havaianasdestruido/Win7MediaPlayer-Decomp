/* sub_7ff2c178350 @ 0x7ff2c178350
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c178350  (373 bytes, 34 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_7ff2c161410;
extern struct_0 *g_7ff2c161420;
extern int g_7ff2c183400;
extern unsigned int g_7ff2c183d5c;
extern char g_7ff2c183d60;
extern void* g_7ff2c183d68;
extern unsigned long long g_7ff2c183d70;

unsigned int sub_7ff2c178350(unsigned long a0, unsigned int flag2, unsigned long a2)
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
        v5 = InterlockedCompareExchange64(&g_7ff2c183d60, *((long long *)(*((long long *)(48 + v4)) + 8)), 0);
        if (v5 && (0 == v5 ? 0 : v5) != *((long long *)(*((long long *)(48 + v4)) + 8)))
            8792538350248();
        if (g_7ff2c183d5c)
            8792537795600();
        cur = &g_7ff2c161410;
        g_7ff2c183d5c = 1;
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
            } while (cur < &g_7ff2c161420);
            if (false)
                return 0;
            8792537795588();
        }
        else
        {
            8792537795588();
        }
    }
    else if (g_7ff2c183400 > 0)
    {
        flag = 1;
        g_7ff2c183400 = g_7ff2c183400 - 1;
        if (InterlockedCompareExchange64(&g_7ff2c183d60, 1, 0))
        {
            8792538350248();
        }
        else if (g_7ff2c183d5c != 2)
        {
            8792537795600();
        }
        else if (g_7ff2c183d70)
        {
            v2 = g_7ff2c183d68 - 8;
            while (true)
            {
                if (v2 < g_7ff2c183d70)
                {
                    8792538349752();
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
            g_7ff2c183d5c = 0;
            InterlockedExchange64(&g_7ff2c183d60, 0);
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
