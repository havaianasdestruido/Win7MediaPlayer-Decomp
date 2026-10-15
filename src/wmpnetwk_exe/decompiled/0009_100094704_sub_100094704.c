/* sub_100094704 @ 0x100094704
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100094704  (1366 bytes, 124 basic blocks)
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

typedef struct struct_3 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[20];
    struct struct_0 *field_28;
    struct struct_1 *field_30;
    unsigned long long field_38;
    char padding_40[8];
    struct struct_2 *field_48;
    unsigned int field_50;
    char padding_54[4];
    unsigned int field_58;
} struct_3;

typedef struct struct_4 {
    struct struct_4 *field_0;
    struct struct_4 *field_8;
    char field_10;
} struct_4;

typedef struct struct_5 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_5;

typedef struct struct_6 {
    char padding_0[24];
    struct struct_7 *field_18;
} struct_6;

typedef struct struct_0 {
    struct struct_0 *field_0;
    struct struct_0 *field_8;
    char field_10;
} struct_0;

typedef struct struct_1 {
    struct struct_1 *field_0;
    struct struct_1 *field_8;
    char field_10;
} struct_1;

typedef struct struct_2 {
    struct struct_2 *field_0;
    struct struct_2 *field_8;
    char field_10;
} struct_2;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

extern long long g_10001e380;
extern struct_5 *g_100153eb8;

int sub_100094704(void)
{
    struct_3 *ptr;  // rcx
    struct_3 *v6;  // rdi
    unsigned long v14;  // rcx
    struct_6 **v22;  // rcx
    unsigned int v23;  // ebx
    long long v7;  // rsi
    unsigned long p;  // rdx
    unsigned long long flag;  // rdx
    unsigned int v8;  // ebx
    struct_5 *v11;  // rcx
    unsigned int choice;  // edx
    struct_4 *v13;  // rbp
    unsigned long long v0;  // [bp-0x38]
    struct_4 *v1;  // [bp-0x30]
    struct_6 **v3;  // [bp+0x18]
    struct_4 *addr;  // [bp+0x20]

    v0 = 18446744073709551614;
    v6 = ptr;
    v7 = &g_10001e380;
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1))
        sub_100034784(g_100153eb8->field_10, 205, &g_10001e380); /* do not return */
    v8 = sub_100096158(ptr);
    if (v8 >= 0)
    {
        while (true)
        {
            if (ptr->field_10 == 4)
                break;
            v11 = g_100153eb8;
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                sub_100036510(g_100153eb8->field_10, 206, &g_10001e380); /* do not return */
            choice = ptr->field_10;
            if (!choice)
            {
                if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                    sub_100034784(g_100153eb8->field_10, 207, &g_10001e380); /* do not return */
                if (ptr->field_58)
                {
                    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 2)
                        sub_100034784(g_100153eb8->field_10, 208, &g_10001e380); /* do not return */
                    goto LABEL_100094c94;
                }
                if (g_100153eb8 != &g_100153eb8)
                {
                    if ((g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                        sub_100034784(g_100153eb8->field_10, 209, &g_10001e380); /* do not return */
                    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1))
                        sub_100034784(g_100153eb8->field_10, 221, &g_10001e380); /* do not return */
                }
                v13 = ptr->field_28;
                if (!ptr->field_48)
                {
                    v14 = ptr->field_50;
                    if (v14)
                    {
                        if ((unsigned long long)(18446744073709551615 / v14) >= 56)
                            v14 *= 56;
                        else
                            sub_100036284(2147942414); /* do not return */
                    }
                    if (18446744073709551615 - v14 < 8)
                        sub_100036284(2147942414); /* do not return */
                    4297066568();
                }
                addr = ptr->field_48;
                v1 = addr;
                if (addr)
                    sub_100093904(&addr->field_10, &ptr->field_58);
                ptr->field_48 = addr->field_0;
                addr->field_8 = NULL;
                addr->field_0 = v13;
                ptr->field_38 = ptr->field_38 + 1;
                if (ptr->field_28)
                    ptr->field_28->field_8 = addr;
                else
                    ptr->field_30 = addr;
                ptr->field_28 = addr;
                sub_100093a48(&ptr->field_58);
                v11 = g_100153eb8;
                if (g_100153eb8 == &g_100153eb8)
                    goto LABEL_100094aa3;
                if ((g_100153eb8->field_1c & 1))
                    sub_100034784(g_100153eb8->field_10, 222, &g_10001e380); /* do not return */
            }
            else if (choice == 1)
            {
                if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                    sub_100034784(g_100153eb8->field_10, 210, &g_10001e380); /* do not return */
                if (ptr->field_58 == 1)
                {
                    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                        sub_100034784(g_100153eb8->field_10, 212, &g_10001e380); /* do not return */
                    sub_100094ce0(ptr);
                    v11 = g_100153eb8;
                }
                else
                {
                    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 2)
                        sub_100034784(g_100153eb8->field_10, 211, &g_10001e380); /* do not return */
                    goto LABEL_100094c94;
                }
            }
            else if (choice == 2)
            {
                if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                    sub_100034784(g_100153eb8->field_10, 213, &g_10001e380); /* do not return */
                if (!ptr->field_58)
                {
                    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                        sub_100034784(g_100153eb8->field_10, 214, &g_10001e380); /* do not return */
                    sub_100094f58(ptr); /* do not return */
                }
                if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                    sub_100034784(g_100153eb8->field_10, 215, &g_10001e380); /* do not return */
                if ((int)sub_100095ad4(ptr) >= 0)
                {
                    v11 = g_100153eb8;
                }
                else
                {
                    v11 = g_100153eb8;
                    goto LABEL_100094c94;
                }
            }
            if (v11 != &g_100153eb8 && (v11->field_1c & 8) && v11->field_19 >= 5)
                sub_100034784(v11->field_10, 216, &g_10001e380); /* do not return */
