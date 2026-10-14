/* sub_100092100 @ 0x100092100
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100092100  (1796 bytes, 137 basic blocks)
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
    char padding_0[16];
    unsigned int field_10;
} struct_3;

typedef struct struct_4 {
    char padding_0[24];
    struct struct_5 *field_18;
} struct_4;

typedef struct struct_6 {
    char padding_0[8];
    struct struct_7 *field_8;
} struct_6;

typedef struct struct_5 {
    unsigned long long field_0;
} struct_5;

typedef struct struct_7 {
    unsigned long long field_0;
} struct_7;

extern long long g_10001e380;
extern struct_4 *g_100152100;
extern struct_2 *g_100153eb8;
extern long long g_100154468;

int sub_100092100(void)
{
    void* *ptr;  // r8
    unsigned int v27;  // edx
    unsigned int v36;  // ebx
    char *v37;  // r8
    void* v38;  // rdx
    unsigned int v39;  // eax
    struct_2 **v40;  // rsi
    struct_4 **v41;  // rcx
    unsigned long p;  // rdx
    struct_6 **v43;  // rcx
    unsigned int v28;  // ecx
    unsigned int v29;  // ebx
    long long v30;  // r9
    struct_2 *v32;  // rcx
    unsigned int v34;  // r12d
    struct_3 *v35;  // rbp
    long long v0;  // [bp-0x158]
    unsigned int choice;  // [bp-0x128]
    unsigned long long flag16;  // [bp-0x120]
    unsigned long long flag17;  // [bp-0x118]
    unsigned long long flag4;  // [bp-0x110]
    long long flag5;  // [bp-0x108]
    unsigned long flag6;  // [bp-0x100]
    unsigned long long flag7;  // [bp-0xf8]
    unsigned long long flag8;  // [bp-0xf0]
    unsigned int flag;  // [bp-0xe8]
    unsigned long long flag9;  // [bp-0xe0]
    char v11;  // [bp-0xd8]
    unsigned int flag3;  // [bp-0x98]
    unsigned long long flag18;  // [bp-0x90]
    unsigned long long flag19;  // [bp-0x88]
    unsigned long long flag10;  // [bp-0x80]
    unsigned long long flag11;  // [bp-0x78]
    unsigned long flag12;  // [bp-0x70]
    unsigned long long flag13;  // [bp-0x68]
    unsigned long long flag14;  // [bp-0x60]
    unsigned int flag2;  // [bp-0x58]
    unsigned long long flag15;  // [bp-0x50]
    unsigned long long v22;  // [bp-0x48]
    char v23;  // [bp-0x40]
    void* *v25;  // [bp+0x18]

    v25 = ptr;
    v22 = 18446744073709551614;
    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1) && g_100153eb8->field_19 >= 5)
    {
        *((unsigned int *)&v0) = v27;
        sub_10008f17c(g_100153eb8->field_10, 116, &g_10001e380, v28, v0, *(ptr)); /* do not return */
    }
    v29 = 0;
    sub_100035fe0(v30);
    if (v28)
    {
        v32 = g_100153eb8;
        if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
            sub_100034784(g_100153eb8->field_10, 117, &g_10001e380); /* do not return */
        if (v27 == 9)
        {
            if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
                sub_100034784(g_100153eb8->field_10, v27 + 109, &g_10001e380); /* do not return */
            if (v28 == 17 || v28 == 39 || v28 == 40)
                goto LABEL_100092245;
            if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 2)
                sub_100034784(g_100153eb8->field_10, 119, &g_10001e380); /* do not return */
            v29 = 2147746668;
            v34 = 5;
        }
        else
        {
LABEL_100092245:
            v35 = sub_10007c710(v28);
            v36 = ~(-(NULL < v35));
            v29 = v36 & 2147500037;
            if ((v36 & 2147500037) < 0)
                goto LABEL_100093134;
            if (v35->field_10 == 1)
            {
                if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
                    sub_100034784(g_100153eb8->field_10, 121, &g_10001e380); /* do not return */
                4297065544();
            }
            if (v35->field_10 == 3 || v35->field_10 == 4)
            {
                if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
                    sub_100034784(g_100153eb8->field_10, 125, &g_10001e380); /* do not return */
                if (v35->field_10 == 3)
                {
                    if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
                        sub_100034784(g_100153eb8->field_10, 126, &g_10001e380); /* do not return */
                    sub_100066aa4(ptr, &v11); /* do not return */
                }
                else
                {
                    if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
                        sub_100034784(g_100153eb8->field_10, 128, &g_10001e380); /* do not return */
                    sub_100066d14(ptr, &v23); /* do not return */
                }
            }
            if (v28 == 32)
            {
                v32 = g_100153eb8;
                if (g_100153eb8 != &g_100153eb8)
                {
                    if ((8 & g_100153eb8->field_1c))
                    {
                        v34 = v28 - 27;
                        if (g_100153eb8->field_19 >= (char)v34)
                            sub_100034784(g_100153eb8->field_10, v28 + 98, &g_10001e380); /* do not return */
                    }
                    else
                    {
                        v34 = 5;
                    }
                }
                else
                {
                    v34 = 5;
                }
                if (v27 != 7 && v27 != 8)
                {
                    if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v34)
                        sub_100034784(g_100153eb8->field_10, 132, &g_10001e380); /* do not return */
                    flag4 = 0;
                    flag5 = 0;
                    flag6 = 0;
                    flag7 = 0;
                    flag8 = 0;
                    flag = 0;
                    choice = 0;
                    flag9 = 0;
                    v37 = 0xffffffff;
                    sub_10007b50c(&flag6, 0x100, 4294967295);
                    flag16 = 0;
                    flag17 = 0;
                    v38 = *(ptr);
                    if (*(ptr))
                    {
                        v37 = &choice;
                        v39 = sub_100079340(&g_100154468);
                    }
                    else
                    {
                        v39 = 0;
                    }
                    if (!v39)
                    {
                        if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 2)
                            sub_100034784(g_100153eb8->field_10, 133, &g_10001e380); /* do not return */
                        if (!flag6)
                            sub_10011bdb8(flag5); /* do not return */
                        4297066584();
                    }
                    else
                    {
                        v40 = &g_100153eb8;
                        if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v34)
                            sub_100036510(g_100153eb8->field_10, 134, &g_10001e380, choice); /* do not return */
                        v41 = &g_100152100;
                        g_100152100->field_18();
                    }
                }
                if (g_100153eb8 != &g_100153eb8)
                {
                    if ((8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v34)
                        sub_100034784(g_100153eb8->field_10, 131, &g_10001e380); /* do not return */
                }
                else
                {
                    p = *(ptr) - 24;
                    InterlockedExchangeAdd(p + 16, 4294967295);
                    if (*((int *)(p + 16)) - 1 > 0)
                        return;
                    v43 = *((long long *)p);
                    (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
                }
            }
            else if (v28 == 9)
            {
                v32 = g_100153eb8;
                if (g_100153eb8 == &g_100153eb8)
                {
                    v34 = 5;
                }
                else if ((8 & g_100153eb8->field_1c))
                {
                    v34 = v28 - 4;
                    if (g_100153eb8->field_19 >= (char)v34)
                        sub_100034784(g_100153eb8->field_10, 146, &g_10001e380); /* do not return */
                }
                else
                {
                    v34 = 5;
                }
                if (v27 != 7 && v27 != 8)
                {
                    if (v27 != 1 && v27 != 2)
                    {
                        if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 2)
                            sub_100036510(g_100153eb8->field_10, 148, &g_10001e380, v27); /* do not return */
                        v29 = 2147746668;
                    }
                    else
                    {
                        if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v34)
                            sub_100034784(g_100153eb8->field_10, 149, &g_10001e380); /* do not return */
                        flag10 = 0;
                        flag11 = 0;
                        flag12 = 0;
                        flag13 = 0;
                        flag14 = 0;
                        flag2 = 0;
                        flag3 = 0;
                        flag15 = 0;
                        sub_10007b50c(&flag12, 0x100, 4294967295);
                        flag18 = 0;
                        flag19 = 0;
                        sub_1000984a0(ptr); /* do not return */
                    }
                }
                else
                {
                    if (g_100153eb8 == &g_100153eb8)
                    {
                        p = *(ptr) - 24;
                        InterlockedExchangeAdd(p + 16, 4294967295);
                        if (*((int *)(p + 16)) - 1 > 0)
                            return;
                        v43 = *((long long *)p);
                        (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
                    }
                    else if ((8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v34)
                    {
                        sub_100034784(g_100153eb8->field_10, 147, &g_10001e380); /* do not return */
                    }
                }
            }
            else
            {
                if (v28 != 7)
                    goto LABEL_100093134;
                v32 = g_100153eb8;
                if (g_100153eb8 == &g_100153eb8)
                {
                    v34 = 5;
                }
                else if ((8 & g_100153eb8->field_1c))
                {
                    v34 = v28 - 2;
                    if (g_100153eb8->field_19 >= (char)v34)
                        sub_100034784(g_100153eb8->field_10, 151, &g_10001e380); /* do not return */
                }
                else
                {
                    v34 = 5;
                }
                if (v27 != 7 && v27 != 8)
                {
                    if (g_100153eb8 != &g_100153eb8 && (8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v34)
                        sub_100034784(g_100153eb8->field_10, 153, &g_10001e380); /* do not return */
                    sub_1000984a0(ptr); /* do not return */
                }
                if (g_100153eb8 == &g_100153eb8)
                {
                    p = *(ptr) - 24;
                    InterlockedExchangeAdd(p + 16, 4294967295);
                    if (*((int *)(p + 16)) - 1 > 0)
                        return;
                    v43 = *((long long *)p);
                    (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
                }
                else if ((8 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= (char)v34)
                {
                    sub_100034784(g_100153eb8->field_10, 152, &g_10001e380); /* do not return */
                }
            }
        }
    }
    else
    {
LABEL_100093134:
        v32 = g_100153eb8;
        v34 = 5;
    }
    if (v32 != &g_100153eb8 && (v32->field_1c & 1))
    {
        if (v29 < 0)
            v34 = 2;
        if (v32->field_19 >= v34)
            sub_100036510(v32->field_10, 154, &g_10001e380, v29); /* do not return */
    }
    p = *(ptr) - 24;
    InterlockedExchangeAdd(p + 16, 4294967295);
    if (*((int *)(p + 16)) - 1 > 0)
        return;
    v43 = *((long long *)p);
    (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
}
