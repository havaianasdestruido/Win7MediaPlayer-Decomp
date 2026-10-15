/* sub_1000773b0 @ 0x1000773b0
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x1000773b0  (431 bytes, 44 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): f069226052de289452ef5ff9dd67557193c15308c5351bc7b70b6692b350951b
 *   Evidence: analysis/report/rea-evidence/setup_wm_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
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

extern struct_3 *g_1000889b0;

int sub_1000773b0(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, long long a5, unsigned int a6, unsigned long long a7, unsigned int a8, unsigned long long a9, unsigned int a10, unsigned long long a11, unsigned int a12, unsigned long long a13, unsigned int a14, unsigned long long a15, unsigned int a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21)
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
        v5 = sub_10007d57c(&v1, a5, v4);
        if (v5 >= 0 && (v5 = (unsigned int)(int)sub_100075db0(ptr, v1), v5 >= 0))
        {
            if (a7)
            {
                v4 = a8;
                v5 = sub_10007d57c(&v1);
                if (v5 >= 0)
                {
                    v5 = sub_100076008(ptr, v1);
                    goto LABEL_10007741f;
                }
            }
            else
            {
LABEL_10007741f:
                if (v5 >= 0)
                {
                    if (a9)
                    {
                        v4 = a10;
                        v5 = sub_10007d57c(&v1);
                        if (v5 >= 0)
                        {
                            v5 = sub_100075ce4(ptr, v1);
                            goto LABEL_100077459;
                        }
                    }
                    else
                    {
LABEL_100077459:
                        if (v5 >= 0)
                        {
                            if (a11)
                            {
                                v4 = a12;
                                v5 = sub_10007d57c(&v1);
                                if (v5 >= 0)
                                {
                                    v5 = sub_10007599c(ptr, v1);
                                    goto LABEL_100077493;
                                }
                            }
                            else
                            {
LABEL_100077493:
                                if (v5 >= 0)
                                {
                                    ptr->field_20 = v2;
                                    if (a13)
                                    {
                                        v4 = a14;
                                        v5 = sub_10007d57c(&v1);
                                        if (v5 >= 0)
                                        {
                                            v5 = sub_100075ea0(ptr, v1);
                                            goto LABEL_1000774d2;
                                        }
                                    }
                                    else
                                    {
LABEL_1000774d2:
                                        if (v5 >= 0)
                                        {
                                            if (a15)
                                            {
                                                v4 = a16;
                                                v5 = sub_10007d57c(&v1);
                                                if (v5 >= 0)
                                                {
                                                    v5 = sub_1000770a4(ptr, v1);
                                                    goto LABEL_10007750a;
                                                }
                                            }
                                            else
                                            {
LABEL_10007750a:
                                                if (v5 >= 0 && (v5 = (unsigned int)(int)sub_10007761c(ptr), v5 >= 0))
                                                {
                                                    v7 = g_1000889b0;
                                                    if (g_1000889b0)
                                                    {
                                                        v8 = ptr;
                                                        g_1000889b0->field_0->field_8();
                                                    }
                                                    goto LABEL_10007753a;
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
LABEL_10007753a:
        if (v5 >= 0)
        {
            sub_10007d970(&v1);
            return v5;
        }
    }
    sub_100075220(ptr);
    sub_10007d970(&v1);
    return v5;
}
