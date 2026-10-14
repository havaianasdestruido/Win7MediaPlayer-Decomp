/* sub_10000a2f4 @ 0x10000a2f4
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000a2f4  (193 bytes, 24 basic blocks)
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
    long long field_0;
    long long field_8;
    unsigned long long field_10;
} struct_0;

char sub_10000a2f4(struct_0 *ptr, long long a1)
{
    long long v1;  // rdx
    long long v2;  // r8
    long long v11;  // r8
    unsigned long long v12;  // r8
    unsigned long long *cur;  // rdx
    unsigned long long v14;  // r8
    unsigned long long v15;  // r8
    unsigned long long v3;  // r8
    unsigned long long *iter;  // rcx
    unsigned long long v5;  // r8
    unsigned long long v6;  // r8
    unsigned long v7;  // cc_ndep
    unsigned long v8;  // 4101
    char v9;  // al
    long long v10;  // rcx

    if (a1)
    {
        if (a1 <= ptr->field_10)
        {
            v1 = ptr->field_8;
            if (v1 < a1)
            {
                v2 = a1;
                v3 = v2 - v1;
                iter = ptr->field_0 + v1 * 8;
                if (v2 != v1)
                {
                    do
                    {
                        v5 = v3;
                        if (iter)
                            *(iter) = 0;
                    } while ((iter += 8, v6 = v5 - 1, v3 = v5 - 1, v5 != 1));
                }
            }
            else
            {
                v8 = _ccall(6, 8, v1, a1, v7);
                if (!((char)v8))
                    sub_10000a3c0(ptr->field_0 + a1 * 8, v1 - a1);
            }
        }
        else
        {
            v9 = sub_10000a4c4();
            if (!v9)
                return v9;
            v10 = ptr->field_8;
            v11 = a1;
            v12 = v11 - v10;
            cur = ptr->field_0 + v10 * 8;
            if (v11 != v10)
            {
                do
                {
                    v14 = v12;
                    if (cur)
                        *(cur) = 0;
                } while ((cur += 8, v15 = v14 - 1, v12 = v14 - 1, v14 != 1));
            }
        }
        ptr->field_8 = a1;
    }
    else if (ptr->field_0)
    {
        sub_10000a3c0(ptr->field_0, ptr->field_8);
        4296017168();
    }
    else
    {
        ptr->field_8 = 0;
        ptr->field_10 = 0;
    }
    return 1;
}
