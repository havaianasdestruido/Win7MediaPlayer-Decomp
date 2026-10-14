/* sub_10005e4f8 @ 0x10005e4f8
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10005e4f8  (570 bytes, 58 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): f069226052de289452ef5ff9dd67557193c15308c5351bc7b70b6692b350951b
 *   Evidence: analysis/report/rea-evidence/setup_wm_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_7 {
    char padding_0[8];
    struct struct_6 *field_8;
    char padding_10[24];
    int field_28;
    char padding_2c[588];
    unsigned int field_278;
    char padding_27c[4];
    unsigned int field_280;
} struct_7;

typedef struct struct_6 {
    struct struct_3 *field_0;
    struct struct_6 *field_8;
} struct_6;

typedef struct struct_3 {
    char padding_0[96];
    int field_60;
    char padding_64[16];
    int field_74;
    char padding_78[8];
    struct struct_4 *field_80;
    struct struct_5 *field_88;
    unsigned long long field_90;
} struct_3;

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_0 *field_8;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    struct struct_2 *field_8;
} struct_2;

typedef struct struct_4 {
    struct struct_0 *field_0;
} struct_4;

typedef struct struct_5 {
    struct struct_2 *field_0;
} struct_5;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern unsigned long long g_1000888e8;

long long sub_10005e4f8(struct_7 *ptr, unsigned int a1)
{
    unsigned long long v8;  // rbx
    unsigned long long v9;  // rsi
    struct_0 *ptr4;  // rsi
    struct_2 *cur;  // rax
    unsigned long long v19;  // rcx
    struct_0 *iter;  // rbp
    unsigned int *v21;  // rsi
    unsigned int v22;  // eax
    unsigned int v23;  // eax
    unsigned int v24;  // ecx
    long long v25;  // rdx
    unsigned long v26;  // rcx
    unsigned long long v10;  // rdi
    unsigned int v27;  // r12d
    unsigned long long v11;  // r12
    unsigned long long v12;  // r13
    unsigned long long v13;  // r14
    struct_6 *node;  // rbx
    unsigned int v15;  // eax
    struct_3 *p;  // rbp
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v3;  // [bp+0x8]
    unsigned long v4;  // [bp+0x10]
    unsigned long long v5;  // [bp+0x18]
    unsigned long long v6;  // [bp+0x20]

    v3 = v8;
    v4 = vvar_342{r56|8b};
    v5 = v9;
    v6 = v10;
    v2 = v11;
    v1 = v12;
    v0 = v13;
    node = ptr->field_8;
    v27 = 0;
    ptr->field_278 = 0;
    ptr->field_28 = a1;
    if (node)
    {
        while (true)
        {
            if (!node->field_0)
                break;
            node->field_0->field_74 = ptr->field_28;
            v15 = ptr->field_28;
            if (v15)
            {
                if (v15 <= 0)
                    4298113688();
                if (v15 > 2)
                {
                    if (v15 != 3)
                        4298113688();
                    p = node->field_0;
                    if (!p->field_80 || (ptr4 = (struct_0 *)p->field_80->field_0, !ptr4))
                        goto LABEL_10005e734;
                    if (ptr4->field_0->field_0 != 4 || !sub_10005a1a0(ptr4->field_0))
                    {
                        ptr4 = ptr4->field_8;
                        continue;
                    }
                    if (p->field_88)
                    {
                        cur = p->field_88->field_0;
                        for (v19 = 0; cur; cur = cur->field_8)
                        {
                            if (cur->field_0)
                            {
                                v19 = cur->field_0;
                                break;
                            }
                        }
                        p->field_90 = v19;
                    }
                    if (!p->field_90)
                        goto LABEL_10005e734;
                    for (iter = p->field_80->field_0; iter; iter = iter->field_8)
                    {
                        v21 = &iter->field_0->field_0;
                        if (*(v21) == 1)
                        {
                            v22 = 0;
                            if ((int)sub_100059d50(v21) || (v22 = (unsigned int)(int)sub_100059b14(v21, 0), v22))
                                v22 = 1;
                            if (v22)
                                goto LABEL_10005e734;
                        }
                    }
                    if (ptr->field_280)
                        goto LABEL_10005e65c;
                    v23 = sub_1000621e4(node->field_0, 0);
                }
                else
                {
                    v23 = sub_100062190(node->field_0);
                }
                v24 = !v23;
            }
            else
            {
                v24 = sub_10006196c(node->field_0, 0);
            }
            if (v24)
            {
LABEL_10005e65c:
                if (node->field_0->field_60 >= 0 && sub_10006196c(node->field_0, 0))
                {
                    sub_100061aa4(node->field_0, 0);
                    sub_100061724(node->field_0, ptr->field_28 != 3);
                    sub_100061b6c(node->field_0);
                    if (g_1000888e8)
                        4298114944();
                    v27 += 1;
                    goto LABEL_10005e73e;
                }
            }
LABEL_10005e734:
            sub_100061724(node->field_0, 0);
LABEL_10005e73e:
            node = node->field_8;
            if (!node)
                break;
        }
        if (v27)
            sub_100051d60(v27); /* do not return */
        if (!node)
            goto LABEL_10005e772;
        v25 = "ERROR: Nothing to install.\r\n";
        v26 = v27 + 2;
    }
    else
    {
LABEL_10005e772:
        v25 = "  Install list not generated or parsed for this install type.\r\n";
        v26 = 4;
    }
    sub_1000527a0(v26, v25);
    sub_100051d60(v27); /* do not return */
}
