/* sub_7ff24f95990 @ 0x7ff24f95990
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f95990  (373 bytes, 34 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_7ff24f91360;
extern struct_0 *g_7ff24f91370;
extern int g_7ff24f98130;
extern unsigned int g_7ff24f986f8;
extern char g_7ff24f98700;
extern void* g_7ff24f98708;
extern unsigned long long g_7ff24f98710;

unsigned int sub_7ff24f95990(unsigned long a0, unsigned int flag2, unsigned long a2)
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
        v5 = InterlockedCompareExchange64(&g_7ff24f98700, *((long long *)(*((long long *)(48 + v4)) + 8)), 0);
        if (v5 && (0 == v5 ? 0 : v5) != *((long long *)(*((long long *)(48 + v4)) + 8)))
            8792418812152();
        if (g_7ff24f986f8)
            8792418377440();
        cur = &g_7ff24f91360;
        g_7ff24f986f8 = 1;
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
            } while (cur < &g_7ff24f91370);
            if (false)
                return 0;
            8792418377428();
        }
        else
        {
            8792418377428();
        }
    }
    else if (g_7ff24f98130 > 0)
    {
        flag = 1;
        g_7ff24f98130 = g_7ff24f98130 - 1;
        if (InterlockedCompareExchange64(&g_7ff24f98700, 1, 0))
        {
            8792418812152();
        }
        else if (g_7ff24f986f8 != 2)
        {
            8792418377440();
        }
        else if (g_7ff24f98710)
        {
            v2 = g_7ff24f98708 - 8;
            while (true)
            {
                if (v2 < g_7ff24f98710)
                {
                    8792418811928();
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
            g_7ff24f986f8 = 0;
            InterlockedExchange64(&g_7ff24f98700, 0);
            return 1;
        }
    }
    else
    {
        return 0;
    }
}
