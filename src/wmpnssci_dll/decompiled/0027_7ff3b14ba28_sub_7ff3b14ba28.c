/* sub_7ff3b14ba28 @ 0x7ff3b14ba28
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b14ba28  (533 bytes, 38 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_10 {
    char padding_0[80];
    char field_50;
    char padding_51[31];
    unsigned long long field_70;
    unsigned long long field_78;
    int field_80;
    char padding_84[12];
    void* field_90;
    char padding_98[8];
    void* field_a0;
    char padding_a8[8];
    void* field_b0;
    void* field_b8;
    char padding_c0[64];
    unsigned long long field_100;
    unsigned int field_108;
    unsigned int field_10c;
    unsigned long long field_110;
    unsigned int field_118;
    unsigned int field_11c;
    char padding_120[40];
    char field_148;
    char padding_149[19];
    unsigned int field_15c;
    char padding_160[8];
    struct struct_11 *field_168;
} struct_10;

typedef struct struct_12 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_12;

typedef struct struct_25 {
    char padding_0[16];
    struct struct_26 *field_10;
} struct_25;

typedef struct struct_13 {
    char padding_0[32];
    struct struct_14 *field_20;
} struct_13;

typedef struct struct_17 {
    char padding_0[8];
    struct struct_18 *field_8;
} struct_17;

typedef struct struct_19 {
    char padding_0[8];
    struct struct_20 *field_8;
} struct_19;

typedef struct struct_21 {
    char padding_0[8];
    struct struct_22 *field_8;
} struct_21;

typedef struct struct_23 {
    char padding_0[8];
    struct struct_24 *field_8;
} struct_23;

typedef struct struct_11 {
    struct struct_8 *field_0;
} struct_11;

typedef struct struct_26 {
    unsigned long long field_0;
} struct_26;

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_18 {
    unsigned long long field_0;
} struct_18;

typedef struct struct_20 {
    unsigned long long field_0;
} struct_20;

typedef struct struct_22 {
    unsigned long long field_0;
} struct_22;

typedef struct struct_24 {
    unsigned long long field_0;
} struct_24;

typedef struct struct_8 {
    char padding_0[16];
    struct struct_9 *field_10;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_16 {
    unsigned long long field_0;
} struct_16;

typedef struct struct_15 {
    struct struct_13 *field_0;
} struct_15;

extern long long g_7ff3b131ed0;
extern struct_12 *g_7ff3b17be78;
extern struct_16 *g_7ff3b17c8c8;
extern struct_15 *g_7ff3b17d388;

int sub_7ff3b14ba28(void)
{
    struct_10 *ptr;  // rcx
    struct_12 **v3;  // rdi
    struct_19 **v12;  // rcx
    unsigned long p;  // rdx
    struct_21 **v14;  // rcx
    unsigned long addr;  // rdx
    struct_23 **v16;  // rcx
    struct_10 *ptr5;  // rcx
    struct_25 **v4;  // rcx
    unsigned long v5;  // rdx
    struct_13 **v6;  // rcx
    struct_10 *ptr6;  // rcx
    unsigned long ptr3;  // rdx
    unsigned long long v9;  // rdi
    struct_17 **v10;  // rcx
    unsigned long ptr4;  // rdx
    unsigned long long v0;  // [bp-0x18]
    struct_10 *v1;  // [bp+0x8]

    v1 = ptr;
    v0 = 18446744073709551614;
    v3 = &g_7ff3b17be78;
    if (g_7ff3b17be78 != &g_7ff3b17be78)
    {
        if ((g_7ff3b17be78->field_1c & 1))
        {
            sub_7ff3b134f88(g_7ff3b17be78->field_10, 12, &g_7ff3b131ed0); /* do not return */
        }
        else if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 1))
        {
            sub_7ff3b134f88(g_7ff3b17be78->field_10, 13, &g_7ff3b131ed0); /* do not return */
        }
    }
    v4 = ptr->field_168;
    if (ptr->field_168)
        ptr->field_168->field_0->field_10();
    v5 = ptr->field_15c;
    if (ptr->field_15c)
    {
        v6 = g_7ff3b17d388;
        g_7ff3b17d388->field_0->field_20();
    }
    sub_7ff3b150eb0(&ptr->padding_c0[40], 10000);
    ptr6 = &ptr->padding_120;
    if (ptr6->padding_0[40])
    {
        ptr6->padding_0[40] = 0;
        8792790009232();
    }
    else if (ptr->field_110)
    {
        8792790007832();
    }
    else
    {
        ptr->field_118 = 0;
        ptr->field_11c = 0;
        if (ptr->field_100)
            8792790007832();
        ptr->field_108 = 0;
        ptr->field_10c = 0;
        sub_7ff3b15e33c(&ptr->padding_c0[16]);
        sub_7ff3b156bb0(&ptr->padding_c0);
        ptr3 = ptr->field_b8 - 24;
        v9 = 4294967295;
        InterlockedExchangeAdd(ptr3 + 16, 4294967295);
        if (*((int *)(ptr3 + 16)) + 4294967295 <= 0)
        {
            v10 = *((long long *)ptr3);
            (*((long long *)(*((long long *)*((long long *)ptr3)) + 8)))();
        }
        ptr4 = ptr->field_b0 - 24;
        InterlockedExchangeAdd(ptr4 + 16, 4294967295);
        if (*((int *)(ptr4 + 16)) + 4294967295 <= 0)
        {
            v12 = *((long long *)ptr4);
            (*((long long *)(*((long long *)*((long long *)ptr4)) + 8)))();
        }
        p = ptr->field_a0 - 24;
        InterlockedExchangeAdd(p + 16, 4294967295);
        if (*((int *)(p + 16)) + 4294967295 <= 0)
        {
            v14 = *((long long *)p);
            (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
        }
        addr = ptr->field_90 - 24;
        InterlockedExchangeAdd(addr + 16, 4294967295);
        if (*((int *)(addr + 16)) + 4294967295 <= 0)
        {
            v16 = *((long long *)addr);
            (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
        }
        else if (ptr->field_70)
        {
            if (ptr->field_80 > 0)
                g_7ff3b17c8c8();
            8792790007832();
        }
        else
        {
            if (ptr->field_78)
                8792790007832();
            ptr->field_80 = 0;
            sub_7ff3b1502bc(&ptr->padding_51[7]);
            ptr5 = &ptr->padding_0[40];
            if (!ptr5->padding_0[40])
                return;
            ptr5->padding_0[40] = 0;
            8792790009232();
        }
    }
}
