/* sub_1000c1ebb @ 0x1000c1ebb
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000c1ebb  (1288 bytes, 117 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 306467d280e99d0616e839278a4db5bed684f002ae284c3678cabb5251459cb3
 *   Evidence: analysis/report/rea-evidence/wmpnetwk_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
    char padding_8[24];
    unsigned long long field_20;
    char padding_28[32];
    unsigned int field_48;
    unsigned int field_4c;
    unsigned int field_50;
    char padding_54[4];
    unsigned int field_58;
    char padding_5c[36];
    unsigned int field_80;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[44];
    void* field_30;
} struct_1;

typedef struct struct_2 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_2;

extern long long g_10001dcb8;
extern struct_2 *g_100153eb8;

int sub_1000c1ebb(void)
{
    unsigned int v9;  // eax
    struct_0 *p;  // rdi
    struct_1 *ptr;  // rbx
    unsigned int v22;  // edx
    unsigned int v25;  // eax
    unsigned int v11;  // esi
    unsigned int v12;  // edx
    unsigned int v14;  // r14d
    long long v1;  // [bp+0x20]
    unsigned int flag;  // [bp+0x40]
    unsigned long choice;  // [bp+0x58]
    long long v5;  // [bp+0xd0]
    unsigned int v6;  // [bp+0xd8]
    long long v7;  // [bp+0xe0]
    unsigned int v8;  // [bp+0xe8]

    if (v9 != 2)
        4297065544();
    flag = 1;
    if (p->field_0)
        4297065544();
    if ((int)ptr[1].field_30 < p->field_48 && *((int *)((char *)&ptr[1].field_30 + 4)) < p->field_4c)
    {
        v11 = 1;
    }
    else if (!vvar_279{r56|4b})
    {
        if ((int)ptr[1].field_30 == 4294967295 && *((int *)((char *)&ptr[1].field_30 + 4)) == 4294967295)
        {
            v11 = 1;
        }
        else if ((int)ptr[1].field_30 != p->field_48)
        {
            v12 = v8;
            goto LABEL_1000c2700;
        }
        else if (*((int *)((char *)&ptr[1].field_30 + 4)) == p->field_4c)
        {
            v11 = 1;
        }
        else
        {
            v12 = v8;
LABEL_1000c2700:
            v22 = v12;
            if ((!v14 || !v6) && (int)ptr->field_30[16])
            {
                if (v22 && !v14 && !p->field_20 && ((char)(p->field_80 >> 13) & 1))
                {
                    v11 = 0;
                }
                else
                {
                    choice = 0;
                    *((unsigned int *)&v1) = v22;
                    v25 = sub_1000c2894(v5, v7, ptr, 1, v1, &choice);
                    if (v25 >= 0 && *((int *)choice) == ptr->field_0)
                        v11 = 1;
                    else
                        v25 = 0;
                }
            }
        }
    }
    if (g_100153eb8 == &g_100153eb8)
    {
        return;
    }
    else if (!(1 & g_100153eb8->field_1c))
    {
        return;
    }
    else if (g_100153eb8->field_19 >= (0 <= v25 ? 5 : 2))
    {
        *((unsigned int *)&v1) = v11;
        sub_10003be4c(g_100153eb8->field_10, 192, &g_10001dcb8, v25, v1); /* do not return */
    }
    else
    {
        return;
    }
}
