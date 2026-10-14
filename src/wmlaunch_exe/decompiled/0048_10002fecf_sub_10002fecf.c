/* sub_10002fecf @ 0x10002fecf
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10002fecf  (190 bytes, 20 basic blocks)
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
    unsigned long long field_0;
    unsigned int field_8;
    char field_c;
} struct_0;

typedef struct struct_1 {
    char padding_0[48];
    struct struct_2 *field_30;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

extern struct_3 *g_10003e228;

int sub_10002fecf(void)
{
    unsigned int v1;  // eax
    unsigned long v2;  // rdi
    struct_0 *ptr;  // rbx
    long long v4;  // r12
    unsigned long long v5;  // rdx
    unsigned long v6;  // rdi
    struct_1 **v7;  // rcx
    long long v8;  // rsi
    long long v9;  // r12
    long long v10;  // rdx

    v2 = v1 + 1;
    if ((ptr->field_c & 32))
    {
        sub_10002f938(ptr->field_0 + vvar_17{r56|8b} * 2, (int)(ptr->field_8 - vvar_17{r56|8b}), v4, (int)(v2 - 1));
    }
    else
    {
        v5 = ptr->field_0;
        v6 = v2 + vvar_17{r56|8b};
        if (!ptr->field_0)
        {
            v8 = sub_100030890(ptr, v6 & 4294967295);
            if (v8)
            {
                if (ptr->field_0)
                    sub_10002f938(v8, (int)v6);
                sub_10002f938(v8 + vvar_17{r56|8b} * 2, (int)(v6 - vvar_17{r56|8b}), v9, (int)(v6 - vvar_17{r56|8b} - 1));
                v10 = v8;
                if ((ptr->field_c & 4))
                    sub_100030808(ptr, v10);
                else
                    sub_100030794(ptr, v10);
            }
        }
        else if ((ptr->field_c & 4))
        {
            4296016920();
        }
        else
        {
            v7 = g_10003e228;
            if (!g_10003e228)
            {
                sub_10002ff42(0);
                return;
            }
            g_10003e228->field_0->field_30();
        }
    }
}
