/* sub_10007a4e4 @ 0x10007a4e4
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10007a4e4  (1227 bytes, 101 basic blocks)
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
    unsigned short field_0;
    unsigned short field_2;
    char field_4;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
    unsigned short field_2;
    char field_4;
} struct_1;

int sub_10007a4e4(void)
{
    void* p;  // rcx
    unsigned long v4;  // r12
    struct_1 *v13;  // rax
    unsigned int v14;  // eax
    unsigned long v15;  // rsi
    unsigned int v16;  // eax
    unsigned long v17;  // r14
    unsigned int v18;  // eax
    unsigned long v19;  // r15
    unsigned long v20;  // rdx
    char *addr;  // r8
    unsigned int v22;  // eax
    unsigned int v5;  // esi
    unsigned long v23;  // rbp
    unsigned int v24;  // eax
    unsigned long v25;  // r11
    unsigned int v26;  // eax
    unsigned long v27;  // rcx
    unsigned long v28;  // rcx
    unsigned int v29;  // eax
    unsigned long v30;  // rsi
    unsigned int v31;  // eax
    unsigned int v6;  // r14d
    unsigned int v32;  // eax
    unsigned long v33;  // r11
    struct_0 **ptr;  // rdx
    struct_0 *v8;  // r15
    struct_0 *v9;  // rax
    struct_1 *v10;  // rax
    unsigned int v11;  // edi
    struct_1 *v12;  // rax
    unsigned int v0;  // [bp+0x8]
    unsigned int v1;  // [bp+0x10]
    unsigned int v2;  // [bp+0x20]

    v4 = (int)p[16];
    v5 = (int)p[40];
    v6 = (int)p[44];
    v8 = *(ptr);
    v0 = sub_10007a9c4();
    if (v0 < 0)
        return;
    v9 = *(ptr);
    if (v9->field_0 == 42)
    {
        v10 = &v9->field_2;
        *(ptr) = v10;
        if (v10->field_0 == 63)
        {
            v11 = 19;
            *(ptr) = &v10->field_2;
            goto LABEL_10007a5aa;
        }
        else
        {
            v11 = 18;
            goto LABEL_10007a5aa;
        }
    }
    else
    {
        if (v9->field_0 == 43)
        {
            v12 = &v9->field_2;
            *(ptr) = v12;
            if (v12->field_0 == 63)
            {
                v11 = 10;
                *(ptr) = &v12->field_2;
            }
            else
            {
                v11 = 9;
            }
        }
        else
        {
            if (v9->field_0 != 63)
                return;
            v13 = &v9->field_2;
            *(ptr) = v13;
            if (v13->field_0 == 63)
            {
                v11 = 12;
                *(ptr) = &v13->field_2;
            }
            else
            {
                v11 = 11;
            }
LABEL_10007a5aa:
            sub_10007b46c(p + 8, v4, 4294967295);
            *((unsigned int *)&p[44]) = v6;
        }
        *((unsigned int *)&p[40]) = v5;
        *(ptr) = v8;
        if (v11 == 19 || v11 == 10 || v11 == 12)
        {
            v29 = sub_10007a074(p, 16);
            v30 = v29;
            if (v29 >= 0)
            {
                *(addr) = 0;
                v31 = sub_10007a9c4(p, ptr, addr);
                if (v31 < 0)
                    return;
                if (*(addr) && (v11 == 19 || v11 == 10))
                {
                    *((unsigned int *)p) = 9;
                }
                else
                {
                    *(addr) = 1;
                    *(ptr) = &*(ptr)->field_4;
                    if (v11 != 19 && v11 != 10)
                    {
                        if (v30 >= (long long)p[16])
                            sub_100036284(2147942487); /* do not return */
                        *((long long *)((long long)p[8] + v30 * 16 + 8)) = v31 + 1;
                        goto LABEL_10007a99b;
                        goto LABEL_10007a99b;
                    }
                    else
                    {
                        v32 = sub_10007a074(p, 13);
                        v33 = v32;
                        if (v32 >= 0)
                        {
                            if (v30 >= (long long)p[16])
                                sub_100036284(2147942487); /* do not return */
                            *((long long *)((long long)p[8] + v30 * 16 + 8)) = (unsigned int)v33 + 1;
                            if (v33 >= (long long)p[16])
                                sub_100036284(2147942487); /* do not return */
                            *((unsigned long *)((long long)p[8] + v33 * 16 + 8)) = v30;
LABEL_10007a99b:
                            if (v11 != 10)
                            {
LABEL_10007a9a0:
                                return;
                            }
LABEL_10007a99f:
                            goto LABEL_10007a9a0;
                        }
                    }
                }
            }
