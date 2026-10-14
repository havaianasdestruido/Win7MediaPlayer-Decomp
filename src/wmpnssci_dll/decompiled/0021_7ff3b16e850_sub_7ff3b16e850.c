/* sub_7ff3b16e850 @ 0x7ff3b16e850
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b16e850  (769 bytes, 50 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char field_0[4];
    char padding_4[4];
    unsigned int field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[4];
    char field_4;
} struct_1;

extern long long g_7ff3b131a90;

unsigned int sub_7ff3b16e850(void* a0, long long a1, void* a2, long long a3, struct_0 *a4, void* a5, void* a6, long long a7)
{
    void* i;  // r13
    unsigned int v9;  // r12d
    void* v19;  // rdx
    void* v20;  // rdx
    unsigned long long v21;  // r14
    long long idx;  // r8
    void* cur;  // rdi
    struct_1 *k;  // rsi
    unsigned long long v25;  // rcx
    unsigned long long v26;  // rcx
    unsigned int *node;  // rdi
    long long v10;  // rcx
    unsigned int v29;  // esi
    struct_0 *ptr;  // r9
    char v31;  // dl
    unsigned int v32;  // r8d
    unsigned long v33;  // rax
    unsigned long long v34;  // rsi
    unsigned int v35;  // edi
    void* p;  // rbp
    void* v12;  // rdx
    unsigned long long v13;  // rax
    unsigned long long v14;  // rbx
    void* iter;  // rdi
    unsigned long long v16;  // rcx
    void* ptr5;  // rdi
    struct_0 *v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long v2;  // [bp-0x70]
    unsigned int *v3;  // [bp-0x68]
    unsigned long long v4;  // [bp-0x60]
    char v5;  // [bp-0x58]
    unsigned int v7;  // [bp+0x20]

    i = a0;
    v9 = 1;
    if (!a3)
    {
        v10 = 2;
    }
    else if (a0 && a2 && !((p = a6, !p)))
    {
        v12 = a5;
        if (!(a0 != v12 && a0 != p && a2 != v12 && a2 != p))
        {
            v10 = 13;
        }
        else if (!*((int *)(-4 + (char *)a2 + 4 * a3)))
        {
            v10 = 5;
        }
        else if (a1 < a3)
        {
            v13 = a1 * 4;
            v14 = (a3 - a1) * 4;
            iter = p;
            for (v16 = v13; v16; i += 1)
            {
                v16 -= 1;
                *((char *)iter) = *((char *)i);
                iter += 1;
            }
            for (ptr5 = v13 + p; v14; ptr5 += 1)
            {
                v14 -= 1;
                *((char *)ptr5) = 0;
            }
            return 1;
        }
        else if (a3 == 1)
        {
            return (int)sub_7ff3b16e664(i, *((int *)(-4 + (char *)a2 + 4 * a3)), a4, v12, a1, p, a7);
        }
        else
        {
            v0 = a4;
            v19 = v12;
            if (!a4)
            {
                sub_7ff3b16e490(a2, a3, &v5, a7);
                v0 = &v5;
                v19 = a5;
            }
            v20 = v19;
            v21 = a1 - a3;
            idx = a3 - 1;
            cur = p;
            k = i + v21 * 4 + 4;
            *((unsigned int *)(-4 + (char *)p + 4 * a3)) = 0;
            for (v25 = idx * 4; v25; k = &k->padding_0[1])
            {
                v25 -= 1;
                *((char *)cur) = k->padding_0[0];
                cur += 1;
            }
            v26 = v21 + 1;
            node = v20 + v26 * 4;
            while (true)
            {
                node += 1;
                v4 = v26 - 1;
                v3 = node;
                if (!v26)
                    return v9;
                v7 = *((int *)(-4 + (char *)p + 4 * a3));
                if (idx)
                {
                    do
                    {
                        *((int *)((char *)p + 4 * idx)) = *((int *)(-4 + (char *)p + 4 * idx));
                        idx -= 1;
                    } while (idx != 1);
                }
                *((int *)p) = *((int *)(i - v20 + (char *)node));
                if (!v7 && (int)sub_7ff3b168fe0(p, a2, a3) < 0)
                {
                    v29 = 0;
                    goto LABEL_7ff3b16eaff;
                }
                ptr = v0;
                v31 = 31 - ptr->field_8;
                v32 = *((int *)(-4 + (char *)p + 4 * a3)) >> 1 >> (v31 & 31) | v7 << ((char)ptr->field_8 & 31);
                v1 = *((int *)(-8 + (char *)p + 4 * a3)) >> 1 >> (v31 & 31) | *((int *)(-4 + (char *)p + 4 * a3)) << ((char)ptr->field_8 & 31);
                v33 = (unsigned long long)ptr->field_0;
                v2 = _INSERT(v1, 4, v32);
                v34 = v33 * v32 + v2;
                if (((char)(v1 >> 31) & 1))
                    v34 += v33 >> 1;
                v29 = (unsigned int)(v34 >> 32) + ((unsigned int)(v34 >> 32) < 4294967295);
                v35 = sub_7ff3b168ba4(a2, v29, p, a3, a7);
                if (v35 > v7)
                {
                    v29 -= 1;
                    if ((unsigned int)(v35 - sub_7ff3b168e80(p, a2, p, a3)) == v7)
                        goto LABEL_7ff3b16eafa;
                }
                else if (v35 == v7)
                {
                    goto LABEL_7ff3b16eafa;
                }
                v9 = 0;
                sub_7ff3b16d738(4, &g_7ff3b131a90, a7);
LABEL_7ff3b16eafa:
                node = v3;
LABEL_7ff3b16eaff:
                if (a5)
                    *(node) = v29;
                v26 = v4;
                idx = a3 - 1;
                if (!v9)
                    return v9;
            }
        }
    }
    else
    {
        v10 = 11;
    }
    sub_7ff3b16d738(v10, &g_7ff3b131a90, a7);
    return 0;
}
