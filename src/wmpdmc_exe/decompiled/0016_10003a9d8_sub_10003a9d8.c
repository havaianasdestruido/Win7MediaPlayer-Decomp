/* sub_10003a9d8 @ 0x10003a9d8
 *
 * MODULE   : wmpdmc_exe  (bin/WMPDMC.exe)
 * ADDRESS  : 0x10003a9d8  (1005 bytes, 95 basic blocks)
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

typedef struct struct_3 {
    struct struct_0 *field_0;
    char padding_8[202];
    char field_d2;
    char padding_d3[413];
    unsigned long long field_270;
    char padding_278[176];
    unsigned int field_328;
    char padding_32c[4];
    unsigned int field_330;
} struct_3;

typedef struct struct_4 {
    unsigned int field_0;
    char padding_4[4];
    char field_8;
} struct_4;

typedef struct struct_0 {
    char padding_0[320];
    struct struct_1 *field_140;
    struct struct_2 *field_148;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern void g_100006ce0;
extern char g_1000decf8;
extern char g_1000ded00;
extern char g_1000ded08;
extern char g_1000ded10;
extern char g_1000ded18;
extern char g_1000ded20;

int sub_10003a9d8(void)
{
    unsigned long long v9;  // rsi
    unsigned long long v10;  // r12
    char *v33;  // r8
    void* v18;  // rdx
    unsigned long long v19;  // rdi
    unsigned int flag;  // eax
    void* p;  // rdi
    struct_3 *v22;  // rsi
    unsigned long long v23;  // rax
    struct_3 *v24;  // rcx
    unsigned long long v25;  // rax
    struct_4 *addr;  // rax
    void* ptr;  // rdx
    unsigned int v27;  // edx
    char v28;  // bl
    unsigned int v29;  // ecx
    unsigned long v30;  // rbx
    unsigned long long v31;  // rax
    struct_3 *v32;  // rcx
    unsigned long long v12;  // rax
    struct_3 *ptr3;  // rcx
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    char *v16;  // rcx
    unsigned long v17;  // rax
    long long v0;  // [bp-0x28]
    long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v3;  // [bp-0x8]
    char v5;  // [bp+0x10], Other Possible Types: unsigned int
    unsigned int v6;  // [bp+0x18], Other Possible Types: unsigned long long
    unsigned long v7;  // [bp+0x20]

    v7 = vvar_180{r56|8b};
    v3 = v9;
    v2 = v10;
    if (ptr)
    {
        v12 = sub_10006a420(&v5);
        v33 = (long long)ptr[8];
        if (*((long long *)v12) == v33)
        {
            sub_10003adfc(ptr3, 1);
            *((char *)&ptr[16]) = 1;
        }
        v14 = sub_100077390(&v5);
        if (*((long long *)v14) == (long long)ptr[8] && !ptr3->field_330)
            sub_10003acb4(ptr3, 1);
        if ((int)ptr[20] != 2)
            goto LABEL_10003ac91;
        v15 = sub_100062cd4(&v5);
        v16 = (long long)ptr[8];
        if (v16 == *((long long *)v15))
        {
            v17 = *((long long *)ptr);
            if (v17 == *((long long *)&ptr3->padding_d3[237]))
                goto LABEL_10003aa7a;
            if (v17 == *((long long *)&ptr3->padding_d3[221]))
            {
                sub_10003ada0(ptr3, 1);
                sub_10003acb4(ptr3, 1);
                goto LABEL_10003aaa9;
            }
            if (v17 == *((long long *)&ptr3->padding_d3[229]))
            {
                sub_100039d4c(ptr3, 0x100);
                goto LABEL_10003aad8;
            }
            if (v17 == *((long long *)&ptr3->padding_d3[205]))
            {
                sub_10003ada0(ptr3, 1);
                sub_10003acb4(ptr3, 1);
LABEL_10003aaa9:
                sub_100039d4c(ptr3);
                sub_10003ada0(ptr3, 0);
            }
            else
            {
                if (v17 == *((long long *)&ptr3->padding_d3[213]))
                    goto LABEL_10003aa7a;
                if (v17 == *((long long *)&ptr3->padding_d3[245]))
                    goto LABEL_10003aa7a;
                if (v17 == *((long long *)&ptr3->padding_d3[253]))
                {
                    sub_10003a498(ptr3);
                }
                else
                {
                    if (v17 == *((long long *)&ptr3->padding_d3[261]))
                    {
                        sub_100039d4c(ptr3, 257);
LABEL_10003aa7a:
                        sub_100039d4c(ptr3);
                    }
                    else
                    {
                        if (v17 == *((long long *)&ptr3->padding_d3[373]))
                            sub_100035718(ptr3); /* do not return */
                        goto LABEL_10003ac91;
                    }
                }
            }
        }
        else if (v16 == *((long long *)&g_1000decf8))
        {
            if (!ptr3->field_270)
                goto LABEL_10003ac91;
            sub_100036260(ptr3);
        }
        else if (v16 == *((long long *)&g_1000ded08))
        {
            sub_1000376e8(ptr3, (int)ptr[32]);
        }
        else if (v16 == *((long long *)&g_1000ded10))
        {
            v33 = &v5;
            v5 = 0;
            if (sub_10002f214(ptr3, (int)ptr[32], &v5) >= 0)
                v6 = 0;
LABEL_10003aad8:
            sub_10003acb4(ptr3);
        }
        else
        {
            if (v16 == *((long long *)&g_1000ded18))
            {
                ptr3->field_328 = 1;
                *((int *)&v1) = (int)ptr[60];
                *((int *)&v0) = (int)ptr[56];
                sub_100035048(ptr3, (int)ptr[36], (int)ptr[40], (long long)ptr[48], v0, v1); /* do not return */
            }
            if (v16 == *((long long *)&g_1000ded20))
            {
                v33 = &v5;
                if (sub_10002f214(ptr3, (int)ptr[32], &v5) >= 0)
                {
                    ptr3->field_328 = 1;
                    v33 = (long long)ptr[36];
                    sub_10003ca28(ptr3, v5, v33);
                    ptr3->field_328 = 0;
                }
            }
            else
            {
                if (v16 != *((long long *)&g_1000ded00))
                    goto LABEL_10003ac91;
                sub_10002ec44(ptr3, ptr);
            }
        }
        *((char *)&ptr[16]) = 1;
    }
