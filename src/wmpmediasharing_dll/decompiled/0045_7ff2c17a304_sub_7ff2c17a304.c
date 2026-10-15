/* sub_7ff2c17a304 @ 0x7ff2c17a304
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17a304  (298 bytes, 25 basic blocks)
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

extern long long g_7ff2c1616ca;

unsigned int sub_7ff2c17a304(long long ptr, long long p, long long a2, long long a3, long long a4, long long a5)
{
    unsigned int v1;  // ebx
    unsigned int v2;  // edx
    unsigned int v3;  // r8d
    long long i;  // rcx
    unsigned int *v5;  // r9
    int v6;  // eax
    unsigned int v7;  // eax

    v1 = 1;
    if (!a4)
        return 0;
    v2 = *((int *)(ptr + a4 * 4 - 4));
    v3 = *((int *)(p + a4 * 4 - 4));
    if (v2 == v3)
    {
        i = a4 - 1;
        if (i)
        {
            v5 = p + i * 4;
            do
            {
                v5 += 1;
                i -= 1;
                if (*((int *)(ptr - p + (char *)v5)) != *(v5))
                {
                    v6 = (-(*((int *)(p + i * 4)) < *((int *)(ptr + i * 4))) & 2) - 1;
                    goto LABEL_7ff2c17a38c;
                }
            } while (i);
        }
        v6 = 0;
    }
    else
    {
        v6 = (-(v2 < v3) & 4294967294) + 1;
    }
LABEL_7ff2c17a38c:
    if (v6 < 0)
    {
        if (v3 >= *((int *)(a3 + a4 * 4 - 4)))
            v1 = sub_7ff2c179f24(p, a3, a4, 0, a5);
        v7 = sub_7ff2c179d84(ptr, a3, p, a2, a4);
    }
    else
    {
        if (v2 >= *((int *)(a3 + a4 * 4 - 4)))
            v1 = sub_7ff2c179f24(ptr, a3, a4, 0, a5);
        v7 = -((int)sub_7ff2c179ed4(ptr, p, a2, a4));
    }
    if (!v1 || !v7)
        return 0;
    sub_7ff2c17a4fc(4, &g_7ff2c1616ca, a5);
    return 0;
}
