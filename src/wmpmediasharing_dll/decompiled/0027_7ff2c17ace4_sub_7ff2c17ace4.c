/* sub_7ff2c17ace4 @ 0x7ff2c17ace4
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17ace4  (459 bytes, 33 basic blocks)
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
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

extern long long g_7ff2c1616ca;

unsigned int sub_7ff2c17ace4(unsigned long long p, unsigned long long a1, struct_0 *ptr, long long a3)
{
    unsigned long long v3;  // rbx
    unsigned int v4;  // r8d
    unsigned long v13;  // rdx
    unsigned long long v14;  // rcx
    long long v15;  // rcx
    unsigned long long v5;  // rax
    unsigned int i;  // ecx
    unsigned long long v7;  // rdi
    unsigned int v8;  // r10d
    char v9;  // al
    long long v10;  // rdx
    unsigned long v11;  // r13
    unsigned long cur;  // r8
    unsigned int flag;  // [bp-0x48]
    long long v1;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp+0x8], Other Possible Types: unsigned long long

    v3 = a1;
    if (p && ptr)
    {
        if (a1)
        {
            v4 = *((int *)(p + a1 * 4 - 4));
            if (v4)
            {
                v2 = 0;
                flag = 0;
                v5 = 32;
                for (i = v4 | 1; i < 0x8000000; i *= 32)
                {
                    v5 -= 5;
                }
                v7 = ((unsigned int)(2397340 >> ((char)(i >> 28) & 63) >> ((char)(i >> 28) * 2 & 63)) & 7) - v5 + 32;
                v8 = (v3 < 2 ? 0 : *((int *)(p + v3 * 4 - 8)));
                v9 = 31 - v7;
                v10 = v8 >> 1 >> (v9 & 31) | (unsigned int)(v4 << ((char)(v7 & 4294967295) & 31));
                v11 = (v3 < 3 ? 0 : *((int *)(p + v3 * 4 - 12))) >> 1 >> (v9 & 31) | v8 << ((char)(v7 & 4294967295) & 31);
                v1 = 4294967295 - v11;
                *((unsigned int *)((char *)&v1 + 4)) = 4294967295 - v10;
                if (!(int)sub_7ff2c17abd0(v1, v10, &v2, &flag, a3))
                    return 0;
                cur = v2;
                if ((unsigned int)(cur * (v11 & 4294967295) >> 32) > flag)
                    cur += 4294967295;
                v13 = (unsigned int)(4294967295 >> ((char)(v7 & 4294967295) & 31)) - *((int *)(p + v3 * 4 - 4));
                do
                {
                    v3 -= 1;
                    if ((unsigned int)v13 >= (unsigned int)cur)
                        break;
                    v2 = 4294967295 - (!v3 ? 0 : *((int *)(p + v3 * 4 - 4)));
                    *((unsigned int *)((char *)&v2 + 4)) = v13;
                    if ((cur & 4294967295) * *((int *)(p + v3 * 4)) > v2)
                    {
                        cur += 4294967295;
                        break;
                    }
                } while ((v13 = (unsigned long)(v2 - v14), !v13 >> 32 && v3));
                ptr->field_8 = v7;
                ptr->field_0 = cur;
                return 1;
            }
        }
        v15 = 5;
    }
    else
    {
        v15 = 11;
    }
    sub_7ff2c17a4fc(v15, &g_7ff2c1616ca, a3);
    return 0;
}
