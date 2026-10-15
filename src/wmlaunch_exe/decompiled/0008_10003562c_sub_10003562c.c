/* sub_10003562c @ 0x10003562c
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10003562c  (431 bytes, 44 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[32];
    unsigned short field_20;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

extern struct_3 *g_10003e238;

int sub_10003562c(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, long long a5, unsigned int a6, unsigned long long a7, unsigned int a8, unsigned long long a9, unsigned int a10, unsigned long long a11, unsigned int a12, unsigned long long a13, unsigned int a14, unsigned long long a15, unsigned int a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21)
{
    int v3;  // eax
    unsigned long v4;  // r8
    unsigned int v5;  // ebx
    struct_0 *ptr;  // rdi
    struct_1 **v7;  // rcx
    struct_0 *v8;  // rdx
    char v1;  // [bp+0x20]
    unsigned short v2;  // [bp+0x6c]

    if (v3 >= 0)
    {
        v4 = a6;
        v5 = sub_10002fd60(&v1, a5, v4);
        if (v5 >= 0 && (v5 = (unsigned int)(int)sub_100033e58(ptr, v1), v5 >= 0))
        {
            if (a7)
            {
                v4 = a8;
                v5 = sub_10002fd60(&v1);
                if (v5 >= 0)
                {
                    v5 = sub_100034284(ptr, v1);
                    goto LABEL_10003569b;
                }
            }
            else
            {
LABEL_10003569b:
                if (v5 >= 0)
                {
                    if (a9)
                    {
                        v4 = a10;
                        v5 = sub_10002fd60(&v1);
                        if (v5 >= 0)
                        {
                            v5 = sub_100033d8c(ptr, v1);
                            goto LABEL_1000356d5;
                        }
                    }
                    else
                    {
LABEL_1000356d5:
                        if (v5 >= 0)
                        {
                            if (a11)
                            {
                                v4 = a12;
                                v5 = sub_10002fd60(&v1);
                                if (v5 >= 0)
                                {
                                    v5 = sub_100033a44(ptr, v1);
                                    goto LABEL_10003570f;
                                }
                            }
                            else
                            {
LABEL_10003570f:
                                if (v5 >= 0)
                                {
                                    ptr->field_20 = v2;
                                    if (a13)
                                    {
                                        v4 = a14;
                                        v5 = sub_10002fd60(&v1);
                                        if (v5 >= 0)
                                        {
                                            v5 = sub_100033f48(ptr, v1);
                                            goto LABEL_10003574e;
                                        }
                                    }
                                    else
                                    {
LABEL_10003574e:
                                        if (v5 >= 0)
                                        {
                                            if (a15)
                                            {
                                                v4 = a16;
                                                v5 = sub_10002fd60(&v1);
                                                if (v5 >= 0)
                                                {
                                                    v5 = sub_100035320(ptr, v1);
                                                    goto LABEL_100035786;
                                                }
                                            }
                                            else
                                            {
LABEL_100035786:
                                                if (v5 >= 0 && (v5 = (unsigned int)(int)sub_100035898(ptr), v5 >= 0))
                                                {
                                                    v7 = g_10003e238;
                                                    if (g_10003e238)
                                                    {
                                                        v8 = ptr;
                                                        g_10003e238->field_0->field_8();
                                                    }
                                                    goto LABEL_1000357b6;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    else
    {
        v5 = 3222082345;
LABEL_1000357b6:
        if (v5 >= 0)
        {
            sub_100030020(&v1);
            return v5;
        }
    }
    sub_1000332c8(ptr);
    sub_100030020(&v1);
    return v5;
}