LABEL_100094aa3:
            v8 = sub_100096158(ptr);
            if (v8 >= 0)
            {
                v7 = &g_10001e380;
            }
            else
            {
                v7 = &g_10001e380;
                goto LABEL_100094be8;
            }
        }
        if (v8 < 0)
            goto LABEL_100094be8;
        if (ptr->field_58 != 1)
        {
            v11 = g_100153eb8;
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 2)
                sub_100034784(g_100153eb8->field_10, 217, &g_10001e380); /* do not return */
        }
        else
        {
            if (!ptr->field_38)
                goto LABEL_100094be8;
            v11 = g_100153eb8;
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 2)
                sub_100034784(g_100153eb8->field_10, 218, &g_10001e380); /* do not return */
        }
    }
    else
    {
LABEL_100094be8:
        v22 = NULL;
        v3 = NULL;
        if (v8 >= 0)
        {
            v23 = sub_100093c04(&ptr->field_58, &v3);
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= (v23 >= 0 ? 5 : 2))
                sub_10003be94(g_100153eb8->field_10, 219, &g_10001e380, v23, v3); /* do not return */
            if (v23 >= 0)
            {
                *((struct_6 ***)p) = v3;
                v11 = g_100153eb8;
            }
            else
            {
                v22 = v3;
                goto LABEL_100094c6f;
            }
        }
        else
        {
LABEL_100094c6f:
            *((unsigned long long *)p) = 0;
            if (v22)
            {
                flag = 1;
                *(v22)->field_18();
            }
            v3 = NULL;
            v11 = g_100153eb8;
        }
    }
LABEL_100094c94:
    if (v11 == &g_100153eb8)
    {
        return;
    }
    else if (!(v11->field_1c & 1))
    {
        return;
    }
    else if (v11->field_19 >= 5)
    {
        sub_100034834(v11->field_10, 220, &g_10001e380, v3); /* do not return */
    }
    else
    {
        return;
    }
}
