/* sub_1000608e0 @ 0x1000608e0
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x1000608e0  (793 bytes, 59 basic blocks)
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

typedef struct struct_4 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_4;

typedef struct struct_3 {
    struct struct_2 *field_0;
    struct struct_3 *field_8;
} struct_3;

typedef struct struct_2 {
    char padding_0[48];
    long long field_30;
    char padding_38[64];
    struct struct_0 *field_78;
    char padding_80[16];
    struct struct_1 *field_90;
} struct_2;

typedef struct struct_1 {
    char padding_0[48];
    long long field_30;
    long long field_38;
    char padding_40[24];
    unsigned int field_58;
    char padding_5c[48];
    unsigned int field_8c;
    unsigned int field_90;
} struct_1;

typedef struct struct_9 {
    struct struct_8 *field_0;
    struct struct_9 *field_8;
} struct_9;

typedef struct struct_0 {
    char padding_0[644];
    unsigned int field_284;
} struct_0;

typedef struct struct_8 {
    char padding_0[48];
    unsigned long long field_30;
    char padding_38[64];
    struct struct_6 *field_78;
    char padding_80[16];
    struct struct_7 *field_90;
} struct_8;

typedef struct struct_6 {
    char padding_0[644];
    unsigned int field_284;
} struct_6;

typedef struct struct_7 {
    char padding_0[48];
    unsigned long long field_30;
    unsigned long long field_38;
    char padding_40[24];
    unsigned int field_58;
    char padding_5c[48];
    unsigned int field_8c;
    unsigned int field_90;
} struct_7;

extern long long g_100086f40;
extern void g_100087148;

unsigned long long sub_1000608e0(struct_4 *addr)
{
    struct_3 *v4;  // rdi
    int v5;  // esi
    long long v13;  // r8
    struct_1 *v15;  // rax
    struct_9 *v17;  // rdi
    int v18;  // ebx
    struct_3 *ptr;  // rdi
    struct_2 *p;  // r12
    unsigned int v8;  // ebp
    struct_1 *v9;  // rax
    unsigned int v10;  // eax
    long long v11;  // rdx
    long long v12;  // rcx
    unsigned long v0;  // [bp-0x58]
    long long v1;  // [bp-0x50]
    long long v2;  // [bp-0x38]

    v4 = addr->field_8;
    v5 = 0;
    v18 = 0;
    if (v4)
    {
        do
        {
            ptr = v4;
            p = ptr->field_0;
            if (!p)
                break;
            v8 = 0;
            sub_100061864(p, 0);
            v9 = p->field_90;
            if (!v9)
            {
                sub_1000527f4();
                goto LABEL_100060966;
            }
            else if (!v9->field_30 || !((v10 = (unsigned int)(unsigned long long)sub_100053454(v9->field_30), v10 || !((v9 = (struct_1 *)p->field_90, v8 = (v9->field_90 ? 1 : v10), !v8)))))
            {
                if (v9->field_38)
                {
                    v8 = sub_100053454(v9->field_38);
                    if (!v8)
                        sub_1000527f4();
                    else
                        goto LABEL_100060a49;
                }
                if (v8)
                    goto LABEL_100060a49;
LABEL_100060966:
                v11 = "   Uninstall for component '%S' not available.\r\n";
                v12 = 4;
                v13 = sub_100061b6c(ptr->field_0);
                goto LABEL_10006097d;
            }
            else
            {
LABEL_100060a49:
                if (ptr->field_0->field_78->field_284)
                {
                    if (ptr->field_0->field_90->field_8c != 1)
                        continue;
                }
                else
                {
                    if (ptr->field_0->field_90->field_8c)
                        continue;
                }
                sub_1000527f4(4, "   Beginning Uninstall of component '%S'.\r\n", sub_100061b6c());
                v15 = ptr->field_0->field_90;
                if (v15->field_58 == 1)
                {
                    if (v15 && v15->field_90)
                    {
                        v5 = sub_100060724(addr);
                        if (v5 >= 0)
                            sub_100060468(addr, ptr->field_0->field_30);
                        sub_1000527f4(4, "   Uninstall of component '%S' returned 0x%x.\r\n", sub_100061b6c(ptr->field_0), v5);
                    }
                }
                else if (v15->field_58 - 3 <= 1)
                {
                    *((unsigned int *)&v2) = 42;
                    *((unsigned int *)&v0) = 0;
                    *((unsigned int *)((char *)&v0 + 4)) = 0;
                    *((unsigned int *)&v1) = 0;
                    sub_10006fd44(&v0, ptr->field_0->field_90->field_30, L"Uninstall", 0, v0, v1, 0, 0, v2); /* do not return */
                }
                if (v5 < 0)
                    v18 = v5;
                if (v5 != 862969)
                    continue;
                *((unsigned int *)&g_100087148) = *((int *)&g_100087148) | 2;
                v13 = L"UNKNOWN";
                v11 = "  Reboot requested due to '%S' file clean-up.\r\n";
                v12 = 2;
                v13 = L"Uninstall";
LABEL_10006097d:
                sub_1000527f4(v12, v11, v13);
            }
        } while (((v5 == -2147024894 || v5 == -2147024893) && (!ptr->field_0->field_90 || !ptr->field_0->field_90->field_90) && !((v17 = (struct_9 *)ptr->field_8, v4 = (struct_3 *)v17, !ptr->field_8)) || (v17 = (struct_9 *)ptr->field_8, v4 = (struct_3 *)v17, !ptr->field_8)) && !((v17 = (struct_9 *)ptr->field_8, v4 = (struct_3 *)v17, !ptr->field_8)));
        if (v5 >= 0)
            goto LABEL_100060bb0;
        v18 = v5;
        goto LABEL_100060bfe;
    }
    else
    {
LABEL_100060bb0:
        sub_100053d0c(&g_100086f40);
        if (!*((int *)&g_100087148))
            goto LABEL_100060bfe;
        sub_100053d0c(&g_100086f40);
        if ((g_100087148 & 8))
        {
            if (v18 >= 0)
                v18 = 862969;
            else
                return 3222088443;
        }
        else
        {
            if (v18 >= 0)
            {
                v18 = 862968;
            }
            else
            {
                v18 = -1072878854;
LABEL_100060bfe:
                if (v18 < 0)
                    return v18;
            }
        }
        sub_10005f8cc(addr);
        return v18;
    }
}
