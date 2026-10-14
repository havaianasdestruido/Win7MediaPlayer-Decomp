/* sub_7ff3b15bdd4 @ 0x7ff3b15bdd4
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b15bdd4  (637 bytes, 54 basic blocks)
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
    char padding_0[24];
    unsigned long long field_18;
    unsigned long long field_20;
} struct_0;

typedef struct struct_5 {
    struct struct_6 *field_0;
    char padding_8[124];
    char field_84;
    char padding_85[11];
    char field_90;
} struct_5;

typedef struct struct_2 {
    struct struct_3 *field_0;
    char padding_8[124];
    char field_84;
    char padding_85[11];
    char field_90;
} struct_2;

typedef struct struct_12 {
    struct struct_10 *field_0;
    char padding_8[124];
    char field_84;
    char padding_85[11];
    char field_90;
} struct_12;

typedef struct struct_9 {
    struct struct_8 *field_0;
} struct_9;

typedef struct struct_8 {
    struct struct_7 *field_0;
} struct_8;

typedef struct struct_6 {
    struct struct_4 *field_0;
} struct_6;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_10 {
    char padding_0[32];
    struct struct_11 *field_20;
} struct_10;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

int sub_7ff3b15bdd4(void)
{
    struct_0 *ptr;  // rcx
    unsigned long long v5;  // r15
    unsigned long long cur;  // r12
    unsigned long long v13;  // rcx
    unsigned long long *ptr3;  // rsi
    unsigned long long k;  // r14
    unsigned long long v16;  // r15
    unsigned long long v17;  // rdx
    struct_12 *v18;  // rsi
    struct_9 **p;  // rsi
    struct_9 **addr;  // r12
    struct_8 **v21;  // rcx
    unsigned long long v6;  // rdi
    struct_8 **v22;  // rax
    struct_5 *v23;  // rcx
    unsigned long long v24;  // cc_op
    struct_2 **v25;  // cc_dep1
    char *v26;  // cc_dep2
    unsigned long long v27;  // 4135
    unsigned long long v28;  // rdi
    unsigned long long choice;  // rdx
    struct_5 *v30;  // rcx
    struct_12 *v31;  // rcx
    struct_5 *v7;  // rbx
    unsigned long long flag3;  // rdx
    unsigned long long flag2;  // rdx
    unsigned long long flag;  // rdx
    struct_5 *v35;  // rcx
    unsigned long long i;  // rax
    struct_2 **ptr4;  // rsi
    unsigned long long v10;  // cc_ndep
    unsigned long long j;  // rbp
    unsigned long long ptr6;  // [bp+0x8]
    unsigned long long v1;  // [bp+0x10]
    unsigned long v2;  // [bp+0x18], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp+0x20]

    v5 = ptr->field_20;
    v6 = 1;
    v7 = NULL;
    i = 4;
    v1 = v5;
    if (v5 > 4)
    {
        do
        {
            v6 = i;
            i = i * 3 + 1;
        } while (i < v5);
        if (!v6)
            return;
    }
    do
    {
        j = v6 - 1;
        if (j < v5)
        {
            cur = j - v6;
            ptr6 = cur;
            v13 = cur * 8;
            v3 = v13;
            do
            {
                if (j >= ptr->field_20)
                    sub_7ff3b137480(2147942487); /* do not return */
                ptr3 = ptr->field_18 + j * 8;
                if (v7 == *(ptr3))
                {
                    if (&v2 == ptr3)
                        goto LABEL_7ff3b15be84;
                }
                else
                {
                    if (v7)
                    {
                        choice = 1;
                        v30 = v7;
                        v7->field_0->field_0();
                    }
                    v7 = *(ptr3);
                }
                *(ptr3) = 0;
LABEL_7ff3b15be84:
                k = j;
                if (j >= v6)
                {
                    v16 = cur;
                    v17 = v13;
                    v2 = v13;
                    do
                    {
                        if (v16 >= ptr->field_20)
                            sub_7ff3b137480(2147942487); /* do not return */
                        v18 = *((long long *)(v17 + ptr->field_18));
                        if ((v18->field_84 >> 4 & 1) && !(v7->field_84 & 16))
                            continue;
                        if (!(v18->field_84 >> 4 & 1) && (v7->field_84 & 16))
                            break;
                        if (!v18->field_90)
                        {
LABEL_7ff3b15beee:
                            if (!v7->field_90)
                            {
                                v31 = v18;
                                v18->field_0->field_20();
                            }
                        }
                        else if (v7->field_90)
                        {
                            if (v18->field_90)
                            {
                                v31 = v18;
                                v18->field_0->field_20();
                            }
                            goto LABEL_7ff3b15beee;
                        }
                        if (v16 >= ptr->field_20)
                            sub_7ff3b137480(2147942487); /* do not return */
                        p = v17 + ptr->field_18;
                        if (k >= ptr->field_20)
                            sub_7ff3b137480(2147942487); /* do not return */
                        addr = ptr->field_18 + k * 8;
                        v21 = *(addr);
                        if (v21 == *(p))
                        {
                            if (addr != p)
                                *(p) = NULL;
                        }
                        else
                        {
                            if (v21)
                            {
                                flag3 = 1;
                                *(v21)->field_0();
                            }
                            *(addr) = 0;
                            v22 = *(p);
                            *(p) = NULL;
                            *(addr) = v22;
                        }
                        k -= v6;
                        v16 -= v6;
                        v17 -= v6 * 8;
                        v2 = v17;
                    } while (k >= v6);
                    cur = ptr6;
                    v5 = v1;
                }
                if (k >= ptr->field_20)
                    sub_7ff3b137480(2147942487); /* do not return */
                ptr4 = ptr->field_18 + k * 8;
                v23 = *(ptr4);
                if (v23 == v7)
                {
                    v24 = 8;
                    v25 = ptr4;
                    v26 = &v2;
                    if (ptr4 == &v2)
                        continue;
                }
                else if (v23)
                {
                    flag2 = 1;
                    v23->field_0->field_0();
                }
                else
                {
                    *(ptr4) = v7;
                }
                v24 = 19;
                v25 = NULL;
                v26 = NULL;
                v7 = NULL;
                v27 = _ccall(v24, v25, v26, v10);
                cur += 1;
                v10 = v27;
                j += 1;
                v13 = v3 + 8;
                ptr6 = cur;
                v3 = v13;
            } while (j < v5);
        }
        v6 /= 3;
    } while (v28 >> 1);
    if (!v7)
        return;
    flag = 1;
    v35 = v7;
    v7->field_0->field_0();
}
