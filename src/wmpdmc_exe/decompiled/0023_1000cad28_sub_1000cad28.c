/* sub_1000cad28 @ 0x1000cad28
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000cad28  (1170 bytes, 78 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3f6564d520c416147702a463a50724fd36c46c3a44a8447af89788586fc5efee
 *   Evidence: analysis/report/rea-evidence/wmpdmc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

unsigned int sub_1000cad28(void* ptr, int a1)
{
    unsigned long long v1;  // r12
    unsigned long v2;  // r13
    unsigned long long v12;  // rdi
    unsigned long v13;  // rbx
    unsigned int flag;  // eax
    unsigned int v15;  // r10d
    unsigned int v16;  // r9d
    unsigned long v17;  // rbx
    unsigned int v18;  // eax
    unsigned int v20;  // eax
    unsigned int v3;  // ebx
    unsigned int v21;  // r9d
    unsigned long v22;  // rbx
    unsigned int v23;  // eax
    unsigned int v25;  // r9d
    char *v26;  // rdx
    unsigned long v27;  // r11
    unsigned long long v28;  // r9
    unsigned long v29;  // r8
    unsigned long v30;  // rbx
    unsigned int v4;  // esi
    unsigned long v5;  // 4185
    unsigned int v6;  // ecx
    unsigned int choice;  // eax
    void* cur;  // r8
    unsigned long long i;  // r9
    char *v10;  // rcx

    v1 = 0;
    v2 = a1;
    if (a1 > 0)
    {
        while (true)
        {
            if ((int)ptr[12012] == 1)
            {
                if ((int)ptr[11976])
                {
                    v3 = (int)ptr[11968];
                    *((unsigned int *)&ptr[11976]) = 0;
                    sub_1000cab30(ptr, 1);
                    if (v3 >> 31)
                    {
                        sub_1000cab30(ptr, 16);
                        sub_1000cab30(ptr, 16);
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
                    sub_1000caad4(ptr);
                }
                sub_1000cab30(ptr, 3);
                v4 = (char)ptr[11971];
                *((int *)&ptr[12008]) = (int)ptr[11968] >> 29;
                sub_1000cab30(ptr, 8);
                sub_1000cab30(ptr, 8);
                sub_1000cab30(ptr, 8);
                v5 = (int)ptr[12008];
                v6 = v4 * 0x10000 + (char)ptr[11971] * 257;
                *((unsigned int *)&ptr[12000]) = v6;
                *((unsigned int *)&ptr[12004]) = v6;
                if ((unsigned int)v5 == 2)
                    sub_1000cbaac(ptr);
                choice = (int)ptr[12008];
                if (choice == 1 || choice == 2)
                    4295812230();
                if (choice == 3 && (*((unsigned long long *)&ptr[11016]) = (long long)ptr[11016] - 2, (long long)ptr[11016] + 4 < (long long)ptr[11024]))
                {
                    cur = ptr + 16;
                    i = 3;
                    do
                    {
                        v10 = (long long)ptr[11016];
                        *((unsigned int *)cur) = ((v10[3] * 0x100 | v10[2]) * 0x100 | v10[1]) * 0x100 | *(v10);
                        *((unsigned long long *)&ptr[11016]) = (long long)ptr[11016] + 4;
                        cur += 4;
                        i -= 1;
                    } while (i != 1);
                    *((unsigned int *)&ptr[12012]) = 2;
                    continue;
                }
                goto LABEL_1000cb18a;
            }
            if ((int)ptr[12004] > 0 && (unsigned int)v2 > 0)
            {
                v12 = ((int)ptr[12004] < (unsigned int)v2 ? (int)ptr[12004] : v2 & 4294967295);
                if (!(unsigned int)v12)
                {
LABEL_1000cb18a:
                    return 4294967295;
                }
                v13 = (int)ptr[11984];
                flag = (int)ptr[12008];
                v15 = (unsigned int)v13 + (unsigned int)v12;
                if (v15 >= (unsigned int)v13 && v15 <= (int)ptr[8])
                {
                    if (flag == 2)
                    {
                        v16 = v12;
                        v17 = v13;
                        if ((unsigned int)v17 >= 257)
                        {
LABEL_1000cb084:
                            v20 = sub_1000cc114(ptr, v17 & 4294967295, v16);
                            goto LABEL_1000cb0e8;
                        }
                        v18 = sub_1000cbcb4();
                        if (v18 == 4294967295)
                        {
                            *((unsigned int *)&ptr[11980]) = 1;
                            goto LABEL_1000cafee;
                        }
                        else
                        {
                            *((unsigned int *)&ptr[11984]) = v18;
                            v16 = (unsigned int)((v13 & 4294967295) - v18) + (unsigned int)v12;
                            v17 = v18;
                            if (v16 > 0)
                                goto LABEL_1000cb084;
                            if (v16)
                                return 4294967295;
                        }
                    }
                    else if (flag == 1)
                    {
                        v21 = v12;
                        v22 = v13;
                        if ((unsigned int)v22 >= 257)
                        {
LABEL_1000cb0db:
                            v20 = sub_1000cc8f0(ptr, v22 & 4294967295, v21);
LABEL_1000cb0e8:
                            v25 = v20;
                            goto LABEL_1000caff1;
                        }
                        v23 = sub_1000cc568();
                        if (v23 < (unsigned int)v13)
                            goto LABEL_1000cafee;
                        *((unsigned int *)&ptr[11984]) = v23;
                        v21 = (unsigned int)((v13 & 4294967295) - v23) + (unsigned int)v12;
                        v22 = v23;
                        if (v21 > 0)
                            goto LABEL_1000cb0db;
                        if (v21)
                            return 4294967295;
                    }
                    else
                    {
                        if (flag != 3)
                            goto LABEL_1000cafee;
                        v26 = (long long)ptr[11016];
                        v27 = v15;
                        v28 = v13 & 4294967295;
                        v29 = v13;
                        if (v13 < v27)
                        {
                            do
                            {
                                if (v26 >= (long long)ptr[11024] || (unsigned int)v28 >= (int)ptr[8] + 261)
                                    goto LABEL_1000cafee;
                            } while ((v28 += 1, *((char *)(v29 + *((long long *)ptr))) = *(v26), v29 = (unsigned long)(v29 + 1), v26 += 1, v29 < v27));
                        }
                        else
                        {
                            *((char **)&ptr[11016]) = v26;
                            while (true)
                            {
                                v30 = v13;
                                if ((unsigned int)v30 >= (257 < v15 ? 257 : v15))
                                    break;
                                *((char *)((int)ptr[8] + v30 + *((long long *)ptr))) = *((char *)((v30 & 4294967295) + *((long long *)ptr)));
                                v13 = v30 + 1;
                            }
                            v25 = v28 - v15;
                            *((unsigned int *)&ptr[11984]) = (int)ptr[12] & (unsigned int)v28;
LABEL_1000caff1:
                            if (v25)
                                return 4294967295;
                        }
                    }
                    *((unsigned int *)&ptr[12004]) = (int)ptr[12004] - (unsigned int)v12;
                    v2 -= v12;
                    v1 += v12;
                }
                else
                {
LABEL_1000cafee:
                    v25 = 4294967295;
                    goto LABEL_1000caff1;
                }
            }
            else
            {
                if (!(int)ptr[12004])
                    *((unsigned int *)&ptr[12012]) = 1;
                if ((long long)ptr[11016] + 4 >= (long long)ptr[11024])
                    break;
                if (!(unsigned int)v2)
                {
                    sub_1000caad4(ptr);
                    if ((unsigned int)v2 <= 0)
                        break;
                }
                else if ((unsigned int)v2 <= 0)
                {
                    break;
                }
            }
        }
    }
    if (!(long long)ptr[11032])
        return v1;
    4295812230();
}
