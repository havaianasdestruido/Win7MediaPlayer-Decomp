/* sub_100038e78 @ 0x100038e78
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100038e78  (682 bytes, 64 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 306467d280e99d0616e839278a4db5bed684f002ae284c3678cabb5251459cb3
 *   Evidence: analysis/report/rea-evidence/wmpnetwk_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_14 {
    struct struct_3 *field_0;
    char padding_8[64];
    unsigned int field_48;
} struct_14;

typedef struct struct_1 {
    char padding_0[24];
    struct struct_2 *field_18;
} struct_1;

typedef struct struct_15 {
    char padding_0[8];
    unsigned long long field_8;
    unsigned int field_10;
    unsigned int field_14;
} struct_15;

typedef struct struct_3 {
    char padding_0[56];
    struct struct_4 *field_38;
    struct struct_5 *field_40;
    struct struct_6 *field_48;
    struct struct_7 *field_50;
    struct struct_8 *field_58;
    struct struct_9 *field_60;
    struct struct_10 *field_68;
    struct struct_11 *field_70;
    struct struct_12 *field_78;
    struct struct_13 *field_80;
} struct_3;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern struct_1 *g_100152100;
extern struct_0 *g_100153eb8;

int sub_100038e78(void)
{
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdi
    unsigned int v22;  // ecx
    unsigned long long v23;  // rsi
    unsigned int flag;  // eax
    unsigned int choice;  // eax
    unsigned int flag2;  // eax
    unsigned int flag3;  // eax
    unsigned int v29;  // eax
    unsigned int v30;  // eax
    unsigned long v31;  // rdx
    unsigned long long v14;  // r12
    struct_14 *v32;  // rcx
    struct_1 **v33;  // rcx
    struct_14 *v35;  // rcx
    unsigned long long v36;  // rsi
    unsigned long long v37;  // cc_dep1
    struct_15 *ptr;  // r8
    unsigned long long v39;  // cc_dep2
    unsigned int v40;  // eax
    unsigned long long v15;  // r13
    unsigned long v41;  // 4131
    unsigned long v42;  // rdx
    struct_14 *v43;  // rcx
    struct_14 *v44;  // rcx
    struct_14 *v45;  // rcx
    unsigned long long v47;  // r8
    unsigned long v49;  // rdx
    unsigned long long v16;  // r14
    struct_14 *v50;  // rcx
    struct_14 *v51;  // rcx
    struct_14 *v52;  // rcx
    struct_14 *v53;  // rcx
    struct_14 *v54;  // rcx
    unsigned long long v17;  // rbx
    struct_14 *p;  // r9
    struct_14 *v19;  // rdi
    unsigned long long v20;  // r8
    unsigned int v21;  // edx
    unsigned int v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    struct_14 *v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v5;  // [bp-0x20]
    unsigned long long v6;  // [bp-0x18]
    unsigned long long v7;  // [bp-0x10]
    unsigned long long v8;  // [bp-0x8]
    unsigned long long v9;  // [bp+0x8]
    unsigned long v10;  // [bp+0x10]

    v8 = v12;
    v7 = v13;
    v6 = v14;
    v5 = v15;
    v4 = v16;
    v3 = 18446744073709551614;
    v9 = v17;
    v10 = vvar_86{r56|8b};
    v19 = p;
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1) && g_100153eb8->field_19 >= 5)
    {
        v2 = p;
        v1 = v20;
        v0 = v21;
        sub_10003654c(g_100153eb8->field_10, 108, sub_10001e638, v22); /* do not return */
    }
    v23 = 120;
    flag = v22 - 1;
    if (v22 != 1)
    {
        choice = flag - 1;
        if (flag != 1)
        {
            flag2 = choice - 1;
            if (choice != 1)
            {
                flag3 = flag2 - 1;
                if (flag2 != 1)
                {
                    v29 = flag3 - 1;
                    if (flag3 != 1)
                    {
                        v30 = v29 - 6;
                        if (v29 != 6)
                        {
                            if (v30 != 2)
                            {
                                if (v30 != 3)
                                {
                                    if (v22 >= 128)
                                    {
                                        if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 4)
                                            sub_100036510(g_100153eb8->field_10, 115, sub_10001e638, v22); /* do not return */
                                        v31 = v22;
                                        v32 = p;
                                        p->field_0->field_60();
                                    }
                                    else
                                    {
                                        v33 = &g_100152100;
                                        g_100152100->field_18();
                                    }
                                }
                                else
                                {
                                    if (v21 == 6)
                                    {
                                        v35 = p;
                                        p->field_0->field_80();
                                    }
                                }
                            }
                            else
                            {
                                if (v21 == 4)
                                {
                                    v45 = p;
                                    p->field_0->field_70();
                                }
                                else if (v21 == 18)
                                {
                                    v44 = p;
                                    p->field_0->field_78();
                                }
                                else if (v21 == 32787)
                                {
                                    v36 = 13;
                                    v37 = 4797621938776705366;
                                    v39 = (unsigned long long)ptr->padding_0;
                                    if (ptr->padding_0 == 4797621938776705366 && !((v37 = 9183326762771064507, v39 = ptr->field_8, ptr->field_8 != 9183326762771064507)))
                                    {
                                        v40 = 0;
                                    }
                                    else
                                    {
                                        v41 = _ccall(15, 0, (unsigned long long)(char)(v37 < v39), (unsigned long long)(char)(v37 < v39));
                                        v40 = -(v37 < v39) + 1 - ((unsigned int)v41 & 1);
                                    }
                                    if (!v40 && ptr->field_10 == 4)
                                    {
                                        v42 = ptr->field_14;
                                        v43 = p;
                                        p->field_0->field_68();
                                    }
                                }
                            }
                            4297064616();
                        }
                        else
                        {
                            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 4)
                                sub_100034784(g_100153eb8->field_10, 113, sub_10001e638); /* do not return */
                            v47 = ptr;
                            v49 = v21;
                            v50 = p;
                            p->field_0->field_58();
                        }
                    }
                    else
                    {
                        if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 4)
                            sub_100034784(g_100153eb8->field_10, 114, sub_10001e638); /* do not return */
                        p->field_48 = 0;
                        v51 = p;
                        p->field_0->field_50();
                    }
                }
                else
                {
                    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 4)
                        sub_100034784(g_100153eb8->field_10, 112, sub_10001e638); /* do not return */
                    v52 = p;
                    p->field_0->field_38();
                }
            }
            else
            {
                if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 4)
                    sub_100034784(g_100153eb8->field_10, 111, sub_10001e638); /* do not return */
                v53 = p;
                p->field_0->field_48();
            }
        }
        else
        {
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 4)
                sub_100034784(g_100153eb8->field_10, 110, sub_10001e638); /* do not return */
            v54 = p;
            p->field_0->field_40();
        }
    }
    else
    {
        if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 4)
            sub_100034784(g_100153eb8->field_10, 109, sub_10001e638); /* do not return */
        sub_100038a00(p, 3); /* do not return */
    }
}
