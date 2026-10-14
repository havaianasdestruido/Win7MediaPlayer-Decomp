/* sub_7ff37124f68 @ 0x7ff37124f68
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37124f68  (565 bytes, 44 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_7ff3710c9a0;
extern struct_0 *g_7ff37153600;

int sub_7ff37124f68(void)
{
    struct_0 *v4;  // rbx
    struct_0 **v5;  // rsi
    unsigned long v14;  // rbp
    unsigned long long v15;  // r12
    unsigned long long cur;  // r13
    unsigned long long v7;  // r14
    unsigned long long ptr[10];  // rdi
    unsigned long long iter;  // rsi
    int v10;  // ebp
    unsigned long long v11;  // r12
    unsigned long v12;  // rax
    unsigned long long v13;  // rbx
    long long v1;  // [bp+0x20]
    long long v2;  // [bp+0x30]
    unsigned long long v3;  // [bp+0x80]

    v4 = g_7ff37153600;
    if (g_7ff37153600 != v5 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37117208(g_7ff37153600->field_10, 42, &g_7ff3710c9a0); /* do not return */
    cur = 0;
    v7 = 0;
    if (ptr[9] > 0)
    {
        iter = 0;
        do
        {
            v10 = 0;
            v11 = 0;
            while (true)
            {
                v3 = v11;
                if (cur >= ptr[9])
                    sub_7ff3711849c(2147942487); /* do not return */
                v12 = ptr[8];
                if (v10 >= *((int *)(iter + v12 + 16)))
                    break;
                if (cur >= ptr[9])
                    sub_7ff3711849c(2147942487); /* do not return */
                if (v10 < 0 || v10 >= *((int *)(iter + v12 + 16)))
                    8792722899736();
                if ((char)sub_7ff37134390(v2, *((long long *)(*((long long *)(iter + v12 + 8)) + v11 * 8))) != 1)
                {
                    v10 += 1;
                    v11 += 1;
                }
                else if (cur >= ptr[9])
                {
                    sub_7ff3711849c(2147942487); /* do not return */
                }
                else if (*((int *)(iter + ptr[8] + 16)) == 1)
                {
                    v13 = v7 + 1;
                    if (v13 < (v7 & 4294967295) || v13 < 1 || !((v14 = (unsigned long)ptr[9], v13 <= v14)))
                        sub_7ff3711849c(2147942487); /* do not return */
                    v15 = v7 * 5;
                    sub_7ff37124198(ptr[8] + v15 * 8);
                    if (v14 != v13)
                        sub_7ff37149aaa(ptr[8] + v15 * 8, (v14 - v13) * 40, ptr[8] + v13 * 40, (v14 - v13) * 40); /* do not return */
                    ptr[9] = ptr[9] - 1;
                    v4 = g_7ff37153600;
                    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
                        sub_7ff3711722c(g_7ff37153600->field_10, 43, &g_7ff3710c9a0, v7 & 4294967295); /* do not return */
                    v7 = (unsigned int)v7 - 1;
                    cur -= 1;
                    iter -= 40;
                    break;
                }
                else if (cur >= ptr[9])
                {
                    sub_7ff3711849c(2147942487); /* do not return */
                }
                else if (v10 < *((int *)(iter + ptr[8] + 16)))
                {
                    8792722900160();
                }
                else if (v4 != &g_7ff37153600 && (v4->field_1c & 1))
                {
                    if (v4->field_19 >= 5)
                    {
                        *((unsigned int *)&v1) = v7;
                        sub_7ff37118b5c(v4->field_10, 44, &g_7ff3710c9a0, v10, v1); /* do not return */
                    }
                    break;
                }
            }
            v7 = (unsigned int)v7 + 1;
            cur += 1;
            iter += 40;
        } while ((v7 & 4294967295) < ptr[9]);
    }
    8792722899720();
}
