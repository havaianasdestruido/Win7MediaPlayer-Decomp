/* sub_7ff33caf614 @ 0x7ff33caf614
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33caf614  (633 bytes, 32 basic blocks)
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
    char padding_10[32];
    char field_30;
    char padding_31[3];
    unsigned int field_34;
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_1 {
    char padding_0[48];
    unsigned int field_30;
    unsigned int field_34;
} struct_1;

int sub_7ff33caf614(void)
{
    int v5;  // r8d
    unsigned long long v6;  // rbx
    unsigned long v15;  // rdx
    unsigned int v16;  // eax
    unsigned int v17;  // eax
    unsigned int v18;  // eax
    unsigned long v19;  // rdx
    unsigned int v20;  // eax
    unsigned int v21;  // eax
    unsigned long long v7;  // rsi
    unsigned long long v8;  // rdi
    void* ptr;  // rdx
    void* cur;  // rbp
    int v11;  // r9d
    struct_0 *p;  // rcx
    unsigned int flag;  // eax
    unsigned int v14;  // eax
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v1;  // [bp+0x8]
    unsigned long v2;  // [bp+0x10]
    unsigned long long v3;  // [bp+0x18]

    if (v5 < 2)
        return;
    v1 = v6;
    v2 = vvar_88{r56|8b};
    v3 = v7;
    v0 = v8;
    cur = ptr;
    if (v11 < 2 || v5 >= p->field_38->field_30 - 2 || v11 >= p->field_38->field_34 - 2)
        return;
    flag = p->field_34;
    if (!flag)
    {
        v21 = sub_7ff33caeebc(p->field_c, *((int *)ptr));
        goto LABEL_7ff33caf866;
    }
    else if (flag == 1)
    {
        *((unsigned int *)ptr) = p->field_c;
        v18 = sub_7ff33caeebc(p->field_c, (int)ptr[4]);
        v19 = (int)cur[4];
        *((unsigned int *)&cur[4]) = v18;
        *((unsigned int *)&cur[4]) = sub_7ff33caeebc(p->field_c, v19);
        v20 = sub_7ff33caeebc(p->field_c, *((int *)((char *)cur + 4 * p->field_38->field_30)));
        *((unsigned int *)((char *)cur + 4 * p->field_38->field_30)) = v20;
        v21 = sub_7ff33caeebc(p->field_c, *((int *)((char *)cur + -4 * p->field_38->field_30)));
        cur -= p->field_38->field_30 * 4;
LABEL_7ff33caf866:
        *((unsigned int *)cur) = v21;
    }
    else if (flag - 2 <= 1)
    {
        *((unsigned int *)ptr) = p->field_c;
        v14 = sub_7ff33caeebc(p->field_c, (int)ptr[4]);
        v15 = (int)cur[4];
        *((unsigned int *)&cur[4]) = v14;
        *((unsigned int *)&cur[4]) = sub_7ff33caeebc(p->field_c, v15);
        v16 = sub_7ff33caeebc(p->field_c, *((int *)((char *)cur + 4 * p->field_38->field_30)));
        *((unsigned int *)((char *)cur + 4 * p->field_38->field_30)) = v16;
        v17 = sub_7ff33caeebc(p->field_c, *((int *)((char *)cur + -4 * p->field_38->field_30)));
        *((unsigned int *)((char *)cur + -4 * p->field_38->field_30)) = v17;
        sub_7ff33caf894(p, cur - (p->field_38->field_30 * 4 + 4));
        sub_7ff33caf894(p, cur - p->field_38->field_30 * 4);
        sub_7ff33caf894(p, cur - p->field_38->field_30 * 4 + 4);
        sub_7ff33caf894(p, cur - 4);
        sub_7ff33caf894(p, cur);
        sub_7ff33caf894(p, cur + 4);
        sub_7ff33caf894(p, cur + p->field_38->field_30 * 4 - 4);
        sub_7ff33caf894(p, cur + p->field_38->field_30 * 4);
        sub_7ff33caf894(p, cur + p->field_38->field_30 * 4 + 4);
    }
    if (!p->field_30)
        sub_7ff33caf054(&p->field_c);
    return;
}
