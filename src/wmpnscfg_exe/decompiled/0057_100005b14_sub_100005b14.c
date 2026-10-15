/* sub_100005b14 @ 0x100005b14
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100005b14  (104 bytes, 9 basic blocks)
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

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
    char padding_10[8];
    struct struct_5 *field_18;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

void* sub_100005b14(void* *p)
{
    void* ptr3;  // rax
    unsigned long ptr;  // rdx
    struct_3 **v3;  // rdi
    void* addr;  // rax
    struct_3 **v5;  // rcx
    struct_3 **v6;  // rcx

    ptr3 = *(p);
    ptr = ptr3 - 24;
    v3 = *((long long *)ptr);
    if (!*((int *)(ptr + 8)))
    {
        return ptr3;
    }
    else if (*((int *)(ptr + 16)) >= 0)
    {
        InterlockedExchangeAdd(ptr + 16, 4294967295);
        if (*((int *)(ptr + 16)) - 1 > 0)
        {
            v6 = *((long long *)ptr);
            (*((long long *)(*((long long *)*((long long *)ptr)) + 24)))();
        }
        v5 = *((long long *)ptr);
        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
    }
    else if ((int)ptr3[12] < 0)
    {
        4294991632();
    }
    else
    {
        *((unsigned int *)&ptr3[16]) = 0;
        addr = *(p);
        *((unsigned short *)addr) = 0;
        return addr;
    }
}
