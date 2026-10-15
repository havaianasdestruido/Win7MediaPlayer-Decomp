/* sub_10007a148 @ 0x10007a148
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10007a148  (972 bytes, 89 basic blocks)
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

typedef struct struct_10 {
    char padding_0[8];
    struct struct_0 *field_8;
    struct struct_1 *field_10;
    char padding_18[8];
    struct struct_4 *field_20;
    struct struct_8 *field_28;
    unsigned int field_30;
    char field_34;
    char padding_35[3];
    unsigned int field_38;
    unsigned int field_3c;
    char padding_40[12];
    unsigned int field_4c;
    char padding_50[4];
    unsigned int field_54;
} struct_10;

typedef struct struct_2 {
    char padding_0[137];
    char field_89;
} struct_2;

typedef struct struct_23 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_23;

typedef struct struct_13 {
    struct struct_11 *field_0;
    char padding_8[24];
    unsigned int field_20;
    unsigned int field_24;
} struct_13;

typedef struct struct_22 {
    char field_0;
    char padding_1[7];
    struct struct_21 *field_8;
    char padding_10[8];
    struct struct_22 *field_18;
} struct_22;

typedef struct struct_16 {
    char field_0;
    char padding_1[7];
    struct struct_15 *field_8;
    char padding_10[8];
    struct struct_16 *field_18;
} struct_16;

typedef struct struct_19 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    struct struct_20 *field_10;
} struct_19;

typedef struct struct_14 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_14;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_1;

typedef struct struct_4 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_8 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    struct struct_9 *field_10;
} struct_8;

typedef struct struct_11 {
    char padding_0[64];
    struct struct_12 *field_40;
} struct_11;

typedef struct struct_21 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[32];
    unsigned int field_70;
    char padding_74[23];
    char field_8b;
} struct_21;

typedef struct struct_15 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[32];
    unsigned int field_70;
    char padding_74[23];
    char field_8b;
} struct_15;

typedef struct struct_20 {
    struct struct_18 *field_0;
} struct_20;

typedef struct struct_5 {
    struct struct_3 *field_0;
} struct_5;

typedef struct struct_9 {
    struct struct_7 *field_0;
} struct_9;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_18 {
    char field_0;
    char padding_1[7];
    struct struct_17 *field_8;
    char padding_10[8];
    struct struct_18 *field_18;
} struct_18;

typedef struct struct_3 {
    char field_0;
    char padding_1[7];
    struct struct_2 *field_8;
    char padding_10[8];
    struct struct_3 *field_18;
} struct_3;

typedef struct struct_7 {
    char field_0;
    char padding_1[7];
    struct struct_6 *field_8;
    char padding_10[8];
    struct struct_7 *field_18;
} struct_7;

typedef struct struct_17 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[32];
    unsigned int field_70;
    char padding_74[23];
    char field_8b;
} struct_17;

typedef struct struct_2 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[32];
    unsigned int field_70;
    char padding_74[23];
    char field_8b;
} struct_2;

typedef struct struct_6 {
    char padding_0[72];
    unsigned long long field_48;
    char padding_50[32];
    unsigned int field_70;
    char padding_74[23];
    char field_8b;
} struct_6;

extern void g_1000071d0;
extern void g_100007208;
extern long long g_10000d2d8;
extern char g_1000e2d00;
extern long long g_1000e2d10;
extern unsigned long long g_1000e2d28;
extern char g_1000e2d30;
extern char g_1000e2d38;
extern unsigned int g_1000e2d3c;
extern char g_1000e2d40;

int sub_10007a148(void)
{
    struct_10 *ptr;  // rcx
    struct_10 *v4;  // rdi
    unsigned long long v13;  // cc_dep1
    unsigned long long v14;  // r15
    struct_2 *v15;  // rsi
    struct_23 *v16;  // rcx
    unsigned long long v17;  // 4150
    unsigned int v18;  // edx
    void* p;  // rbx
    unsigned int v20;  // edx
    struct_22 **node;  // rcx
    unsigned long long v5;  // cc_op
    struct_16 *cur;  // rax
    unsigned long addr;  // rbp
    struct_2 *v24;  // rdx
    struct_19 *v25;  // rcx
    unsigned int v26;  // edx
    struct_22 **ptr8;  // rcx
    struct_16 *iter;  // rax
    unsigned long ptr9;  // rbx
    struct_14 *v31;  // rcx
    unsigned long v6;  // cc_dep1
    unsigned int v32;  // edx
    unsigned int v33;  // 4098
    unsigned long v34;  // rdx
    unsigned int *ptr5;  // rax
    unsigned int v36;  // edx
    unsigned int v37;  // ecx
    unsigned int *ptr6;  // rax
    unsigned int v39;  // edx
    unsigned int v40;  // ecx
    unsigned int v41;  // 4098
    unsigned long long v7;  // cc_dep2
    struct_13 *v42;  // rcx
    struct_23 *ptr10;  // rcx
    unsigned int v44;  // ebx
    unsigned int v45;  // esi
    struct_14 *v46;  // rcx
    long long v47;  // rdx
    unsigned long v8;  // cc_ndep
    unsigned long long v9;  // 4109
    unsigned long long v10;  // cc_ndep
    char v11;  // r14b
    unsigned long long v12;  // cc_op
    long long v0;  // [bp-0x58]
    long long v1;  // [bp-0x50]

    v4 = ptr;
    if (ptr->field_30 != 1)
    {
        ptr->field_30 = ptr->field_30 - 1;
        return;
    }
    v5 = 7;
    v6 = g_1000e2d3c;
    v7 = 0;
    if (g_1000e2d3c)
    {
        if (g_1000e2d00)
        {
            if ((g_1000e2d40 >= 4 || (v5 = 5, v6 = (unsigned long)(unsigned long long)g_1000e2d40, v7 = 0, !g_1000e2d40)) && (v5 = 17, v6 = (unsigned long)(unsigned long long)(g_1000e2d38 & 1), v7 = 0, (g_1000e2d38 & 1)))
                goto LABEL_10007a1cd;
        }
        else
        {
            if ((g_1000e2d40 >= 4 || (v5 = 5, v6 = (unsigned long)(unsigned long long)g_1000e2d40, v7 = 0, !g_1000e2d40)) && (v5 = 20, v6 = (unsigned long)(9223372036854775809 & g_1000e2d28), v7 = 0, (9223372036854775809 & g_1000e2d28) && (v6 = (unsigned long)(*((long long *)&g_1000e2d30) & 9223372036854775809), v5 = 8, v7 = (unsigned long long)*((long long *)&g_1000e2d30), v6 == *((long long *)&g_1000e2d30))))
            {
LABEL_10007a1cd:
                sub_1000531fc(g_1000e2d10, "-", &g_10000d2d8); /* do not return */
            }
        }
    }
    ptr->field_4c = ptr->field_4c + 1;
    v9 = _ccall(v5, v6, v7, v8);
    v10 = v9;
    ptr->field_34 = 1;
    v11 = 0;
    v12 = 19;
    v13 = 4294967295;
    v14 = 0;
    while (true)
    {
        v16 = ptr->field_8;
        v17 = _ccall(v12, v13, 0, v10);
        v14 += 1;
        v10 = v17;
        v18 = ptr->field_38 + 1;
        if (v18 < (v16->field_0 & 268435455))
        {
            ptr->field_38 = v18;
            v10 = 0;
            p = v18 * 16 + ((v16->field_0 >> 28 & 1) ? v16->field_8 : (struct struct_23 *)&v16->field_8);
            if (*((long long *)p))
            {
                v33 = ptr->field_54;
                ptr->field_54 = ptr->field_54 + 4294967295;
                if (!v33 + 4294967295)
                    sub_10007a114(ptr); /* do not return */
                *((unsigned int *)(*((long long *)p) + 32)) = 4294967295;
                v34 = (short)p[8];
                v42 = *((long long *)p);
                (*((long long *)(*((long long *)*((long long *)p)) + 64)))();
            }
        }
        v20 = 0;
        if (ptr->field_28->field_8 > 0)
        {
            node = ptr->field_28->field_10;
            cur = *(node);
            while (cur)
            {
                if (!cur->field_0)
                {
                    cur = cur->field_18;
                }
                else
                {
                    addr = &cur->field_8;
                    goto LABEL_10007a28e;
                }
            }
            v10 = cur < NULL;
            v20 += 1;
            node += 1;
            if (v20 < ptr->field_28->field_8)
                continue;
            goto LABEL_10007a28e;
        }
        addr = 0;
LABEL_10007a28e:
        if (addr)
        {
            v15 = *((long long *)addr);
            if ((v15[1].padding_0[1] & 8) && (!*((long long *)&v15->padding_0[72]) || *((int *)&v15->padding_0[112]) == 4294967294))
            {
                ptr5 = sub_100055880(v15, &g_1000071d0, 0);
                v36 = *(ptr5);
                if ((v36 & 4294967168) != 4294967168)
                {
                    v37 = (v36 & 4294967168) - 1 ^ ~(v36) & 127;
                    *(ptr5) = v37;
                    if (!(v37 & 4294967168))
                        sub_100059224(ptr5); /* do not return */
                }
                ptr6 = sub_100055880(v15, &g_100007208, 0);
                v39 = *(ptr6);
                if ((v39 & 4294967168) != 4294967168)
                {
                    v40 = (v39 & 4294967168) - 1 ^ ~(v39) & 127;
                    *(ptr6) = v40;
                    if (!(v40 & 4294967168))
                        sub_100059224(ptr6); /* do not return */
                }
                4297066256();
            }
            v24 = *((long long *)addr);
            v25 = ptr->field_28;
            goto LABEL_10007a40a;
        }
        v26 = 0;
        if (ptr->field_20->field_8 > 0)
        {
            ptr8 = ptr->field_20->field_10;
            iter = *(ptr8);
            while (iter)
            {
                if (!iter->field_0)
                {
                    iter = iter->field_18;
                }
                else
                {
                    ptr9 = &iter->field_8;
                    goto LABEL_10007a3f3;
                }
            }
            v10 = iter < NULL;
            v26 += 1;
            ptr8 += 1;
            if (v26 < ptr->field_20->field_8)
                continue;
            goto LABEL_10007a3f3;
        }
        ptr9 = 0;
LABEL_10007a3f3:
        if (ptr9)
        {
            sub_10005aba4(*((long long *)ptr9), ptr);
            v24 = *((long long *)ptr9);
            v25 = ptr->field_20;
LABEL_10007a40a:
            sub_10005862c(v25, v24, 0, _INSERT(0, 0, 1));
        }
        else
        {
            v31 = ptr->field_10;
            v10 = ptr9 < 0;
            v32 = ptr->field_3c + 1;
            if (v32 < (v31->field_0 & 268435455))
            {
                ptr->field_3c = v32;
                v10 = 0;
                p = v32 * 16 + ((v31->field_0 >> 28 & 1) ? v31->field_8 : (struct struct_14 *)&v31->field_8);
                if (*((long long *)p))
                {
                    v41 = ptr->field_54;
                    ptr->field_54 = ptr->field_54 + 4294967295;
                    if (!v41 + 4294967295)
                        sub_10007a114(ptr); /* do not return */
                    *((unsigned int *)(*((long long *)p) + 36)) = 4294967295;
                    v34 = (int)p[8] & 0xffff0000;
                    v42 = *((long long *)p);
                    (*((long long *)(*((long long *)*((long long *)p)) + 64)))();
                }
            }
            else
            {
                v11 = 1;
            }
            v12 = 5;
            v13 = v11;
            if (v11)
                break;
        }
    }
    ptr10 = ptr->field_8;
    v44 = ptr10->field_0;
    v45 = ptr->field_10->field_0;
    ptr->field_34 = 0;
    ptr->field_38 = 4294967295;
    if (ptr10)
        sub_10007b208(ptr10); /* do not return */
    v46 = ptr->field_10;
    ptr->field_3c = 4294967295;
    if (v46)
    {
        sub_10007b208(v46); /* do not return */
    }
    else if ((char)sub_1000a0ad0(v47))
    {
        sub_1000a27c4(); /* do not return */
    }
    else
    {
        ptr->field_30 = ptr->field_30 + 4294967295;
        if (!g_1000e2d3c)
            return;
        if (g_1000e2d00)
        {
            if (g_1000e2d40 < 4 && g_1000e2d40)
                return;
            if (!(g_1000e2d38 & 1))
                return;
        }
        else
        {
            if (g_1000e2d40 < 4 && g_1000e2d40)
                return;
            if (!(9223372036854775809 & g_1000e2d28))
            {
                return;
            }
            else if ((*((long long *)&g_1000e2d30) & 9223372036854775809) != *((long long *)&g_1000e2d30))
            {
                return;
            }
        }
        *((unsigned int *)&v1) = v45 & 268435455;
        *((unsigned int *)&v0) = v44 & 268435455;
        sub_100079c2c(g_1000e2d10, ".", &g_10000d2d8, v14 & 4294967295, v0, v1); /* do not return */
    }
}
