/* sub_7ff33cade0c @ 0x7ff33cade0c
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cade0c  (264 bytes, 20 basic blocks)
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
    unsigned long long field_10;
    int field_18;
    char padding_1c[4];
    int field_20;
    unsigned int field_24;
    char padding_28[8];
    unsigned long long field_30;
    unsigned int field_38;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    char field_10;
    char field_11;
    char padding_12[42];
    unsigned int field_3c;
    unsigned int field_40;
} struct_1;

typedef struct struct_3 {
    char padding_0[24];
    unsigned long long field_18;
    unsigned int field_20;
} struct_3;

typedef struct struct_2 {
    char padding_0[32];
    unsigned long long field_20;
    int field_28;
    char padding_2c[4];
    int field_30;
} struct_2;

int sub_7ff33cade0c(void)
{
    struct_0 *p;  // rcx
    struct_0 *v5;  // rsi
    struct_1 *ptr;  // rdx
    unsigned long long flag;  // rdi
    unsigned long v8;  // rcx
    unsigned long v9;  // r8
    unsigned long v10;  // rdx
    unsigned int v11;  // r14d
    unsigned long long v12;  // r13
    struct_2 *addr;  // rbx
    unsigned long long v0;  // [bp-0x58]
    char v1;  // [bp-0x50]
    struct_3 *ptr3;  // [bp+0x18]

    v0 = 18446744073709551614;
    v5 = p;
    if (!p->field_38)
        return;
    if (ptr->field_10 && p->field_18 > 0)
    {
        flag = 0;
        v8 = *((long long *)(0 + p->field_10));
        v9 = ptr->field_40;
        v10 = ptr->field_3c;
        (*((long long *)(*((long long *)*((long long *)(0 + p->field_10))) + 24)))();
    }
    if (!ptr->field_11)
        p->field_20 = p->field_20 - 1;
    if (p->field_20 <= 0)
        8792667324584();
    ptr3 = *((long long *)(p->field_30 + p->field_24 * 8));
    v11 = 0;
    if (ptr3->field_20 <= 0)
        return;
    v12 = 0;
    while (true)
    {
        addr = v12 + ptr3->field_18;
        if (!ptr->field_11)
            addr->field_30 = addr->field_30 - 1;
        if (addr->field_30 <= 0)
        {
            sub_7ff33cad978(addr, (struct struct_0 *)&p->padding_0[8]); /* do not return */
        }
        else if (addr->field_28 > 0)
        {
            sub_7ff33cad844(&v1, *((int *)(*((long long *)(0 + addr->field_20)) + 68))); /* do not return */
        }
        else
        {
            v11 += 1;
            v12 += 56;
            if (v11 >= ptr3->field_20)
                return;
        }
    }
}
