/* sub_100009fd0 @ 0x100009fd0
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100009fd0  (208 bytes, 20 basic blocks)
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

typedef struct struct_2 {
    struct struct_0 *field_0;
} struct_2;

typedef struct struct_6 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    struct struct_7 *field_20;
} struct_6;

typedef struct struct_5 {
    struct struct_3 *field_0;
} struct_5;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_7 {
    struct struct_5 *field_0;
} struct_7;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

unsigned int sub_100009fd0(struct_6 *ptr, unsigned int flag, struct_2 **cur, unsigned int *p)
{
    unsigned long long v1;  // rdi
    unsigned int v2;  // edi
    unsigned int v3;  // edi
    unsigned int i;  // edi
    unsigned long long v5;  // cc_ndep
    unsigned long long v6;  // 4126
    struct_3 **addr;  // rcx
    struct_3 *v8;  // rdx

    if (!flag)
    {
        if (cur)
            goto LABEL_10000a01d;
        if (p)
        {
            *(p) = ptr->field_18 - (char *)ptr->field_20 >> 3;
            return 0;
        }
    }
    else if (cur)
    {
        if (flag == 1)
        {
LABEL_10000a022:
            if (!ptr->field_10)
                return 2147500037;
            v1 = ptr->field_18;
            if (ptr->field_18 && ptr->field_20)
            {
                v2 = ptr->field_18 - (char *)ptr->field_20 >> 3;
                if (flag < v2)
                    v3 = flag;
                else
                    v3 = v2;
                i = v3;
                if (p)
                    *(p) = i;
                while (i)
                {
                    v6 = _ccall(19, (unsigned long long)i, 0, v5);
                    v5 = v6;
                    i -= 1;
                    addr = ptr->field_20->field_0;
                    *(cur) = addr;
                    if (addr)
                    {
                        v8 = *(addr);
                        *(addr)->field_8();
                    }
                    cur += 1;
                    ptr->field_20 = ptr->field_20 + 1;
                }
                return (v2 < flag ? 1 : 0);
            }
            return 2147500037;
        }
LABEL_10000a01d:
        if (p)
            goto LABEL_10000a022;
    }
    return 2147500035;
}
