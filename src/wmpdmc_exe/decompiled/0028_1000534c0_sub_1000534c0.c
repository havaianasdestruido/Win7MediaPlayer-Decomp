/* sub_1000534c0 @ 0x1000534c0
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000534c0  (1066 bytes, 75 basic blocks)
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

typedef struct struct_1 {
    char padding_0[24];
    struct struct_0 *field_18;
    char padding_20[36];
    int field_44;
    unsigned int field_48;
    char padding_4c[8];
    unsigned int field_54;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

typedef struct struct_3 {
    struct struct_2 *field_0;
    unsigned long long field_8;
    char field_10;
    char field_11;
    char padding_12[2];
    unsigned int field_14;
    struct struct_4 *field_18;
    struct struct_5 *field_20;
    char padding_28[8];
    unsigned int field_30;
} struct_3;

typedef struct struct_8 {
    char padding_0[40];
    unsigned int field_28;
} struct_8;

typedef struct struct_9 {
    long long field_0;
    long long field_8;
    char field_10;
    char field_11;
    char padding_12[2];
    unsigned int field_14;
    unsigned long long field_18;
} struct_9;

typedef struct struct_6 {
    char padding_0[17];
    char field_11;
    char padding_12[2];
    unsigned int field_14;
    struct struct_7 *field_18;
    char padding_20[8];
    unsigned int field_28;
    int field_2c;
    unsigned int field_30;
} struct_6;

typedef struct struct_2 {
    char padding_0[40];
    int field_28;
} struct_2;

typedef struct struct_4 {
    unsigned int field_0;
} struct_4;

typedef struct struct_5 {
    unsigned int field_0;
} struct_5;

typedef struct struct_7 {
    unsigned int field_0;
} struct_7;

extern char g_1000e2d00;
extern long long g_1000e2d10;
extern unsigned long long g_1000e2d28;
extern char g_1000e2d30;
extern char g_1000e2d38;
extern unsigned int g_1000e2d3c;
extern char g_1000e2d40;

int sub_1000534c0(void)
{
    unsigned long v5;  // r15, Other Possible Types: unsigned int
    unsigned int v6;  // r15d
    unsigned int *ptr4;  // rbp
    unsigned int v16;  // ecx
    unsigned long v17;  // rdi
    unsigned long long v18;  // rbx
    struct_0 *v19;  // rax
    unsigned long long v20;  // rcx
    unsigned int v21;  // eax
    struct_0 *v22;  // rcx
    unsigned long v23;  // rbp
    unsigned int i;  // r14d
    struct_1 *ptr;  // rsi
    struct_0 *v25;  // rax
    struct_9 *v26;  // rbx
    unsigned int v27;  // r14d
    unsigned int *v28;  // rax
    struct_6 *ptr7;  // r8
    unsigned int j;  // edx
    unsigned int *addr;  // r12
    struct_0 *v32;  // rcx
    struct_6 *ptr3;  // rdi
    struct_0 *v8;  // rcx
    struct_6 *ptr5;  // r8
    unsigned int v35;  // ecx
    unsigned long long v36;  // r13
    unsigned int v37;  // ecx
    unsigned int v38;  // eax
    int v9;  // r13d
    struct_8 *v10;  // rcx
    unsigned long v11;  // rdx
    unsigned int flag;  // r8d
    unsigned int *ptr6;  // r9
    unsigned int v14;  // ecx
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    struct_3 *p;  // [bp-0x30], Other Possible Types: struct_6 *
    unsigned int *v4;  // [bp+0x28]

    v6 = _INSERT(v5, 0, 0);
    v0 = v6;
    ptr = sub_10005337c();
    if (!ptr)
        return;
    if (g_1000e2d3c)
    {
        if (g_1000e2d00)
        {
            if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (1 & g_1000e2d38))
                goto LABEL_10005356a;
        }
        else
        {
            if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
            {
LABEL_10005356a:
                sub_1000531fc(g_1000e2d10, "1", sub_10000d338); /* do not return */
            }
        }
    }
    v8 = ptr->field_18;
    ptr->field_48 = ptr->field_48 + 1;
    if ((int)sub_100058184(v8, v8->field_0 & 268435455, &p) < 0)
        return;
    ptr->field_54 = ptr->field_54 + 1;
    v9 = ptr->field_44;
    p->field_11 = 1;
    p->field_14 = 4294967295;
    p->field_0 = v10;
    p->field_8 = v11;
    p->field_10 = flag;
    p->field_30 = p->field_0->field_28;
    p->field_0->field_28 = v9;
    v14 = *(ptr6);
    if ((v14 & 4294967168) != 4294967168)
        *(ptr6) = (v14 & 4294967168) + 128 ^ v14 & 127;
    ptr4 = v4;
    p->field_18 = ptr6;
    if (flag == 1)
    {
        v16 = *(ptr4);
        if ((v16 & 4294967168) != 4294967168)
            *(ptr4) = (v16 & 4294967168) + 128 ^ v16 & 127;
        p->field_20 = ptr4;
    }
    else
    {
        p->field_20 = NULL;
    }
    v17 = ptr->field_44;
    if ((unsigned int)v17 < (ptr->field_18->field_0 & 268435455))
    {
        v18 = v17 * 56;
        do
        {
            v19 = ptr->field_18;
            v20 = ((v19->field_0 >> 28 & 1) ? v19->field_8 : (struct struct_0 *)&v19->field_8);
            v21 = sub_100054744(*((long long *)(v18 + v20)), *((long long *)(v18 + v20 + 8)), *((char *)(v18 + v20 + 16)), &p, v9, ptr4, ptr);
            v22 = ptr->field_18;
            v6 = (v21 < 0 ? 1 : v6 & 255);
            v17 += 1;
            v18 += 56;
            *((struct_3 **)(v18 + ((v22->field_0 >> 28 & 1) ? v22->field_8 : (struct struct_0 *)&v22->field_8) - 16)) = p;
        } while ((unsigned int)v17 < (ptr->field_18->field_0 & 268435455));
        v0 = v6;
    }
    v23 = ptr->field_44 + 1;
    i = ptr->field_18->field_0 & 268435455;
    v1 = i;
    if ((unsigned int)v23 < i)
    {
        do
        {
            v25 = ptr->field_18;
            v26 = (v23 & 4294967295) * 56 + ((v25->field_0 >> 28 & 1) ? v25->field_8 : (struct struct_0 *)&v25->field_8);
            v27 = i;
            if (v26->field_11 > 0)
            {
                v27 = i;
                if (v26->field_14 == 4294967295)
                {
                    v27 = i;
                    if (!v26->field_18)
                    {
                        v28 = sub_100056254(v26->field_0, v26->field_8, v26->field_10, 0);
                        ptr7 = NULL;
                        j = *((int *)(v26->field_0 + 40));
                        p = NULL;
                        v5 = 4294967295;
                        addr = v28;
                        do
                        {
                            v32 = ptr->field_18;
                            ptr3 = j * 56 + ((v32->field_0 >> 28 & 1) ? v32->field_8 : (struct struct_0 *)&v32->field_8);
                            ptr5 = ptr7;
                            if (ptr3->padding_0[16] == v26->field_10)
                            {
                                ptr5 = ptr7;
                                if (*((long long *)&ptr3->padding_0[8]) == v26->field_8)
                                {
                                    if (v5 == 4294967295)
                                    {
                                        ptr3->field_18 = addr;
                                        v35 = *(addr);
                                        p = ptr3;
                                        v5 = j;
                                        ptr5 = ptr3;
                                        if ((v35 & 4294967168) != 4294967168)
                                        {
                                            *(addr) = (v35 & 4294967168) + 128 ^ v35 & 127;
                                            v5 = j;
                                            ptr5 = ptr3;
                                        }
                                    }
                                    else
                                    {
                                        v36 = 0;
                                        ptr3->field_14 = v5;
                                        ptr7->field_11 = ptr7->field_11 + 1;
                                        if (ptr3->field_2c > 0)
                                        {
                                            do
                                            {
                                                sub_100053fb4(v36 + ptr3->field_28, ptr);
                                                v36 += 1;
                                            } while ((unsigned int)v36 < ptr3->field_2c);
                                            ptr7 = p;
                                        }
                                        ptr3->field_2c = 0;
                                        ptr5 = ptr7;
                                    }
                                }
                            }
                            ptr7 = ptr5;
                            j = ptr3->field_30;
                        } while (j >= (unsigned int)v23);
                        v37 = *(addr);
                        v27 = v1;
                        if ((v37 & 4294967168) != 4294967168)
                        {
                            v38 = (v37 & 4294967168) - 1 ^ ~(v37) & 127;
                            *(addr) = v38;
                            v27 = v1;
                            if (!(v38 & 4294967168))
                                sub_100059224(addr); /* do not return */
                        }
                    }
                }
            }
            i = v27;
            v23 += 1;
        } while ((unsigned int)v23 < i);
    }
    if (!g_1000e2d3c)
        return;
    if (g_1000e2d00)
    {
        if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (1 & g_1000e2d38))
            goto LABEL_1000538ae;
    }
    else
    {
        if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
        {
LABEL_1000538ae:
            sub_1000531fc(g_1000e2d10, "2", sub_10000d338); /* do not return */
        }
    }
    return;
}
