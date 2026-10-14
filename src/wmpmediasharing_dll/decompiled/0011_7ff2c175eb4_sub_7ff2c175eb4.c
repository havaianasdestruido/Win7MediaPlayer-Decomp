/* sub_7ff2c175eb4 @ 0x7ff2c175eb4
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c175eb4  (668 bytes, 49 basic blocks)
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
    char padding_0[8];
    unsigned long long field_8;
    char padding_10[28];
    unsigned int field_2c;
} struct_0;

unsigned long long sub_7ff2c175eb4(struct_0 *ptr, unsigned short *a1[2], char *a2)
{
    unsigned int v1;  // eax
    unsigned long v2;  // rbp
    unsigned long v11;  // r11
    unsigned int v12;  // eax
    unsigned long v13;  // r13
    unsigned long long v14;  // rax
    unsigned int v15;  // eax
    unsigned long v16;  // rdx
    unsigned int v17;  // eax
    unsigned long v18;  // rdx
    unsigned int v19;  // eax
    unsigned int v3;  // eax
    unsigned long v4;  // rdi
    unsigned int v5;  // eax
    unsigned long v6;  // r12
    unsigned int v7;  // eax
    unsigned long v8;  // r8
    unsigned long long v9;  // r8
    unsigned int v10;  // eax

    v1 = sub_7ff2c17501c();
    v2 = v1;
    if (v1 >= 0)
    {
        if (v2 >= *((long long *)&ptr->padding_10[0]))
            8792537709680();
        *((unsigned long long *)(ptr->field_8 + v2 * 16 + 8)) = ptr->field_2c;
        ptr->field_2c = ptr->field_2c + 1;
    }
    v3 = sub_7ff2c17501c(ptr, 23);
    v4 = v3;
    if (v3 >= 0)
    {
        if (v4 >= *((long long *)&ptr->padding_10[0]))
            8792537709680();
        *((unsigned long long *)(ptr->field_8 + v4 * 16 + 8)) = ptr->field_2c;
        ptr->field_2c = ptr->field_2c + 1;
    }
    v5 = sub_7ff2c17501c(ptr, 16);
    v6 = v5;
    if (v5 < 0)
        return 4294967295;
    v7 = sub_7ff2c17501c(ptr, 24);
    if (v7 >= 0)
    {
        if (v2 >= *((long long *)&ptr->padding_10[0]))
            8792537709680();
        v8 = v7;
        if (v8 >= *((long long *)&ptr->padding_10[0]))
            8792537709680();
        v9 = v8 * 2;
        *((long long *)(ptr->field_8 + v9 * 8 + 8)) = *((long long *)(v2 * 16 + ptr->field_8 + 8));
        v10 = sub_7ff2c17501c(ptr, 25, v9);
        v11 = v10;
        if (v10 >= 0)
        {
            if (v4 >= *((long long *)&ptr->padding_10[0]))
            {
                8792537709680();
            }
            else if (v11 >= *((long long *)&ptr->padding_10[0]))
            {
                8792537709680();
            }
            else
            {
                *((long long *)(ptr->field_8 + v11 * 16 + 8)) = *((long long *)(v4 * 16 + ptr->field_8 + 8));
                v12 = sub_7ff2c17501c(ptr, 13);
                v13 = v12;
                if (v12 >= 0)
                {
                    v14 = sub_7ff2c17596c(ptr, a1, a2);
                    if ((unsigned int)v14 < 0)
                    {
                        return v14;
                    }
                    else if (v6 >= *((long long *)&ptr->padding_10[0]))
                    {
                        8792537709680();
                    }
                    else
                    {
                        *((long long *)(ptr->field_8 + v6 * 16 + 8)) = (int)v14;
                        v15 = sub_7ff2c17501c(ptr, 24);
                        if (v15 >= 0)
                        {
                            if (v2 >= *((long long *)&ptr->padding_10[0]))
                                8792537709680();
                            v16 = v15;
                            if (v16 >= *((long long *)&ptr->padding_10[0]))
                                8792537709680();
                            *((long long *)(ptr->field_8 + v16 * 16 + 8)) = *((long long *)(v2 * 16 + ptr->field_8 + 8));
                            v17 = sub_7ff2c17501c(ptr, 25);
                            if (v17 >= 0)
                            {
                                if (v4 >= *((long long *)&ptr->padding_10[0]))
                                    8792537709680();
                                v18 = v17;
                                if (v18 >= *((long long *)&ptr->padding_10[0]))
                                    8792537709680();
                                *((long long *)(ptr->field_8 + v18 * 16 + 8)) = *((long long *)(v4 * 16 + ptr->field_8 + 8));
                                v19 = sub_7ff2c17501c(ptr, 17);
                                if (v19 >= 0)
                                {
                                    if (v13 >= *((long long *)&ptr->padding_10[0]))
                                        8792537709680();
                                    *((long long *)(ptr->field_8 + v13 * 16 + 8)) = v19 + 1;
                                    return v2 & 4294967295;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 4294967295;
}
