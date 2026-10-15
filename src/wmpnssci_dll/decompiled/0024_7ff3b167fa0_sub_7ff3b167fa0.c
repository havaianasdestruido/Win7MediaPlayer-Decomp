/* sub_7ff3b167fa0 @ 0x7ff3b167fa0
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b167fa0  (670 bytes, 42 basic blocks)
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
    char padding_0[8];
    char field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[8];
    char field_8;
} struct_1;

extern unsigned int g_7ff3b17be50;
extern unsigned int g_7ff3b17be54;
extern unsigned int g_7ff3b17be58;
extern unsigned int g_7ff3b17be5c;

long long sub_7ff3b167fa0(unsigned long long a0, unsigned int a1, void* addr)
{
    unsigned int i;  // r10d
    unsigned int v7;  // eax
    void* v16;  // r8
    unsigned long long v17;  // cc_ndep
    void* v18;  // r8
    unsigned long long v19;  // rcx
    struct_0 *iter;  // rdi
    char *k;  // rsi
    unsigned int *node;  // rdi
    unsigned long long l;  // rsi
    void* v24;  // rax
    unsigned int v8;  // ebx
    void* v25;  // rdx
    void* v26;  // rdx
    char *ptr6;  // rdi
    void* cur;  // rsi
    unsigned long long n;  // rcx
    void* p;  // rdx
    unsigned int v32;  // eax
    void* ptr10;  // rdx
    unsigned long long v34;  // 4182
    unsigned long long v9;  // r9
    unsigned long long v35;  // rcx
    unsigned short i0;  // dx
    char ptr7[4];  // r13
    unsigned long long v38;  // cc_op
    unsigned long long v39;  // cc_dep1
    unsigned long long v40;  // cc_dep2
    unsigned int v41;  // ebx
    unsigned int v42;  // r8d
    unsigned int v43;  // r10d
    unsigned int v44;  // r15d
    unsigned long long v10;  // r14
    unsigned int v45;  // esi
    unsigned int v46;  // ebp
    unsigned int v47;  // edi
    unsigned int v48;  // eax
    unsigned long v49;  // 4172
    unsigned int v50;  // ecx
    unsigned int v51;  // eax
    unsigned int v52;  // ecx
    unsigned int v53;  // r12d
    unsigned int v54;  // eax
    unsigned long v11;  // rax
    unsigned long long v55;  // 4136
    void* v56;  // r8
    char ptr8[4];  // rcx
    unsigned long long i1;  // rdi
    char *i2;  // rsi
    unsigned long long v61;  // rcx
    unsigned long v62;  // rcx
    struct_1 *ptr9;  // rdi
    char *j;  // rsi
    void* v12;  // r8
    void* v13;  // rdx
    void* ptr;  // r11
    unsigned long long v15;  // r13
    unsigned long long v0;  // [bp-0x1a8]
    unsigned int v2;  // [bp-0x188]
    unsigned int v4;  // [bp+0x10]
    unsigned int v5;  // [bp+0x20]

    v4 = a1;
    i = a1;
    v7 = (int)addr[4] + a1;
    v8 = 0;
    v9 = (int)addr[4] & 63;
    v10 = a0;
    v5 = 0;
    *((unsigned int *)&addr[4]) = v7;
    if (v7 < a1)
        *((unsigned int *)addr) = *((int *)addr) + 1;
    v11 = 64 - (unsigned int)v9;
    v12 = addr;
    if (a1 >= (unsigned int)v11)
    {
        v13 = addr + 8;
        ptr = addr + 72;
        v15 = 20;
        v16 = addr;
        do
        {
            v18 = v16;
            if ((unsigned int)v9 > 0)
            {
                v19 = 64 - v9;
                iter = (v9 & 4294967295) + v18 + 8;
                for (k = v8 + v10; v19; k += 1)
                {
                    v19 -= 1;
                    iter->padding_0[0] = *(k);
                    iter = &iter->padding_0[1];
                }
            }
            node = &v2;
            l = 16;
            v24 = v8 + v10;
            if (0 < (unsigned int)v9)
                v24 = v13;
            v25 = v24 + 1;
            do
            {
                v26 = v25 + 4;
                *(node) = (((char)v25[1] * 0x100 | *((char *)v25)) * 0x100 | (char)v26[3]) * 0x100 | (char)v26[2];
                node += 1;
                v25 = v26;
                l -= 1;
            } while (l != 1);
            ptr6 = &v0;
            for (cur = ptr; v15; cur += 1)
            {
                v15 -= 1;
                *(ptr6) = *((char *)cur);
                ptr6 += 1;
            }
            n = 64;
            p = &v2 + 2;
            do
            {
                v32 = (int)p[44] ^ (int)p[24] ^ (int)p[8] ^ *((int *)p);
                ptr10 = p + 4;
                v34 = _ccall(4, p, 4, v17);
                v17 = v34;
                v35 = n - 1;
                *((unsigned int *)&ptr10[52]) = v32 * 2 | v32 >> 31;
                p = ptr10;
                n = v35;
            } while (n != 1);
            i0 = 0;
            ptr7 = &v2;
            v38 = 19;
            v39 = 0;
            v40 = 0;
            v41 = (unsigned int)v35 + 60;
            v42 = (unsigned int)v35 + 20;
            v43 = (unsigned int)v35 + 40;
            do
            {
                v44 = *((int *)ptr);
                v45 = (int)ptr[12];
                v46 = (int)ptr[8];
                v47 = (int)ptr[4];
                v48 = i0;
                v49 = _ccall(v38, v39, v40, v17);
                if (v48 >= v41)
                {
LABEL_7ff3b1680d1:
                    v52 = v47 ^ v46 ^ v45;
                    continue;
                }
                else
                {
                    if (v48 >= v43)
                    {
                        v50 = (v46 | v45) & v47;
                        v51 = v46 & v45;
                        goto LABEL_7ff3b1680e8;
                    }
                    if (v48 >= v42)
                        goto LABEL_7ff3b1680d1;
                    if (v48 >= 0)
                    {
                        v50 = ~(v47) & v45;
                        v51 = v47 & v46;
LABEL_7ff3b1680e8:
                        v52 = v50 | v51;
                        continue;
                    }
                    else
                    {
                        v52 = 0;
                    }
                }
                v53 = (unsigned int)((v44 * 32 | v44 >> 27) + *(ptr7) + (int)ptr[16] + v52);
                v54 = (i0 < (unsigned short)v41 ? (i0 < (unsigned short)v43 ? (i0 < (unsigned short)v42 ? (i0 < 0 ? 0 : g_7ff3b17be5c ^ 159339450) : g_7ff3b17be58 ^ 520740541) : g_7ff3b17be54 ^ 771664131) : g_7ff3b17be50 ^ 691207358);
                v55 = _ccall(3, (unsigned long long)v54, (unsigned long long)v53, v49);
                v17 = v55;
                i0 += 1;
                ptr7 += 1;
                *((unsigned int *)&ptr[16]) = v45;
                v38 = 6;
                v39 = i0;
                v40 = 80;
                *((unsigned int *)&ptr[12]) = v46;
                *((unsigned int *)&ptr[8]) = __ROR__(v47, 2);
                *((unsigned int *)&ptr[4]) = v44;
                *((unsigned int *)ptr) = v54 + v53;
            } while (i0 < 80);
            v56 = addr;
            v10 = a0;
            ptr8 = &v0;
            i1 = 5;
            do
            {
                *(ptr8) = *(ptr8) + *((int *)(ptr - &v0 + &ptr8[0]));
                ptr8 += 1;
                i1 -= 1;
            } while (i1 != 1);
            v15 = 20;
            i2 = &v0;
            v61 = 20;
            v4 = v4 + v9 - 64;
            v8 = v5 + (unsigned int)(64 - v9);
            for (cur = ptr; v61; i2 += 1)
            {
                v61 -= 1;
                *((char *)cur) = *(i2);
                cur += 1;
            }
            v9 = 0;
            v5 = v8;
            v13 = v56 + 8;
            v16 = v56;
            v12 = v56;
        } while (i >= 64);
    }
    if (!i)
        return v11;
    v62 = i;
    ptr9 = (v9 & 4294967295) + v12 + 8;
    for (j = v8 + v10; v62; j += 1)
    {
        v62 -= 1;
        ptr9->padding_0[0] = *(j);
        ptr9 = &ptr9->padding_0[1];
    }
    return v9 & 4294967295;
}
