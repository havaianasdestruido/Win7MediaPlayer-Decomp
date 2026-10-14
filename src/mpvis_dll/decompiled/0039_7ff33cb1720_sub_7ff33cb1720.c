/* sub_7ff33cb1720 @ 0x7ff33cb1720
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb1720  (381 bytes, 19 basic blocks)
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
    char padding_0[12];
    unsigned int field_c;
    char padding_10[66];
    char field_52;
    char padding_53[1];
    unsigned int field_54;
    unsigned int field_58;
} struct_0;

typedef struct struct_1 {
    char padding_0[96];
    struct struct_2 *field_60;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

int sub_7ff33cb1720(void)
{
    unsigned long v11;  // rdi
    struct_0 *ptr;  // rsi
    unsigned int *p;  // r14
    unsigned long v22;  // rcx
    unsigned long long v23;  // r10
    unsigned long v24;  // rsi
    long long idx;  // r11
    unsigned long long v26;  // rdi
    unsigned long long v27;  // r14
    unsigned long long v28[169];  // rbx
    unsigned long addr;  // r9
    unsigned long ptr3;  // rdx
    int v13;  // r12d
    unsigned long v14;  // rbx
    unsigned int v15;  // r13d
    struct_1 **v16;  // rsi
    char *v17;  // r8
    char *v18;  // rdx
    struct_1 **v19;  // rcx
    unsigned int *ptr4;  // r15
    unsigned int *v1;  // [bp+0x20]
    char v2;  // [bp+0x50]
    char v3;  // [bp+0x58]
    char v4;  // [bp+0x150]
    int v5;  // [bp+0x158]
    unsigned int v6;  // [bp+0x160]
    int v7;  // [bp+0x100010]
    struct_1 **v8;  // [bp+0x100090]
    unsigned long v9;  // [bp+0x100538]

    v11 = v5;
    if ((unsigned int)v11 >= *((int *)&ptr->padding_0[8]))
    {
        if (ptr->field_52)
        {
            v11 = v13;
            v5 = v13;
        }
        else
        {
            v11 = ptr->field_54;
            v5 = v11;
        }
    }
    v14 = v6;
    if ((unsigned int)v14 >= ptr->field_c)
    {
        if (ptr->field_52)
        {
            v14 = v15;
            v6 = v14;
        }
        else
        {
            v14 = ptr->field_58;
            v6 = v14;
        }
    }
    v16 = v8;
    if (v16)
    {
        v17 = &v6;
        v18 = &v5;
        v19 = v16;
        *(v16)->field_60();
    }
    *(ptr4) = (unsigned int)v11 + *((int *)(v9 + (int)v14 * 4));
    if (v4)
    {
        v1 = p + 1;
        v22 = v7;
        v23 = ((unsigned int)v22 <= 0 ? 0 : *(p) % (int)v22 & 4294967295);
        v24 = (int)(*(p) / (v22 & 4294967295));
        idx = 0;
        v26 = v22 - v23 + v11;
        v27 = (v22 & 4294967295) - v24 + v14;
        v28 = vvar_77{r56|8b} + 1344;
        do
        {
            addr = *((long long *)&(&v2)[8 * idx]);
            *((unsigned int *)addr) = *((int *)(v9 + (*((short *)(v28[1] + v27 * 2)) + v24) * 4)) + *((short *)(v28[1] + v26 * 2)) + (unsigned int)v23;
            *((unsigned long long *)&(&v2)[8 * idx]) = addr + 4;
            ptr3 = *((long long *)&(&v3)[8 * idx]);
            *((unsigned int *)ptr3) = *((short *)(v28[0] + v26 * 2)) + (unsigned int)v23 + *((int *)(v9 + (*((short *)(v28[0] + v27 * 2)) + (unsigned int)v24) * 4));
            *((unsigned long long *)&(&v3)[8 * idx]) = ptr3 + 4;
            idx += 2;
            v28 = &v28[2];
        } while (idx < 22);
    }
    if (v13 + 1 < v7)
        goto LABEL_0x7ff33cb16f0;
}