LABEL_10003ac91:
    v18 = ptr;
    v6 = v3;
    v3 = v19;
    flag = (int)ptr[20];
    p = ptr;
    v22 = ptr3;
    if (!(flag != 2 && flag))
    {
        v25 = sub_10005a254(&v5);
        if ((long long)ptr[8] == *((long long *)v25))
        {
            sub_10005b760(ptr3);
            if ((char)p[16])
                return;
            addr = sub_100055880(ptr3, &g_100006ce0, 0);
            v27 = addr->field_0;
            v28 = addr->field_8;
            if ((v27 & 4294967168) != 4294967168)
            {
                v29 = (v27 & 4294967168) - 1 ^ ~(v27) & 127;
                addr->field_0 = v29;
                if (!(v29 & 4294967168))
                    sub_100059224(addr); /* do not return */
            }
            if (!v28)
                return;
            if (!((char)p[32] & 1))
                return;
            if (!((char)p[32] & 8))
                return;
            v30 = *((long long *)p);
            *((unsigned long *)p) = 0;
            sub_10005b760(ptr3, p);
            *((unsigned long *)p) = v30;
            return;
        }
        else
        {
            v31 = sub_10006a420(&v5);
            if ((long long)ptr[8] == *((long long *)v31))
            {
                v32 = ptr3;
                ptr3->field_0->field_148();
            }
        }
    }
    else if (flag == 1)
    {
        v23 = sub_10005a254(&v5);
        if ((long long)ptr[8] == *((long long *)v23) && (ptr3->field_d2 & 1))
        {
            v24 = ptr3;
            ptr3->field_0->field_140();
        }
    }
    sub_10005b760(ptr3, p);
    return;
}
