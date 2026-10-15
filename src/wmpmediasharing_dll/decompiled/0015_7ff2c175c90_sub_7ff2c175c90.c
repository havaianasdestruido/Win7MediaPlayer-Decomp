/* sub_7ff2c175c90 @ 0x7ff2c175c90
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c175c90  (532 bytes, 38 basic blocks)
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
    char padding_10[24];
    unsigned int field_28;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

unsigned int sub_7ff2c175c90(struct_0 *ptr, struct_1 **p, long long a2)
{
    unsigned long v1;  // r12
    unsigned long v2;  // rsi
    unsigned int v3;  // eax
    unsigned long v4;  // rdi
    unsigned long v5;  // r14
    unsigned int v6;  // eax
    unsigned long v7;  // rdx
    unsigned int v8;  // eax
    unsigned int v9;  // eax
    unsigned long v10;  // rdx

    v1 = sub_7ff2c17501c();
    if ((unsigned int)v1 < 0)
        return 4294967295;
    v2 = v1;
    if (v2 >= *((long long *)&ptr->padding_10[0]))
        8792537709680();
    *((unsigned long long *)(ptr->field_8 + v2 * 16 + 8)) = ptr->field_28;
    v3 = sub_7ff2c17501c(ptr, 1);
    if (v3 >= 0)
    {
        v4 = v3;
        if (v4 >= *((long long *)&ptr->padding_10[0]))
            8792537709680();
        *((unsigned long long *)(ptr->field_8 + v4 * 16 + 8)) = ptr->field_28;
        ptr->field_28 = ptr->field_28 + 1;
        v5 = sub_7ff2c17501c(ptr, 16);
        if ((unsigned int)v5 >= 0 && (v6 = (unsigned int)(unsigned long long)sub_7ff2c17501c(ptr, 32), v6 >= 0))
        {
            if (v2 >= *((long long *)&ptr->padding_10[0]))
                8792537709680();
            v7 = v6;
            if (v7 >= *((long long *)&ptr->padding_10[0]))
                8792537709680();
            *((long long *)(ptr->field_8 + v7 * 16 + 8)) = *((long long *)(v2 * 16 + ptr->field_8 + 8));
            if (sub_7ff2c17501c(ptr, 17) >= 0)
            {
                if (!(!*(p)->field_0 || !((v8 = (unsigned int)(int)sub_7ff2c175090(ptr, p, a2), v8 >= 0))))
                {
LABEL_7ff2c175dfc:
                    if (v5 >= *((long long *)&ptr->padding_10[0]))
                        8792537709680();
                    *((long long *)(ptr->field_8 + v5 * 16 + 8)) = v8;
                    if (*(p)->field_0 == 125)
                    {
                        *(p) = *(p) + 1;
                        v9 = sub_7ff2c17501c(ptr, 2);
                        if (v9 >= 0)
                        {
                            if (v4 >= *((long long *)&ptr->padding_10[0]))
                                8792537709680();
                            v10 = v9;
                            if (v10 < *((long long *)&ptr->padding_10[0]))
                            {
                                *((long long *)(ptr->field_8 + v10 * 16 + 8)) = *((long long *)(v4 * 16 + ptr->field_8 + 8));
                                return v2;
                            }
                            8792537709680();
                        }
                    }
                    else
                    {
LABEL_7ff2c175e85:
                        ptr->field_0 = 2;
                    }
                }
                else if (!ptr->field_0)
                {
                    if (*(p)->field_0 != 125)
                        goto LABEL_7ff2c175e85;
                    v8 = sub_7ff2c17501c(ptr, 0);
                    if (v8 >= 0)
                        goto LABEL_7ff2c175dfc;
                }
            }
        }
    }
    return 4294967295;
}
