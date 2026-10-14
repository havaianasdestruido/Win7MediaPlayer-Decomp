/* sub_7ff24f94cf4 @ 0x7ff24f94cf4
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f94cf4  (286 bytes, 20 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
    struct struct_6 *field_10;
    unsigned int field_18;
    unsigned int field_1c;
    unsigned int field_20;
    char padding_24[20];
    unsigned long long field_38;
} struct_4;

typedef struct struct_9 {
    char padding_0[56];
    struct struct_10 *field_38;
} struct_9;

typedef struct struct_7 {
    char padding_0[72];
    struct struct_8 *field_48;
} struct_7;

typedef struct struct_5 {
    struct struct_0 *field_0;
} struct_5;

typedef struct struct_6 {
    struct struct_2 *field_0;
} struct_6;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_0 {
    char padding_0[56];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_2 {
    char padding_0[72];
    struct struct_3 *field_48;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern long long g_7ff24f914f0;
extern long long g_7ff24f91520;
extern long long g_7ff24f986c0;
extern unsigned long long g_7ff24f986d8;
extern char g_7ff24f986e0;
extern unsigned int g_7ff24f986ec;
extern char g_7ff24f986f0;

unsigned long long sub_7ff24f94cf4(struct_4 *ptr)
{
    struct_4 *v1;  // rdi
    struct_7 **v2;  // rcx
    struct_7 *v3;  // r8
    unsigned long v4;  // rdx
    struct_9 **v5;  // rcx
    unsigned long v6;  // rdx

    v1 = ptr;
    if (!ptr->field_8)
    {
        return 2147500035;
    }
    else if (ptr->field_10)
    {
        if (ptr->field_1c && ptr->field_20)
        {
            if (g_7ff24f986ec && (g_7ff24f986f0 >= 4 || !g_7ff24f986f0) && (0x8000000000000000 & g_7ff24f986d8) && (*((long long *)&g_7ff24f986e0) & 0x8000000000000000) == *((long long *)&g_7ff24f986e0))
                sub_7ff24f92b84(g_7ff24f986c0, &g_7ff24f914f0, ptr->field_18, 0); /* do not return */
            v2 = ptr->field_10;
            v3 = ptr->field_10->field_0;
            v4 = -(0 < ptr->field_18) + 2;
            ptr->field_10->field_0->field_48();
        }
        if (g_7ff24f986ec && (g_7ff24f986f0 >= 4 || !g_7ff24f986f0) && (0x8000000000000000 & g_7ff24f986d8) && (*((long long *)&g_7ff24f986e0) & 0x8000000000000000) == *((long long *)&g_7ff24f986e0))
            sub_7ff24f923c8(g_7ff24f986c0, &g_7ff24f91520, 0); /* do not return */
        v5 = ptr->field_8;
        v6 = ptr->field_38;
        ptr->field_8->field_0->field_38();
    }
    else
    {
        return 2147500035;
    }
}
