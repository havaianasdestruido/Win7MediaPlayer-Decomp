/* sub_100078404 @ 0x100078404
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100078404  (1088 bytes, 86 basic blocks)
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
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_2;

typedef struct struct_3 {
    char padding_0[162];
    char field_a2;
} struct_3;

typedef struct struct_4 {
    char padding_0[8];
    struct struct_5 *field_8;
} struct_4;

typedef struct struct_8 {
    char padding_0[8];
    struct struct_9 *field_8;
} struct_8;

typedef struct struct_10 {
    char padding_0[8];
    struct struct_11 *field_8;
} struct_10;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_9 {
    unsigned long long field_0;
} struct_9;

typedef struct struct_11 {
    unsigned long long field_0;
} struct_11;

extern long long g_10001e400;
extern unsigned long long g_10001e918;
extern unsigned long long g_10001e91a;
extern struct_2 *g_100153eb8;

int sub_100078404(void)
{
    void* *ptr;  // rdx
    struct_2 *v18;  // rcx
    unsigned long long v26;  // rdi
    void* v27;  // rsi
    unsigned long long v28;  // cc_ndep
    unsigned long long v29;  // cc_ndep
    unsigned int v34;  // edx
    char v19;  // bpl
    char v37;  // cc_dep1
    unsigned long long v38;  // rdi
    long long ptr4;  // rcx
    char *v20;  // r9
    void* p;  // rdx
    struct_4 **v43;  // rcx
    void* addr;  // rdx
    struct_8 **v45;  // rcx
    void* v49;  // rsi
    unsigned long ptr3;  // rdx
    struct_10 **v47;  // rcx
    long long v21;  // r8
    struct_2 *v22;  // r10
    unsigned int v23;  // edx
    unsigned long long v24;  // rdi
    void* v25;  // rax
    char v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    char v2;  // [bp-0x98]
    unsigned int choice;  // [bp-0x88]
    unsigned long long flag9;  // [bp-0x80]
    unsigned long long flag10;  // [bp-0x78]
    unsigned long long flag3;  // [bp-0x70]
    long long flag4;  // [bp-0x68]
    unsigned long flag5;  // [bp-0x60]
    unsigned long long flag6;  // [bp-0x58]
    unsigned long long flag7;  // [bp-0x50]
    unsigned int flag;  // [bp-0x48]
    unsigned long long flag8;  // [bp-0x40]
    void* *v14;  // [bp+0x10]
    unsigned int flag2;  // [bp+0x18]
    void* v16;  // [bp+0x20]

    v14 = ptr;
    v1 = 18446744073709551614;
    v18 = g_100153eb8;
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1) && g_100153eb8->field_19 >= 5)
        sub_1000347a8(g_100153eb8->field_10, 20, &g_10001e400, *(ptr)); /* do not return */
    v19 = 0;
    if ((int)(*(ptr))[16])
    {
        if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 5)
            sub_100034784(g_100153eb8->field_10, 21, &g_10001e400); /* do not return */
        flag2 = 0;
        v20 = &flag2;
        v21 = ",";
        sub_100035390(ptr, &v16, ",", &flag2);
        v22 = g_100153eb8;
        if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 5)
            sub_100034784(g_100153eb8->field_10, 22, &g_10001e400); /* do not return */
        while (true)
        {
            v23 = 0;
            v24 = &g_10001e918;
            v25 = v16;
            v49 = v25;
            do
            {
                if (false)
                    break;
                v26 = &g_10001e91a;
                v27 = v49 + 2;
            } while (!*((short *)v49));
            v29 = v28;
            if (!v23)
                break;
            if (v22 != &g_100153eb8 && (v22->field_1c & 2) && v22->field_19 >= 5)
                sub_1000347a8(v22->field_10, 23, &g_10001e400, v25); /* do not return */
            v34 = 0;
            do
            {
                if (false)
                    break;
            } while (*((short *)v25) == 42);
            v37 = !v34;
            if (!v34)
            {
                if (v22 != &g_100153eb8)
                {
                    if ((v22->field_1c & 2) && v22->field_19 >= 5)
                        sub_100034784(v22->field_10, 24, &g_10001e400); /* do not return */
                    if (v22 != &g_100153eb8 && (v22->field_1c & 1))
                        sub_100034784(v22->field_10, 29, &g_10001e400); /* do not return */
                }
                v38 = 0;
                do
                {
                    if ((unsigned int)(v38 - 1) <= 79)
                        sub_1000788e4(ptr4, v38 & 4294967295);
                } while ((v38 = (unsigned long long)((unsigned int)v38 + 1), (unsigned int)v38 < 81));
                sub_100078ccc(ptr4, 81);
                if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1))
                    sub_100034784(g_100153eb8->field_10, 30, &g_10001e400); /* do not return */
                v19 = 1;
            }
            else
            {
                v38 = L"ALLIP";
                do
                {
                    if (false)
                        break;
                } while (*((short *)v25) == 65);
                if (!v37)
                {
                    *((char *)(ptr4 + 162)) = 1;
                }
                else
                {
                    if (!v19)
                    {
                        flag3 = 0;
                        flag4 = 0;
                        flag5 = 0;
                        flag6 = 0;
                        flag7 = 0;
                        flag = 0;
                        choice = 0;
                        flag8 = 0;
                        sub_10007b50c(&flag5, 0x100, 4294967295);
                        flag9 = 0;
                        flag10 = 0;
                        if (v16)
                        {
                            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 5)
                                sub_1000347a8(g_100153eb8->field_10, 25, &g_10001e400); /* do not return */
                            sub_100035e60(&v2, &v16); /* do not return */
                        }
                        if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 5)
                            sub_1000347a8(g_100153eb8->field_10, 26, &g_10001e400); /* do not return */
                        if (!flag5)
                            sub_10011bdb8(flag4); /* do not return */
                        4297066584();
                    }
                }
            }
            v20 = &flag2;
            v21 = ",";
            sub_100035ef8(&v16, sub_100035390(ptr, &v0, ",", &flag2));
            p = v0 - 24;
            InterlockedExchangeAdd(p + 16, 4294967295);
            if ((int)p[16] - 1 <= 0)
            {
                v43 = *((long long *)p);
                (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
            }
            v22 = g_100153eb8;
        }
        addr = v25 - 24;
        InterlockedExchangeAdd(addr + 16, 4294967295);
        if ((int)addr[16] - 1 <= 0)
        {
            v45 = *((long long *)addr);
            (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
        }
        v18 = g_100153eb8;
    }
    else if (g_100153eb8 == &g_100153eb8)
    {
        ptr3 = *(ptr) - 24;
        InterlockedExchangeAdd(ptr3 + 16, 4294967295);
        if (*((int *)(ptr3 + 16)) - 1 > 0)
            return;
        v47 = *((long long *)ptr3);
        (*((long long *)(*((long long *)*((long long *)ptr3)) + 8)))();
    }
    else if ((g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 5)
    {
        sub_100034784(g_100153eb8->field_10, 27, &g_10001e400); /* do not return */
    }
    if (v18 != &g_100153eb8 && (v18->field_1c & 1) && v18->field_19 >= 5)
        sub_100036510(v18->field_10, 28, &g_10001e400, 0); /* do not return */
    ptr3 = *(ptr) - 24;
    InterlockedExchangeAdd(ptr3 + 16, 4294967295);
    if (*((int *)(ptr3 + 16)) - 1 > 0)
        return;
    v47 = *((long long *)ptr3);
    (*((long long *)(*((long long *)*((long long *)ptr3)) + 8)))();
}
