/* sub_7ff2c165ef4 @ 0x7ff2c165ef4
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c165ef4  (474 bytes, 34 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_3 {
    char padding_0[64];
    struct struct_4 *field_40;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff2c161a50;
extern struct_0 *g_7ff2c182e68;
extern long long g_7ff2c183d20;
extern unsigned long long g_7ff2c183d38;
extern char g_7ff2c183d40;
extern unsigned int g_7ff2c183d4c;
extern char g_7ff2c183d50;

unsigned long long sub_7ff2c165ef4(struct_3 **a0, unsigned short *ptr)
{
    unsigned short *v4;  // rdi
    unsigned int v5;  // ebp
    unsigned long long v6;  // rsi
    struct_1 **v7;  // rcx
    char *v8;  // rdx
    struct_3 **v9;  // rcx
    long long v0;  // [bp-0x48]
    unsigned short flag;  // [bp+0x10]
    struct_1 **choice;  // [bp+0x18]

    v4 = ptr;
    if (g_7ff2c183d4c && (g_7ff2c183d50 >= 4 || !g_7ff2c183d50) && (0x8000000000000000 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
        sub_7ff2c163f7c(g_7ff2c183d20, "p", 0, 0); /* do not return */
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= 5)
        sub_7ff2c164de8(g_7ff2c182e68->field_10, 40, &g_7ff2c161a50, ptr); /* do not return */
    v5 = 123;
    choice = NULL;
    flag = 0;
    v6 = 2;
    if (ptr)
    {
        v8 = &flag;
        v9 = a0;
        *(a0)->field_40();
    }
    if (g_7ff2c182e68 != &g_7ff2c182e68)
    {
        if ((2 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 2)
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 41, &g_7ff2c161a50, 2147500035); /* do not return */
        if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1))
        {
            v6 = (1 ? 5 : 2);
            if (g_7ff2c182e68->field_19 >= (unsigned int)v6)
            {
                *((unsigned int *)&v0) = (!ptr ? 123 : *(ptr));
                sub_7ff2c164c24(g_7ff2c182e68->field_10, 44, &g_7ff2c161a50, 2147500035, v0); /* do not return */
            }
        }
    }
    if (g_7ff2c183d4c && (g_7ff2c183d50 >= 4 || !g_7ff2c183d50) && (0x8000000000000000 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
    {
        if (ptr)
            v5 = 65535 == *(ptr);
        sub_7ff2c163f7c(g_7ff2c183d20, "q", v5, 2147500035); /* do not return */
    }
    v7 = choice;
    if (!choice)
        return 2147500035;
    *(choice)->field_10();
}
