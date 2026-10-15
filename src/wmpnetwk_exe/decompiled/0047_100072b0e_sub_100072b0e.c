/* sub_100072b0e @ 0x100072b0e
 *
 * MODULE   : wmpnetwk_exe  (bin/wmpnetwk.exe)
 * ADDRESS  : 0x100072b0e  (832 bytes, 65 basic blocks)
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
    char padding_0[140];
    unsigned int field_8c;
} struct_1;

extern long long g_10001e430;
extern struct_0 *g_100153eb8;
extern struct_1 *g_100158688;

int sub_100072b0e(void)
{
    int v4;  // r15d
    int *ptr;  // r12
    long long v11;  // r14
    char v6;  // dil
    void* p;  // r13
    int v8;  // ebp
    int v9;  // ebx
    struct_0 *v10;  // r10
    unsigned int v1;  // [bp+0x40]
    unsigned int flag;  // [bp+0x44]
    char v3;  // [bp+0x52]

    v4 = vvar_151{r56|4b} + 6;
    if (*(ptr) < v4)
    {
        if (g_100153eb8 == &g_100153eb8)
            goto LABEL_0x100073667;
        v6 = v4 - 4;
        if ((4 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= v6)
            sub_100034784(g_100153eb8->field_10, 146, &g_10001e430); /* do not return */
        if (g_100153eb8 == &g_100153eb8)
            goto LABEL_0x100073667;
        if (!(g_100153eb8->field_1c & 1))
            goto LABEL_0x100073667;
        if (g_100153eb8->field_19 < v6)
            goto LABEL_0x100073667;
    }
    else if (*((short *)p) == 2)
    {
        if (g_100153eb8 != &g_100153eb8 && (4 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
            sub_100034784(g_100153eb8->field_10, 149, &g_10001e430); /* do not return */
        v1 = (int)p[4];
        flag = 0;
        if (g_100158688->field_8c)
        {
            v8 = 0;
            v9 = -2147418113;
            *(ptr) = 0;
            v10 = g_100153eb8;
            if (g_100153eb8 == &g_100153eb8)
                goto LABEL_0x100073667;
            if ((4 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 3)
                sub_100036510(g_100153eb8->field_10, 150, &g_10001e430, 2147549183); /* do not return */
            goto LABEL_100072c59;
        }
        else if ((int)p[4] == 16777343)
        {
            if (g_100153eb8 != &g_100153eb8 && (4 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
                sub_100034784(g_100153eb8->field_10, 151, &g_10001e430); /* do not return */
            v8 = 0;
            goto LABEL_100072ce2;
        }
        else
        {
            if (g_100153eb8 != &g_100153eb8 && (4 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
                sub_100034784(g_100153eb8->field_10, 152, &g_10001e430); /* do not return */
            4297065424();
        }
    }
    else
    {
        if (*((short *)p) != 23)
        {
            *(ptr) = v8;
            v9 = -2147418113;
            goto LABEL_100072ce6;
        }
        if (g_100153eb8 != &g_100153eb8 && (4 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
            sub_10006c1cc(g_100153eb8->field_10, 166, &g_10001e430, p + 8); /* do not return */
        if (!(short)p[8] && !(short)p[10] && !(short)p[12] && !(short)p[14] && !(short)p[16] && !(short)p[18] && !(short)p[20] && (short)p[22] == 0x100)
        {
            if (g_100153eb8 != &g_100153eb8 && (4 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 5)
                sub_100034784(g_100153eb8->field_10, 167, &g_10001e430); /* do not return */
LABEL_100072ce2:
            *(ptr) = v4;
LABEL_100072ce6:
            v10 = g_100153eb8;
        }
        else
        {
            if ((char)p[8] == 254 && ((char)p[9] & 192) == 128)
                sub_10011c262(&v3, 0, 86); /* do not return */
            v9 = -2147024891;
            *(ptr) = v8;
            v10 = g_100153eb8;
            if (g_100153eb8 == &g_100153eb8)
                goto LABEL_0x100073667;
            if ((4 & g_100153eb8->field_1c) && g_100153eb8->field_19 >= 2)
                sub_100034784(g_100153eb8->field_10, 168, &g_10001e430); /* do not return */
LABEL_100072c59:
        }
        if (v10 == &g_100153eb8)
            goto LABEL_0x100073667;
        if (!(v10->field_1c & 1))
            goto LABEL_0x100073667;
        if (v10->field_19 < (v8 <= v9 ? 2 : 5))
            goto LABEL_0x100073667;
        sub_10006c264(v10->field_10, 175, &g_10001e430, v9, v11); /* do not return */
    }
}
