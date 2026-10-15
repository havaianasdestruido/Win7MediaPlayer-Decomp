/* sub_10000e5c0 @ 0x10000e5c0
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000e5c0  (294 bytes, 17 basic blocks)
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

typedef struct struct_0 {
    char padding_0[6];
    unsigned short field_6;
} struct_0;

extern char g_100018b70;

unsigned int sub_10000e5c0(unsigned long long a0, unsigned long long a1, struct_0 *addr, unsigned long long *ptr)
{
    unsigned int v6;  // eax
    unsigned int i;  // ebx
    unsigned long long p;  // rsi
    unsigned long long v9;  // r8
    unsigned long long cur;  // rdx
    unsigned long long v11;  // r8
    unsigned long index;  // r9
    unsigned long long v13;  // r8
    unsigned long v14;  // r8
    char *v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    unsigned long long v2;  // [bp-0x70]
    unsigned long v3;  // [bp-0x68]
    char v4;  // [bp-0x58]

    v6 = addr->field_6;
    if ((int)ptr[2] != v6)
        return 2147500037;
    if ((unsigned short)v6 > 8)
        return 2147500037;
    i = *((int *)((char *)&ptr[2] + 4));
    p = -(0 < (unsigned short)v6) & &v4;
    if (i > v6)
        return 2147500037;
    if (i)
        4295069866();
    v9 = 0;
    if (i)
    {
        cur = ptr[1];
        do
        {
            v11 = v9;
            if (*((int *)cur) >= i)
                return 2147500037;
            if (*((int *)cur) >= 8)
                return 2147500037;
            index = *((int *)cur);
            if (*((long long *)(p + index * 8)))
                return 2147500037;
            v9 = (unsigned int)v11 + 1;
            cur += 4;
            *((unsigned long long *)(p + index * 8)) = *(ptr) + v11 * 24;
        } while ((unsigned int)v9 < i);
    }
    while (true)
    {
        v13 = v9;
        if ((unsigned int)v13 >= (int)ptr[2])
            break;
        v14 = (unsigned int)v13 + 1;
        *((unsigned long long *)(p + ((unsigned int)(addr->field_6 - v13) - 1) * 8)) = *(ptr) + v13 * 24;
        v9 = v14;
    }
    v1 = a0;
    v3 = &g_100018b70;
    v2 = a1;
    v0 = &v3;
    4296017232();
}
