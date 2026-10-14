/* sub_1000b1ea4 @ 0x1000b1ea4
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000b1ea4  (1076 bytes, 63 basic blocks)
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

typedef struct struct_4 {
    struct struct_4 *field_0;
    struct struct_4 *field_8;
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    unsigned long long field_10;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
    struct struct_3 *field_10;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern long long g_10001dcd8;
extern struct_4 g_100153eb8;

int sub_1000b1ea4(void)
{
    long long *v22;  // r8
    unsigned long v23;  // r9
    long long *p;  // rsi
    long long v34;  // r9
    unsigned long v35;  // r8
    long long v36;  // rcx
    long long v37;  // r14
    unsigned long v38;  // rax
    unsigned long v39;  // rbx
    unsigned long v40;  // rdi
    unsigned long v41;  // rdi
    unsigned int v24;  // r12d
    unsigned long v42;  // rbx
    unsigned long i;  // rdi
    unsigned long v44;  // rdi
    unsigned long v45;  // rbx
    unsigned long v46;  // rax
    unsigned long long v47;  // rbx
    unsigned long long j;  // rbx
    unsigned long long v49;  // rbx
    struct_4 *ptr;  // rdx
    struct_1 **v50;  // rdi
    struct_1 **v51;  // rcx
    struct_1 **v52;  // rcx
    unsigned int v26;  // r14d
    unsigned int v27;  // r15d
    struct_4 *v28;  // rcx
    struct_0 *v29;  // rdx
    long long v30;  // rcx
    int v31;  // ebx
    char *v0;  // [bp-0xf8], Other Possible Types: long long
    long long v1;  // [bp-0xe8]
    long long v2;  // [bp-0xe0]
    long long v3;  // [bp-0xd8]
    unsigned int flag;  // [bp-0xb0]
    struct_4 *ptr4;  // [bp-0xa8]
    struct_4 *addr;  // [bp-0xa0]
    unsigned long choice;  // [bp-0x98]
    unsigned long long flag2;  // [bp-0x90]
    unsigned long long flag3;  // [bp-0x88]
    unsigned int v10;  // [bp-0x80]
    char v11;  // [bp-0x70]
    struct_1 **flag4;  // [bp-0x68]
    unsigned long long v13;  // [bp-0x40]
    long long *v15;  // [bp+0x18]
    unsigned int v16;  // [bp+0x28]
    unsigned int v17;  // [bp+0x30]
    long long v18;  // [bp+0x38]
    struct_4 *v19;  // [bp+0x40]
    unsigned int *ptr3;  // [bp+0x48]
    long long *v21;  // [bp+0x50]

    v15 = v22;
    v13 = 18446744073709551614;
    v24 = v23;
    ptr = &g_100153eb8.field_0;
    v26 = v17;
    v27 = v16;
    v28 = g_100153eb8.field_0;
    if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (g_100153eb8.field_0->field_1c & 1) && g_100153eb8.field_0->field_19 >= 5)
    {
        *((unsigned int *)&v3) = v26;
        *((unsigned int *)&v2) = v27;
        *((unsigned int *)&v1) = v24;
        *((unsigned int *)&v0) = v29->field_10;
        sub_10009cf5c(g_100153eb8.field_0->field_10, 402, &g_10001dcd8, v30, v0, *(v22), v1, v2, v3, v18, v19->field_0); /* do not return */
    }
    v31 = 0;
    flag = 0;
    ptr4 = NULL;
    addr = NULL;
    choice = 0;
    flag2 = 0;
    flag3 = 0;
    v10 = 10;
    if (*((long long *)&v29->padding_0[0]))
        sub_100035e60(&v11, *((long long *)&v29->padding_0[0]) + 16); /* do not return */
    p = v21;
    if (v26)
    {
        v0 = &ptr4;
        v34 = v18;
        v35 = v26;
        ptr = v19;
        v37 = v36;
        v31 = sub_1000b2690(v37, ptr, v35, v34, &ptr4);
        if (v31 >= 0)
        {
            v38 = v24;
            v39 = choice;
            if (v38 < v39)
                v40 = v38;
            else
                v40 = v39;
            v41 = v40;
            v42 = v39;
            if (v41)
            {
                do
                {
                    i = v41;
                    ptr = ptr4;
                    if (!ptr)
                        sub_100036284(2147500037); /* do not return */
                    ptr4 = ptr->field_0;
                    if (ptr4)
                        ptr4->field_8 = 0;
                    else
                        addr = NULL;
                    sub_10008bd80(&ptr4);
                    v44 = i - 1;
                    v41 = v44;
                } while (i != 1);
                v42 = choice;
            }
            v45 = v42;
            v46 = v27;
            if (v46 < v45 && !((v47 = (unsigned long long)(v45 - v46), v45 == v46)))
            {
                do
                {
                    j = v47;
                    ptr = addr;
                    if (!ptr)
                        sub_100036284(2147500037); /* do not return */
                    addr = ptr->field_8;
                    if (addr)
                        addr->field_0 = 0;
                    else
                        ptr4 = NULL;
                    sub_10008bd80(&ptr4);
                    v49 = j - 1;
                    v47 = v49;
                } while (j != 1);
                v28 = g_100153eb8.field_0;
            }
            else
            {
                v28 = g_100153eb8.field_0;
            }
LABEL_1000b247d:
            if (v28 != &g_100153eb8.field_0 && (v28->field_1c & 1) && v28->field_19 >= 5)
                sub_10006b7d8(v28->field_10, 127, &g_10001dcd8, (unsigned int)choice, v37, v19->field_0); /* do not return */
            flag4 = NULL;
            *(p) = 0;
            v31 = sub_1000b7ee0(&flag4);
            v50 = flag4;
            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (2 & g_100153eb8.field_0->field_1c))
            {
                ptr = (v31 >= 0 ? 0x5 : 0x2);
                if (g_100153eb8.field_0->field_19 >= (unsigned int)ptr)
                    sub_10003be94(g_100153eb8.field_0->field_10, 128, &g_10001dcd8, v31, v50); /* do not return */
            }
            if (v31 >= 0)
            {
                v51 = v50;
                *(v50)->field_8();
            }
            else if (v50)
            {
                v52 = v50;
                *(v50)->field_10();
            }
            else
            {
                if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (g_100153eb8.field_0->field_1c & 1) && g_100153eb8.field_0->field_19 >= (v31 >= 0 ? 2 : 5))
                    sub_10003be94(g_100153eb8.field_0->field_10, 129, &g_10001dcd8, v31, *(p)); /* do not return */
                *(ptr3) = flag;
                v28 = g_100153eb8.field_0;
            }
        }
        else
        {
            v28 = g_100153eb8.field_0;
        }
    }
    else
    {
        v37 = v36;
        goto LABEL_1000b247d;
    }
    if (v28 == &g_100153eb8.field_0)
    {
        sub_10008bd04(&ptr4);
        return;
    }
    else if (!(v28->field_1c & 1))
    {
        sub_10008bd04(&ptr4);
        return;
    }
    else if (v28->field_19 >= (v31 >= 0 ? 5 : 2))
    {
        *((unsigned int *)&v0) = *(ptr3);
        sub_10003bdf4(v28->field_10, 405, &g_10001dcd8, v31, v0, *(p)); /* do not return */
    }
    else
    {
        sub_10008bd04(&ptr4);
        return;
    }
}
