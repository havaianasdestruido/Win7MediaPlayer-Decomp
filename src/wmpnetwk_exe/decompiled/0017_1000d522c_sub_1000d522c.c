/* sub_1000d522c @ 0x1000d522c
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000d522c  (1004 bytes, 105 basic blocks)
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

int sub_1000d522c(void)
{
    unsigned int *v15;  // r8
    char v16[2];  // rdx
    char cur[2];  // rdi
    char v26[2];  // rcx
    char iter[2];  // r12
    char v28;  // bl
    char v30[2];  // rdx
    unsigned long long v31;  // rbp
    unsigned int v32;  // esi
    unsigned int v34;  // r15d
    unsigned long long v17;  // rsi
    unsigned int v35;  // r13d
    unsigned int *ptr;  // r8
    char v37[2];  // rdx
    unsigned int v38;  // r9d
    char v39[2];  // r10
    char v40[2];  // r10
    unsigned int v41;  // r9d
    char v42[2];  // rdx
    unsigned long long v43;  // rbp
    unsigned long long v18;  // rdi
    char v44;  // al
    char p[2];  // r12
    char v46;  // bl
    char v47;  // al
    char v48;  // cl
    unsigned int v49;  // ecx
    char v50[2];  // rcx
    unsigned long long v19;  // r12
    unsigned long long v20;  // r13
    unsigned long long v21;  // r14
    unsigned long long v22;  // r15
    unsigned int v23;  // r9d
    unsigned long v24;  // r14
    long long v0;  // [bp-0x70]
    long long v1;  // [bp-0x68]
    unsigned int v2;  // [bp-0x58]
    unsigned int choice;  // [bp-0x54]
    char v4[2];  // [bp-0x50]
    char v5[2];  // [bp-0x48]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    unsigned long long v8;  // [bp-0x28]
    unsigned long long v9;  // [bp-0x20]
    unsigned long long v10;  // [bp-0x18]
    unsigned long long v11;  // [bp-0x10]
    char addr[2];  // [bp+0x8]
    char v13[2];  // [bp+0x10]
    unsigned int *v14;  // [bp+0x18]

    v14 = v15;
    v13 = v16;
    v11 = v17;
    v10 = v18;
    v9 = v19;
    v8 = v20;
    v7 = v21;
    v6 = v22;
    v24 = v23;
    cur = v16;
    iter = v26;
    if (!v26)
    {
        sub_100036284(2147500037); /* do not return */
    }
    else if (!v16)
    {
        sub_100036284(2147500037); /* do not return */
    }
    else if (v26 == v16)
    {
        sub_100036284(2147500037); /* do not return */
    }
    else
    {
        v28 = iter[0];
        v5 = v16;
        v30 = &v16[v24];
        v31 = 0;
        v2 = 0;
        v32 = 1;
        choice = 0;
        v34 = 0;
        v35 = 64;
        v4 = v30;
        ptr = v15;
        v37 = v30;
        v38 = 0;
        v39 = v16;
        if (iter[0])
        {
            while (true)
            {
                v40 = v39;
                v41 = v38;
                v42 = v37;
                iter = &iter[1];
                if ((unsigned int)v31 == (unsigned int)v24)
                    v32 = 0;
                addr = iter;
                if (v28 == 58)
                {
                    v43 = v31;
                    if ((char)v35 >= 0)
                        goto LABEL_1000d548f;
                    if (!v34)
                    {
                        if (v32)
                        {
                            cur[0] = 0;
                            v50 = &cur[-1 * (v31 & 4294967295)];
                            if (v50 >= v40 && v50 <= v42)
                                sub_10011c24a(); /* do not return */
                            sub_100036284(2147500037); /* do not return */
                        }
                        v34 = (unsigned int)v31 + 1;
                    }
                }
                else if (v28 == 37)
                {
                    if (((char)v35 & 4))
                    {
                        v44 = iter[0];
                        if (!iter[0])
                            goto LABEL_1000d56df;
                        p = &iter[1];
                        if (v44 >= 48 && v44 <= 57)
                        {
                            v46 = v44 - 48;
                        }
                        else if (v44 >= 65 && v44 <= 70)
                        {
                            v46 = v44 - 55;
                        }
                        else if (v44 >= 97 && v44 <= 102)
                        {
                            v46 = v44 - 87;
                        }
                        else
                        {
                            v46 = 255;
                        }
                        if (v46 * 16 < 0)
                        {
LABEL_1000d5684:
                            goto LABEL_1000d5687;
                        }
                        v47 = p[0];
                        if (!p[0])
                            goto LABEL_1000d56df;
                        iter = &p[1];
                        addr = iter;
                        if (v47 >= 48 && v47 <= 57)
                        {
                            v48 = v47 - 48;
                        }
                        else if (v47 >= 65 && v47 <= 70)
                        {
                            v48 = v47 - 55;
                        }
                        else if (v47 >= 97 && v47 <= 102)
                        {
                            v48 = v47 - 87;
                        }
                        else
                        {
                            v48 = 255;
                        }
                        if (v48 < 0)
                            goto LABEL_1000d5684;
                        v28 = v46 * 16 + v48;
                    }
                }
                else
                {
                    if ((v28 == 63 || v28 == 35) && ((char)v35 & 32))
                        v35 |= 2;
                }
                v43 = v31;
                if ((char)v35 < 0 && (v43 = v31, cur = cur, !((char)v35 & 2)))
                {
                    if (v28 != 92)
                    {
                        v43 = v31;
                        if (v28 == 46 && (v43 = v31, cur = cur, (unsigned int)v43 > 0 && (v43 = v31, cur = cur, !((char)v35 & 8))))
                        {
                            *((unsigned int *)&v1) = v34;
                            *((unsigned int *)&v0) = v35;
                            cur = v13;
                            iter = addr;
                            v31 = v2;
                            v43 = v31;
                            if ((int)sub_1000d510c(&v13, &cur[1], v31 & 4294967295, &addr, &v2, v0, v1))
                                goto LABEL_1000d5628;
                        }
                    }
                    else if (v34 || (v43 = v31, cur = cur, ((char)(v35 >> 8) & 1)))
                    {
                        v43 = v31;
                        if (v32 && (!v41 || (v43 = v31, cur = cur, (unsigned int)v43 < 7)))
                        {
                            v28 = 47;
                            v43 = v31;
                        }
                    }
                }
LABEL_1000d548f:
                v49 = v28;
                if (v49 <= 64)
                {
                    if (v49 < 59 && v49 != 32 && (v49 <= 33 || v49 > 38 && (v49 <= 42 || v49 > 44)))
                        goto LABEL_1000d5556;
                }
                else
                {
                    if (v49 < 91 || v49 > 94 && v49 != 96 && v49 - 123 > 2)
                    {
LABEL_1000d5556:
                        if (v28 >= 32 && v28 <= 126)
                            goto LABEL_1000d5649;
                    }
                }
                if (!((char)v35 & 2))
                {
                    if (((char)v35 & 16) && v28 != 32 || ((char)v35 & 8) && v28 == 46 || !((char)v35 & 64) && v28 == 37)
                    {
                        if (v32)
                            goto LABEL_1000d564e;
                        goto LABEL_1000d5622;
                    }
                    else
                    {
                        v32 &= -((unsigned int)v43 < (unsigned int)(v24 - 3));
                        if (v32)
                        {
                            cur[0] = 37;
                            if (v28 < 16)
                                cur[1] = 48;
                            sub_10011c23e(); /* do not return */
                        }
                        v43 = (unsigned int)v43 + 2;
                        goto LABEL_1000d561d;
                        goto LABEL_1000d561d;
                    }
                }
LABEL_1000d5649:
                if (!v32)
                {
LABEL_1000d561d:
                }
                else
                {
LABEL_1000d564e:
                    cur[0] = v28;
                    cur = &cur[1];
                    v13 = cur;
                }
LABEL_1000d5622:
                v31 = v43 + 1;
                v2 = v31;
LABEL_1000d5628:
                v28 = iter[0];
                if (iter[0])
                {
                    v37 = v4;
                    v38 = choice;
                    v39 = v5;
                }
                else
                {
LABEL_1000d56df:
                    if (!v32)
                    {
LABEL_1000d5687:
                        ptr = v14;
                        goto LABEL_1000d568f;
                    }
                    else
                    {
                        ptr = v14;
                        goto LABEL_1000d56ec;
                    }
                }
            }
            goto LABEL_1000d568f;
        }
LABEL_1000d56ec:
        if ((unsigned int)v31 < (unsigned int)v24)
            cur[0] = 0;
LABEL_1000d568f:
        if (ptr)
            *(ptr) = (unsigned int)v31 + 1;
        if ((unsigned int)v24 >= (unsigned int)v31 + 1)
            return;
        return;
    }
}
