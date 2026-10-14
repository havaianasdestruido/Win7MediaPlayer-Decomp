/* sub_10000281a @ 0x10000281a
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x10000281a  (188 bytes, 14 basic blocks)
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

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
} struct_5;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

extern long long g_1000018f0;
extern struct_0 *g_10000b160;
extern long long g_10000b9c0;

long long sub_10000281a(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, void* a10, unsigned long a11, void* a12)
{
    int v1;  // eax
    unsigned long v2;  // rsi
    void* ptr;  // rdx
    struct_3 **v12;  // rcx
    void* p;  // rdx
    struct_5 **v14;  // rcx
    struct_0 *v3;  // r14
    unsigned long v4;  // r13
    long long v5;  // r15
    unsigned long v6;  // rbx
    void* v7;  // rdi
    void* addr;  // rdx
    unsigned long long v9;  // rdi
    struct_1 **v10;  // rcx

    v2 = v1;
    if (g_10000b160 != v3 && (g_10000b160->field_1c & 2) && g_10000b160->field_19 >= 4)
        sub_10000205c(g_10000b160->field_10, 14, &g_1000018f0, v1); /* do not return */
    if (v1 >= (unsigned int)v4)
        sub_100002e58(&g_10000b9c0, 0, v5, 0); /* do not return */
    if (v6 != v4)
        4296016632();
    addr = v7 - 24;
    v9 = 18446744073709551615;
    InterlockedExchangeAdd(addr + 16, 4294967295);
    if ((int)addr[16] + 4294967295 <= (unsigned int)v4)
    {
        v10 = *((long long *)addr);
        (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
    }
    ptr = a12 - 24;
    InterlockedExchangeAdd(ptr + 16, 4294967295);
    if ((int)ptr[16] + 18446744073709551615 > (unsigned int)v4)
    {
        p = a10 - 24;
        InterlockedExchangeAdd(p + 16, 4294967295);
        if ((int)p[16] + 18446744073709551615 > (unsigned int)v4)
            goto LABEL_0x100002ae0;
        v14 = *((long long *)p);
        (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
    }
    v12 = *((long long *)ptr);
    (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
}
