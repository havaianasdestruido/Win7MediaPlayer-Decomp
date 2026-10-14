/* sub_1000a702c @ 0x1000a702c
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x1000a702c  (849 bytes, 67 basic blocks)
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
    char padding_0[16];
    unsigned long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_1;

extern char g_100000000;
extern char g_10001e330;
extern char g_10001e334;
extern char g_10001e338;
extern struct_0 *g_100153eb8;
extern long long g_1001546a0;
extern long long g_100154720;
extern long long g_100154770;
extern unsigned int g_100155cc0;
extern unsigned int g_1001560c0;
extern unsigned int g_100156140;
extern char g_100159d78;

int sub_1000a702c(void)
{
    long long v5;  // rbx
    unsigned int *cur;  // rdi
    struct_0 *v15;  // r10
    long long v16;  // rsi
    unsigned int ptr3[3];  // rdi
    unsigned long long v18;  // rbp
    unsigned long long k;  // rbp
    struct_0 *v20;  // r13
    unsigned long index;  // rcx
    unsigned int v22;  // eax
    unsigned long long v23;  // rbp
    long long v24;  // r14
    int v7;  // eax
    long long l;  // rdi
    unsigned int v26;  // eax
    long long v27;  // r14
    long long v28;  // r14
    long long m;  // rdi
    unsigned int v30;  // eax
    long long v31;  // r14
    long long v32;  // r14
    unsigned long long v33;  // rcx
    unsigned int *iter;  // rdi
    unsigned long long v8;  // r12
    unsigned long long ptr4;  // rdi
    unsigned int v36;  // eax
    unsigned int v37;  // r8d
    long long v38;  // r14
    long long v39;  // r14
    long long v40;  // r14
    unsigned long long v9;  // rcx
    unsigned long v10;  // d
    unsigned int *node;  // rdi
    unsigned long long v12;  // rcx
    long long v13;  // r8
    long long v1;  // [bp+0x20]
    long long v2;  // [bp+0x28]
    unsigned long v3;  // [bp+0x30], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp+0x38]

    v5 = 0;
    cur = &g_100156140;
    g_100159d78 = (0 <= v7 ? (char)v8 : g_100159d78);
    for (v9 = 63; v9; cur = &cur[v10])
    {
        v9 -= 1;
        *(cur) = 4294967295;
    }
    node = &g_1001560c0;
    for (v12 = 30; v12; node = &node[v10])
    {
        v12 -= 1;
        *(node) = 4294967295;
    }
    sub_10004e210(&g_100154720, 10);
    v13 = _INSERT((char)v8 CONCAT 0, 0, v8);
    sub_10004e210(&g_100154770, 10, v13);
    sub_10004e210(&g_1001546a0, 10, _INSERT(v13, 0, v8));
    v15 = g_100153eb8;
    v16 = 0;
    ptr3 = sub_10001de40;
    v18 = 55;
    do
    {
        k = v18;
        if (g_100153eb8 != v20 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 5)
            sub_100034834(g_100153eb8->field_10, 206, v24, v16); /* do not return */
        *((unsigned int *)&v3) = ptr3[0];
        *((unsigned int *)((char *)&v3 + 4)) = ptr3[1];
        v4 = ptr3[2];
        index = v4;
        v22 = v3 >> 32;
        if (v22 != 4294967295 && !(unsigned int)index)
            (&g_100156140)[v22] = v3;
        if ((unsigned int)index != 4294967295 && (unsigned int)index != (unsigned int)v8 && (unsigned int)index != 20 && (unsigned int)index != 21)
            (&g_1001560c0)[index] = v3;
        v16 += v8;
        ptr3 += 1;
        v23 = k - v8;
        v18 = v23;
    } while (k != v8);
    l = 0;
    do
    {
        if (v15 != v20 && (v15->field_1c & 2) && v15->field_19 >= 5)
        {
            *((int *)&v2) = *((int *)&(&g_100000000)[123108 + 8 * l]);
            *((int *)&v1) = *((int *)&(&g_100000000)[123104 + 8 * l]);
            sub_10009c100(v15->field_10, 207, v27, l, v1, v2); /* do not return */
        }
        v26 = sub_10007c4f8(*((int *)&(&g_100000000)[123104 + 8 * l]), *((int *)&(&g_100000000)[123108 + 8 * l]));
        if (v26 - 1 <= 79)
        {
            *((unsigned int *)&(&g_100000000)[1400688 + 4 * v26]) = v8;
            v15 = g_100153eb8;
            if (g_100153eb8 != v20 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 5)
                sub_100036510(g_100153eb8->field_10, 208, v28, v26); /* do not return */
        }
        else
        {
            v15 = g_100153eb8;
        }
        l += v8;
    } while (l < 39);
    m = 0;
    do
    {
        if (v15 != v20 && (v15->field_1c & 2) && v15->field_19 >= 5)
            sub_100034834(v15->field_10, 209, v31, m); /* do not return */
        v30 = sub_10007c4f8(*((int *)&(&g_100000000)[123424 + 8 * m]), *((int *)&(&g_100000000)[123428 + 8 * m]));
        if (v30 - 1 <= 79)
        {
            *((unsigned int *)&(&g_100000000)[1400336 + 4 * v30]) = v8;
            v15 = g_100153eb8;
            if (g_100153eb8 != v20 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 5)
                sub_100036510(g_100153eb8->field_10, 210, v32, v30); /* do not return */
        }
        else
        {
            v15 = g_100153eb8;
        }
        m += v8;
    } while (m < 34);
    v33 = 81;
    for (iter = &g_100155cc0; v33; iter = &iter[v10])
    {
        v33 -= 1;
        *(iter) = 4294967295;
    }
    ptr4 = 0;
    do
    {
        if (v15 != v20 && (v15->field_1c & 2) && v15->field_19 >= 5)
            sub_100034834(v15->field_10, 211, v38, v5); /* do not return */
        v36 = sub_10007c4f8(*((int *)&(&g_10001e330)[ptr4]), *((int *)&(&g_10001e334)[ptr4]));
        if (v36 - 1 <= 79)
        {
            v37 = *((int *)&(&g_10001e338)[ptr4]);
            (&g_100155cc0)[v36] = v37;
            v15 = g_100153eb8;
            if (g_100153eb8 != v20 && (g_100153eb8->field_1c & 2) && g_100153eb8->field_19 >= 5)
            {
                *((unsigned int *)&v1) = v37;
                sub_10003be4c(g_100153eb8->field_10, 212, v39, v36, v1); /* do not return */
            }
        }
        else
        {
            v15 = g_100153eb8;
        }
        ptr4 += 12;
        v5 += v8;
    } while (ptr4 < 48);
    if (v15 == v20)
    {
        return;
    }
    else if (!((char)v8 & v15->field_1c))
    {
        return;
    }
    else if (v15->field_19 >= 5)
    {
        sub_100036510(v15->field_10, 213, v40, 0); /* do not return */
    }
    else
    {
        return;
    }
}
