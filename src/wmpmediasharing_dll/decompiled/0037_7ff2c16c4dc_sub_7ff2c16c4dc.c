/* sub_7ff2c16c4dc @ 0x7ff2c16c4dc
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c16c4dc  (357 bytes, 29 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[32];
    struct struct_1 *field_20;
} struct_0;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_3 *field_20;
} struct_2;

typedef struct struct_4 {
    char padding_0[24];
    struct struct_5 *field_18;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

extern struct_2 *g_7ff2c181100;

int sub_7ff2c16c4dc(void* *addr, long long a1, unsigned int *node, unsigned int *ptr)
{
    unsigned long long v9;  // rdi
    unsigned long long v10;  // r12
    unsigned int *v19;  // r9
    unsigned long long v20;  // rbp
    unsigned short v21;  // ax
    unsigned int *v22;  // r9
    unsigned short ptr7[2];  // r10
    unsigned short v24[2];  // r10
    unsigned short v25;  // r9w
    unsigned int *flag3;  // r9
    unsigned int *v27;  // r9
    unsigned int *v28;  // r9
    unsigned long long v11;  // r13
    unsigned int *v29;  // r9
    unsigned short ptr6[2];  // r10
    unsigned int v32;  // r9d
    unsigned short v33;  // cx
    unsigned int *iter;  // rax
    unsigned short v35;  // r8w
    unsigned int *flag2;  // r8
    unsigned long long v12;  // rbx
    long long v37;  // r8
    struct_0 **v38;  // rcx
    unsigned long long choice;  // rcx
    struct_2 **v40;  // rcx
    unsigned long long v13;  // rsi
    unsigned int *v14;  // rdi
    unsigned long v15;  // rsi
    void* p;  // rcx
    unsigned short cur[2];  // rdx
    unsigned short v18[2];  // r11
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]
    unsigned long long v4;  // [bp+0x8]
    unsigned long v5;  // [bp+0x10]
    unsigned long long v6;  // [bp+0x18]
    unsigned int flag;  // [bp+0x20]

    v3 = v9;
    v2 = v10;
    v1 = v11;
    v0 = 18446744073709551614;
    v4 = v12;
    v5 = vvar_150{r56|8b};
    v6 = v13;
    v14 = ptr;
    flag = 0;
    v15 = *(ptr);
    if ((unsigned int)v15 < 0)
        8792537709680();
    p = *(addr);
    cur = p + v15 * 2;
    v18 = p + (int)p[16] * 2;
    v19 = ptr;
    if (cur < v18)
    {
        v20 = 0;
        v21 = cur[0];
        v22 = ptr;
        ptr7 = cur;
        if (ptr7[0])
        {
            do
            {
                v24 = ptr7;
                node = ",";
                v25 = 44;
                do
                {
                    if (v25 == v21)
                    {
                        v28 = node;
                        goto LABEL_7ff2c16c57a;
                    }
                } while ((node += 2, v25 = (unsigned short)*((short *)node), *((short *)node)));
                flag3 = NULL;
                if (*((short *)node) == v21)
                    v27 = node;
                else
                    v27 = flag3;
                v28 = v27;
LABEL_7ff2c16c57a:
                v22 = v28;
                if (!v22)
                    break;
            } while ((v20 = (unsigned long long)((unsigned int)v20 + 1), ptr6 = v24 + 2, v21 = ptr6[0], v22 = v29, ptr7 = ptr6, ptr7[0]));
        }
        cur = &cur[(unsigned int)v20];
        v19 = v22;
        if (cur < v18)
        {
            v32 = 0;
            v33 = cur[0];
            if (cur[0])
            {
                do
                {
                    iter = ",";
                    v35 = 44;
                    do
                    {
                        if (v35 == v33)
                            goto LABEL_7ff2c16c5d7;
                    } while ((iter += 2, v35 = (unsigned short)*((short *)iter), *((short *)iter)));
                    flag2 = NULL;
                    if (*((short *)iter) == v33)
                        iter = iter;
                    else
                        iter = flag2;
LABEL_7ff2c16c5d7:
                } while ((iter || !((v32 += 1, cur += 2, v33 = cur[0], cur[0]))) && (v32 += 1, cur += 2, v33 = cur[0], cur[0]));
            }
            v37 = v15 + v20;
            *(ptr) = v32 + (int)v37 + 1;
            sub_7ff2c16d700(addr, a1, v37); /* do not return */
        }
    }
    *(ptr) = 4294967295;
    v38 = (long long)p[24];
    if (!(long long)p[24])
    {
        choice = 0;
        v40 = &g_7ff2c181100;
        g_7ff2c181100->field_20();
    }
    (*((long long *)(*((long long *)(long long)p[24]) + 32)))();
}
