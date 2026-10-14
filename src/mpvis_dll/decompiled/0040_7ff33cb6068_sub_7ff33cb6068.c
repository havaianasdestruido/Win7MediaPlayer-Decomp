/* sub_7ff33cb6068 @ 0x7ff33cb6068
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb6068  (324 bytes, 19 basic blocks)
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

typedef struct struct_4 {
    char padding_0[104];
    struct struct_5 *field_68;
    struct struct_6 *field_70;
    char field_78;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_2 {
    char padding_0[16];
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_5 {
    struct struct_0 *field_0;
} struct_5;

typedef struct struct_6 {
    struct struct_2 *field_0;
} struct_6;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_7 {
    char padding_0[48];
    long long field_30;
    char padding_38[1];
    char field_39;
    char padding_3a[2];
    unsigned int field_3c;
} struct_7;

extern long long g_7ff33ca31e8;
extern struct_7 *g_7ff33ccdcc0;

int sub_7ff33cb6068(void)
{
    struct_4 *addr;  // rcx
    struct_4 *ptr;  // rdi
    struct_2 **v14;  // rcx
    unsigned int v15;  // eax
    long long v6;  // rdx
    long long v7;  // rsi
    struct_0 **v8;  // rcx
    unsigned long long v9;  // rdx
    unsigned long long flag;  // r9
    unsigned long long v11;  // r8
    unsigned int v12;  // eax
    struct_4 *p;  // rdi
    long long v0;  // [bp-0x28]
    long long v1;  // [bp-0x20]
    long long v2;  // [bp-0x18]

    ptr = &addr->field_68;
    v7 = v6;
    v8 = *((long long *)&ptr->padding_0[0]);
    if (*((long long *)&ptr->padding_0[0]))
        (*((long long *)(*((long long *)*((long long *)&ptr->padding_0[0])) + 16)))();
    v9 = 0x400;
    *((unsigned int *)&v2) = 2;
    flag = 1;
    v11 = 0x400;
    *((unsigned int *)&v1) = 21;
    *((unsigned int *)&v0) = 0;
    v12 = sub_7ff33cb7770(v6, 0x400, 0x400, 1, v0, v1, v2, ptr);
    if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
        sub_7ff33caaf00(g_7ff33ccdcc0->field_30, 10, &g_7ff33ca31e8, v12); /* do not return */
    if (v12 < 0)
        return;
    p = &addr->field_70;
    v14 = *((long long *)&p->padding_0[0]);
    if (*((long long *)&p->padding_0[0]))
        (*((long long *)(*((long long *)*((long long *)&p->padding_0[0])) + 16)))();
    *((unsigned int *)&v2) = 0;
    *((unsigned int *)&v1) = 21;
    *((unsigned int *)&v0) = 0;
    v15 = sub_7ff33cb7770(v6, 0x400, 0x400, 1, v0, v1, v2, p);
    if (g_7ff33ccdcc0 != &g_7ff33ccdcc0 && ((char)(g_7ff33ccdcc0->field_3c >> 8) & 1) && g_7ff33ccdcc0->field_39 >= 5)
        sub_7ff33caaf00(g_7ff33ccdcc0->field_30, 11, &g_7ff33ca31e8, v15); /* do not return */
    if (v15 >= 0)
    {
        addr->field_78 = 1;
        sub_7ff33cb61bc(addr, v6);
        return;
    }
    return;
}
