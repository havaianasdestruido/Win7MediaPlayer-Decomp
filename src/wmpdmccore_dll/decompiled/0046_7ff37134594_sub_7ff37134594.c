/* sub_7ff37134594 @ 0x7ff37134594
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37134594  (323 bytes, 34 basic blocks)
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
    struct struct_1 *field_0;
    unsigned int field_8;
    char field_c;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

int sub_7ff37134594(void)
{
    unsigned long long v1;  // rdx
    int v2;  // r8d
    unsigned long v11;  // rdx
    unsigned long v12;  // rdx
    unsigned short *p;  // r11
    unsigned long v14;  // rdx
    unsigned long v15;  // r8
    unsigned short *cur;  // rcx
    unsigned long v17;  // rdx
    unsigned long v18;  // rdx
    unsigned long v19;  // rdx
    unsigned long v20;  // rdx
    int v3;  // edi
    struct_0 *ptr;  // rcx
    unsigned long v5;  // rdx
    unsigned short *iter;  // rcx
    unsigned long v7;  // r8
    unsigned long v8;  // rdx
    unsigned short *addr;  // rcx
    unsigned long i;  // rdx

    if (!v1)
    {
        sub_7ff37134a64();
    }
    else if (v2 < 0)
    {
        8792722899336();
    }
    else
    {
        v3 = v2 + 1;
        if (v3 < 0)
        {
            return;
        }
        else if ((ptr->field_c & 32))
        {
            v5 = ptr->field_8;
            iter = &ptr->field_0->field_0;
            v7 = v3 - 1;
            if (v5 && v5 <= 2147483647)
            {
                if (v7 <= 2147483646)
                {
                    v8 = v5;
                    addr = iter;
                    do
                    {
                        iter = addr;
                        i = v8;
                        v11 = i;
                        if (!v7 - v5 + v11 || !((v11 = i, *((short *)(v1 - iter + iter)))))
                            break;
                        *(iter) = *((short *)(v1 - (char *)iter + iter));
                        v12 = i - 1;
                        v11 = v12;
                        v8 = v12;
                        addr = iter + 1;
                    } while (i != 1);
                    if (!v11)
                        iter += 1;
                }
                *(iter) = 0;
            }
        }
        else
        {
            p = sub_7ff37135114(ptr, v3);
            if (!p)
                return;
            v14 = v3;
            v15 = v3 - 1;
            if (v14 && v14 <= 2147483647)
            {
                if (v15 > 2147483646)
                {
                    *(p) = 0;
                }
                else
                {
                    cur = p;
                    v17 = v14;
                    do
                    {
                        v18 = v17;
                        v19 = v18;
                        if (!v15 - v14 + v19 || !((v19 = v18, *((short *)(v1 - p + cur)))))
                            break;
                    } while ((*(cur) = (unsigned short)*((short *)(v1 - p + cur)), cur += 2, v20 = (unsigned long)(v18 - 1), v19 = v20, v17 = v20, v18 != 1));
                    if (!v19)
                        cur += 1;
                    *(cur) = 0;
                }
            }
            sub_7ff37135148(ptr, p);
        }
    }
    return;
}
