/* sub_7ff3b16bdbc @ 0x7ff3b16bdbc
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b16bdbc  (641 bytes, 41 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    char padding_0[64];
    struct struct_0 *field_40;
} struct_2;

typedef struct struct_5 {
    char padding_0[64];
    struct struct_3 *field_40;
} struct_5;

typedef struct struct_9 {
    char padding_0[64];
    struct struct_6 *field_40;
} struct_9;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_3 {
    char padding_0[88];
    struct struct_4 *field_58;
} struct_3;

typedef struct struct_6 {
    struct struct_7 *field_0;
    char padding_8[80];
    struct struct_8 *field_58;
} struct_6;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

long long sub_7ff3b16bdbc(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, long long a7, long long a8, long long a9, long long a10, long long a11, long long a12, long long a13, unsigned int a14, long long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned int a31, unsigned long a32, unsigned int a33)
{
    unsigned int v1;  // eax
    struct_2 *v2;  // rdi
    struct_9 *v7;  // rdi
    long long v8;  // r12
    long long v9;  // rsi
    long long v10;  // rbx
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    long long v13;  // r8
    long long v14;  // rdx
    unsigned int v3;  // r15d
    long long v15;  // r14
    struct_5 *v4;  // rdi

    if (v1)
    {
        v2->field_40->field_8();
    }
    else if (v3)
    {
        v4->field_40->field_58();
    }
    else
    {
        v11 = 0;
        if (a31)
        {
            if (v11)
            {
                v12 = sub_7ff3b16de7c(vvar_133{r56|8b}, a15, v10, v7, v9);
                goto LABEL_7ff3b16bf13;
            }
        }
        else
        {
            if (v11)
            {
                v13 = a15;
                v14 = a11;
                v12 = sub_7ff3b16dea0(vvar_133{r56|8b}, a11, a15, v10, v7, v8, v9);
LABEL_7ff3b16bf13:
                if (v12 && sub_7ff3b16dea0(a10, a10, vvar_133{r56|8b}, v10, v7, v8, v9) && sub_7ff3b16dea0(a13, vvar_133{r56|8b}, a13, v10, v7, v8, v9) && sub_7ff3b16dea0(v15, vvar_133{r56|8b}, v15, v10, v7, v8, v9))
                    v7->field_40->field_0();
            }
        }
    }
}
