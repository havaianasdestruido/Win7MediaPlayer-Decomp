/* sub_7ff2c166a7b @ 0x7ff2c166a7b
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c166a7b  (312 bytes, 21 basic blocks)
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

typedef struct struct_3 {
    struct struct_4 *field_0;
    char padding_8[8];
    unsigned int field_10;
} struct_3;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_7ff2c1619b8;
extern long long g_7ff2c161a50;
extern struct_0 *g_7ff2c182e68;
extern long long g_7ff2c183d20;
extern unsigned long long g_7ff2c183d38;
extern char g_7ff2c183d40;
extern unsigned int g_7ff2c183d4c;
extern char g_7ff2c183d50;

long long sub_7ff2c166a7b(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long flag3, unsigned long flag, unsigned long choice, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long flag2, unsigned long a18)
{
    struct_3 *v1;  // rax
    int v2;  // edi
    struct_1 *v11;  // r8
    long long v3;  // rbp
    struct_0 *v4;  // r15
    unsigned int v5;  // r12d
    unsigned long long *v6;  // rsi
    unsigned long v7;  // r14
    long long *ptr;  // rsi
    struct_3 *p;  // rdx
    struct_1 **v10;  // rcx

    a16 = (char *)&v1[1].field_0 + 4;
    if (v2 >= 0)
    {
        flag = 0;
        choice = 0;
        flag2 = 0;
        flag3 = 0;
        8792538349936();
    }
    v3 = L"<NULL>";
    if (g_7ff2c182e68 != v4 && (g_7ff2c182e68->field_1c & 1))
    {
        if (v2 >= 0)
            v5 = 5;
        if (g_7ff2c182e68->field_19 >= v5)
            sub_7ff2c164b78(g_7ff2c182e68->field_10, 61, &g_7ff2c161a50, v2, (!v6 ? L"<NULL>" : *(v6))); /* do not return */
    }
    if (g_7ff2c183d4c && (g_7ff2c183d50 >= 4 || !g_7ff2c183d50) && (v7 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & v7) == *((long long *)&g_7ff2c183d40))
    {
        if (ptr)
            v3 = *(ptr);
        sub_7ff2c163fd4(g_7ff2c183d20, &g_7ff2c1619b8, v3, v2); /* do not return */
    }
    p = (char *)&a16[1].field_0 + 4;
    InterlockedExchangeAdd(&p->field_10, 4294967295);
    if (p->field_10 - 1 > 0)
        return v2;
    v10 = p->field_0;
    v11 = p->field_0->field_0;
    p->field_0->field_0->field_8();
}