LABEL_10007a8c5:
            return;
        }
        v14 = sub_10007a074(p, 20);
        v15 = v14;
        if (v14 < 0)
            return;
        v16 = sub_10007a074(p, 22);
        v17 = v16;
        if (v16 < 0)
            return;
        if (sub_10007a074(p, 14) < 0)
            return;
        v1 = sub_10007a074(p, 16);
        if (v1 < 0)
            return;
        if (sub_10007a074(p, 15) < 0 || !((v18 = (unsigned int)(unsigned long long)sub_10007a074(p, 21), v19 = (unsigned long)(long long)(int)v18, v18 >= 0 && (v2 = (unsigned int)(unsigned long long)sub_10007a074(p, 13), v2 >= 0))))
            goto LABEL_10007a8c5;
        if (v15 >= (long long)p[16])
            sub_100036284(2147942487); /* do not return */
        *((unsigned long long *)((long long)p[8] + v15 * 16 + 8)) = (int)p[44];
        *((unsigned int *)&p[44]) = (int)p[44] + 1;
        if (v15 >= (long long)p[16])
            sub_100036284(2147942487); /* do not return */
        if (v17 >= (long long)p[16])
            sub_100036284(2147942487); /* do not return */
        *((long long *)((long long)p[8] + v17 * 16 + 8)) = *((long long *)(v15 * 16 + (long long)p[8] + 8));
        v20 = v1;
        if (v20 >= (long long)p[16])
            sub_100036284(2147942487); /* do not return */
        *((long long *)((long long)p[8] + v20 * 16 + 8)) = v2 + 1;
        if (v15 >= (long long)p[16])
            sub_100036284(2147942487); /* do not return */
        if (v19 >= (long long)p[16])
            sub_100036284(2147942487); /* do not return */
        *((long long *)((long long)p[8] + v19 * 16 + 8)) = *((long long *)(v15 * 16 + (long long)p[8] + 8));
        *(addr) = 0;
        if (sub_10007a9c4(p, ptr, addr) < 0)
            return;
        if (*(addr))
        {
            if (v11 != 18 && v11 != 9)
                goto LABEL_10007a798;
            *((unsigned int *)p) = 9;
        }
        else
        {
            if (v11 != 9)
            {
LABEL_10007a798:
                *(addr) = 1;
            }
            *(ptr) = &*(ptr)->field_2;
            v22 = sub_10007a074(p, 26);
            v23 = v22;
            if (v22 >= 0 && (v24 = (unsigned int)(unsigned long long)sub_10007a074(p, 22), v25 = (unsigned long)(long long)(int)v24, v24 >= 0))
            {
                if (v15 >= (long long)p[16])
                    sub_100036284(2147942487); /* do not return */
                if (v23 >= (long long)p[16])
                    sub_100036284(2147942487); /* do not return */
                *((long long *)((long long)p[8] + v23 * 16 + 8)) = *((long long *)(v15 * 16 + (long long)p[8] + 8));
                if (v15 >= (long long)p[16])
                    sub_100036284(2147942487); /* do not return */
                if (v25 >= (long long)p[16])
                    sub_100036284(2147942487); /* do not return */
                *((long long *)((long long)p[8] + v25 * 16 + 8)) = *((long long *)(v15 * 16 + (long long)p[8] + 8));
                if (v11 != 11)
                {
                    v26 = sub_10007a074(p, 13);
                    if (v26 >= 0)
                    {
                        v27 = v26;
                        if (v27 >= (long long)p[16])
                            sub_100036284(2147942487); /* do not return */
                        *((unsigned long *)((long long)p[8] + v27 * 16 + 8)) = v15;
                        goto LABEL_10007a884;
                        goto LABEL_10007a884;
                    }
                }
                else
                {
LABEL_10007a884:
                    v28 = v2;
                    if (v28 >= (long long)p[16])
                        sub_100036284(2147942487); /* do not return */
                    *((long long *)((long long)p[8] + v28 * 16 + 8)) = (long long)p[16];
                    if (v11 != 9)
                        goto LABEL_10007a9a0;
                    goto LABEL_10007a99f;
                }
            }
        }
        return;
    }
}
