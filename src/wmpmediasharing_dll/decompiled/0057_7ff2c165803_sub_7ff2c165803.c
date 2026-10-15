/* sub_7ff2c165803 @ 0x7ff2c165803
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c165803  (287 bytes, 21 basic blocks)
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

extern long long g_7ff2c161a50;
extern struct_0 *g_7ff2c182e68;
extern long long g_7ff2c183d20;
extern unsigned long long g_7ff2c183d38;
extern char g_7ff2c183d40;
extern char g_7ff2c183d4c;
extern char g_7ff2c183d50;

long long sub_7ff2c165803(void)
{
    struct_3 *v4;  // rax
    int v5;  // edi
    struct_1 **v14;  // rcx
    struct_1 *v15;  // r8
    long long *v6;  // r13
    long long v7;  // rbp
    struct_0 *v8;  // r15
    unsigned int v9;  // r12d
    long long *v10;  // rsi
    unsigned long v11;  // r14
    long long *ptr;  // rsi
    struct_3 *p;  // rdx
    char v0;  // [bp+0x0]
    struct_3 *v2;  // [bp+0x30]
    unsigned long long v3;  // [bp+0x250]

    v2 = (char *)&v4[1].field_0 + 4;
    if (v5 >= (unsigned int)v6)
        sub_7ff2c168d98(L"DisplayName", &v2); /* do not return */
    v7 = L"<NULL>";
    if (g_7ff2c182e68 != v8 && (g_7ff2c182e68->field_1c & 1))
    {
        if ((unsigned int)v6 <= v5)
            v9 = 5;
        if (g_7ff2c182e68->field_19 >= v9)
            sub_7ff2c164b78(g_7ff2c182e68->field_10, 32, &g_7ff2c161a50, v5, (v10 == v6 ? L"<NULL>" : *(v10))); /* do not return */
    }
    if (*((int *)&g_7ff2c183d4c) != (unsigned int)v6 && (g_7ff2c183d50 >= 4 || g_7ff2c183d50 == *((char *)&v6)) && (v11 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & v11) == *((long long *)&g_7ff2c183d40))
    {
        if (ptr != v6)
            v7 = *(ptr);
        sub_7ff2c163fd4(g_7ff2c183d20, "i", v7, v5); /* do not return */
    }
    p = (char *)&v2[1].field_0 + 4;
    InterlockedExchangeAdd(&p->field_10, 4294967295);
    if (p->field_10 - 1 > (unsigned int)v6)
        return sub_7ff2c178780(v3 ^ &v0);
    v14 = p->field_0;
    v15 = p->field_0->field_0;
    p->field_0->field_0->field_8();
}
