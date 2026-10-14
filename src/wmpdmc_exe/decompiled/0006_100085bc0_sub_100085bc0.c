/* sub_100085bc0 @ 0x100085bc0
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x100085bc0  (1465 bytes, 133 basic blocks)
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
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_0;

typedef struct struct_3 {
    char padding_0[336];
    struct struct_1 *field_150;
} struct_3;

typedef struct struct_6 {
    char padding_0[336];
    struct struct_4 *field_150;
} struct_6;

typedef struct struct_7 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_7;

typedef struct struct_10 {
    char padding_0[336];
    struct struct_8 *field_150;
} struct_10;

typedef struct struct_13 {
    char padding_0[336];
    struct struct_11 *field_150;
} struct_13;

typedef struct struct_16 {
    char padding_0[336];
    struct struct_14 *field_150;
} struct_16;

typedef struct struct_19 {
    char padding_0[336];
    struct struct_17 *field_150;
} struct_19;

typedef struct struct_1 {
    char padding_0[136];
    struct struct_2 *field_88;
} struct_1;

typedef struct struct_4 {
    char padding_0[128];
    struct struct_5 *field_80;
} struct_4;

typedef struct struct_8 {
    char padding_0[120];
    struct struct_9 *field_78;
} struct_8;

typedef struct struct_11 {
    char padding_0[112];
    struct struct_12 *field_70;
} struct_11;

typedef struct struct_14 {
    char padding_0[104];
    struct struct_15 *field_68;
} struct_14;

typedef struct struct_17 {
    char padding_0[96];
    struct struct_18 *field_60;
} struct_17;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_12 {
    unsigned long long field_0;
} struct_12;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_18 {
    unsigned long long field_0;
} struct_18;

extern char g_1000047e0;
extern long long g_10000d258;
extern long long g_10000d268;
extern long long g_10000d278;
extern long long g_10000d298;
extern long long g_10000d2a8;
extern long long g_10000d2b8;
extern long long g_10000d2c8;
extern long long g_10000d3f8;
extern long long g_10000d418;
extern long long g_10000d438;
extern long long g_10000d458;
extern long long g_10000d478;
extern long long g_10000d498;
extern long long g_10000d4b8;
extern long long g_10000d9e0;
extern char g_1000e2d00;
extern long long g_1000e2d10;
extern unsigned long long g_1000e2d28;
extern char g_1000e2d30;
extern char g_1000e2d38;
extern unsigned int g_1000e2d3c;
extern char g_1000e2d40;

int sub_100085bc0(void)
{
    unsigned int v2;  // edx
    unsigned short v3;  // r8w
    unsigned long v12;  // rdx
    unsigned long v13;  // rdx
    unsigned long v14;  // rcx
    struct_0 *ptr;  // rax
    unsigned int v16;  // edx
    char v17;  // bl
    unsigned int v18;  // eax
    struct_3 *v20;  // rcx
    unsigned long v4;  // rdx
    struct_6 *v22;  // rcx
    struct_7 *p;  // rax
    unsigned int v25;  // edx
    char v26;  // r12b
    unsigned int v27;  // eax
    struct_10 *v29;  // rcx
    unsigned long long flag4;  // rdx
    unsigned long long flag;  // rsi
    struct_13 *v32;  // rcx
    unsigned long long flag3;  // rdx
    struct_16 *v35;  // rcx
    unsigned long long flag2;  // rdx
    struct_19 *v38;  // rcx
    unsigned long long choice;  // rdx
    unsigned long long v6;  // rdi
    unsigned long v7;  // rdx
    unsigned long v8;  // rdx
    unsigned long v9;  // rdx
    unsigned long v10;  // rdx
    unsigned long v11;  // rdx
    long long v0;  // [bp-0x48]

    if (v2 < 276 || v2 > 277)
        return;
    v4 = v3;
    flag = 1;
    v6 = 9223372036854775809;
    if ((unsigned int)v4)
    {
        v7 = v4 - 1;
        if ((unsigned int)v4 != 1)
        {
            v8 = v7 - 1;
            if ((unsigned int)v7 != 1)
            {
                v9 = v8 - 1;
                if ((unsigned int)v8 != 1)
                {
                    v10 = v9 - 1;
                    if ((unsigned int)v9 != 1)
                    {
                        v11 = v10 - 1;
                        if ((unsigned int)v10 != 1)
                        {
                            v12 = v11 - 1;
                            if ((unsigned int)v11 != 1)
                            {
                                v13 = v12 - 1;
                                if ((unsigned int)v12 != 1)
                                {
                                    if ((unsigned int)(v12 - 1) != 1)
                                        return;
                                    ptr = sub_100055880(v14, &g_1000047e0, 0);
                                    v16 = ptr->field_0;
                                    v17 = ptr->field_8;
                                    if ((v16 & 4294967168) != 4294967168)
                                    {
                                        v18 = (v16 & 4294967168) - 1 ^ ~(v16) & 127;
                                        ptr->field_0 = v18;
                                        if (!(v18 & 4294967168))
                                            sub_100059224(); /* do not return */
                                    }
                                    if (v17 && (sub_100057d58(v14, &g_1000047e0, 0), g_1000e2d3c))
                                    {
                                        if (g_1000e2d00)
                                        {
                                            if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (1 & g_1000e2d38))
                                                goto LABEL_100085d14;
                                        }
                                        else
                                        {
                                            if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
                                            {
LABEL_100085d14:
                                                sub_1000531fc(g_1000e2d10); /* do not return */
                                            }
                                        }
                                    }
                                    return;
                                }
                                if (g_1000e2d3c)
                                {
                                    if (g_1000e2d00)
                                    {
                                        if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (1 & g_1000e2d38))
                                            goto LABEL_100085d79;
                                    }
                                    else
                                    {
                                        if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
                                        {
LABEL_100085d79:
                                            sub_1000531fc(g_1000e2d10, "!", &g_10000d2c8); /* do not return */
                                        }
                                    }
                                }
                                v20 = v14 + 336;
                                (*((long long *)(*((long long *)(v14 + 336)) + 136)))();
                            }
                            else
                            {
                                if (g_1000e2d3c)
                                {
                                    if (g_1000e2d00)
                                    {
                                        if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (1 & g_1000e2d38))
                                            goto LABEL_100085e6f;
                                    }
                                    else
                                    {
                                        if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
                                        {
LABEL_100085e6f:
                                            sub_1000531fc(g_1000e2d10, &g_10000d4b8, &g_10000d2b8); /* do not return */
                                        }
                                    }
                                }
                                v22 = v14 + 336;
                                (*((long long *)(*((long long *)(v14 + 336)) + 128)))();
                            }
                        }
                        else
                        {
                            p = sub_100055880(v14, &g_1000047e0, 0);
                            v25 = p->field_0;
                            v26 = p->field_8;
                            if ((v25 & 4294967168) != 4294967168)
                            {
                                v27 = (v25 & 4294967168) - 1 ^ ~(v25) & 127;
                                p->field_0 = v27;
                                if (!(v27 & 4294967168))
                                    sub_100059224(); /* do not return */
                            }
                            if (!v26)
                            {
                                if (g_1000e2d3c)
                                {
                                    if (g_1000e2d00)
                                    {
                                        if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (1 & g_1000e2d38))
                                            goto LABEL_100085faa;
                                    }
                                    else
                                    {
                                        if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
                                        {
LABEL_100085faa:
                                            sub_1000531fc(g_1000e2d10, &g_10000d498, &g_10000d2a8); /* do not return */
                                        }
                                    }
                                }
                                *((char *)&v0) = 0;
                                sub_100056298(v14, &g_1000047e0, 1, &g_10000d9e0, v0); /* do not return */
                            }
                        }
                    }
                    if (g_1000e2d3c)
                    {
                        if (g_1000e2d00)
                        {
                            if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (1 & g_1000e2d38))
                                goto LABEL_100086032;
                        }
                        else
                        {
                            if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
                            {
LABEL_100086032:
                                sub_1000531fc(g_1000e2d10, &g_10000d478, &g_10000d298); /* do not return */
                            }
                        }
                    }
                    4295809746();
                }
                else
                {
                    if (g_1000e2d3c)
                    {
                        if (g_1000e2d00)
                        {
                            if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (1 & g_1000e2d38))
                                goto LABEL_10008616c;
                        }
                        else
                        {
                            if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
                            {
LABEL_10008616c:
                                sub_1000531fc(g_1000e2d10, &g_10000d3f8, &g_10000d258); /* do not return */
                            }
                        }
                    }
                    v29 = v14 + 336;
                    flag4 = 1;
                    (*((long long *)(*((long long *)(v14 + 336)) + 120)))();
                }
            }
            else
            {
                if (g_1000e2d3c)
                {
                    if (g_1000e2d00)
                    {
                        if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (1 & g_1000e2d38))
                            goto LABEL_10008625f;
                    }
                    else
                    {
                        if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
                        {
LABEL_10008625f:
                            sub_1000531fc(g_1000e2d10, &g_10000d418, &g_10000d268); /* do not return */
                        }
                    }
                }
                v32 = v14 + 336;
                flag3 = 1;
                (*((long long *)(*((long long *)(v14 + 336)) + 112)))();
            }
        }
        else
        {
            if (g_1000e2d3c)
            {
                if (g_1000e2d00)
                {
                    if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (1 & g_1000e2d38))
                        goto LABEL_100086352;
                }
                else
                {
                    if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
                    {
LABEL_100086352:
                        sub_1000531fc(g_1000e2d10, &g_10000d438, &g_10000d278); /* do not return */
                    }
                }
            }
            v35 = v14 + 336;
            flag2 = 1;
            (*((long long *)(*((long long *)(v14 + 336)) + 104)))();
        }
    }
    else
    {
        if (g_1000e2d3c)
        {
            if (g_1000e2d00)
            {
                if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (1 & g_1000e2d38))
                    goto LABEL_100086445;
            }
            else
            {
                if ((g_1000e2d40 >= 4 || !g_1000e2d40) && (9223372036854775809 & g_1000e2d28) && (*((long long *)&g_1000e2d30) & 9223372036854775809) == *((long long *)&g_1000e2d30))
                {
LABEL_100086445:
                    sub_1000531fc(g_1000e2d10, &g_10000d458, sub_10000d288); /* do not return */
                }
            }
        }
        v38 = v14 + 336;
        choice = 1;
        (*((long long *)(*((long long *)(v14 + 336)) + 96)))();
    }
    return;
}
