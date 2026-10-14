/* sub_100016564 @ 0x100016564
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x100016564  (604 bytes, 46 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_1 {
    char padding_0[72];
    struct struct_2 *field_48;
} struct_1;

typedef struct struct_3 {
    char padding_0[64];
    struct struct_4 *field_40;
} struct_3;

typedef struct struct_5 {
    char padding_0[56];
    struct struct_6 *field_38;
} struct_5;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[4];
    char field_1c;
    char padding_1d[19];
    unsigned long long field_30;
} struct_0;

extern long long g_1000018c8;
extern long long g_100001958;
extern struct_0 *g_10001c260;

unsigned long long sub_100016564(long long a0, unsigned long long a1, unsigned int flag2, unsigned int a3, unsigned int *a4)
{
    unsigned long long v3;  // rax
    unsigned int choice;  // edi
    unsigned long long v13;  // rdx
    unsigned int *v14;  // rdi
    struct_5 **v15;  // rcx
    long long v16;  // r9
    unsigned int *v17;  // r8
    unsigned long long v18;  // rdx
    unsigned int *v5;  // rdi
    struct_1 **v6;  // rcx
    unsigned int *v7;  // r8
    unsigned long long v8;  // rdx
    unsigned int *v9;  // rdi
    struct_3 **v10;  // rcx
    long long v11;  // r9
    unsigned int *v12;  // r8
    unsigned int v0;  // [bp-0x38], Other Possible Types: unsigned long long
    struct_1 **flag;  // [bp-0x28], Other Possible Types: struct_3 **, struct_5 **

    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 16))
    {
        v0 = a3;
        sub_100015598(g_10001c260->field_10, 27, &g_100001958, flag2); /* do not return */
    }
    v3 = L"CWMPConnector::OnApplicationEvent";
    if (g_10001c260->field_30)
    {
        v0 = L"CWMPConnector::OnApplicationEvent";
        sub_100017b10(&g_1000018c8, 3); /* do not return */
    }
    choice = flag2 - 1;
    if (flag2 != 1)
    {
        if (choice != 1)
        {
            if (choice != 2)
            {
                if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 4))
                    goto LABEL_100016786;
            }
            else
            {
                if (a3 == 20)
                {
                    v5 = a4;
                    flag = NULL;
                    v3 = sub_100017374(a0 + 40, *(v5), &flag);
                    if ((char)v3)
                    {
                        v6 = flag;
                        v7 = v5;
                        v8 = a1;
                        *(flag)->field_48();
                    }
                    if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 4))
                        goto LABEL_100016771;
                }
                else if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 4))
                {
                    goto LABEL_100016786;
                }
            }
        }
        else
        {
            if (a3 == 16)
            {
                v9 = a4;
                flag = NULL;
                v3 = sub_100017374(a0 + 40, *(v9), &flag);
                if ((char)v3)
                {
                    v10 = flag;
                    v11 = a0;
                    v12 = v9;
                    v13 = a1;
                    *(flag)->field_40();
                }
                if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 4))
                    goto LABEL_100016771;
            }
            else if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 4))
            {
                goto LABEL_100016786;
            }
        }
    }
    else
    {
        if (a3 == 12)
        {
            v14 = a4;
            flag = NULL;
            v3 = sub_100017374(a0 + 40, *(v14), &flag);
            if ((char)v3)
            {
                v15 = flag;
                v16 = a0;
                v17 = v14;
                v18 = a1;
                *(flag)->field_38();
            }
            if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 4))
            {
LABEL_100016771:
                sub_1000041ec(g_10001c260->field_10); /* do not return */
            }
        }
        else if (g_10001c260 != &g_10001c260 && (g_10001c260->field_1c & 4))
        {
LABEL_100016786:
            sub_1000041c8(g_10001c260->field_10); /* do not return */
        }
    }
    if (!g_10001c260->field_30)
        return v3;
    v0 = L"CWMPConnector::OnApplicationEvent";
    sub_100017b10(&g_1000018c8, 3); /* do not return */
}
