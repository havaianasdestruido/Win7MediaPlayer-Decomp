/* sub_7ff3b16781e @ 0x7ff3b16781e
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b16781e  (699 bytes, 36 basic blocks)
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
    char padding_0[4];
    unsigned int field_4;
} struct_0;

typedef struct struct_1 {
    char padding_0[4];
    unsigned int field_4;
} struct_1;

extern unsigned int g_7ff3b17b310;
extern long long g_7ff3b17b33c;
extern struct_0 g_7ff3b17be40;

int sub_7ff3b16781e(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, void* a11, unsigned long node, unsigned long a13, unsigned int a14, unsigned long a15, unsigned long a16, unsigned long a17, long long a18, unsigned long a19, long long a20, char a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned long a31, unsigned long a32, unsigned long a33, unsigned long a34, unsigned long a35, unsigned long a36, unsigned long a37, unsigned long a38, unsigned long a39, void* a40)
{
    unsigned int v1;  // eax
    void* v2;  // rbx
    void* ptr;  // r15
    unsigned long long v10;  // rcx
    void* cur;  // rdi
    long long v12;  // r12
    unsigned int v13;  // eax
    struct_0 *ptr3;  // r14
    unsigned long v15;  // rbp
    void* v16;  // r13
    void* v17;  // r13
    unsigned long j;  // rbp
    void* v3;  // rax
    void* v19;  // r13
    unsigned long v20;  // rbp
    long long v21;  // r14
    void* v22;  // r15
    void* v23;  // rbx
    void* v24;  // rax
    void* v25;  // rcx
    void* v26;  // r11
    void* p;  // r10
    unsigned long long v28;  // rcx
    void* v4;  // rsi
    void* iter;  // rdi
    unsigned int v30;  // eax
    void* v31;  // r13
    struct_1 *ptr4;  // rbp
    void* v33;  // r13
    void* v34;  // r13
    void* v5;  // rdx
    void* v6;  // r10
    void* v7;  // r10
    void* v8;  // rdx

    if (v1 == (unsigned int)v2)
        goto LABEL_0x7ff3b16778e;
    v3 = a11;
    a15 = g_7ff3b17b310;
    v5 = v3;
    v6 = v4;
    v7 = v6;
    v8 = v5;
    node = v7;
    a13 = v8;
    if (v3 != ptr && v4 != ptr)
    {
        if (g_7ff3b17b310 == v2)
        {
            v10 = g_7ff3b17b310 * 4;
            for (cur = ptr; v10; cur += 1)
            {
                v10 -= 1;
                *((char *)cur) = 0;
            }
        }
        else
        {
            v13 = sub_7ff3b168d10(v7, *((int *)v8), ptr, g_7ff3b17b310, v12);
            *((unsigned int *)((char *)ptr + 4 * g_7ff3b17b310)) = v13;
            if (a15 != 0x1)
            {
                ptr3 = ptr + g_7ff3b17b310 * 4 + 4;
                v15 = a15 - 1;
                v16 = a13 + 4;
                do
                {
                    v17 = v16;
                    j = v15;
                    v19 = v17 + 4;
                    *((unsigned int *)&ptr3->padding_0[0]) = sub_7ff3b168b64(node, *((int *)v17), ptr - a13 + v17, g_7ff3b17b310, v12);
                    ptr3 = &ptr3->field_4;
                    v20 = j - 1;
                    v15 = v20;
                    v16 = v19;
                } while (j != 1);
                v21 = a20;
                v22 = a40;
                v23 = NULL;
            }
        }
    }
    sub_7ff3b16e850(v22, g_7ff3b17b310 * 2, &vvar_21, g_7ff3b17b310, &g_7ff3b17be40.field_0[0], v23, v4, v12);
    if ((int)sub_7ff3b16cd3c(&g_7ff3b17b33c, 4, 60, v4, g_7ff3b17b310, v22, v21, v12) == (unsigned int)v23)
        goto LABEL_0x7ff3b1676ef;
    v24 = a11;
    v25 = v24 + 0x200;
    node = g_7ff3b17b310;
    v26 = v24;
    a13 = v24;
    a15 = v25;
    p = v22 + 0x200;
    if (v24 != p && v25 != p)
    {
        if (g_7ff3b17b310 == v2)
        {
            v28 = g_7ff3b17b310 * 4;
            for (iter = p; v28; iter += 1)
            {
                v28 -= 1;
                *((char *)iter) = 0;
            }
        }
        else
        {
            v30 = sub_7ff3b168d10(a15, *((int *)v26), p, g_7ff3b17b310, v12);
            p = v22 + 0x200;
            *((unsigned int *)((char *)p + 4 * g_7ff3b17b310)) = v30;
            if (node != 0x1)
            {
                v31 = a13 + 4;
                node -= 1;
                ptr4 = p + g_7ff3b17b310 * 4 + 4;
                do
                {
                    v33 = v31;
                    v34 = v33 + 4;
                    *((unsigned int *)&ptr4->padding_0[0]) = sub_7ff3b168b64(a15, *((int *)v33), p - a13 + v33, g_7ff3b17b310, v12);
                    ptr4 = &ptr4->field_4;
                    node -= 1;
                    v31 = v34;
                } while (node != 1);
                v21 = a20;
                v23 = NULL;
                p = v22 + 0x200;
            }
        }
    }
    sub_7ff3b16e850(p, g_7ff3b17b310 * 2, &vvar_21, g_7ff3b17b310, &g_7ff3b17be40.field_0[0], v23, v4, v12);
    sub_7ff3b169794(a18, v21, 0, 0, v12); /* do not return */
}
