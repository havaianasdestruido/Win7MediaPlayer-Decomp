/* sub_1000538f8 @ 0x1000538f8
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000538f8  (768 bytes, 67 basic blocks)
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
    char padding_20[32];
    unsigned int field_40;
    unsigned int field_44;
    unsigned int field_48;
    char padding_4c[8];
    unsigned int field_54;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_0;

typedef struct struct_8 {
    long long field_0;
    struct struct_3 *field_8;
    char field_10;
    char field_11;
    char padding_12[2];
    int field_14;
    void* field_18;
    struct struct_7 *field_20;
} struct_8;

typedef struct struct_7 {
    char padding_0[8];
    struct struct_6 *field_8;
} struct_7;

typedef struct struct_6 {
    struct struct_4 *field_0;
    char padding_8[56];
    struct struct_6 *field_40;
} struct_6;

typedef struct struct_18 {
    struct struct_16 *field_0;
    char padding_8[56];
    struct struct_18 *field_40;
} struct_18;

typedef struct struct_12 {
    struct struct_11 *field_0;
    struct struct_13 *field_8;
    char padding_10[1];
    char field_11;
    char padding_12[14];
    unsigned long long field_20;
} struct_12;

typedef struct struct_11 {
    struct struct_9 *field_0;
    char padding_8[32];
    unsigned int field_28;
} struct_11;

typedef struct struct_15 {
    struct struct_14 *field_0;
} struct_15;

typedef struct struct_3 {
    char padding_0[40];
    struct struct_2 *field_28;
} struct_3;

typedef struct struct_4 {
    char padding_0[256];
    struct struct_5 *field_100;
} struct_4;

typedef struct struct_16 {
    char padding_0[256];
    struct struct_17 *field_100;
} struct_16;

typedef struct struct_13 {
    char padding_0[8];
    unsigned int field_8;
    unsigned int field_c;
} struct_13;

typedef struct struct_9 {
    char padding_0[296];
    struct struct_10 *field_128;
} struct_9;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_2 {
    char padding_0[12];
    unsigned int field_c;
} struct_2;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_17 {
    unsigned long long field_0;
} struct_17;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

extern long long g_10000d2e8;
extern char g_10000d5f8;
extern char g_10000d618;
extern unsigned int g_1000e2ce8;
extern struct_15 *g_1000e2cf0;
extern struct_15 *g_1000e2cf8;
extern char g_1000e2d00;
extern long long g_1000e2d10;
extern unsigned long long g_1000e2d28;
extern char g_1000e2d30;
extern char g_1000e2d38;
extern unsigned int g_1000e2d3c;
extern char g_1000e2d40;

int sub_1000538f8(void)
{
    struct_1 *ptr;  // rbx
    long long v4;  // rcx
    struct_7 *v13;  // rdx
    struct_6 *ptr5;  // rcx
    struct_18 *cur;  // rax
    struct_0 *v16;  // rax
    struct_12 *addr;  // rdi
    struct_11 *ptr7;  // rcx
    struct_0 *ptr6;  // rdi
    unsigned int v20;  // eax
    unsigned int v21;  // esi
    unsigned long v22;  // rsi
    unsigned int ptr4[22];  // rax
    struct_15 **v23;  // rcx
    struct_0 *v24;  // rdx
    unsigned int v6;  // r13d
    unsigned int i;  // esi
    long long v8;  // r8
    char *v9;  // r9
    struct_0 *v10;  // rax
    struct_8 *p;  // rdi
    unsigned int v12;  // 4099
    unsigned long v0;  // [bp-0x38]
    unsigned int v2;  // [bp+0x10]

    ptr = sub_10005337c();
    if (!ptr)
        return;
    ptr4 = sub_10005337c(v4);
    if (ptr4)
    {
        ptr4[12] = ptr4[12] + 1;
        ptr4[21] = ptr4[21] + 1;
        v6 = 2882400066;
    }
    else
    {
        v6 = v2;
    }
    i = ptr->field_18->field_0 & 268435455;
    while (ptr->field_44 < i)
    {
        v10 = ptr->field_18;
        p = ptr->field_44 * 56 + ((v10->field_0 >> 28 & 1) ? v10->field_8 : (struct struct_0 *)&v10->field_8);
        if (p->field_11 <= 0)
        {
            ptr->field_44 = ptr->field_44 + 1;
        }
        else if (p->field_14 >= 0)
        {
            p->field_11 = 0;
            v12 = ptr->field_54;
            ptr->field_54 = ptr->field_54 - 1;
            if (!v12 + 4294967295)
                sub_10007a114(ptr); /* do not return */
            ptr->field_44 = ptr->field_44 + 1;
        }
        else
        {
            if (!p->field_20)
            {
                v8 = p->field_10;
                v9 = &v2;
                p->field_20 = sub_100056254(p->field_0, p->field_8, v8, &v2);
            }
            v13 = p->field_20;
            if (sub_1000593f0(p->field_18, p->field_20))
            {
                p->field_11 = 1;
                sub_100053fb4(ptr->field_44, ptr);
                ptr->field_44 = ptr->field_44 + 1;
            }
            else if (!p->field_8->field_28->field_c)
            {
                ptr5 = p->field_20->field_8;
                if (ptr5)
                {
                    for (cur = ptr5->field_40; cur; cur = cur->field_40)
                    {
                        ptr5 = cur;
                    }
                    ptr5->field_0->field_100();
                }
                else
                {
                    ptr->field_44 = ptr->field_44 + 1;
                }
            }
            else
            {
                ptr->field_44 = ptr->field_44 + 1;
            }
        }
    }
    if (ptr->field_48 != 1)
    {
        ptr->field_48 = ptr->field_48 - 1;
        sub_10005343c(v4, v6);
        return;
    }
    if (g_1000e2d3c)
    {
        if (g_1000e2d00)
        {
            if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (g_1000e2d38 & 1))
                goto LABEL_100053aaf;
        }
        else
        {
            if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
            {
LABEL_100053aaf:
                sub_1000531fc(g_1000e2d10, "/", &g_10000d2e8); /* do not return */
            }
        }
    }
    if (ptr->field_40 < (ptr->field_18->field_0 & 268435455))
    {
        do
        {
            v16 = ptr->field_18;
            addr = ptr->field_40 * 56 + ((v16->field_0 >> 28 & 1) ? v16->field_8 : (struct struct_0 *)&v16->field_8);
            if (addr->field_11 > 0)
            {
                if (((char)addr->field_8->field_8 & 3) == addr->padding_10)
                    sub_100053d44(addr->field_0, addr->field_8->field_c, ptr);
                v0 = addr->field_20;
                addr->field_0->field_0->field_128();
            }
            ptr7 = addr->field_0;
            if (ptr7 && ptr->field_40 == ptr7->field_28)
                ptr7->field_28 = 4294967295;
            ptr->field_40 = ptr->field_40 + 1;
        } while (ptr->field_40 < (ptr->field_18->field_0 & 268435455));
    }
    ptr6 = ptr->field_18;
    v20 = g_1000e2ce8;
    v21 = ptr6->field_0;
    ptr->field_40 = 0;
    ptr->field_44 = 0;
    v22 = v21 & 268435455;
    if (((char)(ptr6->field_0 >> 28) & 1))
    {
        if (!((char)v20 & 1))
        {
            g_1000e2ce8 = v20 | 1;
            g_1000e2cf8 = &g_10000d5f8;
        }
        v23 = &g_1000e2cf8;
    }
    else
    {
        if (!((char)v20 & 2))
        {
            g_1000e2ce8 = v20 | 2;
            g_1000e2cf0 = &g_10000d618;
        }
        v23 = &g_1000e2cf0;
    }
    v24 = ptr6;
    *(v23)->field_0();
}
