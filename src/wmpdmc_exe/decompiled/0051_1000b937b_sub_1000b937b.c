/* sub_1000b937b @ 0x1000b937b
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x1000b937b  (881 bytes, 63 basic blocks)
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

typedef struct struct_1 {
    char padding_0[144];
    long long field_90;
    unsigned int field_98;
} struct_1;

typedef struct struct_2 {
    char padding_0[700];
    unsigned int field_2bc;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_0;

extern long long g_100002ed8;
extern struct_0 *g_1000dedd8;

long long sub_1000b937b(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, long long a5, long long a6)
{
    int v4;  // eax
    long long v5;  // r14
    long long v13;  // rcx
    long long v14;  // rcx
    long long v15;  // rax
    long long v16;  // rax
    long long v17;  // rbp
    long long v19;  // rbp
    int iter;  // esi
    int v21;  // ecx
    unsigned short v22;  // ax
    long long v6;  // rsi
    long long cur;  // rdi
    struct_1 *v7;  // rbx
    struct_2 *v8;  // r12
    long long v9;  // rsi
    long long v10;  // rax
    int v11;  // r9d
    long long v12;  // rcx
    long long v1;  // [bp+0x20]
    char v2;  // [bp+0x50]
    char v3;  // [bp+0xd0]

    if (v4 >= (int)v5)
    {
        if ((int)sub_1000b1838(v7->field_90, v7->field_98, 1, &a5) < (int)v5)
        {
            if (g_1000dedd8 != &g_1000dedd8 && (g_1000dedd8->field_1c & 1))
                sub_100020d8c(g_1000dedd8->field_10, 53, &g_100002ed8); /* do not return */
        }
        else
        {
            sub_1000ba348(v8, v9);
            if ((int)sub_1000b1e18(a5, L"SQMCommonProperties", &a6) < (int)v5)
            {
                if (g_1000dedd8 != &g_1000dedd8 && (g_1000dedd8->field_1c & 2))
                    sub_100020d8c(g_1000dedd8->field_10, 54, &g_100002ed8); /* do not return */
            }
            else
            {
                cur = a6;
                if (cur != v5)
                {
                    v10 = 2147483647;
                    v11 = v5;
                    v12 = cur;
                    do
                    {
                        v13 = v12;
                    } while (*((short *)v13) != (unsigned short)v5 && (v14 = (long long)(v13 + 2), v15 = (long long)(v10 - 1), v10 = (long long)(v10 - 1), v12 = (long long)(v13 + 2), v10 != 1));
                    v16 = v10;
                    if (v16 == v5)
                    {
                        v11 = -2147024809;
                        v17 = v5;
                    }
                    else
                    {
                        v17 = 2147483647 - v16;
                    }
                }
                else
                {
                    v11 = -2147024809;
                }
                v19 = v17;
                if (v11 < (int)v5)
                {
                    if (g_1000dedd8 != &g_1000dedd8 && (g_1000dedd8->field_1c & 1))
                        sub_100020d8c(g_1000dedd8->field_10, 55, &g_100002ed8); /* do not return */
                }
                else
                {
                    if ((int)sub_100058674(&v3, 260, L"%s\\%s\\%s", L"Software\\Microsoft\\SQMClient", v9, L"DisabledSessions") < (int)v5)
                    {
                        if (g_1000dedd8 != &g_1000dedd8 && (g_1000dedd8->field_1c & 1))
                            sub_100020d8c(g_1000dedd8->field_10, 56, &g_100002ed8); /* do not return */
                    }
                    else
                    {
                        iter = v5;
                        if (*((short *)cur) != (unsigned short)v5)
                        {
                            do
                            {
                                if (iter >= v19)
                                    break;
                                v21 = v5;
                                v22 = *((short *)cur);
                                if (*((short *)cur) != 59)
                                {
                                    do
                                    {
                                    } while (v22 != 44 && (v22 == (unsigned short)v5 || v22 != 32 && (v22 == 9 || iter >= v19 || (v21 = (int)(v21 + 1), cur = (long long)(cur + 2), iter = (int)(iter + 1), v22 = (unsigned short)*((short *)cur), *((short *)cur) == 59)) && !((v21 = (int)(v21 + 1), cur = (long long)(cur + 2), iter = (int)(iter + 1), v22 = (unsigned short)*((short *)cur), *((short *)cur) == 59)) || (v21 = (int)(v21 + 1), cur = (long long)(cur + 2), iter = (int)(iter + 1), v22 = (unsigned short)*((short *)cur), *((short *)cur) == 59)) && (v21 = (int)(v21 + 1), cur = (long long)(cur + 2), iter = (int)(iter + 1), v22 = (unsigned short)*((short *)cur), *((short *)cur) != 59));
                                    if (v21 == (int)v5)
                                        goto LABEL_1000b96ba;
                                    if ((int)sub_100045190(&v2, v21 + 1) >= (int)v5 || (int)sub_100045190(&v2, v21 + 1) == -2147024774)
                                    {
                                        if ((int)sub_1000aa8d0(-(-(0 < v8->field_2bc)) - 2147483647, &v3, 0, &v2, v5) != (int)v5 && g_1000dedd8 != &g_1000dedd8)
                                        {
                                            if ((g_1000dedd8->field_1c & 1))
                                                sub_100020d8c(g_1000dedd8->field_10, 59, &g_100002ed8); /* do not return */
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        if (g_1000dedd8 != &g_1000dedd8)
                                        {
                                            if ((g_1000dedd8->field_1c & 1))
                                                sub_100020d8c(g_1000dedd8->field_10, 58, &g_100002ed8); /* do not return */
                                            break;
                                        }
                                    }
                                }
                                else
                                {
LABEL_1000b96ba:
                                    if (g_1000dedd8 != &g_1000dedd8)
                                    {
                                        if ((g_1000dedd8->field_1c & 1))
                                            sub_100020584(g_1000dedd8->field_10, 57, &g_100002ed8); /* do not return */
                                        break;
                                    }
                                }
                            } while ((cur = (long long)(cur + 2), iter = (int)(iter + 1), *((short *)cur) != (unsigned short)v5));
                        }
                    }
                }
            }
        }
        if (a5 != v5)
            sub_1000b1938(&a5);
    }
    else if (g_1000dedd8 != &g_1000dedd8 && (g_1000dedd8->field_1c & 2))
    {
        *((unsigned int *)&v1) = v4 & 268500991;
        sub_100020b88(g_1000dedd8->field_10, 52, &g_100002ed8, v6, v1); /* do not return */
    }
    sub_1000b4428(v7);
    4295808944();
}
