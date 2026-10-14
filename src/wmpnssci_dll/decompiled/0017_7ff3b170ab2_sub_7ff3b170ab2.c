/* sub_7ff3b170ab2 @ 0x7ff3b170ab2
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b170ab2  (873 bytes, 57 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    long long field_0;
    char padding_8[48];
    long long field_38;
    char padding_40[16];
    struct struct_1 *field_50;
} struct_0;

typedef struct struct_1 {
    char field_0;
} struct_1;

unsigned int sub_7ff3b170ab2(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, long long a15, long long a16, unsigned long a17, unsigned long a18, char *cur, char *a20)
{
    long long v2;  // rax
    unsigned long long v3;  // r12
    char *iter;  // rdi
    unsigned long long ptr3;  // rcx
    char *j;  // rsi
    long long ptr[11];  // rbx, Other Possible Types: struct_0 *
    char *k;  // rsi
    char *node;  // rdi
    unsigned int l;  // esi
    unsigned long long m;  // r12
    long long v16;  // rsi
    long long v17;  // rsi
    unsigned long v18;  // rdi
    unsigned long long v4;  // rcx
    char *v5;  // r13
    char *v6;  // r14
    unsigned long long v7;  // rax
    long long v1;  // [bp+0xb0]

    if (!v2)
        return 0;
    if (!v3)
    {
        l = (int)sub_7ff3b16924c(ptr[10], ptr[10], a20, ptr[7], ptr[0], vvar_224{r56|8b});
        for (v4 = v18 * 4; v4; cur += 1)
        {
            v4 -= 1;
            *(cur) = 0;
        }
    }
    else
    {
        v5 = a20;
        v6 = cur;
        a18 = v2 + v18 * 8;
        v7 = v18 * 4;
        iter = v5;
        for (ptr3 = v7; ptr3; j += 1)
        {
            ptr3 -= 1;
            *(iter) = *(j);
            iter += 1;
        }
        k = &ptr->field_50->field_0;
        v1 = v7 + v2;
        for (node = v6; v7; k += 1)
        {
            v7 -= 1;
            *(node) = *(k);
            node += 1;
        }
        if ((int)sub_7ff3b16d878(a16, 2) && (int)sub_7ff3b16d78c(a15, a15, v2, ptr, a18, vvar_224{r56|8b}) && sub_7ff3b169450(v2, v1, v2, ptr->field_38, ptr->field_0, vvar_224{r56|8b}))
            l = 1;
        else
            l = 0;
        m = v3 - 1;
        while (l)
        {
            while (m)
            {
                m -= 1;
                if (l && !((v16 = v1, !(int)sub_7ff3b16d78c(v6, v6, v16, ptr, a18, vvar_224{r56|8b}) || !(int)sub_7ff3b16d78c(v16, v2, v16, ptr, a18, vvar_224{r56|8b}) || !(int)sub_7ff3b16d78c(v6, v5, v6, ptr, a18, vvar_224{r56|8b}) || !(int)sub_7ff3b16d78c(v5, v5, v5, ptr, a18, vvar_224{r56|8b}) || !(int)sub_7ff3b16924c(v5, v16, v5, ptr->field_38, ptr->field_0, vvar_224{r56|8b}) || !(int)sub_7ff3b16d878(v5, 4294967295, v5, ptr, vvar_224{r56|8b}))))
                    l = 1;
                else
                    l = 0;
                if (!((char)(*((int *)(a17 + (m >> 5) * 4)) >> ((char)m & 31)) & 1))
                    goto LABEL_0x7ff3b170df3;
                if (l && !((v17 = v1, !(int)sub_7ff3b16d78c(v2, v6, v17, ptr, a18, vvar_224{r56|8b}) || !(int)sub_7ff3b16d78c(a15, v6, v6, ptr, a18, vvar_224{r56|8b}) || !(int)sub_7ff3b16924c(v6, v5, v6, ptr->field_38, ptr->field_0, vvar_224{r56|8b}) || !(int)sub_7ff3b16d878(v6, 4294967295, v6, ptr, vvar_224{r56|8b}) || !(int)sub_7ff3b16d78c(a15, v5, v5, ptr, a18, vvar_224{r56|8b}) || !(int)sub_7ff3b16924c(v5, v17, v5, ptr->field_38, ptr->field_0, vvar_224{r56|8b}) || !(int)sub_7ff3b16d878(v5, 4294967295, v5, ptr, vvar_224{r56|8b}))))
                    l = 1;
                else
                    l = 0;
            }
        }
    }
    sub_7ff3b1695bc(v2, 0, vvar_224{r56|8b});
    return l;
}
