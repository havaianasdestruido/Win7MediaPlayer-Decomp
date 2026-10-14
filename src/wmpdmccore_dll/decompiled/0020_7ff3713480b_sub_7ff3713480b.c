/* sub_7ff3713480b @ 0x7ff3713480b
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff3713480b  (454 bytes, 50 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    void* field_0;
    unsigned int field_8;
    char field_c;
} struct_0;

typedef struct struct_1 {
    char padding_0[48];
    struct struct_2 *field_30;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

typedef struct struct_3 {
    struct struct_1 *field_0;
} struct_3;

extern struct_3 *g_7ff37153fe0;

int sub_7ff3713480b(void)
{
    unsigned int v1;  // eax
    unsigned int v2;  // ebx
    unsigned long v11;  // r8
    unsigned long i;  // r8
    unsigned long v13;  // r8
    unsigned long v14;  // r8
    void* v15;  // rdx
    unsigned int v16;  // esi
    unsigned int v17;  // ebx
    void* v18;  // r13
    struct_1 **v19;  // rcx
    void* p;  // r11
    struct_0 *ptr;  // rdi
    void* v21;  // r8
    void* v22;  // rdx
    unsigned long v23;  // r12
    void* cur;  // rcx
    void* v25;  // rdx
    void* v26;  // rdx
    void* v27;  // rdx
    void* v28;  // rdx
    unsigned int v29;  // ebx
    unsigned long v4;  // r11
    void* v30;  // rdx
    unsigned long v31;  // r8
    void* iter;  // rcx
    void* v33;  // rdx
    void* addr;  // rcx
    void* j;  // rdx
    void* v36;  // rdx
    void* v37;  // rdx
    unsigned int v5;  // esi
    unsigned long v6;  // r8
    unsigned short *node;  // rdx
    unsigned long v8;  // r13
    unsigned int v9;  // ecx
    unsigned short *ptr6;  // rdx

    v2 = v1 + 1;
    if ((ptr->field_c & 32))
    {
        v4 = v2 - 1;
        v6 = ptr->field_8 - v5;
        node = ptr->field_0 + v5 * 2;
        v9 = v8;
        if (v6 == v8 || v6 > 2147483647)
            v9 = 2147942487;
        if (v9 < (unsigned int)v8)
            return;
        if (v4 <= 2147483646)
        {
            if (v6 != v8)
            {
                ptr6 = node;
                v11 = v6;
                do
                {
                    i = v11;
                    node = ptr6;
                    v13 = i;
                    if (v4 - v6 + v13 == v8 || !((v13 = i, *((short *)(node + vvar_224{r56|8b} - node)) != (unsigned short)v8)))
                        break;
                    *(node) = *((short *)(node + vvar_224{r56|8b} - (char *)node));
                    v14 = i - 1;
                    v13 = v14;
                    ptr6 = node + 1;
                    v11 = v14;
                } while (i != 1);
                if (v13 != v8)
                    goto LABEL_7ff3713489a;
            }
            node += 1;
        }
LABEL_7ff3713489a:
        *(node) = v8;
        return;
    }
    v15 = ptr->field_0;
    v17 = v2 + v16;
    if (ptr->field_0 == v18)
    {
        p = sub_7ff37135114(ptr, v17);
        if (p == v18)
            return;
        v21 = ptr->field_0;
        if (ptr->field_0 != v18)
        {
            v22 = v17;
            v23 = v16;
            if (v22 != v18 && v22 <= 0x7fffffff)
            {
                if (v23 > 2147483646)
                {
                    *((unsigned short *)p) = *((unsigned short *)&v18);
                }
                else
                {
                    cur = p;
                    v25 = v22;
                    do
                    {
                        v26 = v25;
                        v27 = v26;
                        if (v23 - v22 + v27 == v18 || !((v27 = v26, *((short *)((char *)v21 - (char *)p + (char *)cur)) != *((unsigned short *)(void*)&v18))))
                            break;
                    } while ((*((short *)cur) = *((short *)((char *)v21 - (char *)p + (char *)cur)), cur += 2, v28 = v26 - 1, v27 = v28, v25 = v28, v26 != 0x1));
                    if (v27 == v18)
                        cur -= 2;
                    *((unsigned short *)cur) = *((unsigned short *)&v18);
                }
            }
        }
        v29 = v17 - v16;
        v30 = v29;
        v31 = v29 - 1;
        iter = p + v16 * 2;
        if (v30 != v18 && v30 <= 0x7fffffff)
        {
            if (v31 <= 2147483646)
            {
                v33 = v30;
                addr = iter;
                do
                {
                    iter = addr;
                    j = v33;
                    v36 = j;
                    if (v31 - v30 + v36 == v18 || !((v36 = j, *((short *)(iter + vvar_224{r56|8b} - iter)) != *((unsigned short *)(void*)&v18))))
                        break;
                    *((short *)iter) = *((short *)(iter + vvar_224{r56|8b} - iter));
                    v37 = j - 1;
                    v36 = v37;
                    v33 = v37;
                    addr = iter + 2;
                } while (j != 0x1);
                if (v36 == v18)
                    iter -= 2;
            }
            *((unsigned short *)iter) = *((unsigned short *)&v18);
        }
        sub_7ff37135148(ptr, p);
        return;
    }
    else if ((ptr->field_c & 4))
    {
        8792722900144();
    }
    else
    {
        v19 = g_7ff37153fe0;
        if (g_7ff37153fe0 == v18)
        {
            sub_7ff371348f0(g_7ff37153fe0);
            return;
        }
        g_7ff37153fe0->field_0->field_30();
    }
}
