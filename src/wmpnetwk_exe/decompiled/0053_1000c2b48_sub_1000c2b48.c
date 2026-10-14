/* sub_1000c2b48 @ 0x1000c2b48
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000c2b48  (798 bytes, 64 basic blocks)
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
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_1 {
    char padding_0[96];
    unsigned int field_60;
    char padding_64[4];
    unsigned int field_68;
    unsigned int field_6c;
    char padding_70[8];
    unsigned int field_78;
    unsigned int field_7c;
    unsigned int field_80;
} struct_1;

typedef struct struct_2 {
    char padding_0[48];
    long long field_30;
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
    char padding_44[8];
    unsigned int field_4c;
} struct_2;

extern long long g_10001dcb8;
extern struct_0 *g_100153eb8;

int sub_1000c2b48(void)
{
    struct_0 *v14;  // r10
    long long v15;  // rdx
    unsigned int v24;  // eax
    unsigned int v25;  // edx
    unsigned int v26;  // r8d
    unsigned long long v27;  // rdx
    unsigned long long v28;  // rax
    unsigned int v29;  // r8d
    unsigned long v30;  // rdx
    unsigned long v31;  // rax
    int v32;  // edi
    unsigned int v16[33];  // rbx
    unsigned int v17;  // edi
    long long v18;  // rdx
    struct_2 *v19;  // r8
    unsigned int ptr3[33];  // r12
    unsigned int p[23];  // r9
    unsigned long v22;  // rdi
    unsigned int ptr[33];  // rcx
    unsigned int v0;  // [bp-0x70]
    unsigned int v1;  // [bp-0x68]
    unsigned int v2;  // [bp-0x58]
    unsigned int v3;  // [bp-0x54]
    unsigned int v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    unsigned long long v6;  // [bp-0x40]
    unsigned long i;  // [bp-0x38]
    unsigned int v9;  // [bp+0x28]
    unsigned int v10;  // [bp+0x28]
    unsigned int v11;  // [bp+0x30]
    struct_1 **addr;  // [bp+0x38]
    unsigned int v13;  // [bp+0x38]

    v14 = g_100153eb8;
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1) && g_100153eb8->field_19 >= 5)
    {
        v1 = v11;
        v0 = v10;
        sub_1000bb82c(g_100153eb8->field_10, 195, &g_10001dcb8, v15); /* do not return */
    }
    v16 = NULL;
    if (v10 || (v17 = 1, v11))
        v17 = 0;
    if (addr)
    {
        *(addr) = NULL;
        i = sub_1000b7a14(v15, v19->field_30);
        if (i)
        {
            v5 = 18446744073709551615;
            ptr3 = NULL;
            v6 = 1;
            v13 = 0;
            v9 = 0;
            v4 = 4294967295;
            v3 = 4294967295;
            v2 = 0;
            if (p)
            {
                if (!v10 && !v17)
                {
                    v3 = p[20];
                    v4 = p[22];
                }
                else
                {
                    v5 = p[18] * p[19];
                }
            }
            v22 = v17;
            do
            {
                ptr = *((long long *)sub_1000d3f64(v18, &i, v19->field_30));
                if (!ptr)
                {
                    v32 = -2147418113;
                    goto LABEL_1000c2de6;
                }
                if (ptr[14] != v19->field_38 || ptr[19] != v19->field_4c || ptr[16] != v19->field_40 || ptr[15] != v19->field_3c)
                    continue;
                if (v10)
                {
                    v26 = ptr[26];
                }
                else if (!v22)
                {
                    if (!v11)
                        continue;
                    v24 = ptr[22];
                    if (v24 > v2 && v24 <= v3)
                    {
                        v2 = v24;
                        v25 = 0;
                        v9 = 0;
                        ptr3 = ptr;
                    }
                    else
                    {
                        v25 = v9;
                    }
                    if (v24 != v2 || ptr[25] <= v25 || ptr[25] > v4)
                        continue;
                    v9 = ptr[25];
                    goto LABEL_1000c2dc7;
                }
                else
                {
                    v26 = ptr[30];
                }
                v27 = v26 * (!v10 ? ptr[31] : ptr[27]);
                v28 = v6;
                if (v27 > v28 && v27 <= v5)
                {
                    v28 = v27;
                    v6 = v27;
                    v29 = 0;
                    v13 = 0;
                    ptr3 = ptr;
                }
                else
                {
                    v29 = v13;
                }
                if (!v22 || v27 != v28)
                    continue;
                v30 = ptr[24];
                v31 = ptr[32];
                if ((unsigned int)v30 != 4294967295)
                    v31 = ((unsigned int)v31 == 4294967295 ? (unsigned int)v30 * 8 : v31 + v30 * 8);
                if ((unsigned int)v31 <= v29)
                    continue;
                v13 = v31;
LABEL_1000c2dc7:
                ptr3 = ptr;
            } while (i);
            v32 = (!ptr3 ? -2147467259 : 0);
            *(addr) = ptr3;
LABEL_1000c2de6:
            v14 = g_100153eb8;
            goto LABEL_1000c2e08;
        }
        else
        {
            v14 = g_100153eb8;
        }
    }
    v32 = -2147467259;
LABEL_1000c2e08:
    if (v14 == &g_100153eb8)
    {
        return;
    }
    else if (!(v14->field_1c & 1))
    {
        return;
    }
    else if (v14->field_19 >= (0 <= v32 ? 5 : 2))
    {
        if (addr)
            v16 = *(addr);
        sub_10003be94(v14->field_10, 196, &g_10001dcb8, v32, v16); /* do not return */
    }
    else
    {
        return;
    }
}
