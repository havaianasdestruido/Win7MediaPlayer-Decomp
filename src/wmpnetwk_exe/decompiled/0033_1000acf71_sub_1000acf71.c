/* sub_1000acf71 @ 0x1000acf71
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000acf71  (812 bytes, 74 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 306467d280e99d0616e839278a4db5bed684f002ae284c3678cabb5251459cb3
 *   Evidence: analysis/report/rea-evidence/wmpnetwk_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
} struct_6;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_1001546a0;
extern long long g_100154770;

int sub_1000acf71(void)
{
    char v8;  // r15b
    void* *v9;  // r14
    struct_6 **v17;  // rcx
    void* ptr;  // rdx
    struct_0 **v19;  // rcx
    void* *v20;  // r9
    void* *v21;  // r8
    char v22;  // sil
    char choice;  // dil
    char v10;  // r15b
    unsigned int flag2;  // ecx
    unsigned int v27;  // ecx
    char flag;  // dil
    long long v29;  // rsi
    long long v30;  // rsi
    void* p;  // rdx
    struct_2 **v32;  // rcx
    void* addr;  // rdx
    struct_6 **v34;  // rcx
    char *v11;  // r9
    void* ptr3;  // rdx
    struct_0 **v36;  // rcx
    char *v12;  // r8
    long long v13;  // rsi
    void* ptr4;  // rdx
    struct_2 **v15;  // rcx
    void* ptr5;  // rdx
    void* v1;  // [bp+0x58]
    char v2;  // [bp+0x60]
    char v3;  // [bp+0x70]
    void* v4;  // [bp+0x70]
    unsigned long v5;  // [bp+0x78]
    unsigned long i;  // [bp+0x88]
    long long v7;  // [bp+0xd0]

    if (vvar_250{r56|4b} == 1 && v8 == (char)vvar_250{r56|4b})
    {
        if ((int)(*(v9))[16])
            goto LABEL_1000ad08f;
        v10 = 0;
    }
    if (!v10)
    {
        i = sub_10004d410(&g_1001546a0);
        if (i)
        {
            do
            {
                v11 = &v2;
                sub_1000772d4(&g_1001546a0, &i, &v1, &v2);
                v12 = &v3;
                if (!(char)sub_1000d45b0(&g_100154770, v1, &v3))
                    sub_100066278(v13, &v2, 44); /* do not return */
            } while (i);
        }
        ptr4 = v4 - 24;
        InterlockedExchangeAdd(ptr4 + 16, 4294967295);
        if ((int)ptr4[16] - 1 <= 0)
        {
            v15 = *((long long *)ptr4);
            (*((long long *)(*((long long *)*((long long *)ptr4)) + 8)))();
        }
        ptr5 = v2 - 24;
        InterlockedExchangeAdd(ptr5 + 16, 4294967295);
        if ((int)ptr5[16] - 1 > 0)
        {
            ptr = v1 - 24;
            InterlockedExchangeAdd(ptr + 16, 4294967295);
            if ((int)ptr[16] - 1 > 0)
                goto LABEL_0x1000ad301;
            v19 = *((long long *)ptr);
            (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
        }
        v17 = *((long long *)ptr5);
        (*((long long *)(*((long long *)*((long long *)ptr5)) + 8)))();
    }
LABEL_1000ad08f:
    v5 = sub_10004d410(&g_100154770);
    if (v5)
    {
        do
        {
            v20 = &v3;
            sub_1000772d4(&g_100154770, &v5, &v1, &v3);
            v21 = NULL;
            if (*(v9) && (int)v4[16] >= 0)
                sub_10004f110(v4); /* do not return */
            v22 = 0;
            choice = 1;
            flag2 = vvar_250{r56|4b} - 1;
            if (vvar_250{r56|4b} != 1)
            {
                v27 = flag2 - 1;
                if (flag2 != 1)
                {
                    flag = choice;
                    if (v27 != 5)
                    {
                        if (v27 == 6)
                        {
                            flag = 0;
                        }
                        else
                        {
                            v29 = v7;
                            continue;
                        }
                    }
                }
                else
                {
                    flag = !v22;
                }
            }
            else
            {
                flag = v22;
            }
            if (flag == 1)
            {
                v21 = &v2;
                if ((char)sub_1000d45b0(&g_1001546a0, v1, &v2) == 1)
                    sub_100066278(v7, &v2, 44); /* do not return */
                v29 = v7;
            }
            else
            {
                v29 = v7;
            }
        } while ((v30 = v29, v5));
    }
    p = v4 - 24;
    InterlockedExchangeAdd(p + 16, 4294967295);
    if ((int)p[16] - 1 <= 0)
    {
        v32 = *((long long *)p);
        (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
    }
    addr = v2 - 24;
    InterlockedExchangeAdd(addr + 16, 4294967295);
    if ((int)addr[16] - 1 > 0)
    {
        ptr3 = v1 - 24;
        InterlockedExchangeAdd(ptr3 + 16, 4294967295);
        if ((int)ptr3[16] - 1 > 0)
            goto LABEL_0x1000ad301;
        v36 = *((long long *)ptr3);
        (*((long long *)(*((long long *)*((long long *)ptr3)) + 8)))();
    }
    v34 = *((long long *)addr);
    (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
}
