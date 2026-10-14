/* sub_100092c80 @ 0x100092c80
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100092c80  (971 bytes, 83 basic blocks)
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
    char padding_0[137];
    char field_89;
} struct_0;

typedef struct struct_1 {
    char padding_0[24];
    char field_18;
    char padding_19[7];
    unsigned int field_20;
    unsigned int field_24;
    char field_28;
    char padding_29[7];
    struct struct_2 *field_30;
    struct struct_3 *field_38;
} struct_1;

typedef struct struct_5 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_5;

typedef struct struct_6 {
    char padding_0[137];
    char field_89;
} struct_6;

typedef struct struct_8 {
    unsigned int field_0;
    char padding_4[4];
    int field_8;
    int field_c;
    int field_10;
    int field_14;
} struct_8;

typedef struct struct_2 {
    unsigned int field_0;
} struct_2;

typedef struct struct_3 {
    unsigned int field_0;
} struct_3;

typedef struct struct_7 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
    unsigned int field_10;
    unsigned int field_14;
} struct_7;

typedef struct struct_4 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_4;

extern void g_100007160;
extern void g_1000075a8;
extern struct_4 *g_1000de270;
extern struct_7 *g_1000de4b0;

int sub_100092c80(void)
{
    unsigned int v11;  // r9d
    struct_0 *v12;  // r8
    unsigned int v21;  // r14d
    unsigned int v22;  // edx
    unsigned int v23;  // r8d
    unsigned long long v24;  // rcx
    unsigned long i;  // rdx
    unsigned int j;  // edi
    unsigned long long v28;  // rcx
    unsigned int v29;  // ebx
    unsigned long long pos;  // r15
    unsigned long long *ptr5;  // rdx
    struct_6 *v31;  // rax
    struct_8 *addr;  // rcx
    unsigned int v34;  // r8d
    unsigned long long v35;  // rax
    unsigned int v36;  // edx
    unsigned int v37;  // eax
    unsigned long long v38;  // rcx
    unsigned long long k;  // rdx
    struct_1 *ptr;  // rcx
    unsigned int v41;  // r8d
    unsigned int v42;  // r9d
    unsigned int v43;  // edx
    unsigned int v44;  // ecx
    unsigned int *cur;  // rax
    unsigned int v46;  // r8d
    unsigned int v47;  // r15d
    unsigned int v48;  // ecx
    unsigned int *iter;  // rax
    unsigned int v50;  // edx
    unsigned int v15;  // r15d
    unsigned int v51;  // ecx
    unsigned int v52;  // eax
    struct_5 *p;  // r12
    unsigned int v18;  // ecx
    unsigned int v19;  // r13d
    unsigned int v20;  // ecx
    unsigned int v0;  // [bp-0xa8]
    unsigned int v1;  // [bp-0xa4]
    unsigned long long v2;  // [bp-0xa0]
    unsigned int v3;  // [bp-0x90]
    unsigned int v4;  // [bp-0x84]
    unsigned long v5;  // [bp-0x80]
    struct_1 *v6;  // [bp+0x8]
    unsigned long long *v7;  // [bp+0x10]
    struct_0 *v8;  // [bp+0x18], Other Possible Types: unsigned long
    unsigned int v9;  // [bp+0x20]
    unsigned int v10;  // [bp+0x28]

    v9 = v11;
    v8 = v12;
    v7 = ptr5;
    v6 = ptr;
    ptr->field_18 = 1;
    v15 = sub_10007c114();
    v4 = v15;
    p = (!(v12->field_89 & 2) ? g_1000de270 : sub_100055880(v12, &g_100007160, 0));
    v5 = p->field_8;
    if ((ptr->field_28 & 2))
    {
        v18 = ptr->field_24;
        v19 = (v18 <= 1 ? v15 : (unsigned int)((v18 + v15 - 1 & 4294967295) / v18));
    }
    else
    {
        v19 = ptr->field_20;
    }
    if ((ptr->field_28 & 1))
    {
        v20 = ptr->field_20;
        v21 = (v20 <= 1 ? v15 : (unsigned int)((v20 + v15 - 1 & 4294967295) / v20));
    }
    else
    {
        v21 = ptr->field_24;
    }
    if (ptr->field_30)
    {
        4297065496();
    }
    else if (ptr->field_38)
    {
        4297065496();
    }
    else
    {
        if (v19 && v21)
        {
            if (v21 > 1)
            {
                4297065496();
            }
            else if (v19 > 1)
            {
                4297065496();
            }
            else
            {
                v22 = 0;
                v0 = 0;
                if (v15)
                {
                    v23 = v21 - 1;
                    if (v23)
                    {
                        v24 = 0;
                        i = v23;
                        do
                        {
                            *((unsigned int *)(v24 + (char *)ptr->field_30)) = 2147483649;
                            v24 += 4;
                            i -= 1;
                        } while (i != 1);
                        v22 = v0;
                    }
                    j = 0;
                    if (v19)
                    {
                        v28 = 0;
                        v2 = 0;
                        do
                        {
                            if (j < v19 - 1)
                                *((unsigned int *)(v28 + (char *)ptr->field_38)) = 2147483649;
                            v29 = 0;
                            pos = 0;
                            if (!v21)
                                continue;
                            do
                            {
                                v31 = sub_10007c210(ptr, v8, v22, v5);
                                addr = (!(v31->field_89 & 32) ? g_1000de4b0 : sub_100055880(v31, &g_1000075a8, 0));
                                if (v29 && ptr->field_30[1 + pos].field_0 < addr->field_8)
                                    ptr->field_30[1 + pos].field_0 = addr->field_8;
                                v34 = v21 - 1;
                                if (v29 < v34 && ptr->field_30[pos].field_0 < addr->field_10)
                                    ptr->field_30[pos].field_0 = addr->field_10;
                                v35 = v2;
                                if (j && *((int *)(-4 + v35 + (char *)ptr->field_38)) < addr->field_c)
                                    *((int *)(-4 + v35 + (char *)ptr->field_38)) = addr->field_c;
                                if (j < v19 - 1 && *((int *)(v35 + (char *)ptr->field_38)) < addr->field_14)
                                    *((int *)(v35 + (char *)ptr->field_38)) = addr->field_14;
                                v36 = addr->field_0;
                                if ((v36 & 4294967168) != 4294967168)
                                {
                                    v37 = (v36 & 4294967168) - 1 ^ ~(v36) & 127;
                                    addr->field_0 = v37;
                                    if (!(v37 & 4294967168))
                                        sub_100059224(); /* do not return */
                                }
                                v22 = v0 + 1;
                                v0 = v22;
                                if (v22 == v4 && !j && v29 < v34)
                                {
                                    v38 = pos * 4;
                                    k = v34 - v29 & 4294967295;
                                    do
                                    {
                                        *((unsigned int *)(v38 + (char *)ptr->field_30)) = 0;
                                        v38 += 4;
                                        k -= 1;
                                    } while (k != 1);
                                }
                            } while ((v29 += 1, pos += 1, v29 < v21));
                            v28 = v2;
                            v28 += 4;
                            j += 1;
                            v2 = v28;
                        } while (j < v19);
                    }
                }
                v41 = 0;
                v42 = 0;
                v43 = v19 - 1;
                v44 = 0;
                v0 = 0;
                v3 = 0;
                if (v43)
                {
                    cur = &ptr->field_38->field_0;
                    do
                    {
                        v42 += *(cur);
                        v46 = v10 - *(cur);
                        v1 = v46;
                        v3 = v42;
                        if (v10 - *(cur) < 0)
                        {
                            v1 = 0;
                            v3 = v42 - v46;
                            break;
                        }
                    } while ((v44 += 1, cur += 4, v10 = v46, v44 < v43));
                    v41 = v0;
                }
                else
                {
                    v1 = v10;
                }
                v47 = v21 - 1;
                v48 = 0;
                if (v47)
                {
                    iter = &ptr->field_30->field_0;
                    do
                    {
                        v41 += *(iter);
                        v50 = v9 - *(iter);
                        v9 = v50;
                        v0 = v41;
                        if (v9 - *(iter) < 0)
                        {
                            v9 = 0;
                            v0 = v41 + v50;
                            break;
                        }
                    } while ((v48 += 1, iter += 4, v9 = v50, v48 < v47));
                }
                4297065496();
            }
        }
        v51 = p->field_0;
        if ((v51 & 4294967168) != 4294967168)
        {
            v52 = (v51 & 4294967168) - 1 ^ ~(v51) & 127;
            p->field_0 = v52;
            if (!(v52 & 4294967168))
                sub_100059224(p); /* do not return */
        }
        *((unsigned int *)&v8) = 0;
        *((unsigned int *)((char *)&v8 + 4)) = 0;
        *(ptr5) = v8;
        return;
    }
}
