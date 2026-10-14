/* sub_100006a40 @ 0x100006a40
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100006a40  (157 bytes, 9 basic blocks)
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

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
} struct_6;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
} struct_4;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern char g_100001d80;

long long sub_100006a40(void* *ptr)
{
    unsigned long addr;  // rdx
    unsigned long long v2;  // rdi
    struct_6 **v3;  // rcx
    unsigned long ptr3;  // rdx
    struct_4 **v5;  // rcx
    unsigned long ptr4;  // rdx
    struct_2 **v7;  // rcx
    unsigned long p;  // rdx
    unsigned long v9;  // rax
    struct_0 **v10;  // rcx

    addr = ptr[14] - 24;
    v2 = 4294967295;
    *(ptr) = &g_100001d80;
    InterlockedExchangeAdd(addr + 16, 4294967295);
    if (*((int *)(addr + 16)) + 4294967295 <= 0)
    {
        v3 = *((long long *)addr);
        (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
    }
    ptr3 = ptr[13] - 24;
    InterlockedExchangeAdd(ptr3 + 16, 4294967295);
    if (*((int *)(ptr3 + 16)) + 4294967295 <= 0)
    {
        v5 = *((long long *)ptr3);
        (*((long long *)(*((long long *)*((long long *)ptr3)) + 8)))();
    }
    ptr4 = ptr[12] - 24;
    InterlockedExchangeAdd(ptr4 + 16, 4294967295);
    if (*((int *)(ptr4 + 16)) + 4294967295 <= 0)
    {
        v7 = *((long long *)ptr4);
        (*((long long *)(*((long long *)*((long long *)ptr4)) + 8)))();
    }
    p = ptr[11] - 24;
    InterlockedExchangeAdd(p + 16, 4294967295);
    v9 = *((int *)(p + 16)) + 4294967295;
    if ((unsigned int)v9 > 0)
        return v9;
    v10 = *((long long *)p);
    (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
}
