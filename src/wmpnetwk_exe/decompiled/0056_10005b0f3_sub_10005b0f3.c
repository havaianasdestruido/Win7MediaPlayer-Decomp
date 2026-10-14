/* sub_10005b0f3 @ 0x10005b0f3
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10005b0f3  (853 bytes, 61 basic blocks)
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

typedef struct struct_5 {
    char padding_0[162];
    char field_a2;
} struct_5;

typedef struct struct_6 {
    char padding_0[162];
    char field_a2;
} struct_6;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_2 *field_8;
} struct_4;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_2 *field_8;
    struct struct_3 *field_10;
} struct_2;

typedef struct struct_7 {
    char padding_0[8];
    struct struct_7 *field_8;
} struct_7;

typedef struct struct_9 {
    struct struct_8 *field_0;
} struct_9;

typedef struct struct_10 {
    char padding_0[16];
    struct struct_11 *field_10;
} struct_10;

typedef struct struct_12 {
    char padding_0[64];
    struct struct_13 *field_40;
} struct_12;

typedef struct struct_14 {
    char padding_0[8];
    struct struct_15 *field_8;
} struct_14;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

typedef struct struct_13 {
    unsigned long long field_0;
} struct_13;

typedef struct struct_15 {
    unsigned long long field_0;
} struct_15;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_1;

extern long long g_1000023c0;
extern long long g_10001e400;
extern long long g_10001e570;
extern unsigned long long g_1000210f8;
extern struct_0 *g_100153eb8;
extern long long g_100159e08;
extern unsigned long long g_100159e20;
extern char g_100159e28;
extern unsigned int g_100159e34;
extern char g_100159e38;

int sub_10005b0f3(void)
{
    unsigned int v18;  // eax
    unsigned int v19;  // r15d
    unsigned long long v29;  // r8
    int v30;  // esi
    unsigned long long flag3;  // rcx
    struct_9 **v32;  // r12
    char *v33;  // r8
    unsigned long long v34;  // rdx
    struct_9 **v35;  // rcx
    char *v36;  // rdx
    struct_12 **v37;  // r13
    unsigned int v20;  // ebx
    struct_12 **v38;  // rcx
    unsigned long long v39;  // rsi
    char v40;  // dil
    void* p;  // rdx
    struct_14 **v42;  // rcx
    unsigned int v21;  // ebx
    struct_0 *v22;  // rdi
    struct_0 **v23;  // rdx
    struct_5 *v24;  // r14
    struct_6 *v25;  // r14
    struct_2 *cur;  // rbx
    struct_7 *v27;  // rcx
    char *v1;  // [bp+0x20], Other Possible Types: unsigned int
    char *v2;  // [bp+0x28]
    unsigned int flag2;  // [bp+0x60]
    unsigned int flag;  // [bp+0x68]
    unsigned int v6;  // [bp+0x74]
    unsigned long flag4;  // [bp+0x88]
    unsigned int v8;  // [bp+0x98]
    unsigned long long v9;  // [bp+0xa0]
    struct_7 *ptr;  // [bp+0xa8], Other Possible Types: char
    struct_7 *v11;  // [bp+0xb0]
    void* v12;  // [bp+0xd8]
    unsigned long long v13;  // [bp+0xe0]
    char v14;  // [bp+0x170]
    struct_4 *addr;  // [bp+0x180]
    long long v16;  // [bp+0x188]

    if (v18 == v19)
    {
        v13 = v9;
        v20 = v19;
    }
    v21 = v20;
    v22 = g_100153eb8;
    v23 = &g_100153eb8;
    if (g_100153eb8 != &g_100153eb8 && (2 & g_100153eb8->field_1c))
    {
        v23 = (v21 == v19 ? 0x5 : 0x2);
        if (g_100153eb8->field_19 >= (unsigned int)v23)
            sub_100036510(g_100153eb8->field_10, 72, &g_10001e570, v21); /* do not return */
    }
    if (!v21)
    {
        flag = 0;
        v8 = 4;
        v2 = &v8;
        v1 = &flag;
        4297064768();
    }
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1))
        sub_100034784(g_100153eb8->field_10, 56, &g_10001e400); /* do not return */
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1) && g_100153eb8->field_19 >= 5)
        sub_100036510(g_100153eb8->field_10, 57, &g_10001e400, v24->field_a2); /* do not return */
    if (v25->field_a2 == 1)
        sub_100073a94(addr, &ptr); /* do not return */
    if (!addr)
        sub_100036284(2147500037); /* do not return */
    cur = addr->field_8;
    if (cur)
    {
        v27 = ptr;
        do
        {
            v23 = cur->field_10;
            cur = cur->field_8;
            v29 = 0;
            v27 = sub_100061224(&ptr, v23, 0, v27);
            if (ptr)
                ptr->field_8 = v27;
            else
                v11 = v27;
        } while ((ptr = v27, cur));
        v22 = g_100153eb8;
        if (v30 < 0)
            goto LABEL_10005b56e;
    }
    flag3 = 0;
    flag4 = 0;
    if (v32)
    {
        v33 = &flag4;
        v34 = &g_1000210f8;
        v35 = v32;
        *(v32)->field_0();
    }
LABEL_10005b56e:
    flag2 = 0;
    if (v30 >= 0)
    {
        v36 = &flag2;
        v38 = v37;
        *(v37)->field_40();
    }
    v39 = 2147746661;
    if (v22 == &g_100153eb8)
    {
        v40 = v6;
    }
    else if ((v22->field_1c & 1))
    {
        if (v22->field_19 >= (1 ? 5 : 2))
            sub_100035a14(v16, &v12, 3900); /* do not return */
        v40 = v6;
    }
    else
    {
        v40 = v6;
    }
    if ((v40 & 1))
    {
        p = v12 - 24;
        InterlockedExchangeAdd(p + 16, 4294967295);
        if ((int)p[16] - 1 <= 0)
        {
            v42 = *((long long *)p);
            (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
        }
    }
    if (g_100159e34 && (g_100159e38 >= 4 || !g_100159e38) && (0x8000000000000000 & g_100159e20) && (*((long long *)&g_100159e28) & 0x8000000000000000) == *((long long *)&g_100159e28))
    {
        v1 = 2147746661;
        sub_100057de4(g_100159e08, &g_1000023c0, v14); /* do not return */
    }
    if (!v13)
    {
        sub_10004e320(&ptr);
        return;
    }
    4297064544();
}
