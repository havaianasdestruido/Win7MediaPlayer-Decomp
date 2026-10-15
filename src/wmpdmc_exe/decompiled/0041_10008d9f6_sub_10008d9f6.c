/* sub_10008d9f6 @ 0x10008d9f6
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10008d9f6  (761 bytes, 70 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3f6564d520c416147702a463a50724fd36c46c3a44a8447af89788586fc5efee
 *   Evidence: analysis/report/rea-evidence/wmpdmc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[152];
    unsigned int field_98;
    char padding_9c[4];
    unsigned long long field_a0;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    struct struct_1 *field_10;
} struct_1;

typedef struct struct_10 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_10;

typedef struct struct_9 {
    struct struct_7 *field_0;
    char padding_8[124];
    unsigned short field_84;
    char padding_86[2];
    char field_88;
} struct_9;

typedef struct struct_2 {
    unsigned int field_0;
    char padding_4[4];
    int field_8;
} struct_2;

typedef struct struct_3 {
    char padding_0[136];
    char field_88;
} struct_3;

typedef struct struct_4 {
    char padding_0[132];
    unsigned short field_84;
} struct_4;

typedef struct struct_5 {
    char padding_0[132];
    unsigned short field_84;
} struct_5;

typedef struct struct_6 {
    char padding_0[136];
    char field_88;
} struct_6;

typedef struct struct_7 {
    char padding_0[248];
    struct struct_8 *field_f8;
} struct_7;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

int sub_10008d9f6(void)
{
    struct_0 *v5;  // rdi
    long long v6;  // rax
    char v15;  // sil
    struct_1 *v16;  // r15
    unsigned int v17;  // r10d
    struct_10 *p;  // r9
    unsigned int v19;  // ecx
    unsigned long v20;  // 4144
    unsigned long long v21;  // rdi
    unsigned long long v22;  // rbx
    unsigned long v23;  // rdx
    unsigned int v24;  // r8d
    long long v7;  // rax
    unsigned int v25;  // r8d
    struct_3 *ptr;  // r12, Other Possible Types: struct_6 *, struct_9 *
    struct_2 *v27;  // rax
    unsigned int flag;  // edx
    struct_2 *addr;  // rbp
    unsigned int choice;  // edx
    unsigned int flag2;  // edx
    unsigned int flag3;  // edx
    unsigned int flag4;  // edx
    unsigned int v34;  // eax
    long long v8;  // rbx
    unsigned int v35;  // ecx
    unsigned int v36;  // r10d
    struct_10 *ptr3;  // r9
    char v38;  // cl
    unsigned long long v39;  // cc_op
    unsigned long v40;  // cc_dep1
    unsigned long v41;  // cc_dep2
    unsigned long long v42;  // cc_op
    struct_1 *v9;  // r13
    unsigned long v43;  // cc_dep1
    unsigned long v44;  // cc_dep2
    char v45;  // cl
    unsigned long v46;  // 4103
    unsigned long v47;  // 4103
    unsigned long v10;  // cc_ndep
    struct_9 *v48;  // rcx
    unsigned int v49;  // ecx
    unsigned long v11;  // 4115
    unsigned long long v12;  // r14
    struct_0 *v13;  // rdi
    struct_0 *v14;  // rdi
    struct_10 *v1;  // [bp+0x20]
    struct_0 *v2;  // [bp+0x70]
    unsigned int v3;  // [bp+0x78]
    unsigned int v4;  // [bp+0x88]

    v7 = sub_10008dea4(v5, v6);
    if (!v7)
        return;
    v9 = sub_10008cf90(v7, v8);
    if (v9)
    {
        v4 = 0;
        v11 = _ccall(6, 19, (unsigned long long)(v9->field_8 & 268435455), 0, v10);
        if (!((char)v11))
        {
            v12 = 0;
            while (true)
            {
                v14 = v13;
                v15 = 1;
                v16 = ((v9->field_8 >> 28 & 1) ? v9->field_10 : (struct struct_1 *)&v9->field_10);
                v17 = 0;
                p = *((long long *)(((v14->field_98 >> 28 & 1) ? v14->field_a0 : (struct struct_0 *)&v14->field_a0) + *((short *)&v16->padding_c[v12]) * 8));
                v3 = 0;
                v19 = p->field_0;
                v1 = p;
                v20 = _ccall(6, 19, (unsigned long long)(v19 & 268435455), 0, 0);
                if (!((char)v20))
                {
                    v21 = 0;
                    v22 = ((v19 >> 28 & 1) ? p->field_8 : (struct struct_10 *)&p->field_8);
                    v23 = *((long long *)(v21 + v22));
                    v24 = *((int *)(*((long long *)(*((long long *)(v21 + v22)) + 40)) + 12)) - 18;
                    if (*((int *)(*((long long *)(*((long long *)(v21 + v22)) + 40)) + 12)) == 18)
                    {
                        v48 = ptr;
                        if (*((int *)(v21 + v22 + 8)) != 1)
                            ptr->field_0->field_f8();
                        ptr->field_0->field_f8();
                    }
                    v25 = v24 - 2;
                    if (v24 != 2)
                    {
                        if (v25 == 16)
                        {
                            if (*((int *)(v21 + v22 + 8)) == 1)
                            {
                                v39 = 6;
                                v40 = ptr->field_84;
                                v41 = *((short *)(*((long long *)(v21 + v22 + 16)) + 8));
                            }
                            else
                            {
                                v42 = 6;
                                v43 = ptr->field_84;
                                v44 = *((short *)(*((long long *)(v21 + v22 + 16)) + 8));
                                goto LABEL_10008dc1d;
                            }
LABEL_10008dbf3:
                            v46 = _ccall(4, v39, v40, v41, 0);
                            v15 = v46;
                            v36 = v17;
                            ptr3 = p;
                            goto LABEL_10008dc6f;
                        }
                        if (v25 == 17)
                        {
                            v38 = ptr->field_88 >> 4;
                            goto LABEL_10008dbe1;
                        }
                        v27 = sub_100056254(ptr);
                        flag = *((int *)(v21 + v22 + 8)) - 1;
                        addr = v27;
                        if (*((int *)(v21 + v22 + 8)) == 1)
                        {
                            v15 = sub_1000593f0(v27, *((long long *)(v21 + v22 + 16)));
LABEL_10008db9b:
                            v34 = addr->field_0;
                            if ((v34 & 4294967168) != 4294967168)
                            {
                                v35 = (v34 & 4294967168) - 1 ^ ~(v34) & 127;
                                addr->field_0 = v35;
                                if (!(v35 & 4294967168))
                                    sub_100059224(addr); /* do not return */
                            }
                            v36 = v3;
                            ptr3 = v1;
                            goto LABEL_10008dc6f;
                        }
                        choice = flag - 1;
                        if (flag == 1)
                        {
                            v15 = !sub_1000593f0(v27, *((long long *)(v21 + v22 + 16)));
                            goto LABEL_10008db9b;
                        }
                        flag2 = choice - 1;
                        if (choice != 1)
                        {
                            flag3 = flag2 - 1;
                            if (flag2 != 1)
                            {
                                flag4 = flag3 - 1;
                                if (flag3 != 1)
                                {
                                    if (flag4 != 1)
                                        goto LABEL_10008db9b;
                                    if (((char)v27->field_0 & 63) != (char)flag4 || addr->field_8 > *((int *)(*((long long *)(v21 + v22 + 16)) + 8)))
                                        goto LABEL_10008db71;
                                }
                                else
                                {
                                    if (((char)v27->field_0 & 63) != 1 || addr->field_8 >= *((int *)(*((long long *)(v21 + v22 + 16)) + 8)))
                                        goto LABEL_10008db71;
                                }
                            }
                            else
                            {
                                if (((char)v27->field_0 & 63) != 1 || addr->field_8 < *((int *)(*((long long *)(v21 + v22 + 16)) + 8)))
                                    goto LABEL_10008db71;
                            }
                        }
                        else if (((char)v27->field_0 & 63) != 1 || addr->field_8 <= *((int *)(*((long long *)(v21 + v22 + 16)) + 8)))
                        {
LABEL_10008db71:
                            v15 = 0;
                            goto LABEL_10008db9b;
                        }
                        v15 = 1;
                        goto LABEL_10008db9b;
                    }
                    v38 = ptr->field_88 >> 6;
