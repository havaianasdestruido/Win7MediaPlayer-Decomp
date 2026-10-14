/* sub_10006d428 @ 0x10006d428
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10006d428  (685 bytes, 76 basic blocks)
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

extern long long g_10000c3f4;

int sub_10006d428(void)
{
    void* v1;  // rax
    void* v2;  // r15
    void* v6;  // r14, Other Possible Types: long long
    unsigned int v7;  // ebp
    void* v8;  // rbx, Other Possible Types: long long
    void* i;  // rsi, Other Possible Types: long long
    void* v10;  // rbx
    void* v11;  // rbx
    void* v12;  // rbx
    long long v13;  // r14
    void* v14;  // rbx
    unsigned short *ptr;  // r12
    void* choice;  // r13
    void* flag;  // rcx
    unsigned int v18;  // ebp
    void* cur;  // rdx
    unsigned int v20;  // ebp
    void* v22;  // rdi
    void* iter;  // r8
    void* v24;  // rax
    unsigned short v25;  // ax
    unsigned short *v4;  // rdi
    unsigned int v5;  // edi

    if (v1 != v2)
    {
        flag = v1 - ptr >> 1;
    }
    else
    {
        v4 = ptr;
        do
        {
            if (false)
                break;
        } while (*(v4));
        v5 = 2147942487;
        flag = ~(18446744073709551615) - 1;
    }
    if (flag <= 0x100 && flag < 0x8000)
    {
        if (flag == 0x1)
        {
            if (*(ptr) != 46)
                goto LABEL_10006d5c9;
            if (v1 != v2)
                goto LABEL_10006d487;
            if (v8 <= i)
                goto LABEL_10006d48b;
            if ((int)sub_10006cdb0(i) == (unsigned int)v2)
            {
                v7 = sub_100045190(v8 - 2, v6 + 1, &g_10000c3f4);
                goto LABEL_0x10006d491;
            }
        }
        if (flag != 0x2)
        {
            choice = 0x1;
            if (flag == v2)
            {
                if (*(ptr) == 92)
                    flag = choice;
                else
                    flag = flag;
                goto LABEL_10006d5d3;
            }
        }
        if (*(ptr) == 46 && ptr[1] == 46)
        {
            if (v8 > i && (int)sub_10006cdb0(i) == (unsigned int)v2)
            {
                v10 = v8 - 2;
                if (i < v10)
                {
                    do
                    {
                        v10 -= 2;
                        v11 = v10;
                    } while (i < v10);
                    if (*((short *)v11) == 92)
                        goto LABEL_10006d56c;
                }
                v11 = v2;
LABEL_10006d56c:
                v12 = v11;
                v13 = 260;
                if (v12 != v2)
                {
                    v13 = 260 - (v12 - i >> 1);
                    v14 = v12;
                }
                else
                {
                    v14 = i;
                }
                v7 = sub_100045190(v14, v13, &g_10000c3f4);
LABEL_10006d59c:
            }
            else
            {
                if (v1 == v2)
                    goto LABEL_10006d59c;
LABEL_10006d487:
            }
LABEL_10006d48b:
            goto LABEL_0x10006d491;
        }
LABEL_10006d5c9:
LABEL_10006d5d3:
        if (v6 == v2 || (v18 = (unsigned int)v2, v6 > 0x7fffffff))
            v18 = v5;
        v7 = v18;
        if (v7 >= (unsigned int)v2)
        {
            cur = v8;
            if (0x7fffffff <= flag)
                v20 = v5;
            else
                v20 = (unsigned int)v2;
            v7 = v20;
            if (v7 >= (unsigned int)v2)
            {
                if (v6 != v2)
                {
                    v22 = v6;
                    v7 = (unsigned int)v2;
                    iter = v2;
                    do
                    {
                    } while (v22 + flag - v6 != v2 && *((short *)(cur + ptr - (char *)v8)) != *((unsigned short *)&v2) && (v22 -= 1, *((short *)cur) = *((short *)((char *)cur + (char *)ptr - (char *)v8)), iter += 1, cur += 2, v22 != v2));
                    if (v22 == v2)
                    {
                        cur -= 2;
                        v7 = 2147942522;
                        iter -= 1;
                    }
                    *((unsigned short *)cur) = *((unsigned short *)&v2);
                    v24 = v6 - iter;
                    cur = v8 + iter * 2;
                }
                else if (flag != v2 && *(ptr) != *((unsigned short *)&v2))
                {
                    if (v8 == v2)
                    {
                        v7 = v5;
                        goto LABEL_10006d6b0;
                    }
                    else
                    {
                        v7 = 2147942522;
                    }
                }
            }
            else
            {
                if (v24 != v2)
                    *((unsigned short *)cur) = *((unsigned short *)&v2);
            }
            if (v7 < (unsigned int)v2 && v7 != 2147942522)
                goto LABEL_10006d6ff;
        }
LABEL_10006d6b0:
        if (v7 == 2147942522 && flag == 0x1 && *(ptr) == 92)
        {
            v25 = ptr[1];
            if (v25 != *((unsigned short *)&v2) && (v25 != 46 || ptr[2] != *((unsigned short *)&v2)) && v24 == 0x1 && v25 == 46 && ptr[2] == v25)
            {
                *((unsigned short *)cur) = *((unsigned short *)&v2);
                v7 = (unsigned int)v2;
            }
        }
LABEL_10006d6ff:
        if (v7 < (unsigned int)v2)
            goto LABEL_0x10006d49a;
        else
            goto LABEL_0x10006d40b;
    }
}
