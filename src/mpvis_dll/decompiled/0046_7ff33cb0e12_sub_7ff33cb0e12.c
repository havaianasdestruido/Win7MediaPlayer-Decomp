/* sub_7ff33cb0e12 @ 0x7ff33cb0e12
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb0e12  (253 bytes, 18 basic blocks)
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
    unsigned int field_8;
    unsigned int field_c;
    char padding_10[80];
    unsigned long long field_60;
} struct_0;

int sub_7ff33cb0e12(void)
{
    unsigned long long *p;  // r12
    unsigned long long v2;  // rax
    uint128_t v11;  // xmm0
    uint128_t v13;  // xmm1
    struct_0 *ptr;  // rbx
    unsigned long long v15;  // rdx
    unsigned int v16;  // r8d
    unsigned long v17;  // xmm0lq
    int v19;  // xmm0
    unsigned long long v3;  // rdi
    long long v21;  // rsi
    char v22;  // r14b
    unsigned long long v23;  // rsi
    unsigned long v24;  // r8
    unsigned long v25;  // rdx
    unsigned long v26;  // rcx
    struct_0 *v27;  // rbx
    unsigned long long v28;  // rbp
    unsigned long long j;  // rbp
    unsigned long long v30;  // rbp
    unsigned int v4;  // r13d
    int v5;  // xmm0
    unsigned int i;  // r8d
    int v8;  // xmm0
    int v9;  // xmm0
    int v10;  // xmm0

    *(p) = v2;
    if (v2 != v3)
    {
        v5 = (int)v4;
        i = v3;
        v8 = (int)_INSERT(_INSERT(v5, 12, (unsigned int)(v5 >> 96)), 8, (unsigned int)(v5 >> 64));
        v9 = (int)_INSERT(v8, 4, (unsigned long long)v5 >> 32);
        v10 = (int)_INSERT(v9, 0, (unsigned int)v5);
        v11 = (unsigned int)((unsigned long long)(MulV(v10, 1026692675)) >> 32) CONCAT (unsigned int)((unsigned long long)(MulV(v10, 1026692675)) >> 32) CONCAT (unsigned int)(MulV(v10, 1026692675)) CONCAT (unsigned int)(MulV(v10, 1026692675));
        v13 = _INSERT(_INSERT(0, 8, *((unsigned int *)((void*)&v11 + 4))), 0, (unsigned int)v11);
        if (ptr->field_8 * 2 > (unsigned int)v3)
        {
            v15 = v3;
            do
            {
                v16 = i + 1;
                v17 = i - ptr->field_8;
                v19 = (int)_INSERT(_INSERT(v17, 0, (int)v17), 8, (int)(v17 >> 32));
                v11 = (uint128_t)(MulV(v19, v13));
                *((unsigned short *)(v15 + *(p))) = v11;
                i = v16;
                v15 += 2;
            } while (i < ptr->field_8 * 2);
        }
        if (v21 + 1 < vvar_194{r56|8b})
            goto LABEL_0x7ff33cb0def;
    }
    else
    {
        v22 = 1;
    }
    if (v22 != (char)v3)
        sub_7ff33cb1274(ptr); /* do not return */
    if (*((int *)&ptr[1].padding_0[0]) > (unsigned int)v3)
    {
        v23 = v3;
        v24 = ptr->field_c;
        v25 = ptr->field_8;
        v26 = *((long long *)(v3 + ptr->field_60));
        (*((long long *)(*((long long *)*((long long *)(v3 + ptr->field_60))) + 24)))();
    }
    sub_7ff33cb0850((struct struct_0 *)&ptr[1].padding_10[24], ptr->field_8, ptr->field_c);
    sub_7ff33cb0850((struct struct_0 *)&ptr[1].padding_10[72], ptr->field_8, ptr->field_c);
    v27 = &ptr[2].padding_10[16];
    do
    {
        j = v28;
        sub_7ff33cb0814(v27);
        v27 = &v27->padding_10[32];
        v30 = j - 1;
        v28 = v30;
    } while (j != 1);
    return;
}
