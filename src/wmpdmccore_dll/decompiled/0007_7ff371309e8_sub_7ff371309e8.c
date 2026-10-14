/* sub_7ff371309e8 @ 0x7ff371309e8
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff371309e8  (858 bytes, 80 basic blocks)
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

typedef struct struct_1 {
    char padding_0[104];
    unsigned long long field_68;
    unsigned int field_70;
    char padding_74[20];
    unsigned int field_88;
} struct_1;

extern long long g_7ff3710c960;
extern struct_0 *g_7ff37153600;

int sub_7ff371309e8(void)
{
    struct_0 *v1;  // rcx
    long long v2;  // r8
    unsigned int flag;  // esi
    unsigned int choice;  // esi
    unsigned long v13;  // rsi
    unsigned long long v14;  // rdi
    unsigned long long v15;  // rsi
    unsigned long v16;  // rsi
    unsigned long long v17;  // rdi
    unsigned long long v18;  // rsi
    unsigned long v19;  // rsi
    unsigned long long v20;  // rdi
    unsigned int v3;  // ebx
    unsigned long long v21;  // rsi
    unsigned long v22;  // rsi
    unsigned long long v23;  // rdi
    unsigned long long v24;  // rsi
    unsigned long v25;  // rsi
    unsigned long long v26;  // rdi
    unsigned long long v27;  // rsi
    unsigned long long *p;  // r8
    struct_1 *ptr;  // rcx
    unsigned long v6;  // rdx
    unsigned long v7;  // r8
    unsigned long long v8;  // rcx
    unsigned int v9;  // edx
    unsigned int v10;  // esi

    v1 = g_7ff37153600;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
        sub_7ff37118d04(g_7ff37153600->field_10, 61, &g_7ff3710c960, v2); /* do not return */
    v3 = 0;
    if (!p)
    {
        v3 = 2147942487;
        if (g_7ff37153600 == &g_7ff37153600)
        {
            return;
        }
        else if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
        {
            sub_7ff3711722c(g_7ff37153600->field_10); /* do not return */
        }
        goto LABEL_7ff37130d52;
    }
    *(p) = 0;
    if (!*((long long *)&ptr->field_70))
    {
        v3 = 2147500036;
        v1 = g_7ff37153600;
        if (g_7ff37153600 == &g_7ff37153600)
        {
            return;
        }
        else if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
        {
            sub_7ff3711722c(v1->field_10); /* do not return */
        }
        goto LABEL_7ff37130d52;
    }
    v6 = ptr->field_88;
    if (v6 >= *((long long *)&ptr->field_70))
        sub_7ff3711849c(2147942487); /* do not return */
    if (*((int *)(v6 * 56 + ptr->field_68 + 8)) != 1)
    {
        if (v6 >= *((long long *)&ptr->field_70))
            sub_7ff3711849c(2147942487); /* do not return */
        if (*((int *)(v6 * 56 + ptr->field_68 + 4)) != 1)
            goto LABEL_7ff37130b48;
    }
    v7 = (int)v6;
    if ((unsigned int)v6 < ptr->field_70)
    {
        v8 = v7 * 56;
        do
        {
            if (v7 >= *((long long *)&ptr->field_70))
                sub_7ff3711849c(2147942487); /* do not return */
            if (*((int *)(v8 + ptr->field_68 + 8)))
                continue;
            if (v7 >= *((long long *)&ptr->field_70))
                sub_7ff3711849c(2147942487); /* do not return */
            if (!*((int *)(v8 + ptr->field_68 + 4)))
            {
                ptr->field_88 = v6;
                break;
            }
        } while ((v6 = (unsigned long)(unsigned long long)((unsigned int)v6 + 1), v7 = (unsigned long)(v7 + 1), v8 += 56, (unsigned int)v6 < ptr->field_70));
    }
LABEL_7ff37130b48:
    v10 = v9 - 4003;
    if (v9 != 4003)
    {
        flag = v10 - 3;
        if (v10 != 3)
        {
            choice = flag - 1;
            if (flag == 1)
            {
                v19 = ptr->field_88;
                if (v19 >= *((long long *)&ptr->field_70))
                    sub_7ff3711849c(2147942487); /* do not return */
                v20 = ptr->field_68;
                v21 = v19 * 56;
                if (*((long long *)(v21 + v20 + 32)))
                    8792722900080();
                *(p) = 0;
                if (!(false) && *((long long *)(v21 + v20 + 32)))
                    goto LABEL_7ff37130d46;
            }
            else if (choice == 1)
            {
                v16 = ptr->field_88;
                if (v16 >= *((long long *)&ptr->field_70))
                    sub_7ff3711849c(2147942487); /* do not return */
                v17 = ptr->field_68;
                v18 = v16 * 56;
                if (*((long long *)(v18 + v17 + 48)))
                    8792722900080();
                *(p) = 0;
                if (!(false) && *((long long *)(v18 + v17 + 48)))
                    goto LABEL_7ff37130d46;
            }
            else if (choice != 2)
            {
                v3 = 2147500037;
            }
            else
            {
                v13 = ptr->field_88;
                if (v13 >= *((long long *)&ptr->field_70))
                    sub_7ff3711849c(2147942487); /* do not return */
                v14 = ptr->field_68;
                v15 = v13 * 56;
                if (*((long long *)(v15 + v14 + 40)))
                    8792722900080();
                *(p) = 0;
                if (!(false) && *((long long *)(v15 + v14 + 40)))
                    goto LABEL_7ff37130d46;
            }
        }
        else
        {
            v22 = ptr->field_88;
            if (v22 >= *((long long *)&ptr->field_70))
                sub_7ff3711849c(2147942487); /* do not return */
            v23 = ptr->field_68;
            v24 = v22 * 56;
            if (*((long long *)(v24 + v23 + 24)))
                8792722900080();
            *(p) = 0;
            if (!(false) && *((long long *)(v24 + v23 + 24)))
                goto LABEL_7ff37130d46;
        }
    }
    else
    {
        v25 = ptr->field_88;
        if (v25 >= *((long long *)&ptr->field_70))
            sub_7ff3711849c(2147942487); /* do not return */
        v26 = ptr->field_68;
        v27 = v25 * 56;
        if (*((long long *)(v27 + v26 + 16)))
            8792722900080();
        *(p) = 0;
        if (*((long long *)(v27 + v26 + 16)))
        {
LABEL_7ff37130d46:
            v3 = 2147942414;
        }
    }
    v1 = g_7ff37153600;
LABEL_7ff37130d52:
    if (v1 == &g_7ff37153600)
    {
        return;
    }
    else if (!(v1->field_1c & 1))
    {
        return;
    }
    else if (v1->field_19 >= 5)
    {
        sub_7ff3711722c(v1->field_10, 64, &g_7ff3710c960, v3); /* do not return */
    }
    else
    {
        return;
    }
}
