/* sub_100096b13 @ 0x100096b13
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100096b13  (1055 bytes, 91 basic blocks)
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
    unsigned long long field_0;
    char padding_8[4];
    int field_c;
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
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

extern long long g_10001e380;
extern long long g_100152100;
extern struct_1 *g_100153eb8;

int sub_100096b13(void)
{
    struct_0 *ptr;  // rbx
    unsigned int v4;  // esi
    unsigned long index;  // rdx
    unsigned long v14;  // r8
    unsigned long v15;  // rcx
    long long v16;  // r14
    char v17;  // r12b
    unsigned short v18;  // cx
    unsigned long v19;  // r9
    struct_1 *v5;  // r10
    char v6;  // r15b
    char v7;  // r13b
    void* p;  // rdx
    struct_2 **v9;  // rcx
    unsigned long v10;  // r9
    unsigned long v11;  // rcx
    unsigned long v12;  // r9
    long long v1;  // [bp+0x20]
    char v2;  // [bp+0x60]

    ptr->field_c = ptr->field_c + v4;
    v5 = g_100153eb8;
    if (g_100153eb8 != &g_100153eb8 && (v6 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
        sub_100035960(&v2, vvar_182{r56|8b}, v4, &g_100152100); /* do not return */
    if ((v7 & 1))
    {
        p = v2 - 24;
        InterlockedExchangeAdd(p + 16, 4294967295);
        if ((int)p[16] - 1 <= 0)
        {
            v9 = *((long long *)p);
            (*((long long *)(*((long long *)*((long long *)p)) + 8)))();
        }
        v5 = g_100153eb8;
    }
    v10 = ptr->field_c;
    if ((unsigned int)v10 < ptr->padding_8)
    {
        if ((unsigned int)v10 >= 0)
        {
            v11 = ptr->field_0;
            if ((unsigned int)v10 <= *((int *)(v11 - 16)))
            {
                if (*((short *)(v11 + v10 * 2)) != 34)
                {
                    if ((unsigned int)v10 >= 0 && (unsigned int)v10 <= *((int *)(v11 - 16)))
                    {
                        if (*((short *)(v11 + v10 * 2)) == 92)
                        {
                            if (v5 != &g_100153eb8 && (v6 & v5->field_1c) && v5->field_19 >= 5)
                                sub_100036510(v5->field_10, 295, &g_10001e380); /* do not return */
                            if (ptr->field_c < ptr->padding_8)
                            {
                                while (true)
                                {
                                    v12 = ptr->field_c;
                                    if ((unsigned int)v12 < 0 || (unsigned int)v12 > *((int *)(ptr->field_0 - 16)))
                                        sub_100036284(2147942487); /* do not return */
                                    if (*((short *)(ptr->field_0 + v12 * 2)) != 92)
                                        break;
                                    if (v5 != &g_100153eb8 && (v6 & v5->field_1c) && v5->field_19 >= 5)
                                        sub_100036510(v5->field_10, 296, &g_10001e380); /* do not return */
                                    ptr->field_c = ptr->field_c + 1;
                                    index = ptr->field_c;
                                    if ((unsigned int)index != ptr->padding_8)
                                    {
                                        if ((unsigned int)index < 0 || !((v14 = (unsigned long)ptr->field_0, (unsigned int)index <= *((int *)(v14 - 16)))))
                                            sub_100036284(2147942487); /* do not return */
                                        if (*((short *)(v14 + index * 2)) != 92)
                                        {
                                            if ((unsigned int)index < 0 || (unsigned int)index > *((int *)(v14 - 16)))
                                                sub_100036284(2147942487); /* do not return */
                                            if (*((short *)(v14 + index * 2)) != 34)
                                                goto LABEL_100096e0b;
                                        }
                                        if (g_100153eb8 != &g_100153eb8 && (v6 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
                                        {
                                            if ((unsigned int)index >= 0 && (unsigned int)index <= *((int *)(v14 - 16)))
                                                sub_100061408(g_100153eb8->field_10, 298, &g_10001e380, *((short *)(v14 + index * 2))); /* do not return */
                                            sub_100036284(2147942487); /* do not return */
                                        }
                                        v15 = ptr->field_c;
                                        ptr->field_c = (unsigned int)v15 + 1;
                                        if ((unsigned int)v15 < 0 || (unsigned int)v15 > *((int *)(ptr->field_0 - 16)))
                                            sub_100036284(2147942487); /* do not return */
                                        sub_100057b94(v16, *((short *)(ptr->field_0 + v15 * 2)));
                                        v5 = g_100153eb8;
                                        if (ptr->field_c >= ptr->padding_8)
                                            break;
                                    }
                                    else
                                    {
LABEL_100096e0b:
                                        if (g_100153eb8 == &g_100153eb8)
                                            goto LABEL_0x100096fd0;
                                        if (!(v6 & g_100153eb8->field_1c))
                                            goto LABEL_0x100096fd0;
                                        if (g_100153eb8->field_19 < v17)
                                            goto LABEL_0x100096fd0;
                                        if ((unsigned int)index >= ptr->padding_8)
                                        {
                                            v18 = 63;
                                        }
                                        else if ((unsigned int)index >= 0 && (unsigned int)index <= *((int *)(ptr->field_0 - 16)))
                                        {
                                            v18 = *((short *)(ptr->field_0 + index * 2));
                                        }
                                        else
                                        {
                                            sub_100036284(2147942487); /* do not return */
                                        }
                                        *((unsigned short *)&v1) = v18;
                                        sub_10008f38c(g_100153eb8->field_10, 297, &g_10001e380, (unsigned int)index == ptr->padding_8, v1); /* do not return */
                                    }
                                }
                            }
                            v19 = ptr->field_c;
                            if ((unsigned int)v19 < ptr->padding_8)
                            {
                                if ((unsigned int)v19 >= 0 && (unsigned int)v19 <= *((int *)(ptr->field_0 - 16)))
                                {
                                    if (*((short *)(ptr->field_0 + v19 * 2)) != 34)
                                    {
                                        if (v5 == &g_100153eb8)
                                            goto LABEL_0x100096ac0;
                                        if (!(v6 & v5->field_1c))
                                            goto LABEL_0x100096ac0;
                                        if (v5->field_19 < 5)
                                            goto LABEL_0x100096ac0;
                                    }
                                    else
                                    {
                                        if (v5 == &g_100153eb8)
                                            goto LABEL_0x100096a7d;
                                        if (!(v6 & v5->field_1c))
                                            goto LABEL_0x100096a7d;
                                        if (v5->field_19 < 5)
                                            goto LABEL_0x100096a7d;
                                    }
                                }
                                sub_100036284(2147942487); /* do not return */
                            }
                            if (v5 == &g_100153eb8)
                                goto LABEL_0x100096fd0;
                            if (!(v6 & v5->field_1c))
                                goto LABEL_0x100096fd0;
                            if (v5->field_19 < v17)
                                goto LABEL_0x100096fd0;
                        }
                        else
                        {
                            if (v5 == &g_100153eb8)
                                goto LABEL_0x100096fd0;
                            if (!(v6 & v5->field_1c))
                                goto LABEL_0x100096fd0;
                            if (v5->field_19 < v17)
                                goto LABEL_0x100096fd0;
                            sub_10003ba64(v5->field_10, 302, &g_10001e380); /* do not return */
                        }
                    }
                    sub_100036284(2147942487); /* do not return */
                }
                if (v5 == &g_100153eb8)
                    goto LABEL_0x100096a7d;
                if (!(v6 & v5->field_1c))
                    goto LABEL_0x100096a7d;
                if (v5->field_19 < 5)
                    goto LABEL_0x100096a7d;
            }
        }
        sub_100036284(2147942487); /* do not return */
    }
    if (v5 == &g_100153eb8)
        goto LABEL_0x100096fd0;
    if (!(v6 & v5->field_1c))
        goto LABEL_0x100096fd0;
    if (v5->field_19 < v17)
        goto LABEL_0x100096fd0;
}
