/* sub_10007369c @ 0x10007369c
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x10007369c  (876 bytes, 70 basic blocks)
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

typedef struct struct_3 {
    char padding_0[24];
    struct struct_2 *field_18;
} struct_3;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_2 *field_8;
    struct struct_1 *field_10;
    unsigned int field_18;
    char padding_1c[12];
    unsigned int field_28;
} struct_2;

typedef struct struct_1 {
    unsigned short field_0;
    char padding_2[6];
    char field_8;
    char field_9;
} struct_1;

typedef struct struct_5 {
    char padding_0[8];
    struct struct_5 *field_8;
    struct struct_4 *field_10;
    unsigned int field_18;
    char padding_1c[12];
    unsigned int field_28;
} struct_5;

typedef struct struct_9 {
    struct struct_8 *field_0;
    struct struct_8 *field_8;
    unsigned long long field_10;
    char padding_18[8];
    struct struct_8 *field_20;
    unsigned int field_28;
} struct_9;

typedef struct struct_8 {
    struct struct_8 *field_0;
    struct struct_8 *field_8;
    char field_10;
} struct_8;

typedef struct struct_10 {
    struct struct_10 *field_0;
    struct struct_10 *field_8;
    char field_10;
} struct_10;

typedef struct struct_7 {
    struct struct_6 *field_0;
    char padding_8[8];
    unsigned long long field_10;
} struct_7;

typedef struct struct_6 {
    char padding_0[16];
    unsigned short field_10;
} struct_6;

typedef struct struct_4 {
    unsigned short field_0;
    char padding_2[6];
    char field_8;
    char field_9;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_10001e430;
extern struct_0 *g_100153eb8;

int sub_10007369c(void)
{
    long long v3;  // rcx
    void* p;  // r14
    unsigned int v12;  // eax
    struct_2 *cur;  // rbx, Other Possible Types: struct_5 *
    struct_9 *ptr;  // r8
    struct_8 *v15;  // rsi
    unsigned long v16;  // rcx
    void* v5;  // rdx
    struct_10 *addr;  // rcx
    struct_8 *ptr5;  // rax
    struct_3 *ptr6;  // rcx
    unsigned short v7;  // r13w
    unsigned long long v8;  // r12
    struct_1 *ptr7;  // rcx
    char v10;  // dl
    unsigned int v11;  // eax
    long long v0;  // [bp-0x28]
    long long v1;  // [bp-0x20]

    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1) && g_100153eb8->field_19 >= 5)
        sub_1000546ec(g_100153eb8->field_10, 176, &g_10001e430, v3); /* do not return */
    p = NULL;
    if (v5 && *((short *)v5) == 23)
        p = v5 + 8;
    cur = ptr6->field_18;
    v7 = 65535;
    if (ptr6->field_18)
    {
        while (true)
        {
            v8 = 0;
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 4) && g_100153eb8->field_19 >= 5)
            {
                *((unsigned int *)&v0) = cur->field_10->field_0;
                sub_100058720(g_100153eb8->field_10, 177, &g_10001e430, cur, v0); /* do not return */
            }
            if (cur->field_18 <= 128)
            {
                if (v5 && cur->field_10->field_0 == 23)
                {
                    while (true)
                    {
                        ptr7 = cur->field_10;
                        if (cur->field_28 == 4)
                        {
                            if (!((*((char *)p) != 254 || (v10 = (char)p[1] & 192, (((char)p[1] & 192) != 128 || ptr7->field_8 != 254 || (ptr7->field_9 & 192) != ((char)p[1] & 192)) && (((char)p[1] & 192) != 192 || ptr7->field_8 != 254 || (ptr7->field_9 & 192) != 192))) && !((v11 = (unsigned int)(char)*((char *)p), ((char)(unsigned int)(char)*((char *)p) & 240) && ((char)(unsigned int)(char)*((char *)p) & 240) != 240 && !((v12 = (unsigned int)ptr7->field_8, !((char)(unsigned int)ptr7->field_8 & 240) || ((char)(unsigned int)ptr7->field_8 & 240) == 240))))))
                            {
                                v8 = &cur->field_10;
                                if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 4))
                                {
                                    if (g_100153eb8->field_19 >= 5)
                                        sub_100036510(g_100153eb8->field_10, 178, &g_10001e430, cur->field_28); /* do not return */
                                    break;
                                }
                            }
                            else if (!v8)
                            {
                                v8 = &cur->field_10;
                                if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 4) && g_100153eb8->field_19 >= 5)
                                    sub_100036510(g_100153eb8->field_10, 179, &g_10001e430, 4); /* do not return */
                            }
                        }
                        cur = cur->field_8;
                        if (!cur)
                            break;
                    }
                }
                else
                {
                    v8 = &cur->field_10;
                    if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 4) && g_100153eb8->field_19 >= 5)
                        sub_10003be94(g_100153eb8->field_10, 180, &g_10001e430); /* do not return */
                }
                if (v8)
                {
                    v15 = ptr->field_0;
                    if (!ptr->field_20)
                    {
                        v16 = ptr->field_28;
                        if (v16)
                        {
                            if (18446744073709551615 / v16 >= 144)
                                v16 *= 144;
                            else
                                sub_100036284(2147942414); /* do not return */
                        }
                        if (18446744073709551615 - v16 < 8)
                            sub_100036284(2147942414); /* do not return */
                        4297066568();
                    }
                    else
                    {
                        addr = ptr->field_20;
                        ptr->field_20 = addr->field_0;
                        addr->field_8 = NULL;
                        addr->field_0 = v15;
                        ptr5 = ptr->field_0;
                        ptr->field_10 = ptr->field_10 + 1;
                        if (ptr5)
                            ptr5->field_8 = addr;
                        else
                            ptr->field_8 = addr;
                        ptr->field_0 = addr;
                        sub_10011c262((struct struct_10 *)&addr->field_10, 0, 128); /* do not return */
                    }
                }
            }
            if (!cur || !((cur = (struct_2 *)cur->field_8, cur->field_8)))
                break;
        }
    }
    if (g_100153eb8 == &g_100153eb8)
    {
        return;
    }
    else if (!(g_100153eb8->field_1c & 1))
    {
        return;
    }
    else if (g_100153eb8->field_19 >= 5)
    {
        if (ptr->field_10)
        {
            if (!ptr->field_0)
                sub_100036284(2147500037); /* do not return */
            v7 = *((short *)&ptr->field_0->field_10);
        }
        *((unsigned short *)&v1) = v7;
        *((unsigned int *)&v0) = ptr->field_10;
        sub_10006c344(g_100153eb8->field_10, 181, &g_10001e430, 0, v0, v1); /* do not return */
    }
    else
    {
        return;
    }
}