LABEL_10008dbe1:
                    v45 = v38 & 1;
                    if (*((int *)(v21 + v22 + 8)) == 1)
                    {
                        v39 = 5;
                        v40 = v45;
                        v41 = *((char *)(*((long long *)(v21 + v22 + 16)) + 8));
                        goto LABEL_10008dbf3;
                    }
                    v42 = 5;
                    v43 = v45;
                    v44 = *((char *)(*((long long *)(v21 + v22 + 16)) + 8));
LABEL_10008dc1d:
                    v47 = _ccall(5, v42, v43, v44, 0);
                    v15 = v47;
                    v36 = v17;
                    ptr3 = p;
LABEL_10008dc6f:
                    p = ptr3;
                    if (v15)
                    {
                        v19 = p->field_0;
                        v17 = v36 + 1;
                        v21 += 24;
                        v3 = v17;
                        if (v17 < (v19 & 268435455))
                            continue;
                        goto LABEL_10008dc93;
                    }
                    else
                    {
                        v12 += 16;
                        v4 += 1;
                        if (v4 >= (v9->field_8 & 268435455))
                            break;
                        v13 = v2;
                    }
                }
                else
                {
LABEL_10008dc93:
                    v49 = *((int *)*((long long *)&v16->padding_0[v12]));
                    if ((v49 & 4294967168) == 4294967168)
                        return;
                    *((unsigned int *)*((long long *)&v16->padding_0[v12])) = (v49 & 4294967168) + 128 ^ v49 & 127;
                    return;
                }
            }
        }
    }
    return;
}
