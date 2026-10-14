/* sub_1000153b0 @ 0x1000153b0
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x1000153b0  (441 bytes, 41 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_8 {
    char padding_0[72];
    struct struct_5 *field_48;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
    unsigned int field_8;
    char padding_c[4];
    unsigned int field_10;
    char padding_14[4];
    unsigned int *field_18;
} struct_9;

typedef struct struct_16 {
    char padding_0[8];
    struct struct_13 *field_8;
    char padding_10[16];
    struct struct_17 *field_20;
    struct struct_18 *field_28;
    unsigned long long field_30;
    unsigned int field_38;
} struct_16;

typedef struct struct_11 {
    char padding_0[24];
    struct struct_12 *field_18;
} struct_11;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_0 *field_8;
    char padding_10[16];
    struct struct_6 *field_20;
    struct struct_7 *field_28;
    unsigned long long field_30;
    unsigned int field_38;
} struct_5;

typedef struct struct_13 {
    char padding_0[8];
    struct struct_14 *field_8;
    char padding_10[8];
    struct struct_15 *field_18;
} struct_13;

typedef struct struct_17 {
    struct struct_11 *field_0;
} struct_17;

typedef struct struct_18 {
    unsigned long long field_0;
} struct_18;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    char padding_10[8];
    struct struct_2 *field_18;
} struct_0;

typedef struct struct_6 {
    struct struct_3 *field_0;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    char padding_0[24];
    struct struct_4 *field_18;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_10 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_10;

extern long long g_100001958;
extern struct_10 *g_10001c260;

unsigned long long sub_1000153b0(struct_8 *p, unsigned long a1, unsigned int a2, unsigned long long a3, struct_9 *a4, unsigned long long *ptr, unsigned int a6)
{
    struct_8 *v3;  // rdi
    unsigned long long v13;  // r9
    unsigned long v14;  // rcx
    unsigned long long v15;  // rdx
    unsigned long v16;  // rcx
    struct_16 *addr;  // rbx
    unsigned long long pos;  // rax
    unsigned long long *v7;  // rdx
    unsigned long v8;  // rax
    char *v9;  // r9
    unsigned long v10;  // r8
    unsigned long v11;  // rdx
    struct_11 **v12;  // rcx
    unsigned long flag;  // [bp-0x18]
    unsigned long i;  // [bp-0x10]

    v3 = p;
    if (a6)
        return 0;
    if (a2 == 1031)
    {
        if (!a4)
        {
            if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 4))
                sub_1000041c8(g_10001c260->field_10, 10, &g_100001958); /* do not return */
            *(ptr) = 1;
        }
        else
        {
            if (p->field_48)
                sub_100016564(p->field_48, a4->field_0, a4->field_8, a4->field_10, a4->field_18);
            4296017328();
        }
    }
    else
    {
        if (a2 == 1032)
        {
            *(ptr) = (!p->field_48 ? 1 : sub_1000155ec());
        }
        else if (a2 == 1033)
        {
            addr = p->field_48;
            if (addr)
            {
                if (addr->field_30 && !((pos = 0, addr->field_38 <= 0)))
                {
                    v7 = &addr->field_28->field_0;
                    do
                    {
                        if (*(v7))
                        {
                            v8 = addr->field_28[pos].field_0;
                            goto LABEL_1000154cd;
                        }
                    } while ((pos = (unsigned long long)((unsigned int)pos + 1), v7 += 8, (unsigned int)pos < addr->field_38));
                }
                v8 = 0;
LABEL_1000154cd:
                flag = 0;
                i = v8;
                if (v8)
                {
                    do
                    {
                        v9 = &flag;
                        v10 = &a6;
                        sub_10001747c(&addr->field_28, &i, &a6, &flag);
                        v11 = flag;
                        if (flag)
                        {
                            v12 = addr->field_20;
                            addr->field_20->field_0->field_18();
                        }
                    } while (i);
                }
            }
            *(ptr) = 1;
        }
        else if (a2 == 275)
        {
            if (p->field_48)
            {
                v13 = a3 - 10;
                if (a3 == 10)
                {
                    v15 = 4294967295;
                    v16 = &p->field_48->field_8;
                    p->field_48->field_8->field_18();
                }
                else if (a3 == 11)
                {
                    v14 = &p->field_48->field_8;
                    p->field_48->field_8->field_8();
                }
            }
            *(ptr) = 0;
            return 0;
        }
        else
        {
            return 0;
        }
    }
    return 1;
}
