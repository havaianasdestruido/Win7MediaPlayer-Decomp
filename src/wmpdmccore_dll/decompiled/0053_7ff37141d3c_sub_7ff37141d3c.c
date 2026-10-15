/* sub_7ff37141d3c @ 0x7ff37141d3c
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff37141d3c  (305 bytes, 31 basic blocks)
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

typedef struct struct_5 {
    struct struct_1 *field_0;
    char padding_8[96];
    struct struct_4 *field_68;
} struct_5;

typedef struct struct_0 {
    char padding_0[64];
    unsigned long long field_40;
    unsigned int field_48;
} struct_0;

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
    struct struct_8 *field_10;
} struct_6;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
    struct struct_3 *field_10;
} struct_1;

typedef struct struct_4 {
    char padding_0[64];
    unsigned long long field_40;
    unsigned int field_48;
} struct_4;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

int sub_7ff37141d3c(void)
{
    int v1;  // edx
    unsigned long v2;  // rsi
    int v11;  // xmm0
    int v12;  // xmm0
    int v13;  // xmm0
    uint128_t v14;  // xmm0
    unsigned int v15;  // eax
    unsigned long pos;  // rdx
    unsigned long long v19;  // rdx
    struct_5 *ptr;  // r8
    struct_5 *v20;  // rcx
    struct_0 *p;  // rcx
    struct_0 *v5;  // rdi
    struct_5 *v6;  // rcx
    unsigned long long v7;  // rdi
    unsigned int v8;  // edx
    int v9;  // xmm0

    v2 = v1;
    if (!ptr)
        return;
    if (v1 >= 0 && (v1 <= 0 || (unsigned int)v2 < p->field_48))
    {
        v5 = ptr->field_68;
        if (ptr->field_68)
        {
            v6 = ptr;
            ptr->field_0->field_8();
        }
        if ((unsigned int)v2 > p->field_48)
        {
            v7 = 2147942487;
        }
        else
        {
            v8 = *((int *)&p[1].padding_0[0]);
            if (p->field_48 == v8)
            {
                if (v8 >= 50 && v8 >= 150)
                {
                    v9 = (int)v8;
                    v11 = (int)_INSERT(_INSERT(v9, 12, (unsigned int)(v9 >> 96)), 8, (unsigned int)(v9 >> 64));
                    v12 = (int)_INSERT(v11, 4, (unsigned long long)v9 >> 32);
                    v13 = (int)_INSERT(v12, 0, (unsigned int)v9);
                    v14 = (uint128_t)(MulV(v13, 1045220557));
                }
                v15 = sub_7ff3714812c(&p->padding_0[56]);
                v7 = v15;
                if (v15 < 0)
                    goto LABEL_7ff37141e32;
            }
            for (pos = p->field_48; pos > v2; pos -= 1)
            {
                *((long long *)(p->field_40 + pos * 8)) = *((long long *)(p->field_40 + pos * 8 - 8));
            }
            p->field_48 = p->field_48 + 1;
            v7 = 0;
LABEL_7ff37141e32:
            if ((unsigned int)v7 >= 0)
            {
                v19 = v2 & 4294967295;
                *((struct_5 **)sub_7ff37147fb4(&p->padding_0[56], v2 & 4294967295)) = ptr;
                v20 = ptr;
                ptr->field_0->field_8();
            }
        }
        return;
    }
    return;
}
