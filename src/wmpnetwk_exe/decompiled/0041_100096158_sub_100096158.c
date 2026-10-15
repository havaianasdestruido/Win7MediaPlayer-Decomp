/* sub_100096158 @ 0x100096158
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100096158  (786 bytes, 69 basic blocks)
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
    unsigned int field_10;
    char padding_14[4];
    long long field_18;
    char field_20;
} struct_1;

extern long long g_10001e380;
extern struct_0 *g_100153eb8;

int sub_100096158(void)
{
    struct_0 *v2;  // rcx
    struct_1 *ptr;  // rcx
    int v4;  // edi
    unsigned long v5;  // rax
    char v6;  // dil
    unsigned long index;  // rax
    struct_1 *v8;  // rsi
    unsigned short v9;  // cx
    unsigned short *v10;  // rdx
    long long v0;  // [bp-0x28]

    v2 = g_100153eb8;
    if (g_100153eb8 != &g_100153eb8)
    {
        if ((g_100153eb8->field_1c & 1))
        {
            sub_100034784(g_100153eb8->field_10, 271, &g_10001e380); /* do not return */
        }
        else if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 1))
        {
            sub_100034784(g_100153eb8->field_10, 268, &g_10001e380); /* do not return */
        }
    }
    v4 = ptr->field_c;
    if (v4 < ptr->padding_8)
    {
        do
        {
            v5 = ptr->field_c;
            if ((unsigned int)v5 < 0 || (unsigned int)v5 > *((int *)(ptr->field_0 - 16)))
                sub_100036284(2147942487); /* do not return */
            if (!(char)sub_100095a28(*((short *)(ptr->field_0 + v5 * 2))))
                break;
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                sub_100036510(g_100153eb8->field_10, 269, &g_10001e380, ptr->field_c); /* do not return */
            ptr->field_c = ptr->field_c + 1;
        } while (ptr->field_c < ptr->padding_8);
        v2 = g_100153eb8;
    }
    v6 = v4 != ptr->field_c;
    if (v2 != &g_100153eb8 && (v2->field_1c & 1) && v2->field_19 >= 5)
        sub_100036510(v2->field_10, 270, &g_10001e380, v6); /* do not return */
    index = ptr->field_c;
    ptr->field_20 = v6;
    if ((unsigned int)index >= ptr->padding_8)
    {
        if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
            sub_100034784(g_100153eb8->field_10, 272, &g_10001e380); /* do not return */
        v8 = &ptr->field_18;
        ptr->field_10 = 4;
        sub_100035fe0(v8);
    }
    else
    {
        if ((unsigned int)index < 0 || (unsigned int)index > *((int *)(ptr->field_0 - 16)))
            sub_100036284(2147942487); /* do not return */
        v9 = *((short *)(ptr->field_0 + index * 2));
        if (v9 == 40)
        {
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                sub_100034784(g_100153eb8->field_10, 273, &g_10001e380); /* do not return */
            ptr->field_10 = 0;
            v10 = "(";
            goto LABEL_100096353;
        }
        else if (v9 == 41)
        {
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                sub_100034784(g_100153eb8->field_10, 274, &g_10001e380); /* do not return */
            ptr->field_10 = 1;
            v10 = ")";
LABEL_100096353:
            do
            {
                if (false)
                    break;
            } while (*(v10));
            v8 = &ptr->field_18;
            sub_1000361b0(v8);
            ptr->field_c = ptr->field_c + 1;
        }
        else if (v9 == 34)
        {
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                sub_100034784(g_100153eb8->field_10, 275, &g_10001e380); /* do not return */
            ptr->field_c = ptr->field_c + 1;
            v8 = &ptr->field_18;
            ptr->field_10 = 3;
            sub_10009675c(ptr, v8);
        }
        else
        {
            if (g_100153eb8 != &g_100153eb8 && (g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
                sub_100034784(g_100153eb8->field_10, 276, &g_10001e380); /* do not return */
            ptr->field_10 = 2;
            sub_100096488(ptr, (struct struct_1 *)&ptr->field_18); /* do not return */
        }
    }
    if (g_100153eb8 == &g_100153eb8)
        return;
    if ((g_100153eb8->field_1c & 8) && g_100153eb8->field_19 >= 5)
    {
        *((unsigned int *)&v0) = ptr->field_10;
        sub_10003b678(g_100153eb8->field_10, 277, &g_10001e380, v8->field_0, v0); /* do not return */
    }
    if (g_100153eb8 == &g_100153eb8)
    {
        return;
    }
    else if ((g_100153eb8->field_1c & 1))
    {
        sub_100034784(g_100153eb8->field_10, 278, &g_10001e380); /* do not return */
    }
    else
    {
        return;
    }
}
