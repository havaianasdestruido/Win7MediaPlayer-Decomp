/* sub_7ff33cb163a @ 0x7ff33cb163a
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb163a  (285 bytes, 19 basic blocks)
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
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    char field_10;
    char padding_11[3];
    unsigned int field_14;
} struct_1;

typedef struct struct_2 {
    char padding_0[96];
    struct struct_3 *field_60;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

int sub_7ff33cb163a(void)
{
    unsigned long long *cur;  // r8
    char v14;  // r10b
    unsigned long long v22;  // r8
    char *v23;  // rdx
    struct_2 **v24;  // rcx
    unsigned long v15;  // r13
    unsigned long v16;  // r9
    long long index;  // rcx
    unsigned long long v18;  // cc_ndep
    unsigned long long v19;  // rax
    int i;  // eax
    struct_2 **v21;  // rsi
    int v0;  // [bp+0x8]
    unsigned int v1;  // [bp+0xc]
    char v2;  // [bp+0x38]
    char v3;  // [bp+0x50]
    struct_2 **v4;  // [bp+0x80]
    unsigned long long v5;  // [bp+0xf8]
    char flag;  // [bp+0x150]
    unsigned int choice;  // [bp+0x158]
    unsigned int v8;  // [bp+0x160]
    int v9;  // [bp+0x168], Other Possible Types: unsigned int
    struct_0 *v10;  // [bp+0x510]
    struct_1 *ptr;  // [bp+0x518]
    unsigned long p;  // [bp+0x530]

    cur = &v5;
    if (v5 && v10->field_8)
    {
        v14 = 1;
        flag = 1;
    }
    else
    {
        v14 = 0;
        flag = 0;
    }
    v15 = ptr->field_14;
    v16 = *((int *)(p + v15 * 4));
    if (v14)
    {
        index = 0;
        do
        {
            if (!*(cur))
            {
                flag = 0;
                break;
            }
        } while ((*((unsigned long long *)&(&v3)[8 * index]) = v19 + (long long)*((int *)(p + v15 * 4)) * 4, v18 = (unsigned long long)_ccall(20, v19, 0, v18), index = (long long)(index + 1), cur += 48, index < 22));
    }
    i = 0;
    v9 = 0;
    do
    {
        if ((unsigned int)v15 == v1)
        {
            ptr->field_10 = 0;
            break;
        }
        if (v0 > 0)
        {
            v21 = v4;
            choice = 0;
            v8 = v15;
            v22 = &v8;
            v23 = &choice;
            v24 = v21;
            *(v21)->field_60();
        }
        v15 = (unsigned int)v15 + 1;
        i += 1;
        v9 = i;
    } while (i < 3);
    ptr->field_14 = v15;
    sub_7ff33cad738(&v2); /* do not return */
}
