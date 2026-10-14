/* sub_7ff2c17aeb8 @ 0x7ff2c17aeb8
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17aeb8  (483 bytes, 34 basic blocks)
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

unsigned int sub_7ff2c17aeb8(unsigned long p, unsigned int a1, char *a2, unsigned long long addr, unsigned long long flag, unsigned int *ptr, long long a6)
{
    unsigned long long node;  // rbx
    char *v6;  // r12
    unsigned int j;  // r10d
    unsigned int *cur;  // rsi
    unsigned int *iter;  // rsi
    long long v0;  // [bp-0x58]
    char v1;  // [bp-0x50]
    unsigned int v3;  // [bp+0x10]
    unsigned int v4;  // [bp+0x18]

    v3 = a1;
    node = flag;
    v6 = a2;
    j = 1;
    v4 = 0;
    if (node && *((int *)(p + node * 4 - 4)) < a1)
    {
        node -= 1;
        v4 = *((int *)(p + node * 4));
        if (addr)
            *((unsigned int *)(addr + node * 4)) = 0;
    }
    if (!(!a2 && node < 2))
    {
        if (!a2)
        {
            v6 = &v1;
            j = (int)sub_7ff2c17ace4(&v3, 1, &v1, a6);
        }
        if (!j)
            return j;
        iter = addr + node * 4;
        do
        {
            iter += 1;
            if (!node)
                break;
            flag = 0;
            if (j && !((v0 = (long long)_INSERT((unsigned long long)(unsigned int)*((int *)((char *)iter + p - addr)), 4, v4), !(int)sub_7ff2c17ac28(v0, (unsigned long long)a1, v6, &flag, &v4, a6, v0))))
                j = 1;
            else
                j = 0;
            if (addr)
                *(iter) = flag;
            node -= 1;
        } while (j);
    }
    else if (node)
    {
        cur = addr + node * 4;
        do
        {
            node -= 1;
            cur += 1;
            flag = 0;
            if (j && !((v0 = (long long)_INSERT((unsigned long long)(unsigned int)*((int *)((char *)cur + p - addr)), 4, v4), !(int)sub_7ff2c17abd0(v0, (unsigned long long)a1, &flag, &v4, a6))))
                j = 1;
            else
                j = 0;
            if (addr)
                *(cur) = flag;
        } while (node);
    }
    else
    {
        *(ptr) = v4;
        return 1;
    }
    if (!j)
        return j;
    *(ptr) = v4;
    return j;
}
