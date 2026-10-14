/* sub_100050dea @ 0x100050dea
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100050dea  (773 bytes, 59 basic blocks)
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

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_1 {
    char padding_0[56];
    struct struct_2 *field_38;
} struct_1;

typedef struct struct_5 {
    struct struct_3 *field_0;
} struct_5;

typedef struct struct_3 {
    char padding_0[16];
    struct struct_4 *field_10;
} struct_3;

typedef struct struct_8 {
    char padding_0[160];
    struct struct_9 *field_a0;
} struct_8;

typedef struct struct_6 {
    char padding_0[16];
    struct struct_7 *field_10;
} struct_6;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

extern unsigned long long g_10000c3f4;
extern struct_0 *g_1000dedd8;

int sub_100050dea(void)
{
    struct_0 *v17;  // r12
    unsigned int v18;  // eax
    unsigned long long v27;  // rdx
    struct_5 **ptr;  // rdx
    struct_3 **v29;  // rcx
    unsigned long long v30;  // rsi
    struct_3 **v31;  // rcx
    struct_3 **flag2;  // rcx
    struct_6 **v33;  // rcx
    unsigned long long idx;  // r15
    struct_1 **v21;  // rcx
    unsigned int v22;  // ebx
    unsigned long long *v23;  // r13
    unsigned long v24;  // r9
    unsigned long long v25;  // r8
    unsigned long long v26;  // r14
    unsigned long flag5;  // [bp+0x30]
    struct_1 **v3;  // [bp+0x38]
    struct_3 **v4;  // [bp+0x40]
    unsigned long flag4;  // [bp+0x48]
    unsigned long flag6;  // [bp+0x90]
    unsigned long long flag7;  // [bp+0x98]
    unsigned long long flag8;  // [bp+0xa0]
    unsigned int choice;  // [bp+0xa8]
    char flag;  // [bp+0xc0]
    unsigned long long v13;  // [bp+0x120]
    unsigned long long v14;  // [bp+0x130]
    unsigned int flag9;  // [bp+0x150]
    struct_5 **v16;  // [bp+0x158]

    if (g_1000dedd8 != v17 && (g_1000dedd8->field_1c & 1) && g_1000dedd8->field_19 >= 5)
        sub_100021328(g_1000dedd8->field_10, 196, sub_100008dd0, v18, v3); /* do not return */
    if (v18 < (unsigned int)idx)
        goto LABEL_0x1000514d2;
    v21 = v3;
    if (v3 == idx)
    {
        if (g_1000dedd8 == v17)
            goto LABEL_0x1000514d2;
        if (!(g_1000dedd8->field_1c & 1))
            goto LABEL_0x1000514d2;
        if (g_1000dedd8->field_19 < 5)
            goto LABEL_0x1000514d2;
        sub_100020d8c(g_1000dedd8->field_10, 197, sub_100008dd0, v22); /* do not return */
    }
    if (v18 < (unsigned int)idx)
        goto LABEL_0x1000514d2;
    if ((idx & 4294967295) >= v23[1])
    {
        if (v18 < 0)
            goto LABEL_0x1000514d2;
        flag5 = 0;
        flag6 = 0;
        flag7 = 0;
        flag8 = 0;
        choice = 0;
        if (flag9 != 1 && flag9 != 6)
        {
            if (flag9 != 3 && flag9 != 6)
            {
                if (flag9 != 2 && flag9 != 6)
                {
                    if (flag9 != 5 && flag9 != 6)
                    {
                        if (flag9 != 4 && flag9 != 6)
                        {
                            v4 = NULL;
                            if (flag7 > 0)
                            {
                                flag4 = 0;
                                v13 = &g_10000c3f4;
                                flag = 0;
                                4297067712();
                            }
                            v29 = v4;
                            v30 = (!v29 ? 2147500037 : v18);
                            v31 = v29;
                            if ((!v31 ? v18 : 2147500037) >= 0)
                            {
                                flag2 = NULL;
                                v4 = NULL;
                                ptr = v16;
                                *(ptr) = v29;
                                v31 = NULL;
                            }
                            if (v31)
                                *(v31)->field_10();
                            v33 = v4;
                            if (!v4)
                            {
                                sub_1000447ec(&flag6);
                                4297067696();
                            }
                            *(v4)->field_10();
                        }
                        4297067696();
                    }
                    4297067696();
                }
                4297067696();
            }
            4297067696();
        }
        4297067696();
    }
    else if (idx < v23[1])
    {
        v24 = *((long long *)(*(v23) + idx * 8));
        v25 = v14;
        v27 = v26;
        *(v3)->field_38();
    }
    else
    {
        sub_100046abc(2147942487); /* do not return */
    }
}
