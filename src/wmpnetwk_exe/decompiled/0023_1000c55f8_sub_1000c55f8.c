/* sub_1000c55f8 @ 0x1000c55f8
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000c55f8  (1413 bytes, 95 basic blocks)
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
    char field_0;
    char padding_1[151];
    struct struct_1 *field_98;
} struct_2;

typedef struct struct_3 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_3;

typedef struct struct_1 {
    struct struct_1 *field_0;
    char padding_8[8];
    struct struct_0 *field_10;
} struct_1;

typedef struct struct_5 {
    struct struct_5 *field_0;
    char padding_8[8];
    struct struct_4 *field_10;
} struct_5;

typedef struct struct_0 {
    char padding_0[76];
    unsigned int field_4c;
} struct_0;

typedef struct struct_4 {
    char padding_0[76];
    unsigned int field_4c;
} struct_4;

extern long long g_100002690;
extern long long g_1000026a0;
extern long long g_10001dcb8;
extern unsigned long long g_100152198;
extern struct_3 *g_100153eb8;
extern long long g_100159e08;
extern unsigned long long g_100159e20;
extern char g_100159e28;
extern unsigned int g_100159e34;
extern char g_100159e38;

int sub_1000c55f8(void)
{
    struct_2 *v28;  // rcx
    struct_2 *v29;  // rcx
    struct_2 *p;  // rdi
    unsigned int *ptr;  // r8
    int v41;  // ebx
    struct_1 *v42;  // r15
    struct_1 *addr;  // r15
    struct_5 *v44;  // r15
    int v45;  // eax
    unsigned long v46;  // cc_ndep
    unsigned long v47;  // 4117
    unsigned long long *v30;  // r9
    long long v48;  // rax
    unsigned long long *ptr4;  // r12
    unsigned long long *ptr3;  // r12
    unsigned long v32;  // r15
    unsigned long long v33;  // r15
    struct_3 *v34;  // rcx
    unsigned long long v35[6];  // rdx
    long long v36;  // r8
    unsigned int v37;  // ebp
    char v0;  // [bp-0x2b8]
    long long v1;  // [bp-0x298]
    unsigned long long *v2;  // [bp-0x230]
    unsigned long flag;  // [bp-0x228]
    unsigned long long choice;  // [bp-0x220]
    unsigned long long flag2;  // [bp-0x218]
    unsigned long long flag3;  // [bp-0x210]
    unsigned long long flag4;  // [bp-0x208]
    unsigned int v8;  // [bp-0x200]
    char *v9;  // [bp-0x1f8], Other Possible Types: struct_2 *
    unsigned long long v10;  // [bp-0x1f0]
    unsigned long long flag5;  // [bp-0x1e8]
    unsigned long flag6;  // [bp-0x1e0]
    unsigned long long flag7;  // [bp-0x1d8]
    unsigned long long flag8;  // [bp-0x1d0]
    unsigned long long flag9;  // [bp-0x1c8]
    unsigned long long flag10;  // [bp-0x1c0]
    unsigned int v17;  // [bp-0x1b8]
    unsigned long flag11;  // [bp-0x1b0]
    unsigned long long flag12;  // [bp-0x1a8]
    unsigned long long flag13;  // [bp-0x1a0]
    unsigned long long flag14;  // [bp-0x198]
    unsigned long long v22;  // [bp-0x190]
    unsigned long long flag15;  // [bp-0x188]
    char v24;  // [bp-0x178]
    char v25;  // [bp-0xe8]
    unsigned long long v26;  // [bp-0x58]

    v26 = g_100152198 ^ &v0;
    v29 = &v28->padding_1[7];
    ptr3 = v30;
    v2 = v30;
    v32 = -(NULL < v28);
    v33 = v32 & v29;
    v10 = v33;
    if ((v32 & v29))
        4297065424();
    if (g_100159e34 && (g_100159e38 >= 4 || !g_100159e38) && (0x8000000000000000 & g_100159e20) && (*((long long *)&g_100159e28) & 0x8000000000000000) == *((long long *)&g_100159e28))
        sub_10003b2ec(g_100159e08, &g_100002690, 0, 0); /* do not return */
    v34 = g_100153eb8;
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1) && g_100153eb8->field_19 >= 5)
        sub_1000baea0(g_100153eb8->field_10, 212, &g_10001dcb8, v35, (!v35 ? NULL : v35[0]), (!v35 ? NULL : v35[2]), (!v35 ? NULL : v35[3]), (!v35 ? NULL : v35[4]), (!v35 ? NULL : v35[5]), v36, ptr3); /* do not return */
    flag = 0;
    choice = 0;
    flag2 = 0;
    flag3 = 0;
    flag4 = 0;
    flag5 = 0;
    flag6 = 0;
    flag7 = 0;
    flag8 = 0;
    flag9 = 0;
    flag10 = 0;
    flag11 = 0;
    flag12 = 0;
    flag13 = 0;
    flag14 = 0;
    flag15 = 0;
    v37 = 4294967295;
    v8 = 10;
    v17 = 10;
    v22 = 10;
    p = &v28->field_98;
    v9 = &v28[1].padding_1[39];
    if (v35 && v36 && ptr3)
    {
        *((unsigned int *)v36) = 0;
        *(ptr3) = 0;
        v41 = sub_1000c152c(v28, v35, &flag6, &flag11);
        if (v41 >= 0)
        {
            if (flag8 > 0)
            {
                p = &flag6;
                v9 = &flag11;
            }
            v42 = *((long long *)&p->field_0);
            while (true)
            {
                addr = v42;
                if (!addr)
                    break;
                if (v41 < 0)
                    goto LABEL_1000c5e91;
                if (!addr)
                    sub_100036284(2147500037); /* do not return */
                v44 = addr->field_0;
                v42 = v44;
                if (!addr->field_10->field_4c)
                {
                    v42 = v44;
                    if ((int)sub_1000c1c34(v28, v35, addr->field_10))
                        sub_100129dec(&v24, v35, 144); /* do not return */
                }
            }
            if (v41 >= 0)
            {
                if (!flag2)
                {
                    if (flag5)
                        sub_100129dec(&v25, v35, 144); /* do not return */
                    if (v41 < 0)
                        goto LABEL_1000c5e91;
                    if (!flag2)
                    {
                        v41 = -2147024809;
                        goto LABEL_1000c5df6;
                    }
                }
                if (flag2 > 2147483647)
                    v45 = -2147024809;
                else
                    v45 = v41;
                v41 = v45;
LABEL_1000c5df6:
                if (v41 < 0)
                    goto LABEL_1000c5e91;
                v47 = _ccall(0, 48, 96, flag2, v46);
                sub_10011bdc8(); /* do not return */
            }
        }
LABEL_1000c5e91:
        if (flag2)
        {
            sub_1000d3e7c(&flag);
            4297066960();
        }
        while (flag8)
        {
            v48 = sub_1000d3e7c(&flag6);
            if (v48)
            {
                sub_1000bcb50(v48);
                sub_10011bc94(v48); /* do not return */
            }
        }
        v34 = g_100153eb8;
        ptr4 = v2;
        v33 = v10;
    }
    else
    {
        v41 = -2147024809;
        if (g_100153eb8 == &g_100153eb8)
            goto LABEL_1000c5fd7;
        ptr4 = ptr3;
        if ((2 & g_100153eb8->field_1c))
        {
            ptr4 = ptr3;
            if (g_100153eb8->field_19 >= 2)
                sub_1000546ec(g_100153eb8->field_10, 213, &g_10001dcb8, v35, v36, ptr3); /* do not return */
        }
    }
    if (v34 != &g_100153eb8 && (v34->field_1c & 1) && v34->field_19 >= (v41 >= 0 ? 2 : 5))
    {
        *((unsigned int *)&v1) = (!ptr ? 4294967295 : *(ptr));
        sub_10003bdf4(v34->field_10, 214, &g_10001dcb8, v41, v1, (!ptr4 ? NULL : *(ptr4))); /* do not return */
    }
LABEL_1000c5fd7:
    if (g_100159e34 && (g_100159e38 >= 4 || !g_100159e38) && (0x8000000000000000 & g_100159e20) && (*((long long *)&g_100159e28) & 0x8000000000000000) == *((long long *)&g_100159e28))
    {
        if (v36)
            v37 = *((int *)v36);
        sub_10003b2ec(g_100159e08, &g_1000026a0, v37, v41); /* do not return */
    }
    sub_1000d3edc(&flag11);
    if (flag15)
        4297066584();
    sub_1000e2ad0(&flag6);
    sub_1000e2ad0(&flag);
    if (!v33)
    {
        sub_10011be80(v26 ^ &v0);
        return;
    }
    4297065208();
}
