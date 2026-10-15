/* sub_100092892 @ 0x100092892
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100092892  (694 bytes, 65 basic blocks)
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

typedef struct struct_1 {
    char padding_0[8];
    struct struct_2 *field_8;
} struct_1;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
} struct_5;

typedef struct struct_7 {
    char padding_0[8];
    struct struct_8 *field_8;
} struct_7;

typedef struct struct_9 {
    char padding_0[8];
    struct struct_10 *field_8;
} struct_9;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_10 {
    unsigned long long field_0;
} struct_10;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_10001e380;
extern struct_0 *g_100153eb8;

int sub_100092892(void)
{
    int v5;  // eax
    char v6;  // r15b
    void* v15;  // rdi
    void* ptr;  // rdx
    struct_3 **v17;  // rcx
    void* v18;  // rdi
    void* p;  // rdx
    struct_5 **v20;  // rcx
    void* v21;  // rdi
    void* addr;  // rdx
    struct_7 **v23;  // rcx
    unsigned int v7;  // r13d
    void* v25;  // rdi
    void* ptr3;  // rdx
    struct_9 **v27;  // rcx
    void* v8;  // rdi
    void* ptr4;  // rdx
    struct_1 **v10;  // rcx
    unsigned int v12;  // r12d
    unsigned int v13;  // esi
    unsigned int v14;  // r13d
    long long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x48]
    long long v3;  // [bp+0x70]
    unsigned long long v4;  // [bp+0x78]

    if (v5 < 0)
    {
        if (g_100153eb8 != &g_100153eb8 && (v6 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v7)
            sub_100034784(g_100153eb8->field_10, 139, &g_10001e380); /* do not return */
        ptr4 = v8 - 24;
        InterlockedExchangeAdd(ptr4 + 16, 4294967295);
        if ((int)ptr4[16] - 1 <= 0)
        {
            v10 = *((long long *)ptr4);
            (*((long long *)(*((long long *)*((long long *)ptr4)) + 8)))();
        }
        else if (v4)
        {
            4297066584();
        }
        else
        {
            sub_10011bdb8(v3); /* do not return */
        }
    }
    else
    {
        if (g_100153eb8 != &g_100153eb8 && (v6 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v12)
            sub_100036510(g_100153eb8->field_10, 140, &g_10001e380, v2); /* do not return */
        if (v13 && v13 <= 12 && v2 && v2 <= 31)
        {
            if (v13 == v14)
            {
                if (g_100153eb8 != &g_100153eb8 && (v6 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v12)
                    sub_100034784(g_100153eb8->field_10, 142, &g_10001e380); /* do not return */
                if (v2 > 29)
                {
                    if (g_100153eb8 != &g_100153eb8 && (v6 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v7)
                        sub_100036510(g_100153eb8->field_10, 143, &g_10001e380, v2); /* do not return */
                    ptr = v15 - 24;
                    InterlockedExchangeAdd(ptr + 16, 4294967295);
                    if ((int)ptr[16] - 1 <= 0)
                    {
                        v17 = *((long long *)ptr);
                        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
                    }
                    if (v4)
                        4297066584();
                    sub_10011bdb8(v3); /* do not return */
                }
            }
            else if (v13 == 4 || v13 == v12 || v13 == 9 || v13 == 11)
            {
                if (g_100153eb8 != &g_100153eb8 && (v6 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v12)
                    sub_100034784(g_100153eb8->field_10, 144, &g_10001e380); /* do not return */
                if (v2 > 30)
                {
                    if (g_100153eb8 != &g_100153eb8 && (v6 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v7)
                        sub_100036510(g_100153eb8->field_10, 145, &g_10001e380, v2); /* do not return */
                    p = v18 - 24;
                    InterlockedExchangeAdd(p + 16, 4294967295);
                    if ((int)p[16] - 1 <= 0)
                    {
                        v20 = *((long long *)p);
                        (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
                    }
                    else if (v4)
                    {
                        4297066584();
                    }
                    else
                    {
                        sub_10011bdb8(v3); /* do not return */
                    }
                }
            }
            addr = v21 - 24;
            InterlockedExchangeAdd(addr + 16, 4294967295);
            if ((int)addr[16] - 1 <= 0)
            {
                v23 = *((long long *)addr);
                (*((long long *)(*((long long *)*((long long *)addr)) + 8)))();
            }
            else if (v4)
            {
                4297066584();
            }
            else
            {
                sub_10011bdb8(v3); /* do not return */
            }
        }
        if (g_100153eb8 != &g_100153eb8 && (v6 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v7)
        {
            *((unsigned int *)&v1) = v2;
            sub_10003be4c(g_100153eb8->field_10, 141, &g_10001e380, v13, v1); /* do not return */
        }
        ptr3 = v25 - 24;
        InterlockedExchangeAdd(ptr3 + 16, 4294967295);
        if ((int)ptr3[16] - 1 <= 0)
        {
            v27 = *((long long *)ptr3);
            (*((long long *)(*((long long *)*((long long *)ptr3)) + 8)))();
        }
        else if (v4)
        {
            4297066584();
        }
        else
        {
            sub_10011bdb8(v3); /* do not return */
        }
    }
}
