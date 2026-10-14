/* sub_7ff2c167803 @ 0x7ff2c167803
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c167803  (484 bytes, 38 basic blocks)
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

typedef struct struct_6 {
    char padding_0[64];
    struct struct_4 *field_40;
} struct_6;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_7 {
    char padding_0[24];
    struct struct_8 *field_18;
} struct_7;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_9 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_9;

extern long long g_7ff2c161a50;
extern struct_7 *g_7ff2c181100;
extern struct_9 *g_7ff2c182e68;
extern long long g_7ff2c183d20;
extern unsigned long long g_7ff2c183d38;
extern char g_7ff2c183d40;
extern char g_7ff2c183d4c;
extern char g_7ff2c183d50;

long long sub_7ff2c167803(unsigned long a0, unsigned long a1, long long a2, unsigned long long a3, unsigned short a4, char a5, void* a5, void* a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22)
{
    unsigned short *v4;  // r14
    unsigned short *v5;  // rdi
    struct_6 *v14;  // rcx
    unsigned long v15;  // rdx
    void* ptr;  // rdx
    struct_2 **v17;  // rcx
    unsigned long long v18;  // rsi
    struct_7 **v19;  // rcx
    void* p;  // rdx
    struct_0 **v21;  // rcx
    unsigned int v6;  // ebx
    unsigned long long v7;  // rsi
    unsigned short v8;  // r13w
    unsigned short *v9;  // r12
    unsigned short *v10;  // rdi
    unsigned long long v11;  // rcx
    unsigned short *v12;  // rdi
    struct_6 *v13;  // r15
    long long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x30]
    unsigned int v3;  // [bp+0x34]

    if (v4 == v5)
    {
        v6 = 2147500035;
    }
    else if (!((unsigned short)v7 == v8 || *((unsigned short *)&v5) == v8))
    {
LABEL_7ff2c167846:
        v6 = 2147942487;
    }
    else if (v9 != v5)
    {
        v10 = v9;
        v11 = v7;
        do
        {
            if (!v11)
                break;
        } while (*(v10));
        v12 = NULL;
        if (~(v11) - 1 <= 63)
            goto LABEL_7ff2c16783c;
        goto LABEL_7ff2c167846;
    }
    else
    {
LABEL_7ff2c16783c:
        if ((int)a5[16] == (unsigned int)v12)
            goto LABEL_7ff2c167846;
        a3 = &vvar_5;
        a2 = ",";
        v2 = (unsigned int)v12;
        sub_7ff2c16c4dc(&a5, &a6, ",", &v2);
        if ((int)a6[16] != (unsigned int)v12 && v6 >= (unsigned int)v12)
        {
            v14 = &v13->field_40;
            v15 = &a6;
            v13->field_40->field_10();
        }
        ptr = a6 - 24;
        InterlockedExchangeAdd(ptr + 16, v7);
        if ((int)ptr[16] + (unsigned int)v7 <= (unsigned int)v12)
        {
            v17 = *((long long *)ptr);
            (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
        }
        else if (v6 >= (unsigned int)v12)
        {
            v18 = v12 & 4294967295;
            v3 = (unsigned int)v12;
            if (v9 != v12)
            {
                do
                {
                    if (false)
                        break;
                } while (*(v5));
                v12 = (~(18446744073709551615) == 1 ? NULL : 1);
            }
            v19 = &g_7ff2c181100;
            g_7ff2c181100->field_18();
        }
    }
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1))
    {
        a3 = 5;
        if (g_7ff2c182e68->field_19 >= ((unsigned int)v12 <= v6 ? 2 : 5))
            sub_7ff2c1634e8(g_7ff2c182e68->field_10, 74, &g_7ff2c161a50, v6); /* do not return */
    }
    if (*((int *)&g_7ff2c183d4c) != (unsigned int)v12 && (g_7ff2c183d50 >= 4 || g_7ff2c183d50 == *((char *)&v12)) && (0x8000000000000000 & g_7ff2c183d38) && (*((long long *)&g_7ff2c183d40) & 0x8000000000000000) == *((long long *)&g_7ff2c183d40))
    {
        a4 = _INSERT(a4 CONCAT 0, 0, v6);
        *((unsigned int *)&v1) = _INSERT(v12 & 4294967295, 0, (unsigned short)v7 == v8);
        sub_7ff2c16405c(g_7ff2c183d20, "}", v4, v5, v1, a4); /* do not return */
    }
    p = a5 - 24;
    InterlockedExchangeAdd(p + 16, v7);
    if ((int)p[16] + (unsigned int)v7 > (unsigned int)v12)
        return v6;
    v21 = *((long long *)p);
    (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
}
