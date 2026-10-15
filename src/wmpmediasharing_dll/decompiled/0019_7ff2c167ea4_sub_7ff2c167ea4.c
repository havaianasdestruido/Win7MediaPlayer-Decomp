/* sub_7ff2c167ea4 @ 0x7ff2c167ea4
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c167ea4  (480 bytes, 37 basic blocks)
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
    char padding_0[16];
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff2c161948;
extern long long g_7ff2c161958;
extern long long g_7ff2c161a50;
extern struct_0 *g_7ff2c182e68;
extern struct_5 *g_7ff2c183250;
extern long long g_7ff2c183d20;
extern unsigned long long g_7ff2c183d38;
extern char g_7ff2c183d40;
extern unsigned int g_7ff2c183d4c;
extern char g_7ff2c183d50;

unsigned long long sub_7ff2c167ea4(unsigned long a0, long long a1)
{
    long long v3;  // rdi
    unsigned long long v4;  // rsi
    struct_3 **v5;  // rcx
    struct_1 **v6;  // rcx
    struct_3 **choice;  // [bp+0x10]
    struct_1 **flag;  // [bp+0x18]

    v3 = a1;
    if (g_7ff2c183d4c && (g_7ff2c183d50 >= 4 || !g_7ff2c183d50) && (0x8000000000000000 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
        sub_7ff2c1641d4(g_7ff2c183d20, &g_7ff2c161948, 0, 0); /* do not return */
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= 5)
        sub_7ff2c164de8(g_7ff2c182e68->field_10, 80, &g_7ff2c161a50, a1); /* do not return */
    flag = NULL;
    choice = NULL;
    if (a1)
        g_7ff2c183250();
    if (g_7ff2c182e68 != &g_7ff2c182e68)
    {
        v4 = 2;
        if ((2 & g_7ff2c182e68->field_1c) && g_7ff2c182e68->field_19 >= 2)
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 81, &g_7ff2c161a50, 2147500035); /* do not return */
        if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1))
        {
            v4 = (1 ? 5 : 2);
            if (g_7ff2c182e68->field_19 >= (unsigned int)v4)
                sub_7ff2c164ccc(g_7ff2c182e68->field_10, 83, &g_7ff2c161a50, 2147500035, (1 ? 0 : *((long long *)0))); /* do not return */
        }
    }
    if (g_7ff2c183d4c && (g_7ff2c183d50 >= 4 || !g_7ff2c183d50) && (0x8000000000000000 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
        sub_7ff2c1641d4(g_7ff2c183d20, &g_7ff2c161958); /* do not return */
    v5 = choice;
    if (choice)
        *(choice)->field_10();
    v6 = flag;
    if (!flag)
        return 2147500035;
    *(flag)->field_10();
}
