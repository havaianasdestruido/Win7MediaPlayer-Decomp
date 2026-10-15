/* sub_7ff2c179bd4 @ 0x7ff2c179bd4
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c179bd4  (289 bytes, 26 basic blocks)
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

unsigned int sub_7ff2c179bd4(void* p, unsigned int a1, void* cur, unsigned long long flag, unsigned int *addr, long long a5)
{
    unsigned int v1;  // r10d
    void* iter;  // rsi
    void* ptr;  // rdx
    unsigned long long v11;  // rcx
    void* node;  // r11
    unsigned int v14;  // r10d
    unsigned long long v15;  // r9
    char v16;  // cl
    unsigned long long v17;  // rcx
    unsigned long long idx;  // r9
    void* v4;  // rcx
    void* v5;  // rcx
    unsigned int v7;  // r10d
    unsigned long long index;  // rcx

    v1 = 0;
    iter = p;
    if ((a1 ^ a1 >> 31) - (a1 >> 31) > 32)
    {
        sub_7ff2c17a4fc(5, &g_7ff2c1616ca, a5);
        return 0;
    }
    if (flag)
    {
        if (a1 > 0)
        {
            if (a1 == 32)
            {
                v1 = *((int *)(-4 + (char *)p + 4 * flag));
                idx = flag - 1;
                if (flag != 1)
                {
                    v4 = p + idx * 4 - 4;
                    do
                    {
                        v5 = v4 - 4;
                        *((int *)((char *)cur + 4 * idx)) = *((int *)v4);
                        v4 = v5;
                        idx -= 1;
                    } while (idx != 1);
                }
                *((unsigned int *)cur) = 0;
            }
            else
            {
                do
                {
                    v7 = *((int *)iter);
                    *((unsigned int *)(cur - p + (char *)iter)) = *((int *)iter) << ((char)a1 & 31) | v1;
                    v1 = v7 >> ((char)(32 - a1 & 4294967295) & 31);
                    iter += 4;
                    flag -= 1;
                } while (flag != 1);
            }
        }
        else
        {
            if (a1 >= 0)
            {
                for (v17 = flag * 4; v17; iter += 1)
                {
                    v17 -= 1;
                    *((char *)cur) = *((char *)iter);
                    cur += 1;
                }
            }
            else if (a1 == 0xffffffe0)
            {
                v1 = *((int *)p);
                index = 1;
                if (flag != 1)
                {
                    ptr = cur;
                    do
                    {
                        v11 = index + 1;
                        *((int *)ptr) = *((int *)((char *)iter + 4 * index));
                        ptr += 4;
                        index = v11;
                    } while (index != flag);
                }
                *((unsigned int *)(-4 + (char *)cur + 4 * flag)) = 0;
            }
            else
            {
                node = p + flag * 4;
                do
                {
                    node -= 4;
                    v14 = *((int *)node) << ((char)a1 + 32 & 31);
                    v15 = flag - 1;
                    *((unsigned int *)(node + cur - (char *)p)) = *((int *)node) >> ((char)-(a1) & 31) | v1;
                    v1 = v14;
                    flag = v15;
                } while (flag != 1);
                v16 = (char)a1 + 32;
                v1 = ((v16 & 31) ? v14 >> (v16 & 31) : v14 >> (v16 & 31));
            }
        }
    }
    *(addr) = v1;
    return 1;
}
