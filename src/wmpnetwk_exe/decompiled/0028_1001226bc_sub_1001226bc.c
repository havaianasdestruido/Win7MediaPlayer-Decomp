/* sub_1001226bc @ 0x1001226bc
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1001226bc  (1420 bytes, 84 basic blocks)
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

typedef struct struct_12 {
    unsigned long long field_0;
    char padding_8[56];
    struct struct_13 *field_40;
} struct_12;

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

typedef struct struct_13 {
    struct struct_14 *field_0;
    char padding_8[32];
    struct struct_15 *field_28;
    char padding_30[40];
    struct struct_16 *field_58;
} struct_13;

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

typedef struct struct_14 {
    unsigned long long field_0;
} struct_14;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_16 {
    unsigned long long field_0;
} struct_16;

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

extern long long g_1000225e4;

int sub_1001226bc(void)
{
    struct_5 *ptr;  // rcx
    struct_11 *p;  // rsi
    struct_11 *v22;  // r8
    unsigned long long choice;  // rdx
    long long v24;  // r9
    struct_11 *v25;  // r8
    unsigned long long flag;  // rdx
    unsigned long long v27;  // rcx
    unsigned int v29;  // eax
    unsigned long long v30;  // r9
    unsigned long long v31;  // cc_op
    unsigned long v14;  // r13
    unsigned long long v32;  // cc_dep1
    unsigned long long v33;  // cc_dep2
    unsigned long v34;  // cc_ndep
    unsigned long v35;  // 4108
    unsigned int v36;  // ebx
    unsigned long long v37;  // rdx
    unsigned int flag2;  // r8d
    unsigned long v39;  // rcx
    long long v40;  // r15
    unsigned long v41;  // rdx
    struct_5 *v15;  // rdi
    long long v42;  // r10
    long long v43;  // r12
    unsigned long v44;  // r13
    unsigned long v45;  // rdx
    unsigned long long v46;  // rcx
    struct_5 *addr;  // rcx
    long long v18;  // rdx
    unsigned long long v19;  // rcx
    unsigned long long v21;  // r9
    unsigned long v0;  // [bp-0x98], Other Possible Types: unsigned long long
    struct_5 *v1;  // [bp-0x90], Other Possible Types: unsigned long
    long long v2;  // [bp-0x88], Other Possible Types: unsigned long long
    long long v3;  // [bp-0x80]
    unsigned long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long v6;  // [bp-0x68]
    struct_12 **v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    unsigned int v9;  // [bp+0x8]
    unsigned int v10;  // [bp+0x18], Other Possible Types: unsigned long long
    unsigned int v11;  // [bp+0x20], Other Possible Types: unsigned long long

    p = ptr->field_18->field_0;
    v7 = ptr->field_18;
    v14 = p->field_0;
    v15 = ptr;
    v4 = v14;
    v8 = ptr->field_8;
    v3 = ptr->field_7c0 + v14 * 40;
    if (!ptr->field_0)
        return;
    v6 = ptr->field_4;
    if (v8)
    {
        addr = &ptr->field_53c;
        v2 = v8;
        v1 = addr;
        v0 = 0;
        v11 = v14 * 4;
        v5 = 0;
        v10 = 0 + ptr->field_7d0;
        v9 = addr->field_0;
        if (addr->field_0 != 1)
        {
            if (addr->field_0 != 2)
            {
                sub_1001259d8(5, &g_1000225e4, v18);
            }
            else if (ptr->field_0)
            {
                p->field_40->field_58();
            }
            else
            {
                v19 = v10;
                v21 = v18;
                v22 = p;
                choice = 1;
                p->field_40->field_28();
            }
        }
        v24 = v18;
        v25 = p;
        flag = 1;
        v27 = v10;
        p->field_40->field_28();
    }
    else
    {
        if (ptr->field_0 && (int)sub_1001287c4(ptr->field_7d0, ptr->field_7d8, 0, p, v3, v18))
            v29 = 1;
        else
            v29 = 0;
        v30 = 0;
        ptr->field_8 = 0;
        v31 = 20;
        v32 = 0;
        v33 = 0;
        while (true)
        {
            v5 = v30;
            ptr->field_0 = v29;
            v35 = _ccall(4, v31, v32, v33, v34);
            if ((char)v35)
                return;
            v36 = ptr->field_0;
            if (!ptr->field_0)
                return;
            v37 = v30 * 32;
            flag2 = *((int *)(1340 + v37 + (char *)ptr));
            v10 = *((int *)&ptr->padding_540[32 * v30]);
            v39 = *((long long *)&ptr->padding_540[8 + v37]);
            v9 = *((int *)&ptr->padding_538[v37]);
            v11 = *((int *)(1340 + v37 + (char *)ptr));
            v40 = ptr->field_7d8 + v14 * *((long long *)&ptr->padding_540[8 + v37]) * 4;
            v41 = ptr->field_7c8;
            v42 = *((long long *)(1328 + v37 + (char *)ptr)) + v14 * 4;
            v0 = *((long long *)(1328 + v37 + (char *)ptr));
            v43 = ptr->field_7c8 + v14 * 8;
            v2 = v42;
            v1 = ptr->field_7c8;
            if (v30 < ptr->field_8)
            {
                v36 = 0;
                sub_1001259d8(5, &g_1000225e4, v18);
                flag2 = v11;
                v42 = v2;
            }
            if (flag2 != 1)
                break;
            if (v36 && sub_100126140(v40, v40, v43, 1, p, v3, v18) && !((v44 = v1, !(unsigned int)(unsigned long long)sub_100126140(v0, v43, v44, 1, p, v3, v18) || (v36 = 1, !(unsigned int)(unsigned long long)sub_100126140(v40, v43, v43, 1, p, v3, v18) || !(unsigned int)(unsigned long long)sub_100126140(v2, v43, v44 + v4 * 4, 1, p, v3, v18)))))
                goto LABEL_100122e85;
            v36 = 0;
LABEL_100122e7c:
            if (!v36)
                goto LABEL_100122ef8;
            v44 = v1;
LABEL_100122e85:
            v45 = v10;
            if ((unsigned int)v45 > 0 && (unsigned int)v45 <= ptr->field_10)
            {
                v46 = v45 * 2;
                if (*((int *)&ptr->padding_20[264 + 8 * v46]) > 0)
                {
                    *((unsigned int *)&ptr->padding_20[264 + 8 * v46]) = *((int *)&ptr->padding_20[264 + 8 * v46]) - 1;
                    goto LABEL_100122ed2;
                }
LABEL_100122aa7:
                v36 = 0;
                sub_1001259d8(5, &g_1000225e4, v18);
                goto LABEL_100122ef8;
            }
            else
            {
                v36 = 0;
                sub_1001259d8(5, &g_1000225e4, v18);
LABEL_100122ed2:
                if (v36 && v11 != 4)
                    sub_100122564(v44);
LABEL_100122ef8:
                if (ptr->field_0 && v36)
                    v29 = 1;
                else
                    v29 = 0;
                v14 = v4;
                v30 = v5 + 1;
                v31 = 8;
                v32 = v30;
                v33 = v8;
            }
        }
        if (flag2 <= 1)
            goto LABEL_100122aa7;
        if (flag2 > 3)
        {
            if (flag2 != 4)
                goto LABEL_100122aa7;
            goto LABEL_100122e7c;
        }
        if (flag2 == 2)
        {
            if (v36)
                p->field_40->field_58();
        }
        else
        {
            if (v6)
            {
                if (v36 && sub_100126140(v42, v40, v43, 1, p, v3, v18))
                    p->field_40->field_0();
            }
            else
            {
                if (v36 && sub_100126140())
                    p->field_40->field_0();
            }
        }
        v36 = 0;
        v9 = -(v9);
        goto LABEL_100122e7c;
    }
}
