/* sub_1001194b4 @ 0x1001194b4
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1001194b4  (1170 bytes, 78 basic blocks)
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

int sub_1001194b4(void)
{
    unsigned long long v1;  // r12
    int v2;  // edx
    unsigned long long i;  // r9
    char *v12;  // rcx
    unsigned long long v14;  // rdi
    unsigned long v15;  // rbx
    unsigned int flag;  // eax
    unsigned int v17;  // r10d
    unsigned int v18;  // r9d
    unsigned long v19;  // rbx
    unsigned int v20;  // eax
    unsigned long v3;  // r13
    unsigned int v22;  // eax
    unsigned int v23;  // r9d
    unsigned long v24;  // rbx
    unsigned int v25;  // eax
    unsigned int v27;  // r9d
    char *v28;  // rdx
    unsigned long v29;  // r11
    unsigned long long v30;  // r9
    void* ptr;  // rcx
    unsigned long v31;  // r8
    unsigned long v32;  // rbx
    unsigned int v5;  // ebx
    unsigned int v6;  // esi
    unsigned long v7;  // 4185
    unsigned int v8;  // ecx
    unsigned int choice;  // eax
    void* cur;  // r8

    v1 = 0;
    v3 = v2;
    if (v2 > 0)
    {
        while (true)
        {
            if ((int)ptr[12012] == 1)
            {
                if ((int)ptr[11976])
                {
                    v5 = (int)ptr[11968];
                    *((unsigned int *)&ptr[11976]) = 0;
                    sub_1001192bc(ptr, 1);
                    if (v5 >> 31)
                    {
                        sub_1001192bc(ptr, 16);
                        sub_1001192bc(ptr, 16);
                        *((unsigned int *)&ptr[11988]) = (short)ptr[11970] * 0x10000 | (short)ptr[11970];
                    }
                    else
                    {
                        *((unsigned int *)&ptr[11988]) = 0;
                    }
                }
                if ((int)ptr[12008] == 3)
                {
                    if ((1 & (char)ptr[12000]) && !((*((unsigned long long *)&ptr[11016]) = (long long)ptr[11016] + 1, (long long)ptr[11016] + 4 < (long long)ptr[11024])))
                        break;
                    *((unsigned int *)&ptr[12008]) = 0;
                    sub_100119260(ptr);
                }
                sub_1001192bc(ptr, 3);
                v6 = (char)ptr[11971];
                *((int *)&ptr[12008]) = (int)ptr[11968] >> 29;
                sub_1001192bc(ptr, 8);
                sub_1001192bc(ptr, 8);
                sub_1001192bc(ptr, 8);
                v7 = (int)ptr[12008];
                v8 = v6 * 0x10000 + (char)ptr[11971] * 257;
                *((unsigned int *)&ptr[12000]) = v8;
                *((unsigned int *)&ptr[12004]) = v8;
                if ((unsigned int)v7 == 2)
                    sub_10011a238(ptr);
                choice = (int)ptr[12008];
                if (choice == 1 || choice == 2)
                    sub_100129dec(); /* do not return */
                if (choice == 3 && (*((unsigned long long *)&ptr[11016]) = (long long)ptr[11016] - 2, (long long)ptr[11016] + 4 < (long long)ptr[11024]))
                {
                    cur = ptr + 16;
                    i = 3;
                    do
                    {
                        v12 = (long long)ptr[11016];
                        *((unsigned int *)cur) = ((v12[3] * 0x100 | v12[2]) * 0x100 | v12[1]) * 0x100 | *(v12);
                        *((unsigned long long *)&ptr[11016]) = (long long)ptr[11016] + 4;
                        cur += 4;
                        i -= 1;
                    } while (i != 1);
                    *((unsigned int *)&ptr[12012]) = 2;
                    continue;
                }
                goto LABEL_100119916;
            }
            if ((int)ptr[12004] > 0 && (unsigned int)v3 > 0)
            {
                v14 = ((int)ptr[12004] < (unsigned int)v3 ? (int)ptr[12004] : v3 & 4294967295);
                if (!(unsigned int)v14)
                {
LABEL_100119916:
                    return;
                }
                v15 = (int)ptr[11984];
                flag = (int)ptr[12008];
                v17 = (unsigned int)v15 + (unsigned int)v14;
                if (v17 >= (unsigned int)v15 && v17 <= (int)ptr[8])
                {
                    if (flag == 2)
                    {
                        v18 = v14;
                        v19 = v15;
                        if ((unsigned int)v19 >= 257)
                        {
LABEL_100119810:
                            v22 = sub_10011a8a0(ptr, v19 & 4294967295, v18);
                            goto LABEL_100119874;
                        }
                        v20 = sub_10011a440();
                        if (v20 == 4294967295)
                        {
                            *((unsigned int *)&ptr[11980]) = 1;
                            goto LABEL_10011977a;
                        }
                        else
                        {
                            *((unsigned int *)&ptr[11984]) = v20;
                            v18 = (unsigned int)((v15 & 4294967295) - v20) + (unsigned int)v14;
                            v19 = v20;
                            if (v18 > 0)
                                goto LABEL_100119810;
                            if (v18)
                                return;
                        }
                    }
                    else if (flag == 1)
                    {
                        v23 = v14;
                        v24 = v15;
                        if ((unsigned int)v24 >= 257)
                        {
LABEL_100119867:
                            v22 = sub_10011b07c(ptr, v24 & 4294967295, v23);
LABEL_100119874:
                            v27 = v22;
                            goto LABEL_10011977d;
                        }
                        v25 = sub_10011acf4();
                        if (v25 < (unsigned int)v15)
                            goto LABEL_10011977a;
                        *((unsigned int *)&ptr[11984]) = v25;
                        v23 = (unsigned int)((v15 & 4294967295) - v25) + (unsigned int)v14;
                        v24 = v25;
                        if (v23 > 0)
                            goto LABEL_100119867;
                        if (v23)
                            return;
                    }
                    else
                    {
                        if (flag != 3)
                            goto LABEL_10011977a;
                        v28 = (long long)ptr[11016];
                        v29 = v17;
                        v30 = v15 & 4294967295;
                        v31 = v15;
                        if (v15 < v29)
                        {
                            do
                            {
                                if (v28 >= (long long)ptr[11024] || (unsigned int)v30 >= (int)ptr[8] + 261)
                                    goto LABEL_10011977a;
                            } while ((v30 += 1, *((char *)(v31 + *((long long *)ptr))) = *(v28), v31 = (unsigned long)(v31 + 1), v28 += 1, v31 < v29));
                        }
                        else
                        {
                            *((char **)&ptr[11016]) = v28;
                            while (true)
                            {
                                v32 = v15;
                                if ((unsigned int)v32 >= (257 < v17 ? 257 : v17))
                                    break;
                                *((char *)((int)ptr[8] + v32 + *((long long *)ptr))) = *((char *)((v32 & 4294967295) + *((long long *)ptr)));
                                v15 = v32 + 1;
                            }
                            v27 = v30 - v17;
                            *((unsigned int *)&ptr[11984]) = (int)ptr[12] & (unsigned int)v30;
LABEL_10011977d:
                            if (v27)
                                return;
                        }
                    }
                    *((unsigned int *)&ptr[12004]) = (int)ptr[12004] - (unsigned int)v14;
                    v3 -= v14;
                    v1 += v14;
                }
                else
                {
LABEL_10011977a:
                    v27 = 4294967295;
                    goto LABEL_10011977d;
                }
            }
            else
            {
                if (!(int)ptr[12004])
                    *((unsigned int *)&ptr[12012]) = 1;
                if ((long long)ptr[11016] + 4 >= (long long)ptr[11024])
                    break;
                if (!(unsigned int)v3)
                {
                    sub_100119260(ptr);
                    if ((unsigned int)v3 <= 0)
                        break;
                }
                else if ((unsigned int)v3 <= 0)
                {
                    break;
                }
            }
        }
    }
    if (!(long long)ptr[11032])
        return;
    sub_100129dec((long long)ptr[11032], (!(int)ptr[11984] ? (int)ptr[8] - v1 : (int)((int)ptr[11984] - v1)) + *((long long *)ptr), ((unsigned int)v1 < 0x9800 ? (unsigned int)v1 : 0x9800)); /* do not return */
}
