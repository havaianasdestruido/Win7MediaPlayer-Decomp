/* sub_100103099 @ 0x100103099
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100103099  (811 bytes, 64 basic blocks)
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

typedef struct struct_1 {
    char padding_0[144];
    long long field_90;
    unsigned int field_98;
} struct_1;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
} struct_0;

typedef struct struct_2 {
    char padding_0[700];
    unsigned int field_2bc;
} struct_2;

extern struct_0 *g_100153eb8;

int sub_100103099(void)
{
    int v6;  // eax
    unsigned long v7;  // r14
    unsigned long v15;  // rcx
    unsigned long v16;  // rcx
    unsigned long v19;  // rax
    unsigned long v20;  // rbp
    unsigned long v21;  // rbp
    int iter;  // esi
    unsigned short v23;  // ax
    int v24;  // ecx
    long long v8;  // rsi
    unsigned long cur;  // rdi
    struct_1 *v9;  // rbx
    struct_2 *v11;  // r12
    long long v12;  // rsi
    int v13;  // r9d
    unsigned long v14;  // rax
    long long v1;  // [bp+0x20]
    unsigned long v2;  // [bp+0x30]
    char v3;  // [bp+0x38]
    char v4;  // [bp+0x40]
    char v5;  // [bp+0xc0]

    if (v6 >= (unsigned int)v7)
    {
        if ((int)sub_1000fbc34(v9->field_90, v9->field_98, 1, &v2) < (unsigned int)v7)
        {
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1))
                sub_100036510(g_100153eb8->field_10); /* do not return */
        }
        else
        {
            sub_10010400c(v11, v12);
            if ((int)sub_1000fc214(v2, L"SQMCommonProperties", &v3) < (unsigned int)v7)
            {
                if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2))
                    sub_100036510(g_100153eb8->field_10); /* do not return */
            }
            else
            {
                cur = v3;
                if (cur != v7)
                {
                    v13 = v7;
                    v14 = 2147483647;
                    v15 = cur;
                    do
                    {
                        v16 = v15;
                    } while (*((short *)v16) != (unsigned short)v7 && (v14 = (unsigned long)(v14 - 1), v15 = (unsigned long)(v16 + 2), v14 != 1));
                    v19 = v14;
                    if (v19 == v7)
                    {
                        v20 = v7;
                        goto LABEL_1001031cc;
                    }
                    else
                    {
                        v21 = 2147483647 - v19;
                    }
                }
                else
                {
LABEL_1001031cc:
                    v13 = -2147024809;
                }
                if (v13 < (unsigned int)v7)
                {
                    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1))
                        sub_100036510(g_100153eb8->field_10); /* do not return */
                }
                else
                {
                    if ((int)sub_1000f1d78(&v5, 260, L"%s\\%s\\%s", L"Software\\Microsoft\\SQMClient", v12, L"DisabledSessions") < (unsigned int)v7)
                    {
                        if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1))
                            sub_100036510(g_100153eb8->field_10); /* do not return */
                    }
                    else
                    {
                        iter = v7;
                        if (*((short *)cur) != (unsigned short)v7)
                        {
                            do
                            {
                                if (iter >= v21)
                                    break;
                                v23 = *((short *)cur);
                                v24 = v7;
                                if (*((short *)cur) != 59)
                                {
                                    do
                                    {
                                    } while (v23 != 44 && (v23 == (unsigned short)v7 || v23 != 32 && (v23 == 9 || iter >= v21 || (cur = (unsigned long)(cur + 2), v24 = (int)(v24 + 1), iter = (int)(iter + 1), v23 = (unsigned short)*((short *)cur), *((short *)cur) == 59)) && !((cur = (unsigned long)(cur + 2), v24 = (int)(v24 + 1), iter = (int)(iter + 1), v23 = (unsigned short)*((short *)cur), *((short *)cur) == 59)) || (cur = (unsigned long)(cur + 2), v24 = (int)(v24 + 1), iter = (int)(iter + 1), v23 = (unsigned short)*((short *)cur), *((short *)cur) == 59)) && (cur = (unsigned long)(cur + 2), v24 = (int)(v24 + 1), iter = (int)(iter + 1), v23 = (unsigned short)*((short *)cur), *((short *)cur) != 59));
                                    if (v24 == (unsigned int)v7)
                                        goto LABEL_10010337f;
                                    if ((int)sub_10006ac9c(&v4, v24 + 1) >= (unsigned int)v7 || (int)sub_10006ac9c(&v4, v24 + 1) == -2147024774)
                                    {
                                        if ((int)sub_1000f4db4(-(-(0 < v11->field_2bc)) - 2147483647, &v5, 0, &v4, v7) != (unsigned int)v7 && g_100153eb8 != &g_100153eb8)
                                        {
                                            if ((g_100153eb8->field_1c & 1))
                                                sub_100036510(g_100153eb8->field_10); /* do not return */
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        if (g_100153eb8 != &g_100153eb8)
                                        {
                                            if ((g_100153eb8->field_1c & 1))
                                                sub_100036510(g_100153eb8->field_10); /* do not return */
                                            break;
                                        }
                                    }
                                }
                                else
                                {
LABEL_10010337f:
                                    if (g_100153eb8 != &g_100153eb8)
                                    {
                                        if ((g_100153eb8->field_1c & 1))
                                            sub_100034784(g_100153eb8->field_10, 57, sub_10001dad0); /* do not return */
                                        break;
                                    }
                                }
                            } while ((cur = (unsigned long)(cur + 2), iter = (int)(iter + 1), *((short *)cur) != (unsigned short)v7));
                        }
                    }
                }
            }
        }
        if (v2 != v7)
            sub_1000fbd34(&v2);
    }
    else if (g_100153eb8 == &g_100153eb8)
    {
        sub_1000fe814(v9);
        sub_10011bc94(v9); /* do not return */
    }
    else if ((g_100153eb8->field_1c & 2))
    {
        *((unsigned int *)&v1) = v6 & 268500991;
        sub_10003b678(g_100153eb8->field_10, 52, sub_10001dad0, v8, v1); /* do not return */
    }
    sub_1000fe814(v9);
    sub_10011bc94(v9); /* do not return */
}
