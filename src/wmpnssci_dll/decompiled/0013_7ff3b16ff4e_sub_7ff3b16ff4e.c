/* sub_7ff3b16ff4e @ 0x7ff3b16ff4e
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b16ff4e  (871 bytes, 68 basic blocks)
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
    long long field_0;
    char padding_8[48];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern long long g_7ff3b131a90;

unsigned long long sub_7ff3b16ff4e(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned int a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long ptr, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, char *a26, unsigned long a27, unsigned int *a28)
{
    long long v2;  // rax
    long long v3;  // rbx
    long long v12;  // rax
    long long v13;  // r14
    struct_0 *v14;  // r13
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rax
    unsigned int v18;  // eax
    unsigned int v19;  // eax
    unsigned int v20;  // eax
    char *v21;  // rdi
    char *v4;  // r15
    unsigned long long v22;  // rcx
    char *i;  // rsi
    char *cur;  // rdi
    unsigned int v25;  // r14d
    unsigned int *p;  // rsi
    unsigned long long v27;  // rcx
    unsigned int *v29;  // rsi
    char *j;  // rsi
    char *v5;  // rdi
    long long v6;  // rcx
    long long v7;  // r12
    void* v8;  // rcx
    long long v9;  // rax
    long long v10;  // rax
    long long v11;  // rax
    unsigned int flag;  // [bp+0x44]

    if (!v2)
        return 0;
    if (!v4 || !v5)
    {
        v6 = 11;
LABEL_7ff3b16ff7e:
        v3 = 0;
        sub_7ff3b16d738(v6, &g_7ff3b131a90, vvar_306{r56|8b});
        p = v29;
LABEL_7ff3b17043a:
        sub_7ff3b1695bc(v2, 0, vvar_306{r56|8b});
        if (!(int)v3)
            return v3 & 4294967295;
        *(p) = v25;
        return v3 & 4294967295;
    }
    if (v4 == v5)
    {
        v6 = 13;
        goto LABEL_7ff3b16ff7e;
    }
    if (!v7)
    {
LABEL_7ff3b17041f:
        for (v27 = v7 * 4; v27; j += 1)
        {
            v27 -= 1;
            *(cur) = *(j);
            cur += 1;
        }
LABEL_7ff3b170415:
        p = a28;
        goto LABEL_7ff3b17043a;
    }
    v8 = &v4[4 * v7 + 4];
    v9 = v7;
    do
    {
        v11 = v9;
    } while (!*((int *)v8) && (v8 -= 4, v12 = v10 - v3, v11 = v12, v9 = v12, v10 != v3));
    if (!v11)
        goto LABEL_7ff3b17041f;
    a27 = 0;
    ptr = v2 + v7 * 4;
    v13 = v2 + v7 * 8;
    a10 = v2 + v7 * 12;
    a8 = v7 * 16 + v2;
    a11 = v2 + v7 * 20;
    a9 = v2 + v7 * 24;
    v15 = v14->field_38->field_0 & 7;
    if (((char)v14->field_38->field_0 & 7))
    {
        v16 = v15 - v3;
        if ((unsigned int)v15 != (int)v3)
        {
            v17 = v16 - v3;
            if ((unsigned int)v16 == (int)v3)
                goto LABEL_7ff3b17037d;
            v18 = v17 - v3;
            if ((unsigned int)v17 != (int)v3)
            {
                v19 = v18 - v3;
                if (v18 == (int)v3)
                    goto LABEL_7ff3b17037d;
                v20 = v19 - v3;
                if (v19 != (int)v3)
                {
                    if (v20 != (int)v3)
                    {
                        v21 = v5;
                        if ((unsigned int)(v20 - v3) != (int)v3)
                            goto LABEL_7ff3b1703b0;
                        goto LABEL_7ff3b170053;
                    }
                }
                else
                {
                    if (sub_7ff3b168d48() && (int)sub_7ff3b16924c(v4, v4, a10, v14->field_38, v14->field_0, vvar_306{r56|8b}))
                        sub_7ff3b171664(a10, ptr, v7, v13, v14, vvar_306{r56|8b}); /* do not return */
                }
            }
            else
            {
LABEL_7ff3b170053:
                if (sub_7ff3b168d48())
                {
                    sub_7ff3b168e1c(ptr, 1, ptr, v7);
                    sub_7ff3b171664(v4, ptr, v7, v5, v14, vvar_306{r56|8b}); /* do not return */
                }
            }
        }
        else
        {
            if ((int)sub_7ff3b16d878(v4, 4294967294) && sub_7ff3b168d48(v14->field_38, 4294967295, ptr, v7, vvar_306{r56|8b}))
                v3 = 1;
            else
                v3 = 0;
            *(ptr) = *(ptr) | 1;
            if ((int)v3)
            {
                if (!(1))
                    goto LABEL_7ff3b170410;
                flag = 1;
                if ((int)v3 && sub_7ff3b16e124(v14->field_38, v13, v7, 0, vvar_306{r56|8b}))
                    sub_7ff3b170a08(v13, v2, ptr, v7, a8, a11, v14, vvar_306{r56|8b}); /* do not return */
            }
        }
    }
    else
    {
LABEL_7ff3b17037d:
        a27 = 2;
        if (!(int)sub_7ff3b168f58(v14->field_38, v7, &a27))
        {
            v22 = v7 * 4;
            for (i = v4; v22; i += 1)
            {
                v22 -= 1;
                *(cur) = *(i);
                cur += 1;
            }
            v21 = a26;
LABEL_7ff3b1703b0:
            if ((int)sub_7ff3b16d78c(v21, v21, a10, v14, a9, vvar_306{r56|8b}))
            {
                v3 = 1;
                v25 = (!(int)sub_7ff3b168fe0(a10, v4, v7) ? 1 : 0);
                p = a28;
                goto LABEL_7ff3b17043a;
            }
        }
        else
        {
            sub_7ff3b16d738(5, &g_7ff3b131a90, vvar_306{r56|8b});
        }
    }
    v3 = 0;
LABEL_7ff3b170410:
    v25 = a7;
    goto LABEL_7ff3b170415;
}
