/* DllGetClassObject @ 0x7ff2c1639d0
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c1639d0  (381 bytes, 31 basic blocks)
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
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_3 *field_20;
} struct_2;

typedef struct struct_3 {
    struct struct_4 *field_0;
} struct_3;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_5 {
    struct struct_2 *field_0;
} struct_5;

extern long long g_7ff2c161d00;
extern struct_0 *g_7ff2c182e68;
extern unsigned int g_7ff2c183280;
extern struct_5 *g_7ff2c183290;
extern char g_7ff2c183298;

long long DllGetClassObject(unsigned int *a0, unsigned long long a1, unsigned long long *p)
{
    unsigned int v3[4];  // rdi
    struct_0 *v4;  // rax
    int v5;  // ebx
    struct_2 **cur;  // rcx
    struct_2 *ptr;  // rsi
    unsigned long v8;  // rdx
    unsigned long long v9;  // rcx
    unsigned long long *v10;  // r8
    unsigned long long v11;  // rdx
    unsigned long long v0;  // [bp-0x28]
    unsigned long long *v1;  // [bp-0x20]

    v3 = a0;
    v4 = g_7ff2c182e68;
    if (g_7ff2c182e68 != &g_7ff2c182e68 && (g_7ff2c182e68->field_1c & 1) && g_7ff2c182e68->field_19 >= 5)
    {
        v1 = p;
        v0 = a1;
        sub_7ff2c163524(g_7ff2c182e68->field_10, 15, &g_7ff2c161d00, a0); /* do not return */
    }
    if (!g_7ff2c183280)
    {
        v5 = -2147418113;
    }
    else if (!p)
    {
        v5 = -2147467261;
    }
    else
    {
        *(p) = 0;
        cur = g_7ff2c183290;
        for (v5 = 0; cur < *((long long *)&g_7ff2c183298); cur += 1)
        {
            ptr = *(cur);
            if (ptr && ptr->field_10 && !((v8 = (unsigned long)ptr->field_0, *(a0) != *((int *)v8) || a0[1] != *((int *)(v8 + 4)) || a0[2] != *((int *)(v8 + 8)) || a0[3] != *((int *)(v8 + 12)))))
            {
                if (!ptr->field_20)
                    8792538350304();
                if (ptr->field_20)
                {
                    v9 = ptr->field_20;
                    v10 = p;
                    v11 = a1;
                    ptr->field_20->field_0->field_0();
                }
                if (*(p) || false)
                    goto LABEL_7ff2c163b18;
                break;
            }
        }
        v5 = -2147221231;
LABEL_7ff2c163b18:
        v4 = g_7ff2c182e68;
    }
    if (v4 == &g_7ff2c182e68)
    {
        return v5;
    }
    else if (!(v4->field_1c & 1))
    {
        return v5;
    }
    else if (v4->field_19 >= (v5 >= 0 ? 5 : 2))
    {
        sub_7ff2c1634e8(v4->field_10, 16, &g_7ff2c161d00, v5); /* do not return */
    }
    else
    {
        return v5;
    }
}
