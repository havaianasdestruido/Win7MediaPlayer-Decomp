/* sub_7ff2c1761e0 @ 0x7ff2c1761e0
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c1761e0  (372 bytes, 29 basic blocks)
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
    unsigned short field_0;
    unsigned short field_2;
    char field_4;
} struct_0;

typedef struct struct_2 {
    unsigned short field_0;
    unsigned short field_2;
    char field_4;
} struct_2;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_1;

unsigned int sub_7ff2c1761e0(struct_1 *p, struct_0 **ptr, unsigned long a2)
{
    unsigned long v1;  // r13
    unsigned long long v2;  // rbp
    unsigned long long v3;  // rsi
    struct_0 *v4;  // rax
    struct_2 *addr;  // rax
    unsigned long v6;  // r12
    unsigned int v7;  // eax
    unsigned long v8;  // rdx

    v1 = sub_7ff2c17501c();
    if ((unsigned int)v1 < 0)
        return 4294967295;
    while (true)
    {
        v4 = *(ptr);
        if (!v4->field_0 || v4->field_0 == 93)
        {
            if (v1 >= *((long long *)&p[1].field_0))
                8792537709680();
            *((long long *)(p->field_8 + v1 * 16 + 8)) = *((long long *)&p[1].field_0);
            return v1;
        }
        if (v4->field_0 == 92 && !((v4 += 2, *(ptr) = v4, v4->field_0 != 116)))
            v3 = 9;
        else
            v3 = _INSERT(v3, 0, v4->field_0);
        *(ptr) = &*(ptr)->field_2;
        if (*(ptr)->field_0 == 45)
        {
            addr = &*(ptr)->field_2;
            *(ptr) = addr;
            v2 = addr->field_0;
            if ((unsigned short)v2 && (unsigned short)v2 != 93)
            {
                *(ptr) = &addr->field_2;
                if ((unsigned short)v2 < (unsigned short)v3)
                {
                    p->field_0 = 8;
                    break;
                }
            }
            else
            {
                p->field_0 = 4;
                break;
            }
        }
        else
        {
            v2 = _INSERT(v2, 0, v3);
        }
        v6 = sub_7ff2c17501c(p, 0);
        if ((unsigned int)v6 < 0 || !((v7 = (unsigned int)(unsigned long long)sub_7ff2c17501c(p, 0), v7 >= 0)))
            break;
        if (v6 >= *((long long *)&p[1].field_0))
            8792537709680();
        *((unsigned long long *)(p->field_8 + v6 * 16 + 8)) = (unsigned short)v3;
        v8 = v7;
        if (v8 >= *((long long *)&p[1].field_0))
            8792537709680();
        *((unsigned long long *)(p->field_8 + v8 * 16 + 8)) = (unsigned short)v2;
    }
    return 4294967295;
}
