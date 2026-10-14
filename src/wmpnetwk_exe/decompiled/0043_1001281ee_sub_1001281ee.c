/* sub_1001281ee @ 0x1001281ee
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1001281ee  (871 bytes, 68 basic blocks)
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

typedef struct struct_0 {
    long long field_0;
    char padding_8[48];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern long long g_1000225e4;

int sub_1001281ee(void)
{
    long long v10;  // rax
    char *v11;  // r15
    long long v20;  // rax
    long long v21;  // r14
    struct_0 *v22;  // r13
    unsigned long v23;  // rax
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax
    unsigned int v26;  // eax
    unsigned int v27;  // eax
    unsigned int v28;  // eax
    unsigned long long v29;  // rbx
    char *v12;  // rdi
    unsigned long long v30;  // rcx
    char *i;  // rsi
    char *cur;  // rdi
    unsigned int v33;  // r14d
    unsigned long long v34;  // rcx
    char *j;  // rsi
    long long v13;  // rcx
    long long v14;  // r12
    void* v15;  // rcx
    long long v16;  // rax
    long long v17;  // rax
    long long v18;  // rax
    long long v19;  // rbx
    unsigned int v1;  // [bp+0x40]
    unsigned int flag;  // [bp+0x44]
    long long v3;  // [bp+0x48]
    long long v4;  // [bp+0x50]
    long long v5;  // [bp+0x58]
    long long v6;  // [bp+0x60]
    unsigned int *p;  // [bp+0x70]
    unsigned int v8;  // [bp+0xe0]
    unsigned int *ptr;  // [bp+0xe8]

    if (!v10)
        return;
    if (!v11 || !v12)
    {
        v13 = 11;
LABEL_10012821e:
        v29 = 0;
        sub_1001259d8(v13, &g_1000225e4, vvar_277{r56|8b});
LABEL_10012822f:
        sub_10012185c(v10, 0, vvar_277{r56|8b});
        if (!(unsigned int)v29)
            return;
        *(ptr) = v33;
        return;
    }
    if (v11 == v12)
    {
        v13 = 13;
        goto LABEL_10012821e;
    }
    if (!v14)
    {
LABEL_1001286bf:
        for (v34 = v14 * 4; v34; j += 1)
        {
            v34 -= 1;
            *(cur) = *(j);
            cur += 1;
        }
LABEL_1001286b5:
        goto LABEL_10012822f;
    }
    v15 = &v11[4 * v14 + 4];
    v16 = v14;
    do
    {
        v18 = v16;
    } while (!*((int *)v15) && (v15 -= 4, v20 = v17 - v19, v18 = v20, v16 = v20, v17 != v19));
    if (!v18)
        goto LABEL_1001286bf;
    v8 = 0;
    p = v10 + v14 * 4;
    v21 = v10 + v14 * 8;
    v5 = v10 + v14 * 12;
    v3 = v14 * 16 + v10;
    v6 = v10 + v14 * 20;
    v4 = v10 + v14 * 24;
    v23 = v22->field_38->field_0 & 7;
    if (((char)v22->field_38->field_0 & 7))
    {
        v24 = v23 - v19;
        if ((unsigned int)v23 != (int)v19)
        {
            v25 = v24 - v19;
            if ((unsigned int)v24 == (int)v19)
                goto LABEL_10012861d;
            v26 = v25 - v19;
            if ((unsigned int)v25 != (int)v19)
            {
                v27 = v26 - v19;
                if (v26 == (int)v19)
                    goto LABEL_10012861d;
                v28 = v27 - v19;
                if (v27 != (int)v19)
                {
                    if (v28 != (int)v19)
                    {
                        if ((unsigned int)(v28 - v19) != (int)v19)
                            goto LABEL_100128648;
                        goto LABEL_1001282f3;
                    }
                }
                else
                {
                    if (sub_100120fe8() && (int)sub_1001214ec(v11, v11, v5, v22->field_38, v22->field_0, vvar_277{r56|8b}))
                        sub_100129904(v5, p, v14, v21, v22, vvar_277{r56|8b}); /* do not return */
                }
            }
            else
            {
LABEL_1001282f3:
                if (sub_100120fe8())
                {
                    sub_1001210bc(p, 1, p, v14);
                    sub_100129904(v11, p, v14, v12, v22, vvar_277{r56|8b}); /* do not return */
                }
            }
        }
        else
        {
            if ((int)sub_100125b18(v11, 4294967294) && sub_100120fe8(v22->field_38, 4294967295, p, v14, vvar_277{r56|8b}))
                v29 = 1;
            else
                v29 = 0;
            *(p) = *(p) | 1;
            if ((unsigned int)v29)
            {
                if (!(1))
                    goto LABEL_1001286b0;
                flag = 1;
                if ((unsigned int)v29 && sub_1001263c4(v22->field_38, v21, v14, 0, vvar_277{r56|8b}))
                    sub_100128ca8(v21, v10, p, v14, v3, v6, v22, vvar_277{r56|8b}); /* do not return */
            }
        }
    }
    else
    {
LABEL_10012861d:
        v8 = 2;
        if (!(int)sub_1001211f8(v22->field_38, v14, &v8))
        {
            v30 = v14 * 4;
            for (i = v11; v30; i += 1)
            {
                v30 -= 1;
                *(cur) = *(i);
                cur += 1;
            }
LABEL_100128648:
            if ((int)sub_100125a2c(cur, cur, v5, v22, v4, vvar_277{r56|8b}))
            {
                v29 = 1;
                v33 = (!(int)sub_100121280(v5, v11, v14) ? 1 : 0);
                goto LABEL_10012822f;
            }
        }
        else
        {
            sub_1001259d8(5, &g_1000225e4, vvar_277{r56|8b});
        }
    }
    v29 = 0;
LABEL_1001286b0:
    v33 = v1;
    goto LABEL_1001286b5;
}
