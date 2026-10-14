/* sub_10000a74c @ 0x10000a74c
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000a74c  (262 bytes, 18 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
    char padding_10[8];
    struct struct_2 *field_18;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

void* * sub_10000a74c(void* *p, unsigned short *a1)
{
    unsigned long long v1;  // r8
    unsigned short *v2;  // rdi
    unsigned int v3;  // ecx
    void* v4;  // rax
    void* addr;  // rax
    unsigned long ptr;  // rdx
    struct_0 **v7;  // rdi
    struct_0 **v8;  // rcx
    struct_0 **v9;  // rcx

    v1 = 18446744073709551615;
    if (a1)
    {
        v2 = a1;
        do
        {
            if (false)
                break;
        } while (*(v2));
        v3 = ~(18446744073709551615) - 1;
        if (v3)
        {
            v4 = *(p);
            if ((1 - (int)v4[8] | (int)v4[12] - v3) < 0)
                sub_10000ac78(p, v3);
            if (a1 - v4 >> 1 > (int)v4[16])
                4295069742();
            4295069754();
        }
    }
    addr = *(p);
    ptr = addr - 24;
    v7 = *((long long *)ptr);
    if (!*((int *)(ptr + 8)))
    {
        return p;
    }
    else if (*((int *)(ptr + 16)) >= 0)
    {
        InterlockedExchangeAdd(ptr + 16, 4294967295);
        if (*((int *)(ptr + 16)) + 18446744073709551615 > 0)
        {
            v9 = *((long long *)ptr);
            (*((long long *)(*((long long *)*((long long *)ptr)) + 24)))();
        }
        v8 = *((long long *)ptr);
        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
    }
    else if ((int)addr[12] < 0)
    {
        4295012220();
    }
    else
    {
        *((unsigned int *)&addr[16]) = 0;
        *((unsigned short *)*(p)) = 0;
        return p;
    }
}
