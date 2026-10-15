/* sub_7ff3b170524 @ 0x7ff3b170524
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b170524  (463 bytes, 27 basic blocks)
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

typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    char padding_18[40];
    struct struct_0 *field_40;
} struct_2;

typedef struct struct_0 {
    char padding_0[40];
    struct struct_1 *field_28;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_7ff3b131a90;

unsigned int sub_7ff3b170524(long long a0, long long a1, unsigned long long a2, struct_2 *ptr, unsigned long a4, long long a5)
{
    unsigned long long v9;  // r15
    long long v10;  // r13
    unsigned long long v19;  // rcx
    unsigned long long v20;  // rcx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rsi
    long long v23;  // r9
    struct_2 *v24;  // r8
    unsigned long long choice;  // rdx
    unsigned long long v26;  // rcx
    unsigned int v11;  // ebx
    long long v12;  // rdi
    unsigned long long v13;  // rsi
    unsigned int i;  // ebx
    long long v15;  // r13
    unsigned long long v16;  // rax
    unsigned long long v17;  // rcx
    long long v18;  // r12
    unsigned long long v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long v2;  // [bp-0x80]
    unsigned long v3;  // [bp-0x78]
    unsigned int flag;  // [bp-0x70]
    long long v5;  // [bp+0x8]
    long long v6;  // [bp+0x10]
    long long v7;  // [bp+0x18]
    unsigned long v8;  // [bp+0x20]

    v6 = a1;
    v5 = a0;
    v9 = ptr->field_0;
    v10 = a1;
    v11 = 1;
    if (!a2)
        return 1;
    v12 = a5;
    if (a2 > 1 && a0 == a1)
    {
        v11 = 0;
        sub_7ff3b16d738(13, &g_7ff3b131a90, a5);
    }
    flag = 0;
    v2 = a4;
    v3 = ptr->field_10;
    if (v11 && (int)sub_7ff3b1695e8(&v2, 0, a5))
    {
        v8 = v2;
        v7 = v9 * 4 + v8;
        v13 = v9;
        i = (int)sub_7ff3b16de7c(a0, v10, 1, ptr, a5);
        v15 = v10;
        if (i)
        {
            v0 = a2 * v9;
            v16 = v9 * 4;
            v17 = v10 - a0;
            v18 = v16 + a0;
            v1 = v17;
            v19 = v17;
            do
            {
                v20 = v19;
                if (v13 == v0)
                    break;
                if (i)
                {
                    i = 1;
                    v21 = v9;
                    if ((int)sub_7ff3b16dea0(v18, v10, v20 + v18, 1, ptr, v7, a5))
                    {
                        v16 = v21 * 4;
                        continue;
                    }
                    else
                    {
                        v16 = v21 * 4;
                    }
                }
                i = 0;
                v13 += v9;
                v10 += v16;
                v18 += v16;
                v19 = v1;
            } while (i);
            v15 = v6;
        }
        v22 = v13 - v9;
        if (i)
        {
            v23 = a5;
            v24 = ptr;
            choice = 1;
            v26 = v15 + (v13 - v9) * 4;
            ptr->field_40->field_28();
        }
    }
    else
    {
        i = 0;
    }
    if (!flag)
        return i;
    sub_7ff3b1695bc(v2, 0, a5);
    return i;
}
