/* sub_1000012e9 @ 0x1000012e9
 *
 * MODULE   : wmpconfig_exe  (bin/wmpconfig.exe)
 * ADDRESS  : 0x1000012e9  (410 bytes, 38 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f1726e36b8a016069b7d9eef811f5ca3799bfed355423f70f51947e67d2ef4f
 *   Evidence: analysis/report/rea-evidence/wmpconfig_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char _wcmdln;
extern struct_0 *g_100001140;
extern struct_0 *g_100001158;
extern unsigned int g_100002144;
extern unsigned int g_1000026e8;
extern unsigned long long g_1000026f0;
extern struct_1 *g_1000026f8;

unsigned long long sub_1000012e9(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long ptr, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, char a14, unsigned short a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25)
{
    unsigned long v4;  // rdi
    unsigned long long v5;  // 4101
    unsigned int v6;  // r12d
    unsigned long v7;  // rbx
    struct_0 **cur;  // rdi
    unsigned int v9;  // eax
    unsigned long v10;  // rcx
    unsigned long iter;  // rcx
    unsigned int v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x20]
    unsigned int v3;  // [bp+0x24]

    v5 = InterlockedCompareExchange64(&g_1000026f0, v4, 0);
    if (v5)
    {
        if ((0 == v5 ? 0 : v5) == v4)
            v6 = 1;
        else
            4296016000();
    }
    if (g_1000026e8 == 1)
        4294973312();
    if (g_1000026e8 == (unsigned int)v7)
    {
        g_1000026e8 = 1;
        cur = &g_100001140;
        a5 = &g_100001140;
        v9 = v7;
        v3 = v7;
        while (cur < &g_100001158 && v9 == (unsigned int)v7)
        {
            v10 = *(cur);
            if (*(cur) != v7)
                (*(cur))();
            a5 = cur + 1;
        }
        if (v9 != (unsigned int)v7)
            return 255;
    }
    else
    {
        g_100002144 = 1;
    }
    if (g_1000026e8 == 1)
        4294973300();
    if (v6 == (unsigned int)v7)
        InterlockedExchange64(&g_1000026f0, v7);
    if (g_1000026f8 != v7 && sub_10000172c(&g_1000026f8) != (unsigned int)v7)
        g_1000026f8();
    if (*((long long *)&_wcmdln) == v7)
        return 255;
    iter = *((long long *)&_wcmdln);
    for (ptr = *((long long *)&_wcmdln); *((short *)iter) > 32 || *((short *)iter) != (unsigned short)v7 && v1 != (unsigned int)v7; ptr = iter + 2)
    {
        if (*((short *)iter) == 34)
        {
            v1 = _INSERT(v7 & 4294967295, 0, v1 == (unsigned int)v7);
            v2 = v1;
        }
    }
    for (; *((short *)iter) != (unsigned short)v7 && *((short *)iter) <= 32; ptr = iter + 2);
    sub_1000011d8(); /* do not return */
}
