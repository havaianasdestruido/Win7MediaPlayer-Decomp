/* sub_7ff2c17548c @ 0x7ff2c17548c
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17548c  (1227 bytes, 101 basic blocks)
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

typedef struct struct_1 {
    unsigned short field_0;
    unsigned short field_2;
    char field_4;
} struct_1;

unsigned long long sub_7ff2c17548c(void* p, struct_0 **ptr, char *addr)
{
    unsigned long v3;  // r12
    unsigned int v4;  // esi
    unsigned long v13;  // rsi
    unsigned int v14;  // eax
    unsigned long v15;  // r14
    unsigned int v16;  // eax
    unsigned long v17;  // r15
    unsigned long v18;  // rdx
    unsigned long long v19;  // rax
    unsigned int v20;  // eax
    unsigned long v21;  // rbp
    unsigned int v22;  // eax
    unsigned int v5;  // r14d
    unsigned long v23;  // r11
    unsigned int v24;  // eax
    unsigned long v25;  // rcx
    unsigned long v26;  // rcx
    unsigned int v27;  // eax
    unsigned long long v28;  // rax
    unsigned int v29;  // eax
    unsigned long v30;  // r11
    struct_0 *v6;  // r15
    struct_0 *v7;  // rax
    struct_1 *v8;  // rax
    unsigned int v9;  // edi
    struct_1 *v10;  // rax
    struct_1 *v11;  // rax
    unsigned int v12;  // eax
    unsigned int v0;  // [bp+0x8]
    unsigned int v1;  // [bp+0x10]
    unsigned int v2;  // [bp+0x20]

    v3 = (int)p[16];
    v4 = (int)p[40];
    v5 = (int)p[44];
    v6 = *(ptr);
    v0 = sub_7ff2c17596c();
    if (v0 < 0)
        return v0;
    v7 = *(ptr);
    if (v7->field_0 == 42)
    {
        v8 = &v7->field_2;
        *(ptr) = v8;
        if (v8->field_0 == 63)
        {
            v9 = 19;
            *(ptr) = &v8->field_2;
            goto LABEL_7ff2c175552;
        }
        else
        {
            v9 = 18;
            goto LABEL_7ff2c175552;
        }
    }
    else
    {
        if (v7->field_0 == 43)
        {
            v10 = &v7->field_2;
            *(ptr) = v10;
            if (v10->field_0 == 63)
            {
                v9 = 10;
                *(ptr) = &v10->field_2;
            }
            else
            {
                v9 = 9;
            }
        }
        else
        {
            if (v7->field_0 != 63)
                return v0;
            v11 = &v7->field_2;
            *(ptr) = v11;
            if (v11->field_0 == 63)
            {
                v9 = 12;
                *(ptr) = &v11->field_2;
            }
            else
            {
                v9 = 11;
            }
LABEL_7ff2c175552:
            sub_7ff2c176360(p + 8, v3, 4294967295);
            *((unsigned int *)&p[44]) = v5;
        }
        *((unsigned int *)&p[40]) = v4;
        *(ptr) = v6;
        if (v9 != 19 && v9 != 10 && v9 != 12)
        {
            v12 = sub_7ff2c17501c(p, 20);
            v13 = v12;
            if (v12 < 0)
                return 4294967295;
            v14 = sub_7ff2c17501c(p, 22);
            v15 = v14;
            if (v14 < 0)
            {
                return 4294967295;
            }
            else if (sub_7ff2c17501c(p, 14) >= 0)
            {
                v1 = sub_7ff2c17501c(p, 16);
                if (v1 >= 0 && sub_7ff2c17501c(p, 15) >= 0)
                {
                    v16 = sub_7ff2c17501c(p, 21);
                    v17 = v16;
                    if (v16 >= 0)
                    {
                        v2 = sub_7ff2c17501c(p, 13);
                        if (v2 >= 0)
                        {
                            if (v13 >= (long long)p[16])
                                8792537709680();
                            *((unsigned long long *)((long long)p[8] + v13 * 16 + 8)) = (int)p[44];
                            *((unsigned int *)&p[44]) = (int)p[44] + 1;
                            if (v13 >= (long long)p[16])
                            {
                                8792537709680();
                            }
                            else if (v15 >= (long long)p[16])
                            {
                                8792537709680();
                            }
                            else
                            {
                                *((long long *)((long long)p[8] + v15 * 16 + 8)) = *((long long *)(v13 * 16 + (long long)p[8] + 8));
                                v18 = v1;
                                if (v18 >= (long long)p[16])
                                    8792537709680();
                                *((long long *)((long long)p[8] + v18 * 16 + 8)) = v2 + 1;
                                if (v13 >= (long long)p[16])
                                {
                                    8792537709680();
                                }
                                else if (v17 >= (long long)p[16])
                                {
                                    8792537709680();
                                }
                                else
                                {
                                    *((long long *)((long long)p[8] + v17 * 16 + 8)) = *((long long *)(v13 * 16 + (long long)p[8] + 8));
                                    *(addr) = 0;
                                    v19 = sub_7ff2c17596c(p, ptr, addr);
                                    if ((unsigned int)v19 < 0)
                                        return v19;
                                    if (*(addr))
                                    {
                                        if (v9 != 18 && v9 != 9)
                                            goto LABEL_7ff2c175740;
                                        *((unsigned int *)p) = 9;
                                    }
                                    else
                                    {
                                        if (v9 != 9)
                                        {
LABEL_7ff2c175740:
                                            *(addr) = 1;
                                        }
                                        *(ptr) = &*(ptr)->field_2;
                                        v20 = sub_7ff2c17501c(p, 26);
                                        v21 = v20;
                                        if (v20 >= 0 && (v22 = (unsigned int)(unsigned long long)sub_7ff2c17501c(p, 22), v23 = (unsigned long)(long long)(int)v22, v22 >= 0))
                                        {
                                            if (v13 >= (long long)p[16])
                                                8792537709680();
                                            if (v21 >= (long long)p[16])
                                                8792537709680();
                                            *((long long *)((long long)p[8] + v21 * 16 + 8)) = *((long long *)(v13 * 16 + (long long)p[8] + 8));
                                            if (v13 >= (long long)p[16])
                                                8792537709680();
                                            if (v23 >= (long long)p[16])
                                                8792537709680();
                                            *((long long *)((long long)p[8] + v23 * 16 + 8)) = *((long long *)(v13 * 16 + (long long)p[8] + 8));
                                            if (v9 != 11)
                                            {
                                                v24 = sub_7ff2c17501c(p, 13);
                                                if (v24 >= 0)
                                                {
                                                    v25 = v24;
                                                    if (v25 >= (long long)p[16])
                                                        8792537709680();
                                                    *((unsigned long *)((long long)p[8] + v25 * 16 + 8)) = v13;
                                                    goto LABEL_7ff2c17582c;
                                                    goto LABEL_7ff2c17582c;
                                                }
                                            }
                                            else
                                            {
LABEL_7ff2c17582c:
                                                v26 = v2;
                                                if (v26 >= (long long)p[16])
                                                    8792537709680();
                                                *((long long *)((long long)p[8] + v26 * 16 + 8)) = (long long)p[16];
                                                if (v9 != 9)
                                                    return v13 & 4294967295;
                                                return v0;
                                            }
                                        }
                                    }
                                    return 4294967295;
                                }
                            }
                        }
                    }
                }
            }
        }
        else
        {
            v27 = sub_7ff2c17501c(p, 16);
            v13 = v27;
            if (v27 >= 0)
            {
                *(addr) = 0;
                v28 = sub_7ff2c17596c(p, ptr, addr);
                if ((unsigned int)v28 < 0)
                    return v28;
                if (*(addr) && (v9 == 19 || v9 == 10))
                {
                    *((unsigned int *)p) = 9;
                }
                else
                {
                    *(addr) = 1;
                    *(ptr) = &*(ptr)->field_4;
                    if (v9 != 19 && v9 != 10)
                    {
                        if (v13 >= (long long)p[16])
                            8792537709680();
                        *((long long *)((long long)p[8] + v13 * 16 + 8)) = (unsigned int)v28 + 1;
                        goto LABEL_7ff2c175943;
                        goto LABEL_7ff2c175943;
                    }
                    else
                    {
                        v29 = sub_7ff2c17501c(p, 13);
                        v30 = v29;
                        if (v29 >= 0)
                        {
                            if (v13 >= (long long)p[16])
                                8792537709680();
                            *((long long *)((long long)p[8] + v13 * 16 + 8)) = (unsigned int)v30 + 1;
                            if (v30 >= (long long)p[16])
                                8792537709680();
                            *((unsigned long *)((long long)p[8] + v30 * 16 + 8)) = v13;
LABEL_7ff2c175943:
                            if (v9 != 10)
                                return v13 & 4294967295;
                            return v0;
                        }
                    }
                }
            }
        }
        return 4294967295;
    }
}
