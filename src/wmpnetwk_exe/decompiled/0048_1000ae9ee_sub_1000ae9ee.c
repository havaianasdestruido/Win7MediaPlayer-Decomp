/* sub_1000ae9ee @ 0x1000ae9ee
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000ae9ee  (795 bytes, 65 basic blocks)
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

typedef struct struct_2 {
    char padding_0[32];
    unsigned int field_20;
    char field_24;
} struct_2;

typedef struct struct_4 {
    char padding_0[32];
    unsigned int field_20;
    char field_24;
} struct_4;

typedef struct struct_3 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_3;

typedef struct struct_0 {
    char padding_0[8];
    struct struct_1 *field_8;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern long long g_10001dcd8;
extern struct_3 *g_100153eb8;
extern char g_100155f00;
extern unsigned int g_100155f70[4];

int sub_1000ae9ee(void)
{
    unsigned long long v5;  // r8
    struct_2 *ptr;  // rdi, Other Possible Types: struct_4 *
    unsigned int v13;  // edx
    unsigned int flag3;  // edx
    unsigned int flag4;  // edx
    long long *v16;  // r13
    unsigned int v17;  // r14d
    unsigned long long v18;  // rsi
    int v19;  // ebx
    struct_4 *p;  // r9
    long long v21;  // r12
    unsigned int v22;  // ecx
    unsigned int flag;  // ecx
    unsigned int flag2;  // ecx
    unsigned int v25;  // ecx
    struct_3 *v7;  // rcx
    void* addr;  // rdx
    struct_0 **v27;  // rcx
    struct_3 **v8;  // rdi
    unsigned int v9;  // r12d
    unsigned long v10;  // rdx
    unsigned int choice;  // edx
    unsigned int v12;  // edx
    void* v0;  // [bp+0x0], Other Possible Types: char
    void* v2;  // [bp+0x40]
    char v3;  // [bp+0x48]
    unsigned int v4;  // [bp+0x98]

    v5 = 0;
    if ((int)v2[16])
    {
        p = ptr->field_20;
        if ((unsigned int)p == 10)
            sub_1000ac14c(10, &v2, ptr, &v0); /* do not return */
        if ((unsigned int)(struct struct_4 *)&p->padding_0[1] <= 79 && *((int *)((char *)&g_100155f70[0] + 0x4 * p)) == 1)
            sub_1000ad620(ptr->field_24 | &g_100155f00, v4, &v2, &v0); /* do not return */
        v7 = g_100153eb8;
        v8 = &g_100153eb8;
        if (g_100153eb8 == &g_100153eb8)
        {
            v5 = 0;
            v8 = &g_100153eb8;
            addr = v2 - 24;
            InterlockedExchangeAdd(addr + 16, 4294967295);
            if ((int)addr[16] - 1 > 0)
                return;
            v27 = *((long long *)addr);
            (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
        }
        else if ((2 & g_100153eb8->field_1c))
        {
            if (g_100153eb8->field_19 >= 2)
                sub_100036510(g_100153eb8->field_10, 366, &g_10001dcd8); /* do not return */
            v9 = 5;
            goto LABEL_1000aed13;
        }
        else
        {
            v9 = 5;
            goto LABEL_1000aed13;
        }
        goto LABEL_1000aed13;
    }
    v10 = ptr->field_20;
    if ((unsigned int)v10 <= 26)
    {
        if ((unsigned int)v10 == 26)
        {
            p = ptr;
            v19 = sub_1000adf7c(v21, v10, 0, p, &v0);
            goto LABEL_1000aebde;
        }
        choice = (unsigned int)v10 - 1;
        if ((unsigned int)v10 != 1)
        {
            v12 = choice - 1;
            if (choice != 1)
            {
                v13 = v12 - 15;
                if (v12 == 15 || (flag3 = v13 - 2, v13 == 2))
                    goto LABEL_1000aeb2e;
                flag4 = flag3 - 1;
                if (flag3 == 1)
                {
                    v9 = 5;
LABEL_1000aeb95:
                    v18 = !v17;
                    v19 = 0;
                }
                else if (flag4 == 1)
                {
                    v7 = g_100153eb8;
                    v9 = flag4 + 4;
                    v8 = &g_100153eb8;
                    goto LABEL_1000aed13;
                }
                else
                {
                    v9 = 5;
LABEL_1000aeb7f:
                    v18 = 0;
                    v19 = 0;
                }
            }
            else
            {
                v18 = (!(char)sub_10009f27c(*(v16)) ? 0 : v17);
                v19 = 0;
                v9 = 5;
            }
        }
        else
        {
LABEL_1000aeb2e:
            v18 = 1;
            v19 = 0;
            v9 = 5;
        }
    }
    else
    {
        v22 = v10;
        flag = v22 - 27;
        if (v22 != 27)
        {
            flag2 = flag - 1;
            if (flag != 1)
            {
                v25 = flag2 - 1;
                if (flag2 == 1)
                {
                    p = ptr;
                    v19 = sub_1000adf7c(v21, v10, 0, p, &v0);
                }
                else if (v25 != 9)
                {
                    v9 = 5;
                    if (v25 - 9 != 5)
                        goto LABEL_1000aeb7f;
                    goto LABEL_1000aeb95;
                }
                else
                {
                    v9 = 5;
                    goto LABEL_1000aeb95;
                }
            }
            else
            {
                p = ptr;
                v19 = sub_1000adf7c(v21, v10, 0, p, &v0);
            }
        }
        else
        {
            p = ptr;
            v19 = sub_1000adf7c(v21, v10, 0, p, &v0);
        }
LABEL_1000aebde:
        v5 = 0;
        if (v19 >= 0)
        {
            v9 = 5;
        }
        else
        {
            v9 = 5;
            v7 = g_100153eb8;
            v8 = &g_100153eb8;
LABEL_1000aed13:
            if (v7 != &g_100153eb8 && (v7->field_1c & 1))
            {
                if (0 > v19)
                    v9 = 2;
                if (v7->field_19 >= v9)
                    sub_10003ba64(v7->field_10, 367, &g_10001dcd8, v19, v0); /* do not return */
            }
            addr = v2 - 24;
            InterlockedExchangeAdd(addr + 16, 4294967295);
            if ((int)addr[16] - 1 > 0)
                return;
            v27 = *((long long *)addr);
            (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
        }
    }
    if ((int)v0[16])
    {
        sub_100035e60(&v3, &v0); /* do not return */
    }
    else if (!(unsigned int)v18 == !ptr->field_24)
    {
        while (true)
        {
            if (0)
                goto LABEL_0x1000aec26;
        }
    }
    else
    {
        while (true)
        {
            if (0)
                goto LABEL_0x1000aec5e;
        }
    }
}
