/* sub_100002d98 @ 0x100002d98
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100002d98  (161 bytes, 16 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 10888bb9c3799e1e8b010c0f9088ced376aad63a509fce1727c457b022cdc717
 *   Evidence: analysis/report/rea-evidence/wmpnscfg_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    struct struct_0 *field_0;
    char padding_8[8];
    unsigned int field_10;
} struct_2;

typedef struct struct_5 {
    struct struct_3 *field_0;
    char padding_8[8];
    unsigned int field_10;
} struct_5;

typedef struct struct_8 {
    char padding_0[64];
    struct struct_9 *field_40;
} struct_8;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_6 {
    char padding_0[32];
    struct struct_5 *field_20;
    char padding_28[24];
    struct struct_7 *field_40;
} struct_6;

typedef struct struct_10 {
    struct struct_8 *field_0;
} struct_10;

extern struct_10 *g_10000b2d0;
extern char g_10000b2d8;
extern long long g_10000b9c0;
extern struct_6 *g_10000ba08;
extern struct_2 *g_10000ba18;

long long sub_100002d98(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10)
{
    struct_2 *v1;  // rsi
    struct_5 *v2;  // rcx
    unsigned long long flag;  // rcx
    struct_8 **cur;  // rbx
    struct_8 *v5;  // rdx

    if (g_10000ba18 == v1)
    {
        if (g_10000ba08 != v1 && *((long long *)&g_10000ba08->padding_0[0]) != v1)
        {
            v2 = g_10000ba08->field_20;
            if (g_10000ba08->field_20 == v1)
            {
                g_10000ba08->field_20 = v1;
                flag = 0;
                g_10000ba08->field_40();
            }
            g_10000ba08->field_20->field_0->field_10();
        }
        cur = g_10000b2d0;
        if (g_10000b2d0 >= *((long long *)&g_10000b2d8))
            return sub_100003268(&g_10000b9c0);
        do
        {
            v5 = *(cur);
            if (*(cur) != v1)
                *(cur)->field_40();
        } while ((cur += 8, cur < *((long long *)&g_10000b2d8)));
        return sub_100003268(&g_10000b9c0);
    }
    else if (g_10000ba18->field_0 != v1)
    {
        4296015904();
    }
    else if (g_10000ba18->padding_8 != v1)
    {
        4296015904();
    }
    else
    {
        g_10000ba18->field_10 = (unsigned int)v1;
        4294998524();
    }
}
