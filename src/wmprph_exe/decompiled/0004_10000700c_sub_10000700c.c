/* sub_10000700c @ 0x10000700c
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x10000700c  (452 bytes, 38 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    char padding_0[64];
    struct struct_3 *field_40;
} struct_2;

typedef struct struct_4 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    char field_3c;
} struct_4;

typedef struct struct_5 {
    char padding_0[40];
    struct struct_6 *field_28;
} struct_5;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_0 {
    char padding_0[40];
    struct struct_1 *field_28;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_100001ed0;
extern struct_4 *g_100011140;

unsigned int sub_10000700c(struct_2 *p, unsigned long a1, unsigned int a2, unsigned long a3, unsigned long a4, unsigned long long *ptr, unsigned int a6)
{
    struct_2 *v2;  // rsi
    struct_4 **v3;  // rdi
    struct_5 **v4;  // rcx
    unsigned long long v5;  // rax
    unsigned long v0;  // [bp-0x18]

    v2 = p;
    if (a6)
    {
        return 0;
    }
    else if (a2 == 0x400)
    {
        v3 = &g_100011140;
        if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
            sub_1000071f4(g_100011140->field_30, 40, &g_100001ed0); /* do not return */
        if (p->field_40)
        {
            v4 = p->field_40;
            p->field_40->field_0->field_28();
        }
        if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
            sub_1000071f4(g_100011140->field_30, 41, &g_100001ed0); /* do not return */
        *(ptr) = 0;
        return 1;
    }
    else if (a2 == 1025)
    {
        if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
            sub_1000071f4(g_100011140->field_30, 42, &g_100001ed0); /* do not return */
        if (p->field_40)
            sub_1000086cc(p->field_40); /* do not return */
        if (g_100011140 != &g_100011140 && (g_100011140->field_3c & 1) && g_100011140->field_39 >= 5)
            sub_1000071f4(g_100011140->field_30, 43, &g_100001ed0); /* do not return */
        *(ptr) = 0;
        return 1;
    }
    else
    {
        if (a2 == 32)
        {
            v0 = &a6;
            a6 = 1;
            v5 = sub_100008b48(p);
        }
        else
        {
            if (a2 != 0x100 && a2 != 260 && a2 != 257 && a2 != 261)
                return 0;
            v0 = &a6;
            a6 = 1;
            v5 = sub_100008c7c(p);
        }
        *(ptr) = v5;
        if (!a6)
            return 0;
        return 1;
    }
}
