/* sub_7ff3711dcd2 @ 0x7ff3711dcd2
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3711dcd2  (861 bytes, 60 basic blocks)
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

typedef struct struct_3 {
    char padding_0[64];
    struct struct_4 *field_40;
} struct_3;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_5 {
    char padding_0[16];
    struct struct_6 *field_10;
} struct_5;

typedef struct struct_1 {
    char padding_0[40];
    struct struct_2 *field_28;
} struct_1;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_7ff3710c9d0;
extern struct_0 *g_7ff37153600;

int sub_7ff3711dcd2(void)
{
    int v13;  // r12d
    unsigned long v14;  // rsi
    long long v23;  // rbx
    unsigned int v24;  // r14d
    unsigned int v25;  // eax
    struct_1 **v26;  // r9
    char *v27;  // r8
    long long v28;  // rdx
    struct_1 **v29;  // rcx
    long long v30;  // rbx
    unsigned int flag3;  // r13d
    struct_3 *ptr;  // r15
    unsigned int v17;  // r12d
    struct_0 *v18;  // rcx
    struct_5 **v19;  // rsi
    struct_5 **v20;  // rcx
    unsigned long long choice;  // rdx
    unsigned long long v22;  // rbx
    unsigned long flag2;  // [bp+0x30]
    long long v2;  // [bp+0x38]
    struct_5 **flag;  // [bp+0x58], Other Possible Types: unsigned long long
    char v4;  // [bp+0x60]
    unsigned long v5;  // [bp+0x78]
    unsigned long long v6;  // [bp+0x80]
    unsigned long long v7;  // [bp+0x88]
    unsigned long v8;  // [bp+0xc0]
    unsigned long long v9;  // [bp+0xc8]
    unsigned long long v10;  // [bp+0xd0]
    unsigned long long v11;  // [bp+0x140]
    struct_5 **v12;  // [bp+0x148], Other Possible Types: char

    if (v13 < 0)
    {
        v18 = g_7ff37153600;
LABEL_7ff3711e11a:
        if (v18 != &g_7ff37153600 && (v18->field_1c & 1) && v18->field_19 >= 5)
            sub_7ff37117208(v18->field_10, 163, &g_7ff3710c9d0); /* do not return */
        8792722899728();
    }
    if ((unsigned int)v14 <= 0 && v17 >= 0)
    {
        v18 = g_7ff37153600;
LABEL_7ff3711df5e:
        if ((unsigned int)v11 > 0)
        {
            v25 = sub_7ff3711b5ec(ptr, v23, v12, v24);
            v18 = g_7ff37153600;
            if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
                sub_7ff3711722c(g_7ff37153600->field_10, 158, &g_7ff3710c9d0, v25); /* do not return */
            if (v25 >= 0)
            {
                v26 = ptr->field_40;
                if (v26)
                {
                    v27 = &v4;
                    v28 = v23;
                    v29 = v26;
                    *(v26)->field_28();
                }
                if (g_7ff37153600 != &g_7ff37153600)
                {
                    if ((g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
                        sub_7ff3711722c(g_7ff37153600->field_10, 160, &g_7ff3710c9d0, 2147549183); /* do not return */
                }
                else
                {
                    8792722899728();
                }
            }
        }
        else if (v17 >= 0 && (unsigned int)v11 > 0)
        {
            sub_7ff3711a73c(ptr, v30); /* do not return */
        }
        goto LABEL_7ff3711e11a;
    }
    if (!flag3)
    {
        v19 = flag;
        if (v19)
        {
            flag = 0;
            v20 = v12;
            choice = 0;
            if (v12)
                (*((long long *)(*((long long *)v12) + 16)))();
            v12 = v19;
            v18 = g_7ff37153600;
            goto LABEL_7ff3711dedc;
            goto LABEL_7ff3711dedc;
        }
        else
        {
            if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
                sub_7ff3711722c(g_7ff37153600->field_10, 154, &g_7ff3710c9d0, 2147549183); /* do not return */
        }
    }
    else if (flag3 != 1)
    {
        if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
            sub_7ff3711722c(g_7ff37153600->field_10, 157, &g_7ff3710c9d0, 2147549183); /* do not return */
    }
    else
    {
        if ((int)sub_7ff37120418(&v5))
        {
            v8 = v5;
            v9 = v6;
            v10 = v7;
            v17 = sub_7ff3711bcd8(ptr, v2, &v8, &v12);
            v18 = g_7ff37153600;
            if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 5)
                sub_7ff37118bfc(g_7ff37153600->field_10, 155, &g_7ff3710c9d0, v17, v12); /* do not return */
LABEL_7ff3711dedc:
            if (v17 >= 0)
                goto LABEL_7ff3711df5e;
        }
        else if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 2)
        {
            sub_7ff3711722c(g_7ff37153600->field_10, 156, &g_7ff3710c9d0, 2147549183); /* do not return */
        }
    }
    if (!v22)
    {
        flag2 = 0;
        sub_7ff37120e90(&flag2, L"WMPDMC_CORE_EVENT_FAILED_TO_INITIALIZE_PLAYLIST"); /* do not return */
    }
    8792722900080();
}
