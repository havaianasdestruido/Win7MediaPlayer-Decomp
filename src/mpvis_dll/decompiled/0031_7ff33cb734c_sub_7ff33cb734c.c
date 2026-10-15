/* sub_7ff33cb734c @ 0x7ff33cb734c
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb734c  (261 bytes, 22 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
    char padding_18[56];
    struct struct_2 *field_50;
} struct_0;

typedef struct struct_7 {
    char padding_0[48];
    struct struct_8 *field_30;
} struct_7;

typedef struct struct_6 {
    struct struct_3 *field_0;
} struct_6;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
    char padding_18[56];
    struct struct_5 *field_50;
} struct_3;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

extern unsigned int g_7ff33c9f1f8[9];
extern unsigned int g_7ff33ca29c0[9];
extern unsigned int g_7ff33ca31c4[9];

int sub_7ff33cb734c(void)
{
    struct_7 **v4;  // rcx
    struct_6 **v5;  // rdx
    unsigned int v13;  // eax
    unsigned int v14[9];  // rsi
    unsigned long v15;  // rdx
    struct_0 **v16;  // rcx
    struct_7 **v6;  // rcx
    struct_0 **ptr;  // rdi
    unsigned int v8;  // ebp
    unsigned int v9[9];  // rsi
    unsigned int cur[9];  // rbx
    unsigned int v11[9];  // rsi
    long long v12;  // r9
    unsigned int flag;  // [bp-0x178]
    unsigned int v1;  // [bp-0x170]
    unsigned int v2;  // [bp-0x168]
    struct_0 **choice;  // [bp+0x8]

    choice = NULL;
    sub_7ff33cbf4ac(1);
    if (v4)
    {
        v5 = &choice;
        v6 = v4;
        *(v4)->field_30();
    }
    ptr = choice;
    v8 = 4294967295;
    v9 = &g_7ff33c9f1f8[0];
    cur = &g_7ff33ca29c0[0];
    do
    {
        v11 = v9;
        if (!cur[0])
            continue;
        if (ptr)
        {
            v2 = cur[0];
            v1 = 3;
            flag = 0;
            *(ptr)->field_50();
        }
        if (*((int *)v12) != cur[0])
        {
            v11 = v9;
            if (cur[8])
            {
                v13 = sub_7ff33cb72c0(v12, cur);
                v11 = v9;
                if (v13 != 4294967295)
                {
                    v11 = v9;
                    if (v13 <= v8 && (v13 != v8 || (v8 = v8, v11 = v9, cur[2] < v11[2])))
                    {
                        v8 = v13;
                        v11 = cur;
                    }
                }
            }
        }
        else
        {
            v14 = cur;
            break;
        }
    } while ((v9 = v11, cur += 36, v14 = v9, cur < &g_7ff33ca31c4[0]));
    if (!ptr)
    {
        sub_7ff33cbf4ac(0);
        return;
    }
    v15 = *(ptr);
    v16 = ptr;
    *(ptr)->field_10();
}
