/* sub_7ff2c1692bc @ 0x7ff2c1692bc
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c1692bc  (510 bytes, 33 basic blocks)
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

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

long long sub_7ff2c1692bc(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, void* a7, unsigned long a8)
{
    unsigned int v4;  // r13d
    unsigned int v5;  // r14d
    long long v14;  // r8
    unsigned long v15;  // r9
    long long v16;  // r8
    void* ptr;  // rdx
    unsigned int v18;  // r12d
    struct_0 **v19;  // rcx
    void* p;  // rdx
    unsigned int v21;  // r12d
    struct_0 **v22;  // rcx
    void* addr;  // rdx
    unsigned long v6;  // r9
    unsigned int v24;  // r12d
    struct_0 **v25;  // rcx
    void* ptr3;  // rdx
    unsigned int v27;  // r12d
    struct_0 **v28;  // rcx
    void* ptr4;  // rdx
    unsigned int v30;  // r12d
    struct_0 **v31;  // rcx
    long long v7;  // r8
    unsigned int v8;  // r15d
    unsigned long v9;  // r9
    long long v10;  // r8
    unsigned long v11;  // r9
    long long v12;  // r8
    unsigned long v13;  // r9
    long long v1;  // [bp+0x20]
    unsigned long v2;  // [bp+0x78]

    *((unsigned int *)&v1) = v4;
    v6 = v5;
    v7 = L"S-1-5-80-2375682873-768044350-3534595160-1005545032-2873800392";
    if (sub_7ff2c169788(a7, v8, L"S-1-5-80-2375682873-768044350-3534595160-1005545032-2873800392", v5, v1) >= vvar_10{r56|8b})
    {
        *((unsigned int *)&v1) = v4;
        v9 = v5;
        v10 = L"S-1-5-32-545";
        if (sub_7ff2c169788(a7, v8, L"S-1-5-32-545", v5, v1) >= vvar_10{r56|8b})
        {
            *((unsigned int *)&v1) = v4;
            v11 = v5;
            v12 = L"S-1-3-0";
            if (sub_7ff2c169788(a7, v8, L"S-1-3-0", v5, v1) >= vvar_10{r56|8b})
            {
                *((unsigned int *)&v1) = v4;
                v13 = v5;
                v14 = L"S-1-5-32-544";
                if (sub_7ff2c169788(a7, v8, L"S-1-5-32-544", v5, v1) >= vvar_10{r56|8b})
                {
                    *((unsigned int *)&v1) = v4;
                    v15 = v5;
                    v16 = L"S-1-5-18";
                    if (sub_7ff2c169788(a7, v8, L"S-1-5-18", v5, v1) < vvar_10{r56|8b})
                    {
                        ptr = a7 - 24;
                        InterlockedExchangeAdd(ptr + 16, v18);
                        if ((int)ptr[16] + v18 > vvar_10{r56|8b})
                        {
                            if (a8 == vvar_10{r56|8b})
                                goto LABEL_0x7ff2c169708;
                            8792538349944();
                        }
                        v19 = *((long long *)ptr);
                        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
                    }
                    else if (a8 != vvar_10{r56|8b})
                    {
                        8792538349944();
                    }
                    else
                    {
                        v2 = vvar_10{r56|8b};
                        8792538349936();
                    }
                }
                else
                {
                    p = a7 - 24;
                    InterlockedExchangeAdd(p + 16, v21);
                    if ((int)p[16] + v21 > vvar_10{r56|8b})
                    {
                        if (a8 == vvar_10{r56|8b})
                            goto LABEL_0x7ff2c169708;
                        8792538349944();
                    }
                    v22 = *((long long *)p);
                    (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
                }
            }
            else
            {
                addr = a7 - 24;
                InterlockedExchangeAdd(addr + 16, v24);
                if ((int)addr[16] + v24 > vvar_10{r56|8b})
                {
                    if (a8 == vvar_10{r56|8b})
                        goto LABEL_0x7ff2c169708;
                    8792538349944();
                }
                v25 = *((long long *)addr);
                (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
            }
        }
        else
        {
            ptr3 = a7 - 24;
            InterlockedExchangeAdd(ptr3 + 16, v27);
            if ((int)ptr3[16] + v27 > vvar_10{r56|8b})
            {
                if (a8 == vvar_10{r56|8b})
                    goto LABEL_0x7ff2c169708;
                8792538349944();
            }
            v28 = *((long long *)ptr3);
            (*((long long *)(*((long long *)*((long long *)ptr3)) + 8)))();
        }
    }
    else
    {
        ptr4 = a7 - 24;
        InterlockedExchangeAdd(ptr4 + 16, v30);
        if ((int)ptr4[16] + v30 > vvar_10{r56|8b})
        {
            if (a8 == vvar_10{r56|8b})
                goto LABEL_0x7ff2c169708;
            8792538349944();
        }
        v31 = *((long long *)ptr4);
        (*((long long *)(*((long long *)*((long long *)ptr4)) + 8)))();
    }
}
