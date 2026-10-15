/* sub_7ff2c16c176 @ 0x7ff2c16c176
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c16c176  (285 bytes, 23 basic blocks)
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

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

long long sub_7ff2c16c176(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned int a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned int a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned int a28)
{
    unsigned int v2;  // eax
    unsigned long v3;  // r13
    void* v13;  // rbx
    void* ptr;  // rdx
    struct_2 **v15;  // rcx
    unsigned long long v16;  // rdi
    void* v18;  // rbx
    void* p;  // rdx
    struct_4 **v20;  // rcx
    unsigned long long v4;  // rdi
    unsigned int v5;  // r14d
    void* v6;  // rbx
    void* addr;  // rdx
    struct_0 **v8;  // rcx
    unsigned int v9;  // r12d
    unsigned int v10;  // esi
    unsigned long long v11;  // rdi
    unsigned int v1;  // [bp+0x100008]

    if (v2 < (unsigned int)v3)
    {
        v4 = v3 & 4294967295;
        v1 = v5;
        addr = v6 - 24;
        InterlockedExchangeAdd(addr + 16, 4294967295);
        if ((int)addr[16] - 1 <= (unsigned int)v3)
        {
            v8 = *((long long *)addr);
            (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
        }
        else if (a6 != v3)
        {
            8792538349944();
        }
    }
    else
    {
        if (a9 != (unsigned int)v3 && (a5 != (unsigned int)v3 || a28 != (unsigned int)v3))
        {
            v10 = -(0 < a28) & v9;
            if (a5 != (unsigned int)v3)
            {
                sub_7ff2c16b3c4(&vvar_50{r120|8b}); /* do not return */
            }
            else if (v10 == (unsigned int)v3)
            {
                v11 = v3 & 4294967295;
                v1 = v5;
                ptr = v13 - 24;
                InterlockedExchangeAdd(ptr + 16, 4294967295);
                if ((int)ptr[16] - 1 <= (unsigned int)v3)
                {
                    v15 = *((long long *)ptr);
                    (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
                }
                else if (a6 != v3)
                {
                    8792538349944();
                }
            }
            else
            {
                sub_7ff2c16ac70(v10, L"@FirewallAPI.dll,-31252", &vvar_50{r120|8b}); /* do not return */
            }
        }
        v16 = v3 & 4294967295;
        v1 = v5;
        p = v18 - 24;
        InterlockedExchangeAdd(p + 16, 4294967295);
        if ((int)p[16] - 1 <= (unsigned int)v3)
        {
            v20 = *((long long *)p);
            (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
        }
        else if (a6 != v3)
        {
            8792538349944();
        }
    }
}
