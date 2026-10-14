/* sub_1000c60ac @ 0x1000c60ac
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000c60ac  (1059 bytes, 84 basic blocks)
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
    char padding_0[152];
    struct struct_0 *field_98;
    char padding_a0[296];
    unsigned int field_1c8;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    char padding_30[80];
    char field_80;
} struct_3;

typedef struct struct_4 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_4;

typedef struct struct_0 {
    struct struct_0 *field_0;
    char padding_8[8];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_5 {
    char padding_0[24];
    struct struct_6 *field_18;
} struct_5;

typedef struct struct_1 {
    char padding_0[56];
    unsigned int field_38;
    unsigned int field_3c;
    unsigned int field_40;
} struct_1;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

extern long long g_1000026b0;
extern long long g_1000026c0;
extern long long g_10001dcb8;
extern struct_5 *g_100152100;
extern struct_4 *g_100153eb8;
extern long long g_100159e08;
extern unsigned long long g_100159e20;
extern char g_100159e28;
extern unsigned int g_100159e34;
extern char g_100159e38;

int sub_1000c60ac(void)
{
    struct_2 *ptr4;  // rcx
    struct_2 *v10;  // r10
    unsigned long long v19;  // r8
    unsigned int *p;  // r8
    unsigned long long *addr;  // r9
    struct_0 *ptr;  // r12
    unsigned int v23[17];  // rbp
    unsigned long v24;  // rdx
    struct_5 **v25;  // rcx
    unsigned long long v26;  // rcx
    unsigned long long v27;  // cc_ndep
    struct_3 *ptr3;  // rdx
    unsigned long v28;  // 4117
    unsigned long long *ptr5;  // rdi
    unsigned long long v30;  // rbp
    struct_3 *v12;  // rdi
    unsigned long v13;  // rbp
    unsigned long long v14;  // rbp
    struct_4 *v15;  // rcx
    long long v16;  // r8
    long long v17;  // r9
    unsigned long long v18;  // rsi
    long long v0;  // [bp-0xb8]
    unsigned long long v1;  // [bp-0x78]
    unsigned long flag;  // [bp-0x70]
    unsigned long long choice;  // [bp-0x68]
    unsigned long long flag2;  // [bp-0x60]
    unsigned long long flag3;  // [bp-0x58]
    unsigned long long flag4;  // [bp-0x50]
    unsigned int v7;  // [bp-0x48]

    v10 = &ptr4->padding_0[8];
    v12 = ptr3;
    v13 = -(NULL < ptr4);
    v14 = v13 & v10;
    if ((v13 & v10))
        4297065424();
    if (g_100159e34 && (g_100159e38 >= 4 || !g_100159e38) && (0x8000000000000000 & g_100159e20) && (*((long long *)&g_100159e28) & 0x8000000000000000) == *((long long *)&g_100159e28))
        sub_10003b2ec(g_100159e08, &g_1000026b0, 0, 0); /* do not return */
    v15 = g_100153eb8;
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1) && g_100153eb8->field_19 >= 5)
        sub_1000baea0(g_100153eb8->field_10, 215, &g_10001dcb8, ptr3, (!ptr3 ? NULL : ptr3->field_0), (!ptr3 ? NULL : ptr3->field_10), (!ptr3 ? NULL : ptr3->field_18), (!ptr3 ? NULL : ptr3->field_20), (!ptr3 ? NULL : ptr3->field_28), v16, v17); /* do not return */
    v18 = 0;
    v19 = 18446744073709551615;
    v7 = 10;
    flag = 0;
    choice = 0;
    flag2 = 0;
    flag3 = 0;
    flag4 = 0;
    if (ptr3 && v16 && v17)
    {
        *((unsigned int *)v16) = 0;
        *((unsigned long long *)v17) = 0;
        ptr = ptr4->field_98;
        if (ptr4->field_98)
        {
            do
            {
                if (!ptr)
                    sub_100036284(2147500037); /* do not return */
                v23 = ptr->field_10;
                ptr = ptr->field_0;
                if ((ptr4->field_1c8 || v23[14] != 1) && !v23[14] && !(ptr3->field_80 & 1) && !v23[16] && !v23[15])
                {
                    v24 = ptr3->field_0;
                    if ((int)sub_1000c5244(v23, ptr3->field_0))
                    {
                        v25 = &g_100152100;
                        g_100152100->field_18();
                    }
                    v19 = 18446744073709551615;
                }
            } while (ptr);
            v26 = flag2;
            if (!v26)
                goto LABEL_1000c6569;
            if (v26 > 2147483647)
                v18 = 2147942487;
            else
                v18 = 0;
            if ((unsigned int)v18 >= 0)
            {
                v28 = _ccall(0, 48, 96, v26, v27);
                sub_10011bdc8(); /* do not return */
            }
            ptr5 = addr;
            if (v26)
            {
                sub_1000d3e7c(&flag);
                4297066960();
            }
            v15 = g_100153eb8;
        }
        else
        {
LABEL_1000c6569:
            v15 = g_100153eb8;
            v18 = 2147942487;
LABEL_1000c6575:
            ptr5 = addr;
        }
        if (v15 != &g_100153eb8 && (v15->field_1c & 1) && v15->field_19 >= ((unsigned int)v18 >= 0 ? 2 : 5))
        {
            *((unsigned int *)&v0) = (!p ? 4294967295 : *(p));
            sub_10003bdf4(v15->field_10, 217, &g_10001dcb8, v18 & 4294967295, v0, (!ptr5 ? NULL : *(ptr5))); /* do not return */
        }
        v30 = v1;
LABEL_1000c66ac:
        if (g_100159e34 && (g_100159e38 >= 4 || !g_100159e38) && (0x8000000000000000 & g_100159e20) && (*((long long *)&g_100159e28) & 0x8000000000000000) == *((long long *)&g_100159e28))
            sub_10003b2ec(g_100159e08, &g_1000026c0); /* do not return */
        sub_1000e2ad0(&flag);
        if (!v30)
            return;
        4297065208();
    }
    else
    {
        v18 = 2147942487;
        v30 = v14;
        if (g_100153eb8 == &g_100153eb8)
            goto LABEL_1000c66ac;
        if ((2 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 2)
            sub_1000546ec(g_100153eb8->field_10, 216, &g_10001dcb8, ptr3, v16, v17); /* do not return */
        goto LABEL_1000c6575;
    }
}
