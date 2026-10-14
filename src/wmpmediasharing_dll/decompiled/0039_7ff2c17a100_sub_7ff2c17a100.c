/* sub_7ff2c17a100 @ 0x7ff2c17a100
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17a100  (399 bytes, 27 basic blocks)
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

unsigned int sub_7ff2c17a100(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5)
{
    long long v1;  // rsi
    unsigned int v2;  // ebx
    unsigned int v11;  // eax
    unsigned int v3;  // r15d
    unsigned int v4;  // edi
    unsigned int v5;  // r12d
    unsigned long long v6;  // r9
    unsigned int *cur;  // r12
    long long v8;  // r10
    long long v9;  // r10
    unsigned int v10;  // r8d

    v1 = a4;
    v2 = 1;
    if (!v1)
        return 0;
    v3 = *((int *)(a0 + v1 * 4 - 4));
    v4 = *((int *)(a3 + v1 * 4 - 4));
    v5 = *((int *)(a1 + v1 * 4 - 4));
    if (v3 >= v4)
        v2 = (int)sub_7ff2c179f24();
    if (v5 >= v4)
    {
        if (v2 && (int)sub_7ff2c179f24(a1, a3, v1, 0, a5))
        {
            v2 = 1;
            goto LABEL_7ff2c17a1a9;
        }
        else
        {
            v2 = 0;
        }
    }
    if (!v2)
        return v2;
LABEL_7ff2c17a1a9:
    if (v5 <= v4 - v3)
    {
        if ((unsigned int)(v4 - v5 - v3) <= 1)
        {
            v6 = 0;
            cur = a3 + v1 * 4;
            v8 = v1;
            do
            {
                cur += 1;
                v9 = v8 - 1;
                v10 = *((int *)(a0 - a3 + (char *)cur)) + *((int *)(a1 - a3 + (char *)cur));
                v6 += (v10 < *((int *)(a0 - a3 + (char *)cur))) - (v10 < *(cur));
                if ((unsigned int)v6 != v10 - *(cur) || !((char)(v6 - 1 & 4294967295) & 2))
                {
                    v6 = ((unsigned int)v6 - 2 & 2) - 1;
                    break;
                }
            } while ((v8 = v9, v8));
            if ((unsigned int)v6 >= 0)
                goto LABEL_7ff2c17a244;
        }
        v11 = sub_7ff2c179d34(a0, a1, a2, v1);
    }
    else
    {
LABEL_7ff2c17a244:
        v11 = sub_7ff2c179d84(a0, a1, a3, a2, v1);
    }
    if (!v11)
        return v2;
    sub_7ff2c17a4fc(4, &g_7ff2c1616ca, a5);
    return v2;
}
