/* sub_7ff3b16a41c @ 0x7ff3b16a41c
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b16a41c  (1420 bytes, 84 basic blocks)
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

typedef struct struct_5 {
    unsigned int field_0;
    unsigned int field_4;
    unsigned long long field_8;
    int field_10;
    char padding_14[4];
    struct struct_6 *field_18;
    char padding_20[1296];
    unsigned long long field_530;
    char padding_538[4];
    unsigned int field_53c;
    char padding_540[640];
    unsigned long long field_7c0;
    unsigned long long field_7c8;
    long long field_7d0;
    long long field_7d8;
} struct_5;

typedef struct struct_11 {
    unsigned long long field_0;
    char padding_8[56];
    struct struct_7 *field_40;
} struct_11;

typedef struct struct_6 {
    struct struct_4 *field_0;
} struct_6;

typedef struct struct_7 {
    struct struct_8 *field_0;
    char padding_8[32];
    struct struct_9 *field_28;
    char padding_30[40];
    struct struct_10 *field_58;
} struct_7;

typedef struct struct_4 {
    unsigned long long field_0;
    char padding_8[56];
    struct struct_0 *field_40;
} struct_4;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[32];
    struct struct_2 *field_28;
    char padding_30[40];
    struct struct_3 *field_58;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern long long g_7ff3b131a90;

long long sub_7ff3b16a41c(struct_5 *ptr, long long a1)
{
    struct_11 *p;  // rsi
    unsigned long v13;  // r13
    struct_11 *v22;  // r8
    unsigned long long flag;  // rdx
    unsigned long long v24;  // rcx
    long long v25;  // rax
    unsigned long long v26;  // r9
    unsigned long long v27;  // cc_op
    unsigned long long v28;  // cc_dep1
    unsigned long long v29;  // cc_dep2
    unsigned long v30;  // cc_ndep
    unsigned long v31;  // 4108
    struct_5 *v14;  // rdi
    unsigned int v32;  // ebx
    unsigned long long v33;  // rdx
    unsigned int flag2;  // r8d
    unsigned long v35;  // rcx
    long long v36;  // r15
    unsigned long v37;  // rdx
    long long v38;  // r10
    long long v39;  // r12
    unsigned long v40;  // r13
    unsigned long v41;  // rdx
    struct_5 *addr;  // rcx
    unsigned long long v42;  // rcx
    unsigned long long v17;  // rcx
    long long v18;  // r9
    struct_11 *v19;  // r8
    unsigned long long choice;  // rdx
    long long v21;  // r9
    unsigned long v0;  // [bp-0x98], Other Possible Types: unsigned long long
    struct_5 *v1;  // [bp-0x90], Other Possible Types: unsigned long
    long long v2;  // [bp-0x88], Other Possible Types: unsigned long long
    long long v3;  // [bp-0x80]
    unsigned long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long v6;  // [bp-0x68]
    struct_11 **v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    unsigned int v9;  // [bp+0x8]
    unsigned int v10;  // [bp+0x18], Other Possible Types: unsigned long long
    unsigned int v11;  // [bp+0x20], Other Possible Types: unsigned long long

    p = ptr->field_18->field_0;
    v7 = ptr->field_18;
    v13 = p->field_0;
    v14 = ptr;
    v4 = v13;
    v8 = ptr->field_8;
    v3 = ptr->field_7c0 + v13 * 40;
    if (!ptr->field_0)
        return v3;
    v6 = ptr->field_4;
    if (v8)
    {
        addr = &ptr->field_53c;
        v2 = v8;
        v1 = addr;
        v0 = 0;
        v11 = v13 * 4;
        v5 = 0;
        v10 = 0 + ptr->field_7d0;
        v9 = addr->field_0;
        if (addr->field_0 != 1)
        {
            if (addr->field_0 != 2)
            {
                sub_7ff3b16d738(5, &g_7ff3b131a90, a1);
            }
            else if (ptr->field_0)
            {
                p->field_40->field_58();
            }
            else
            {
                v17 = v10;
                v18 = a1;
                v19 = p;
                choice = 1;
                p->field_40->field_28();
            }
        }
        v21 = a1;
        v22 = p;
        flag = 1;
        v24 = v10;
        p->field_40->field_28();
    }
    else
    {
        if (ptr->field_0 && (int)sub_7ff3b170524(ptr->field_7d0, ptr->field_7d8, 0, p, v3, a1))
            v25 = 1;
        else
            v25 = 0;
        v26 = 0;
        ptr->field_8 = 0;
        v27 = 20;
        v28 = 0;
        v29 = 0;
        while (true)
        {
            v5 = v26;
            ptr->field_0 = v25;
            v31 = _ccall(4, v27, v28, v29, v30);
            if ((char)v31)
                return v25;
            v32 = ptr->field_0;
            if (!ptr->field_0)
                return v25;
            v33 = v26 * 32;
            flag2 = *((int *)(1340 + v33 + (char *)ptr));
            v10 = *((int *)&ptr->padding_540[32 * v26]);
            v35 = *((long long *)&ptr->padding_540[8 + v33]);
            v9 = *((int *)&ptr->padding_538[v33]);
            v11 = *((int *)(1340 + v33 + (char *)ptr));
            v36 = ptr->field_7d8 + v13 * *((long long *)&ptr->padding_540[8 + v33]) * 4;
            v37 = ptr->field_7c8;
            v38 = *((long long *)(1328 + v33 + (char *)ptr)) + v13 * 4;
            v0 = *((long long *)(1328 + v33 + (char *)ptr));
            v39 = ptr->field_7c8 + v13 * 8;
            v2 = v38;
            v1 = ptr->field_7c8;
            if (v26 < ptr->field_8)
            {
                v32 = 0;
                sub_7ff3b16d738(5, &g_7ff3b131a90, a1);
                flag2 = v11;
                v38 = v2;
            }
            if (flag2 != 1)
                break;
            if (v32 && sub_7ff3b16dea0(v36, v36, v39, 1, p, v3, a1) && !((v40 = v1, !(unsigned int)(unsigned long long)sub_7ff3b16dea0(v0, v39, v40, 1, p, v3, a1) || (v32 = 1, !(unsigned int)(unsigned long long)sub_7ff3b16dea0(v36, v39, v39, 1, p, v3, a1) || !(unsigned int)(unsigned long long)sub_7ff3b16dea0(v2, v39, v40 + v4 * 4, 1, p, v3, a1)))))
                goto LABEL_7ff3b16abe5;
            v32 = 0;
LABEL_7ff3b16abdc:
            if (!v32)
                goto LABEL_7ff3b16ac58;
            v40 = v1;
LABEL_7ff3b16abe5:
            v41 = v10;
            if ((unsigned int)v41 > 0 && (unsigned int)v41 <= ptr->field_10)
            {
                v42 = v41 * 2;
                if (*((int *)&ptr->padding_20[264 + 8 * v42]) > 0)
                {
                    *((unsigned int *)&ptr->padding_20[264 + 8 * v42]) = *((int *)&ptr->padding_20[264 + 8 * v42]) - 1;
                    goto LABEL_7ff3b16ac32;
                }
LABEL_7ff3b16a807:
                v32 = 0;
                sub_7ff3b16d738(5, &g_7ff3b131a90, a1);
                goto LABEL_7ff3b16ac58;
            }
            else
            {
                v32 = 0;
                sub_7ff3b16d738(5, &g_7ff3b131a90, a1);
LABEL_7ff3b16ac32:
                if (v32 && v11 != 4)
                    sub_7ff3b16a2c4(v40);
LABEL_7ff3b16ac58:
                if (ptr->field_0 && v32)
                    v25 = 1;
                else
                    v25 = 0;
                v13 = v4;
                v26 = v5 + 1;
                v27 = 8;
                v28 = v26;
                v29 = v8;
            }
        }
        if (flag2 <= 1)
            goto LABEL_7ff3b16a807;
        if (flag2 > 3)
        {
            if (flag2 != 4)
                goto LABEL_7ff3b16a807;
            goto LABEL_7ff3b16abdc;
        }
        if (flag2 == 2)
        {
            if (v32)
                p->field_40->field_58();
        }
        else
        {
            if (v6)
            {
                if (v32 && sub_7ff3b16dea0(v38, v36, v39, 1, p, v3, a1))
                    p->field_40->field_0();
            }
            else
            {
                if (v32 && sub_7ff3b16dea0())
                    p->field_40->field_0();
            }
        }
        v32 = 0;
        v9 = -(v9);
        goto LABEL_7ff3b16abdc;
    }
}
