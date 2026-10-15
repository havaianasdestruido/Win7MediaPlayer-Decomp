/* sub_10009675c @ 0x10009675c
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10009675c  (1071 bytes, 88 basic blocks)
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
    unsigned long long field_0;
    char padding_8[4];
    int field_c;
} struct_1;

extern long long g_10001e380;
extern struct_0 *g_100153eb8;

int sub_10009675c(void)
{
    int v2;  // edi
    long long *v3;  // rdx
    unsigned long v11;  // r9
    struct_0 *v12;  // r10
    unsigned short *p;  // rbp
    unsigned short v14;  // ax
    unsigned short *addr;  // rsi
    unsigned short *cur;  // rsi
    unsigned int v4[4];  // rcx
    struct_1 *ptr;  // rcx
    unsigned long v6;  // r9
    unsigned long v7;  // rdx
    unsigned long v8;  // r8
    unsigned long v9;  // rcx
    char v10;  // cl
    long long v0;  // [bp-0x38]
    unsigned int flag;  // [bp+0x8]

    flag = 0;
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1))
        sub_100034784(g_100153eb8->field_10, 284, &g_10001e380); /* do not return */
    v2 = 0;
    sub_100035fe0(v3);
    v12 = g_100153eb8;
    if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
    {
        *((unsigned int *)&v0) = v4[2];
        sub_10003be4c(g_100153eb8->field_10, 285, &g_10001e380, v4[3], v0); /* do not return */
    }
    if (v4[3] < v4[2])
    {
        while (true)
        {
            v6 = v4[3];
            if ((unsigned int)v6 < 0 || (unsigned int)v6 > *((int *)(*((long long *)&v4[0]) - 16)))
            {
LABEL_1000969ea:
                sub_100036284(2147942487); /* do not return */
            }
            if (*((short *)(*((long long *)&v4[0]) + v6 * 2)) != 92)
            {
LABEL_1000969f5:
                goto LABEL_1000969fb;
            }
            if (v12 != &g_100153eb8 && (8 & v12->field_1c) && v12->field_19 >= 5)
                sub_100036510(v12->field_10, 286, &g_10001e380); /* do not return */
            v4[3] = v4[3] + 1;
            v7 = v4[3];
            if ((unsigned int)v7 == v4[2])
                break;
            if ((unsigned int)v7 < 0 || !((v8 = (unsigned long)*((long long *)&v4[0]), (unsigned int)v7 <= *((int *)(v8 - 16)))))
                sub_100036284(2147942487); /* do not return */
            if (*((short *)(v8 + v7 * 2)) != 92)
            {
                if ((unsigned int)v7 < 0 || (unsigned int)v7 > *((int *)(v8 - 16)))
                    sub_100036284(2147942487); /* do not return */
                if (*((short *)(v8 + v7 * 2)) != 34)
                    break;
            }
            if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
            {
                if ((unsigned int)v7 < 0)
                {
                    sub_100036284(2147942487); /* do not return */
                }
                else if ((unsigned int)v7 <= *((int *)(v8 - 16)))
                {
                    sub_100061408(g_100153eb8->field_10, 288, &g_10001e380, *((short *)(v8 + v7 * 2))); /* do not return */
                }
                goto LABEL_1000969ea;
            }
            v9 = v4[3];
            v4[3] = (unsigned int)v9 + 1;
            if ((unsigned int)v9 < 0 || (unsigned int)v9 > *((int *)(*((long long *)&v4[0]) - 16)))
                sub_100036284(2147942487); /* do not return */
            sub_100057b94(v3, *((short *)(*((long long *)&v4[0]) + v9 * 2)));
            v12 = g_100153eb8;
            if (v4[3] >= v4[2])
                goto LABEL_1000969f5;
        }
        v12 = g_100153eb8;
        if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 2)
        {
            if ((unsigned int)v7 >= v4[2])
            {
                v10 = 63;
            }
            else if ((unsigned int)v7 >= 0 && (unsigned int)v7 <= *((int *)(*((long long *)&v4[0]) - 16)))
            {
                v10 = *((short *)(*((long long *)&v4[0]) + v7 * 2));
            }
            else
            {
                sub_100036284(2147942487); /* do not return */
            }
            *((char *)&v0) = v10;
            sub_10008f334(g_100153eb8->field_10, 287, &g_10001e380, (unsigned int)v7 == ptr->padding_8, v0); /* do not return */
        }
    }
    else
    {
LABEL_1000969fb:
        v11 = v4[3];
        if ((unsigned int)v11 < v4[2])
        {
            if ((unsigned int)v11 < 0 || (unsigned int)v11 > *((int *)(*((long long *)&v4[0]) - 16)))
                sub_100036284(2147942487); /* do not return */
            if (*((short *)(*((long long *)&v4[0]) + v11 * 2)) == 34)
            {
                if (v12 != &g_100153eb8 && (8 & v12->field_1c) && v12->field_19 >= 5)
                    sub_100036510(v12->field_10); /* do not return */
                v4[3] = v4[3] + 1;
                v12 = g_100153eb8;
                goto LABEL_100096fd5;
            }
            else
            {
                if (v12 != &g_100153eb8 && (8 & v12->field_1c) && v12->field_19 >= 5)
                    sub_100036510(v12->field_10); /* do not return */
                p = *((long long *)&v4[0]) + v4[3] * 2;
                v14 = *(p);
                if (*(p))
                {
                    addr = p;
                    do
                    {
                        cur = addr;
                    } while (v14 != 92 && v14 != 34 && (cur += 2, v14 = *(cur), addr = cur, v14));
                    if (p != cur)
                        sub_10003579c(v3, p, cur - p >> 1 & 4294967295); /* do not return */
                }
                if (v12 != &g_100153eb8 && (8 & v12->field_1c) && v12->field_19 >= 2)
                    sub_10003ba64(v12->field_10, 303, &g_10001e380, v4[3], *((long long *)&v4[0])); /* do not return */
            }
        }
        else if (v12 != &g_100153eb8 && (8 & v12->field_1c) && v12->field_19 >= 2)
        {
            sub_100036510(v12->field_10); /* do not return */
        }
    }
    v2 = -2147220628;
LABEL_100096fd5:
    if (v12 == &g_100153eb8)
    {
        return;
    }
    else if (!(v12->field_1c & 1))
    {
        return;
    }
    else if (v12->field_19 >= (0 <= v2 ? 5 : 2))
    {
        sub_10003ba64(v12->field_10, 304, &g_10001e380, v2, *(v3)); /* do not return */
    }
    else
    {
        return;
    }
}
