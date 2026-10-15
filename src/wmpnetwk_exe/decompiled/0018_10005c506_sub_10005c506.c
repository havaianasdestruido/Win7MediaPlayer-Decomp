/* sub_10005c506 @ 0x10005c506
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10005c506  (1295 bytes, 103 basic blocks)
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
    char padding_0[432];
    long long field_1b0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_1;

typedef struct struct_2 {
    struct struct_1 *field_0;
    char padding_8[8];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    struct struct_4 *field_8;
} struct_3;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_6 *field_8;
} struct_5;

typedef struct struct_4 {
    unsigned long long field_0;
} struct_4;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

extern long long g_100002290;
extern long long g_1000022b0;
extern long long g_10001e570;
extern struct_2 g_100153eb8;
extern long long g_100158688;
extern long long g_100159e08;
extern unsigned long long g_100159e20;
extern char g_100159e28;
extern char g_100159e34;
extern char g_100159e38;

int sub_10005c506(void)
{
    unsigned int *v21;  // rbx
    unsigned int v22;  // cc_dep2
    unsigned short *v30;  // rcx
    unsigned int v31;  // eax
    void* cur;  // rdi
    unsigned long v37;  // r14
    unsigned int v38;  // r12d
    unsigned int v23;  // r13d
    void* ptr;  // rdx
    unsigned int v40;  // r15d
    void* p;  // rdx
    struct_3 **v42;  // rcx
    struct_5 **v43;  // rcx
    long long *v44;  // rax
    unsigned short *v24;  // r9
    unsigned int v25;  // cc_dep1
    unsigned short *v26;  // rsi
    struct_1 *v27;  // r10, Other Possible Types: struct_2 *
    unsigned long long v28;  // rsi
    unsigned int v29;  // r13d
    long long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x28]
    unsigned int v3;  // [bp+0x98]
    unsigned int v4;  // [bp+0xa0]
    unsigned int flag;  // [bp+0xa4]
    void* v6;  // [bp+0xb8]
    unsigned int *v9;  // [bp+0xd8]
    struct_0 *v10;  // [bp+0xe0]
    unsigned short *v11;  // [bp+0xe8]
    unsigned int *v12;  // [bp+0xf0]
    long long v13;  // [bp+0xf8]
    char v14;  // [bp+0x100]
    unsigned short *v15;  // [bp+0x118]
    char v16;  // [bp+0x140]
    char v17;  // [bp+0x150]
    void* v18;  // [bp+0x178]
    void* v19;  // [bp+0x180]
    char v20;  // [bp+0x1130]

    v22 = (unsigned int)v21;
    if (v23 >= (unsigned int)v21)
    {
        v4 = 1;
        if (*((int *)&g_100159e34) != (unsigned int)v21 && (g_100159e38 >= 4 || g_100159e38 == *((char *)&v21)) && (0x8000000000000000 & g_100159e20) && (*((long long *)&g_100159e28) & 0x8000000000000000) == *((long long *)&g_100159e28))
            sub_10003b344(g_100159e08, &g_100002290); /* do not return */
        sub_100060e88(v10, v13, &v14, &v17, &v20); /* do not return */
    }
    v24 = v15;
    v25 = v23;
    v26 = v24;
    do
    {
        if (false)
            break;
    } while (*(v26) == 66);
    if (v25 == v22)
    {
        flag = (unsigned int)v21;
        v27 = g_100153eb8.field_0;
        if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (2 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= 5)
            sub_100034784(g_100153eb8.field_0->field_10, 88, &g_10001e570); /* do not return */
        goto LABEL_10005c6ef;
    }
    else
    {
        do
        {
            if (false)
                break;
        } while (*(v24) == 66);
        if (v25 == v22)
        {
            flag = 1;
            v27 = g_100153eb8.field_0;
            if (g_100153eb8.field_0 != &g_100153eb8.field_0 && (2 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= 5)
                sub_100034784(g_100153eb8.field_0->field_10, 89, &g_10001e570); /* do not return */
LABEL_10005c6ef:
            v28 = 2;
        }
        else
        {
            if ((unsigned int)v21 <= v23)
                v29 = 2147746312;
            v3 = v29;
            v27 = g_100153eb8.field_0;
            if (g_100153eb8.field_0 != &g_100153eb8.field_0)
            {
                v28 = 2;
                if ((2 & g_100153eb8.field_0->field_1c) && g_100153eb8.field_0->field_19 >= 2)
                    sub_1000347a8(g_100153eb8.field_0->field_10, 90, &g_10001e570); /* do not return */
            }
            else
            {
                v28 = 2;
            }
        }
        v30 = (unsigned short *)v14;
        v11 = v30;
        if (v23 >= (unsigned int)v21)
        {
            v31 = 0;
            do
            {
                if (false)
                    break;
            } while (*(v30) == 48);
            if (v31 == (unsigned int)v21 != *((char *)&v21) && flag == 1)
            {
                v11 = L"RME_LIVE_LIBRARY_OWNER_PSEUDO_MAC_ADDR";
                v11 = L"RME_LIVE_LIBRARY_OWNER_PSEUDO_MAC_ADDR";
                if (v27 != &g_100153eb8.field_0 && (2 & v27->field_1c) && v27->field_19 >= 4)
                    sub_100034784(v27->field_10, 91, &g_10001e570); /* do not return */
            }
            sub_1000398ac(g_100158688);
            if (*((int *)&g_100159e34) != (unsigned int)v21 && (g_100159e38 >= 4 || g_100159e38 == *((char *)&v21)) && (0x8000000000000000 & g_100159e20) && (*((long long *)&g_100159e28) & 0x8000000000000000) == *((long long *)&g_100159e28))
            {
                *((unsigned int *)&v1) = (unsigned int)v21;
                sub_100057de4(g_100159e08, &g_1000022b0, 0, 0, v1); /* do not return */
            }
            sub_100035db8(&v16, v11); /* do not return */
        }
        if (v4 != (unsigned int)v21)
            4297065424();
        if (v29 < (unsigned int)v21)
        {
            sub_100077bc8(v29);
            v27 = g_100153eb8.field_0;
        }
        if (v12 != v21 && *((long long *)&v12) != v21)
        {
            if (v27 != &g_100153eb8.field_0 && (2 & v27->field_1c) && v27->field_19 >= 4)
            {
                v2 = (v9 == v21 ? (unsigned int)v21 : *(v9));
                sub_100036318(v27->field_10, 95, &g_10001e570); /* do not return */
            }
            v4 = (unsigned int)v21;
            cur = v6;
            v37 = (int)cur[16];
            while (true)
            {
                if (v27 != &g_100153eb8.field_0 && (2 & v27->field_1c) && v27->field_19 >= 4)
                    sub_100035db8(&v18, cur); /* do not return */
                if (((char)v38 & 2))
                {
                    v38 &= 4294967293;
                    ptr = v19 - 24;
                    InterlockedExchangeAdd(ptr + 16, v40);
                    if ((int)ptr[16] + v40 <= (unsigned int)v21)
                    {
                        v42 = *((long long *)ptr);
                        (*((long long *)(*((long long *)*((long long *)ptr)) + 8)))();
                    }
                    v27 = g_100153eb8.field_0;
                }
                if (((char)v38 & 1))
                {
                    v38 &= 4294967294;
                    p = v18 - 24;
                    InterlockedExchangeAdd(p + 16, v40);
                    if ((int)p[16] + v40 <= (unsigned int)v21)
                    {
                        v43 = *((long long *)p);
                        (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
                    }
                    v27 = g_100153eb8.field_0;
                }
                if (v37 <= 4000)
                    break;
                v37 -= 4000;
                cur += 8000;
                v4 += 1;
            }
        }
        else if (v27 != &g_100153eb8.field_0 && (2 & v27->field_1c) && v27->field_19 >= 4)
        {
            v2 = (v9 == v21 ? (unsigned int)v21 : *(v9));
            sub_100036318(v27->field_10, 97, &g_10001e570); /* do not return */
        }
        v44 = sub_100052b50(v10->field_1b0);
        sub_1000e2438(*(v44)); /* do not return */
    }
}
