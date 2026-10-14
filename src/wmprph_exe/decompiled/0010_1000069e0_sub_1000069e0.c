/* sub_1000069e0 @ 0x1000069e0
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x1000069e0  (235 bytes, 27 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    struct struct_0 *field_0;
    char padding_8[16];
    struct struct_0 *field_18;
} struct_0;

int sub_1000069e0(unsigned long a0, unsigned int a1, unsigned long long a2, struct_0 *cur, unsigned int *ptr)
{
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rsi
    unsigned long long v5;  // rdi
    unsigned long v6;  // cc_ndep
    unsigned long v7;  // 4101
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v1;  // [bp+0x8]
    unsigned long long v2;  // [bp+0x10]

    v1 = v3;
    v2 = v4;
    v0 = v5;
    if (a1 <= 78)
    {
        if (a1 == 78)
        {
            cur = cur->field_0;
            goto LABEL_100006aa1;
        }
        if (a1 != 43)
        {
            if (a1 != 44 && a1 != 45)
            {
                v7 = _ccall(6, 7, (unsigned long long)a1, 45, v6);
                if (!((char)v7))
                {
                    if (a1 <= 47)
                        goto LABEL_100006a9e;
                    if (a1 == 57)
                        goto LABEL_100006a25;
                }
            }
            else
            {
LABEL_100006a25:
                if (a2)
                    goto LABEL_100006a83;
            }
        }
        else
        {
            if (a2)
            {
                cur = cur->field_18;
                goto LABEL_100006aa1;
            }
        }
    }
    else if (a1 != 273)
    {
        if (a1 > 275)
        {
            if (a1 <= 277)
                goto LABEL_100006a9e;
            if (a1 > 305)
            {
                if (a1 <= 312)
                    goto LABEL_100006a9e;
                if (a1 == 528)
                {
                    if ((unsigned short)a2 - 1 > 1)
                    {
LABEL_100006a83:
                        4296016792();
                    }
LABEL_100006a9e:
LABEL_100006aa1:
                    if (cur)
                        4296016904();
                }
            }
        }
    }
    else
    {
        if (cur)
            goto LABEL_100006a9e;
    }
    *(ptr) = 0;
    return sub_100006acf(ptr);
}
