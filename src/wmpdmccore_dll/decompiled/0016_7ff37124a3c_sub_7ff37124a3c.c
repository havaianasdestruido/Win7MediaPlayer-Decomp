/* sub_7ff37124a3c @ 0x7ff37124a3c
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37124a3c  (694 bytes, 54 basic blocks)
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
    char padding_18[4];
    char field_1c;
} struct_0;

extern long long g_7ff3710c9a0;
extern unsigned long long g_7ff3710d488;
extern struct_0 *g_7ff37153600;

int sub_7ff37124a3c(void)
{
    unsigned long long ptr[10];  // rcx
    unsigned long long v5[10];  // rsi
    int v14;  // ebp
    unsigned long v15;  // rax
    unsigned int v16;  // ecx
    unsigned long index;  // rax
    unsigned long long v18;  // rdx
    unsigned long v19;  // rcx
    unsigned long long v20;  // r8
    long long v6;  // rdx
    unsigned long long v7;  // r13
    unsigned int v8;  // ebp
    unsigned long long p;  // r8
    unsigned long long v11;  // rdi
    unsigned long v12;  // r14
    unsigned long long v13;  // r15
    long long v0;  // [bp-0x48]
    char v1;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned short v2;  // [bp-0x2c]
    unsigned int v3;  // [bp+0x8]

    v5 = ptr;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->padding_18[1] >= 5)
        sub_7ff37118968(g_7ff37153600->field_10, 30, &g_7ff3710c9a0, v6); /* do not return */
    v7 = 0;
    sub_7ff37134410(&v1);
    v2 |= 4;
    v8 = 0;
    if (!v6)
        v8 = 1;
    else
        sub_7ff37134594(&v1, v6, 4294967295);
    if (p)
    {
        *((unsigned long long *)p) = 0;
        sub_7ff37124b17();
        return;
    }
    v11 = 2147942487;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->padding_18[1] >= 2)
        sub_7ff3711722c(g_7ff37153600->field_10, 31, &g_7ff3710c9a0, 2147942487); /* do not return */
    if (!ptr[9])
    {
        v11 = 2147500036;
        if (g_7ff37153600 == &g_7ff37153600)
        {
            sub_7ff37134a64(&v1);
            return;
        }
        if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->padding_18[1] >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 32, &g_7ff3710c9a0, 2147500036); /* do not return */
    }
    else if (!v8)
    {
        v3 = 0;
        v12 = 0;
        if (ptr[9] > 0)
        {
            v13 = 0;
            do
            {
                v14 = 0;
                while (true)
                {
                    if (v12 >= ptr[9])
                        sub_7ff3711849c(2147942487); /* do not return */
                    v15 = ptr[8];
                    if (v14 >= *((int *)(v13 + v15 + 16)))
                        break;
                    if (v12 >= ptr[9])
                    {
                        sub_7ff3711849c(2147942487); /* do not return */
                    }
                    else if (!(v14 >= 0 && v14 < *((int *)(v15 + v13 + 16))))
                    {
                        8792722899736();
                    }
                    else if ((char)sub_7ff37134390(v1, *((long long *)(v7 + *((long long *)(v15 + v13 + 8))))) != 1)
                    {
                        v14 += 1;
                        v7 += 8;
                    }
                    else
                    {
                        8792722899728();
                    }
                }
                v7 = 0;
            } while (!*((long long *)p) && !((v12 = (unsigned long)(v12 + 1), v13 += 40, v16 = v3 + 1, v3 = v16, (unsigned long long)v16 >= ptr[9])));
        }
        if (!*((long long *)p))
        {
            v11 = 2147500037;
            if (g_7ff37153600 == &g_7ff37153600)
            {
                sub_7ff37134a64(&v1);
                return;
            }
            else if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->padding_18[1] >= 2)
            {
                *((unsigned int *)&v0) = 2147500037;
                sub_7ff371186b8(g_7ff37153600->field_10, 37, &g_7ff3710c9a0, v1, v0); /* do not return */
            }
        }
    }
    else
    {
        index = ptr[9] - 1;
        if (index >= ptr[9])
            sub_7ff3711849c(2147942487); /* do not return */
        v18 = &g_7ff3710d488;
        v19 = *((long long *)(ptr[8] + index * 40));
        v20 = p;
        (*((long long *)*((long long *)*((long long *)(ptr[8] + index * 40)))))();
    }
    if (g_7ff37153600 == &g_7ff37153600)
    {
        sub_7ff37134a64(&v1);
        return;
    }
    else if (!(g_7ff37153600->field_1c & 1))
    {
        sub_7ff37134a64(&v1);
        return;
    }
    else if (g_7ff37153600->padding_18[1] >= 5)
    {
        sub_7ff3711722c(g_7ff37153600->field_10, 38, &g_7ff3710c9a0, v11 & 4294967295); /* do not return */
    }
    else
    {
        sub_7ff37134a64(&v1);
        return;
    }
}
