/* sub_7ff2c168980 @ 0x7ff2c168980
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c168980  (442 bytes, 24 basic blocks)
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

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
} struct_6;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

long long sub_7ff2c168980(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, char a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, void* a16, void* a17, void* a18)
{
    unsigned int v2;  // eax
    unsigned long long v3;  // rdi
    void* v12;  // r8
    unsigned int v13;  // eax
    unsigned long v14;  // rdi
    void* ptr;  // rdx
    struct_0 **v16;  // rcx
    void* p;  // rdx
    struct_6 **v18;  // rcx
    void* addr;  // rdx
    struct_2 **v20;  // rcx
    unsigned long long v21;  // r9
    void* ptr3;  // rdx
    long long v22;  // r8
    unsigned int v23;  // eax
    unsigned long v24;  // rdi
    void* ptr4;  // rdx
    struct_0 **v26;  // rcx
    void* ptr5;  // rdx
    struct_6 **v28;  // rcx
    void* ptr6;  // rdx
    struct_2 **v30;  // rcx
    struct_0 **v5;  // rcx
    void* ptr7;  // rdx
    struct_6 **v7;  // rcx
    void* ptr8;  // rdx
    struct_2 **v9;  // rcx
    unsigned long long v10;  // rsi
    unsigned long long v11;  // r9
    long long v1;  // [bp+0x20]

    if (!v2)
    {
        v3 = 2147549183;
        ptr3 = a18 - 24;
        InterlockedExchangeAdd(ptr3 + 16, 4294967295);
        if ((int)ptr3[16] + 4294967295 <= 0)
        {
            v5 = *((long long *)ptr3);
            (*((long long *)(*((long long *)*((long long *)ptr3)) + 8)))();
        }
        ptr7 = a17 - 24;
        InterlockedExchangeAdd(ptr7 + 16, 4294967295);
        if ((int)ptr7[16] + 4294967295 > 0)
        {
            ptr8 = a16 - 24;
            InterlockedExchangeAdd(ptr8 + 16, 4294967295);
            if ((int)ptr8[16] + 4294967295 > 0)
                goto LABEL_0x7ff2c168d35;
            v9 = *((long long *)ptr8);
            (*((long long *)(*((long long *)*((long long *)ptr8)) + 8)))();
        }
        v7 = *((long long *)ptr7);
        (*((long long *)(*((long long *)*((long long *)ptr7)) + 8)))();
    }
    else
    {
        *((unsigned int *)&v1) = 1;
        v10 = 0x10000000;
        v11 = 0x10000000;
        v12 = a17;
        v13 = sub_7ff2c169788(a16, 12, a17, 0x10000000, v1);
        v14 = v13;
        if (v13 < 0)
        {
            ptr = a18 - 24;
            InterlockedExchangeAdd(ptr + 16, 4294967295);
            if ((int)ptr[16] + 4294967295 <= 0)
            {
                v16 = *((long long *)ptr);
                (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
            }
            p = a17 - 24;
            InterlockedExchangeAdd(p + 16, 4294967295);
            if ((int)p[16] + 4294967295 > 0)
            {
                addr = a16 - 24;
                InterlockedExchangeAdd(addr + 16, 4294967295);
                if ((int)addr[16] + 4294967295 > 0)
                    goto LABEL_0x7ff2c168d35;
                v20 = *((long long *)addr);
                (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
            }
            v18 = *((long long *)p);
            (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
        }
        else
        {
            *((unsigned int *)&v1) = 1;
            v21 = 0x10000000;
            v22 = L"S-1-5-18";
            v23 = sub_7ff2c169788(a16, 12, L"S-1-5-18", 0x10000000, v1);
            v24 = v23;
            if (v23 >= 0)
                sub_7ff2c17918e(a17, &vvar_7); /* do not return */
            ptr4 = a18 - 24;
            InterlockedExchangeAdd(ptr4 + 16, 4294967295);
            if ((int)ptr4[16] + 4294967295 <= 0)
            {
                v26 = *((long long *)ptr4);
                (*((long long *)(*((long long *)*((long long *)ptr4)) + 8)))();
            }
            ptr5 = a17 - 24;
            InterlockedExchangeAdd(ptr5 + 16, 4294967295);
            if ((int)ptr5[16] + 4294967295 > 0)
            {
                ptr6 = a16 - 24;
                InterlockedExchangeAdd(ptr6 + 16, 4294967295);
                if ((int)ptr6[16] + 4294967295 > 0)
                    goto LABEL_0x7ff2c168d35;
                v30 = *((long long *)ptr6);
                (*((long long *)(*((long long *)*((long long *)ptr6)) + 8)))();
            }
            v28 = *((long long *)ptr5);
            (*((long long *)(*((long long *)*((long long *)ptr5)) + 8)))();
        }
    }
}
