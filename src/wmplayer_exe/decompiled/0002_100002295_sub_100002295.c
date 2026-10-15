/* sub_100002295 @ 0x100002295
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100002295  (292 bytes, 31 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 883d9616dfc7586fa88c58013f70e055df9328f3cfc3ef39898c15c6970fb0db
 *   Evidence: analysis/report/rea-evidence/wmplayer_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern struct_0 *g_100004110;

void sub_100002295(void)
{
    void* v3;  // rax
    void* v4;  // rsi
    unsigned int v12;  // eax
    void* v13;  // rdx
    void* v14;  // rcx
    void* v15;  // rcx
    void* v16;  // rdx
    void* v17;  // rcx
    void* v18;  // rdx
    void* v19;  // rcx
    void* v20;  // rdx
    unsigned short *cur;  // rcx
    void* v5;  // r15
    void* v22;  // r8
    void* v23;  // r9
    unsigned short *ptr;  // rcx
    void* v6;  // rdi
    void* v7;  // rdx
    void* iter;  // rcx
    void* v9;  // rbx
    void* v10;  // rdx
    void* v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x28]

    v4 = v3;
    if (v3 == v5)
        goto LABEL_0x1000023e6;
    if (v6 != v5 && v6 <= 0x7fffffff)
    {
        v7 = v6;
        iter = v3;
        do
        {
        } while (v7 + 2147483646 - v6 != v5 && *((short *)(4294972824 + iter - v3)) != *((unsigned short *)&v5) && (*((short *)iter) = *((short *)(4294972824 + (char *)iter - (char *)v3)), iter += 2, v10 = (void*)(v7 - v9), v7 = (void*)(v7 - v9), v7 != v9));
        if (v7 == v5)
            iter -= 2;
        *((unsigned short *)iter) = *((unsigned short *)&v5);
    }
    v12 = (unsigned int)v5;
    if (v6 == v5 || v6 > 0x7fffffff)
        v12 = 2147942487;
    if (v12 >= (unsigned int)v5)
    {
        v12 = (unsigned int)v5;
        v13 = v4;
        v14 = v6;
        if (v14 != v5)
        {
            do
            {
                v16 = v13;
                v17 = v14;
                if (*((short *)v16) == *((unsigned short *)&v5))
                    break;
            } while ((v18 = v16 + 2, v19 = (void*)(v15 - v9), v17 = v19, v13 = v16 + 2, v14 = v19, v15 != v9));
            if (v17 == v5)
                goto LABEL_100002348;
            v20 = v6 - v17;
            goto LABEL_10000234e;
        }
        else
        {
LABEL_100002348:
            v12 = 2147942487;
        }
    }
    v20 = v5;
LABEL_10000234e:
    if (v12 >= (unsigned int)v5)
    {
        cur = v4 + v20 * 2;
        v22 = v6 - v20;
        if (v6 != v20)
        {
            v23 = v22 - v6 + v20 + 2147483647;
            ptr = cur;
            do
            {
                cur = ptr;
                if (v23 == v5 || *((short *)(cur + vvar_195{r56|8b} - (char *)cur)) == *((unsigned short *)&v5))
                    break;
            } while ((v22 = (void*)(v22 - v9), *(cur) = (unsigned short)*((short *)(cur + vvar_195{r56|8b} - cur)), v23 = (void*)(v23 - v9), cur += 2, ptr = cur, v22 != v5));
            if (v22 != v5)
                goto LABEL_10000239d;
        }
        cur += 1;
LABEL_10000239d:
        *(cur) = *((unsigned short *)&v5);
    }
    v2 = 10;
    v1 = v5;
    g_100004110();
}
