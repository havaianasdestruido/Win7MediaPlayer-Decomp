/* sub_10008f9f0 @ 0x10008f9f0
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10008f9f0  (1294 bytes, 109 basic blocks)
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

typedef struct struct_4 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_4;

typedef struct struct_1 {
    char padding_0[112];
    unsigned int field_70;
    char padding_74[21];
    char field_89;
} struct_1;

typedef struct struct_2 {
    char padding_0[112];
    unsigned int field_70;
    char padding_74[21];
    char field_89;
} struct_2;

typedef struct struct_5 {
    unsigned int field_0;
    char padding_4[4];
    unsigned int field_8;
    unsigned int field_c;
} struct_5;

typedef struct struct_3 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_3;

extern void g_100007160;
extern void g_1000075a8;
extern struct_3 *g_1000de270;
extern struct_5 *g_1000de4b0;

int sub_10008f9f0(void)
{
    int v15;  // r9d
    struct_0 *v16;  // r8
    char v25;  // bl
    int v26;  // r12d
    int v27;  // esi
    unsigned int i;  // eax
    struct_1 *ptr7;  // rax
    unsigned int flag2;  // ebp
    struct_2 *v31;  // r10
    unsigned int p[4];  // r13
    struct_2 *ptr8;  // r10
    unsigned long long v34;  // r14
    struct_0 *v17;  // rbp
    unsigned long long v35;  // r15
    unsigned int flag;  // ecx
    unsigned int choice;  // ecx
    int v38;  // r11d
    unsigned int v39;  // eax
    unsigned int v40;  // ecx
    unsigned int v41;  // ecx
    int v42;  // eax
    int v43;  // ecx
    int v44;  // ecx
    unsigned int v18;  // eax
    unsigned int v45;  // ecx
    unsigned int v46;  // eax
    struct_1 *v47;  // r15
    unsigned long long v48;  // r14
    unsigned long long v49;  // r13
    unsigned int ptr3[4];  // rbp
    unsigned long long *ptr4;  // rax
    unsigned int v53;  // ecx
    unsigned int v54;  // eax
    void* ptr;  // rcx
    char v55;  // al
    char v56;  // al
    int v57;  // r12d
    int v58;  // esi
    unsigned int v59;  // ecx
    unsigned int v60;  // eax
    unsigned long long *ptr5;  // rdx
    unsigned int v20;  // r8d
    unsigned long long *ptr6;  // rdx
    struct_4 *ptr9;  // rcx
    int v23;  // edx
    int v24;  // ecx
    int v0;  // [bp-0x88]
    unsigned int v1;  // [bp-0x84]
    int v2;  // [bp-0x80]
    int v3;  // [bp-0x7c]
    unsigned int v4;  // [bp-0x78]
    unsigned int v5;  // [bp-0x74]
    int v6;  // [bp-0x70]
    unsigned int v7;  // [bp-0x6c]
    unsigned long long v8;  // [bp-0x68]
    struct_4 *addr;  // [bp-0x60]
    struct_2 *v10;  // [bp-0x58]
    unsigned long v11;  // [bp-0x50]
    unsigned long v12;  // [bp+0x8], Other Possible Types: unsigned long long
    int v13;  // [bp+0x28]
    long long v14;  // [bp+0x30]

    v2 = v15;
    v17 = v16;
    v18 = sub_10007c114();
    *((unsigned int *)&ptr[40]) = 0;
    *((int *)&ptr[44]) = 0;
    v0 = 0;
    v1 = 0;
    v20 = v18;
    v5 = v20;
    *((int *)&v12) = v13;
    if (!v20)
    {
        *(ptr6) = (long long)ptr[40];
        return;
    }
    if ((v17->field_89 & 2))
    {
        v20 = v5;
        ptr9 = sub_100055880(v17, &g_100007160, 0);
    }
    else
    {
        ptr9 = g_1000de270;
    }
    v23 = 0;
    addr = ptr9;
    v24 = 0;
    v25 = 0;
    v3 = 0;
    v11 = ptr9->field_8;
    v8 = 0;
    v26 = 0;
    v27 = 0;
    if (ptr9->field_8)
    {
        i = 0;
        v4 = 0;
        if (v20)
        {
            do
            {
                ptr7 = sub_10007c210(ptr, v17, i);
                v10 = ptr7;
                if (ptr7 == (long long)ptr[32])
                    continue;
                flag2 = ptr7->field_70;
                if ((ptr7->field_89 & 32))
                {
                    v31 = v10;
                    p = sub_100055880(ptr7, &g_1000075a8, 0);
                    ptr8 = v31;
                }
                else
                {
                    p = g_1000de4b0;
                    ptr8 = ptr7;
                }
                v34 = 0;
                v35 = 0;
                if (flag2 != 2 && (v25 & 1))
                    v34 = (p[2] < v3 ? v3 : p[2]);
                if (flag2 && (v25 & 4))
                    v34 += (p[1] < v26 ? v26 : p[1]);
                if (flag2 != 3 && (v25 & 2))
                    v35 = (p[3] < (unsigned int)v8 ? v8 & 4294967295 : p[3]);
                if (flag2 != 1 && (v25 & 8))
                    v35 += (p[1 + 1] < v27 ? v27 : p[1 + 1]);
                flag = flag2;
                if (flag2)
                {
                    choice = flag - 1;
                    if (flag == 1)
                    {
                        v25 |= 2;
                        v8 = p[1 + 1];
                    }
                    else if (choice == 1)
                    {
                        v26 = p[2];
                        v25 |= 4;
                    }
                    else if (choice == 2)
                    {
                        v27 = p[3];
                        v25 |= 8;
                    }
                }
                else
                {
                    v25 |= 1;
                    v3 = p[1];
                }
                sub_10005ae94(ptr8, &v6, v2 - v34, (unsigned int)v12 - v35, v14);
                v38 = v6 + (unsigned int)v34;
                v39 = v7 + (unsigned int)v35;
                v6 = v38;
                v7 = v39;
                if (flag2 && flag2 != 2)
                {
                    v40 = v12;
                    if (v39 > v40)
                    {
                        *((unsigned int *)&v12) = 0;
                        v39 = v40;
                        v7 = v40;
                    }
                    else
                    {
                        *((unsigned int *)&v12) = v40 - v39;
                    }
                    v41 = v1 - v39;
                    v1 = v41;
                    if (v1 - v39 < 0)
                    {
                        *((unsigned int *)&ptr[44]) = (int)ptr[44] - v41;
                        v1 = 0;
                    }
                    v42 = v38 - v0;
                    if (v42 > 0)
                    {
                        *((int *)&ptr[40]) = (int)ptr[40] + v42;
                        v0 = v38;
                    }
                }
                else
                {
                    v43 = v2;
                    if (v38 > v43)
                    {
                        v2 = 0;
                        v38 = v43;
                        v6 = v43;
                    }
                    else
                    {
                        v2 = v43 - v38;
                    }
                    v0 -= v38;
                    if (v0 - v38 < 0)
                    {
                        *((int *)&ptr[40]) = (int)ptr[40] - v0;
                        v0 = 0;
                    }
                    v44 = v39 - v1;
                    if (v44 > 0)
                    {
                        *((int *)&ptr[44]) = (int)ptr[44] + v44;
                        v1 = v39;
                    }
                }
                v45 = p[0];
                if ((v45 & 4294967168) != 4294967168)
                {
                    v46 = (v45 & 4294967168) - 1 ^ ~(v45) & 127;
                    p[0] = v46;
                    if (!(v46 & 4294967168))
                        sub_100059224(p); /* do not return */
                }
                if (v2 || (unsigned int)v12)
                {
                    v17 = v16;
                }
                else
                {
                    v20 = v5;
                    i = v4;
                    break;
                }
                v20 = v5;
                i = v4 + 1;
                v4 = i;
            } while (i < v20);
            v24 = v8;
            v23 = v3;
        }
        if (i == v20)
        {
            v47 = (long long)ptr[32];
            if (v47)
            {
                v48 = 0;
                v49 = 0;
                ptr3 = (!(v47->field_89 & 32) ? g_1000de4b0 : sub_100055880(v47, &g_1000075a8, 0));
                if ((v25 & 1))
                    v48 = (ptr3[2] < v3 ? v3 : ptr3[2]);
                if ((v25 & 2))
                    v49 = (ptr3[3] < (unsigned int)v8 ? v8 & 4294967295 : ptr3[3]);
                if ((v25 & 4))
                    v48 += (ptr3[1] < v26 ? v26 : ptr3[1]);
                if ((v25 & 8))
                    v49 += (ptr3[1 + 1] < v27 ? v27 : ptr3[1 + 1]);
                ptr4 = sub_10005ae94(v47, &v12, v2 - v48, (unsigned int)v12 - v49, v14);
                v12 = *(ptr4);
                v53 = ptr3[0];
                v26 = (unsigned int)*(ptr4) + (unsigned int)v48;
                v27 = *((unsigned int *)((void*)&v12 + 4)) + (unsigned int)v49;
                if ((v53 & 4294967168) != 4294967168)
                {
                    v54 = (v53 & 4294967168) - 1 ^ ~(v53) & 127;
                    ptr3[0] = v54;
                    if (!(v54 & 4294967168))
                        sub_100059224(ptr3); /* do not return */
                }
            }
            else
            {
                v55 = v25 & 1;
                if (!(v25 & 1) && !(v25 & 4))
                {
                    v26 = 0;
                }
                else if (!v55)
                {
                    if (v55)
                        goto LABEL_10008fe4d;
LABEL_10008fe4e:
                }
                else if ((v25 & 4))
                {
                    if (v26 < v23)
                        v26 = v23;
                }
                else
                {
                    if (!v55)
                        goto LABEL_10008fe4e;
LABEL_10008fe4d:
                    v26 = v23;
                }
                v56 = v25 >> 1 & 1;
                if (!(v25 >> 1 & 1) && !(v25 & 8))
                {
                    v27 = 0;
                }
                else if (!v56)
                {
                    if (v56)
                        goto LABEL_10008fe74;
LABEL_10008fe75:
                }
                else if ((v25 & 8))
                {
                    if (v27 < v24)
                        v27 = v24;
                }
                else
                {
                    if (!v56)
                        goto LABEL_10008fe75;
LABEL_10008fe74:
                    v27 = v24;
                }
            }
            v57 = v26 - v0;
            if (v57 > 0)
                *((int *)&ptr[40]) = (int)ptr[40] + v57;
            v58 = v27 - v1;
            if (v58 > 0)
                *((int *)&ptr[44]) = (int)ptr[44] + v58;
        }
    }
    v59 = addr->field_0;
    if ((v59 & 4294967168) != 4294967168)
    {
        v60 = (v59 & 4294967168) - 1 ^ ~(v59) & 127;
        addr->field_0 = v60;
        if (!(v60 & 4294967168))
            sub_100059224(addr); /* do not return */
    }
    if ((int)ptr[40] > v15)
        *((int *)&ptr[40]) = v15;
    if ((int)ptr[44] > v13)
        *((int *)&ptr[44]) = v13;
    *(ptr5) = (long long)ptr[40];
    return;
}
