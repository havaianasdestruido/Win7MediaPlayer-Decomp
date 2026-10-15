/* sub_10000594b @ 0x10000594b
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x10000594b  (196 bytes, 9 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a
 *   Evidence: analysis/report/rea-evidence/wmpenc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[1];
    char field_1;
} struct_0;

extern char g_1072473b3;
extern unsigned int g_1340f7f17;
extern unsigned int g_1741d59e6;
extern unsigned int g_8;
extern unsigned long long g_b1000026;
extern unsigned long long g_b100002e;
extern unsigned long long g_b1000036;

void sub_10000594b(unsigned long long a0, char *ptr7, unsigned long a2, unsigned long a3, unsigned long a4)
{
    struct_0 *v2;  // rsi
    char v3;  // 4098
    unsigned long v12;  // 4298
    unsigned int *ptr8;  // rdx
    char *ptr9;  // rax
    unsigned long v15;  // rax
    char *p;  // rdx
    void* ptr4;  // rax
    unsigned long v18;  // 4301
    unsigned int v19;  // 4113
    unsigned int *ptr10;  // rax
    unsigned int *ptr11;  // rax
    void* ptr6;  // rax
    char v22;  // 4125
    unsigned long v23;  // 4135
    unsigned long v24;  // 4138
    char *ptr;  // rax
    char v26;  // 4101
    char v27;  // cc_dep1
    char v28;  // cc_dep2
    unsigned long v29;  // 4111
    char *addr;  // rax
    struct_0 *v6;  // rsi
    void* v7;  // rdi
    char *ptr5;  // rax
    unsigned int v9;  // ebx
    char ptr12[13];  // rax
    char *ptr13;  // rcx
    void* ptr3;  // [bp-0x8], Other Possible Types: unsigned long long

    v3 = *((char *)(ptr7 + v2));
    *((char *)(ptr7 + v2)) = *((char *)(ptr7 + v2)) + *((char *)&ptr7);
    *((char *)&ptr6[10]) = (char)ptr6[10] + *((char *)((void*)&ptr7 + 1)) + ((char)(v3 + *((char *)&ptr7) <= v3 ? 1 : 0) & 1);
    ptr3 = a0;
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    addr = (unsigned int)ptr6 + *((int *)ptr6);
    *(addr) = *(addr) + *((char *)&addr);
    v6 = &v2->field_1;
    *(addr) = *(addr) + *((char *)&addr);
    ptr3 = v7 + 1;
    *(addr) = *(addr) + *((char *)&addr);
    *(addr) = *(addr) + *((char *)&addr);
    ptr5 = [D] syscall()();
    *(ptr5) = *(ptr5) + *((char *)&ptr5);
    *(0x3dca0000 + vvar_38{r56|8b} + (char *)ptr3) = *(0x3dca0000 + vvar_38{r56|8b} + (char *)ptr3) + (char)v9;
    *(ptr5) = *(ptr5) + *((char *)&ptr5);
    g_b1000036 = ptr3;
    *(ptr5) = *(ptr5) + *((char *)&ptr5);
    ptr12 = (unsigned int)ptr5 - 419430462;
    *(vvar_38{r56|8b} + (char *)ptr3) = *(vvar_38{r56|8b} + (char *)ptr3) & *((char *)((void*)&ptr12 + 1));
    *((unsigned int *)(&g_b1000036 + ptr3)) = *((int *)(&g_b1000036 + ptr3)) - (unsigned int)v6 - 0;
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    ptr13 = (unsigned int)a0 & *((int *)0x1060091a0);
    v12 = _ccall(19, (unsigned long long)((unsigned int)a0 & *((int *)0x1060091a0)), 0, 0);
    *((char *)(ptr12 * 9)) = *((char *)(ptr12 * 9)) * 2 | *((char *)(ptr12 * 9)) >> 7;
    ptr8 = (unsigned int *)_INSERT(ptr7, 0, *((char *)&ptr7) + ptr12[12]);
    vvar_64{r48|8b} = (int)&g_b100002e;
    g_b100002e = v6;
    ptr12[0] = ptr12[0] + *((char *)&ptr12);
    ptr9 = (char *)_INSERT(ptr12, 0, 1);
    *(ptr9) = *(ptr9) + 1;
    *(ptr8) = *(ptr8) + (unsigned int)ptr13;
    v15 = _INSERT(ptr9, 0, 1);
    p = (char *)_INSERT(ptr8, 1, *((char *)((void*)&ptr8 + 1)) | (&v6->padding_0)[v15]);
    *(p) = *(p) + *((char *)&ptr13);
    ptr4 = (void*)_INSERT(v15, 0, 1 ^ v6->padding_0);
    v18 = _ccall(0, 17, (unsigned long long)(1 ^ v6->padding_0), 0, v12);
    if (!((char)v18))
    {
        *((unsigned int *)ptr3) = *((int *)ptr3) & (unsigned int)ptr4;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr13);
        ptr4 = (void*)_INSERT(ptr4, 0, *((char *)&ptr4) ^ 81);
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr13);
        v19 = *((int *)(ptr4 * 2 + 8));
        *((unsigned int *)(ptr4 * 2 + 8)) = v19 + (unsigned int)ptr13;
        if (((unsigned int)~(v19 ^ ptr13 & 4294967295) & (v19 ^ v19 + (unsigned int)ptr13)) >= 0)
            goto LABEL_0x1000059c7;
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
        vvar_79{r48|8b} = (int)&g_b1000026;
        g_b1000026 = ptr4;
    }
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    g_1741d59e6 = g_1741d59e6 + v9;
    ptr10 = ((unsigned int)ptr4 | *((int *)ptr4)) - 486541924;
    *((int *)(vvar_21{r48|8b} - 8)) = vvar_21{r48|8b};
    *(ptr10) = *(ptr10) | (unsigned int)ptr10;
    ptr11 = (unsigned int)ptr10 - 486541364;
    v22 = *(ptr13);
    if (!(ptr13 + 1 & ((char)v9 ^ v22)))
    {
        v23 = _ccall(17, (unsigned long long)((char)v9 ^ v22), 0, 0);
        v24 = _ccall((unsigned long long)g_1072473b3, 1, v23, 1);
        g_1072473b3 = v24;
        *(p) = *(p) + *((char *)&p);
        *((int *)(vvar_21{r48|8b} - 16)) = vvar_38{r56|8b};
        *(p) = *(p) + *((char *)&p);
        ptr11 = (unsigned int *)_INSERT(ptr11, 0, *((char *)&ptr11) ^ 84);
        *(p) = *(p) + *((char *)&p);
        *(ptr11) = *(ptr11) + (unsigned int)p;
    }
    ptr = (char *)_INSERT(ptr11, 0, *((char *)&ptr11) | 86);
    v26 = *(ptr);
    *(ptr) = v26 + (*((char *)&ptr11) | 86);
    v27 = v26;
    v28 = *((char *)&ptr11) | 86;
    v29 = _ccall(0, 1, (unsigned long long)v26, (unsigned long long)(*((char *)(void*)&ptr11) | 86), 0);
    if (!((char)v29))
    {
        *(ptr) = *(ptr) + *((char *)&ptr);
        v27 = *(ptr);
        v28 = *((char *)&ptr);
    }
    g_1340f7f17 = g_1340f7f17 - _INSERT(v9, 0, (char)v9 ^ v22) - ((unsigned int)(v27 + v28 <= v27 ? 1 : 0) & 1);
    *(ptr) = *(ptr) | *((char *)&ptr);
}
