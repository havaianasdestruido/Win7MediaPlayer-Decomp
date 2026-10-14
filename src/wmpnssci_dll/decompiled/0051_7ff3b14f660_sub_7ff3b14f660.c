/* sub_7ff3b14f660 @ 0x7ff3b14f660
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b14f660  (383 bytes, 29 basic blocks)
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

typedef struct struct_1 {
    char padding_0[112];
    unsigned long long field_70;
    unsigned long long field_78;
    int field_80;
    char padding_84[216];
    unsigned int field_15c;
} struct_1;

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[8];
    struct struct_5 *field_10;
} struct_3;

typedef struct struct_10 {
    char padding_0[32];
    struct struct_11 *field_20;
    struct struct_12 *field_28;
} struct_10;

typedef struct struct_9 {
    struct struct_6 *field_0;
} struct_9;

typedef struct struct_14 {
    char padding_0[32];
    struct struct_15 *field_20;
} struct_14;

typedef struct struct_16 {
    char padding_0[16];
    struct struct_17 *field_10;
} struct_16;

typedef struct struct_18 {
    char padding_0[16];
    struct struct_19 *field_10;
} struct_18;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_6 {
    struct struct_7 *field_0;
    char padding_8[8];
    struct struct_8 *field_10;
} struct_6;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_17 {
    unsigned long long field_0;
} struct_17;

typedef struct struct_19 {
    unsigned long long field_0;
} struct_19;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_0;

typedef struct struct_13 {
    struct struct_10 *field_0;
} struct_13;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_7ff3b131ed0;
extern unsigned long long g_7ff3b132cd8;
extern struct_0 *g_7ff3b17be78;
extern struct_2 *g_7ff3b17c8c8;
extern struct_13 *g_7ff3b17d388;

int sub_7ff3b14f660(void)
{
    struct_1 *ptr;  // rcx
    unsigned long v5;  // rdx
    struct_3 **v14;  // rcx
    struct_3 **p;  // rax
    unsigned long v20;  // rdx
    struct_3 **v21;  // rcx
    unsigned long v22;  // rdx
    struct_10 **v23;  // rcx
    struct_10 **v6;  // rcx
    struct_9 **v7;  // r9
    unsigned long long v8;  // r8
    unsigned long long flag;  // rcx
    struct_3 **addr;  // rax
    unsigned long v11;  // r9
    char *v12;  // r8
    unsigned long long v13;  // rdx
    unsigned long long v0;  // [bp-0x28]
    unsigned long choice;  // [bp+0x8]
    unsigned long flag3;  // [bp+0x10]
    struct_3 **flag4;  // [bp+0x18]

    v0 = 18446744073709551614;
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 1))
        sub_7ff3b134f88(g_7ff3b17be78->field_10, 130, &g_7ff3b131ed0); /* do not return */
    if (ptr->field_70)
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
        if (ptr->field_15c)
        {
            flag4 = NULL;
            v5 = ptr->field_15c;
            if (ptr->field_15c)
            {
                v6 = g_7ff3b17d388;
                v7 = &flag4;
                v8 = &g_7ff3b132cd8;
                g_7ff3b17d388->field_0->field_28();
            }
            flag = 0;
            choice = 0;
            addr = flag4;
            if (addr)
            {
                v11 = *(addr);
                v12 = &choice;
                v13 = sub_7ff3b133410;
                v14 = addr;
                *(v14)->field_0();
            }
            flag3 = 0;
            p = flag4;
            if (p)
            {
                v20 = *(p);
                v21 = p;
                *(v21)->field_10();
            }
        }
        v22 = ptr->field_15c;
        if (ptr->field_15c)
        {
            v23 = g_7ff3b17d388;
            g_7ff3b17d388->field_0->field_20();
        }
        else if (g_7ff3b17be78 == &g_7ff3b17be78)
        {
            return;
        }
        else if ((g_7ff3b17be78->field_1c & 1))
        {
            sub_7ff3b134f88(g_7ff3b17be78->field_10, 133, &g_7ff3b131ed0); /* do not return */
        }
        else
        {
            return;
        }
    }
}
