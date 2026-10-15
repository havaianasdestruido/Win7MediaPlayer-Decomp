/* sub_7ff37149470 @ 0x7ff37149470
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37149470  (373 bytes, 34 basic blocks)
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

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern long long g_7ff370f15f0;
extern long long g_7ff370f1630;
extern struct_0 *g_7ff370f1638;
extern struct_0 *g_7ff370f1648;
extern int g_7ff37153a30;
extern unsigned int g_7ff37154190;
extern char g_7ff37154198;
extern void* g_7ff371541a0;
extern unsigned long long g_7ff371541a8;

unsigned long long sub_7ff37149470(unsigned long a0, unsigned int flag2, unsigned long a2)
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
        v5 = InterlockedCompareExchange64(&g_7ff37154198, *((long long *)(*((long long *)(48 + v4)) + 8)), 0);
        if (v5 && (0 == v5 ? 0 : v5) != *((long long *)(*((long long *)(48 + v4)) + 8)))
            8792722899464();
        if (g_7ff37154190)
            sub_7ff37149cd0(31); /* do not return */
        cur = &g_7ff370f1638;
        g_7ff37154190 = 1;
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
            } while (cur < &g_7ff370f1648);
            if (false)
                return 0;
            sub_7ff37149cc4(&g_7ff370f15f0, &g_7ff370f1630); /* do not return */
        }
        else
        {
            sub_7ff37149cc4(&g_7ff370f15f0, &g_7ff370f1630); /* do not return */
        }
    }
    else if (g_7ff37153a30 > 0)
    {
        flag = 1;
        g_7ff37153a30 = g_7ff37153a30 - 1;
        if (InterlockedCompareExchange64(&g_7ff37154198, 1, 0))
            8792722899464();
        if (g_7ff37154190 != 2)
            sub_7ff37149cd0(31); /* do not return */
        if (!g_7ff371541a8)
        {
            g_7ff37154190 = 0;
            InterlockedExchange64(&g_7ff37154198, 0);
            return 1;
        }
        v2 = g_7ff371541a0 - 8;
        while (true)
        {
            if (v2 < g_7ff371541a8)
            {
                8792722899208();
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
        return 0;
    }
}
