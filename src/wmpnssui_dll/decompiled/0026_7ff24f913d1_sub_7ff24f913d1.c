/* sub_7ff24f913d1 @ 0x7ff24f913d1
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f913d1  (226 bytes, 7 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[74];
    char field_4a;
} struct_0;

typedef struct struct_1 {
    char padding_0[1483188305];
    unsigned long long field_5867a851;
} struct_1;

char sub_7ff24f913d1(void* a0, unsigned long a1, unsigned long a2, struct_1 *ptr16, char a4)
{
    void* ptr9;  // rcx
    unsigned long v3;  // cc_op
    char v12;  // dl
    char v13;  // al
    unsigned long long v14;  // rsi
    struct_0 *v15;  // r15
    char *ptr;  // rax
    char *ptr5;  // rax
    unsigned long v18;  // 4126
    char *ptr6;  // rax
    void* v20;  // rdi
    void* ptr12;  // rdi
    unsigned long v4;  // cc_dep1
    unsigned long long v22;  // rsi
    unsigned long v23;  // r13
    unsigned long v24;  // 4112
    unsigned int v25;  // 4114
    unsigned long v26;  // 4154
    unsigned long v27;  // 4169
    char *ptr3;  // rax
    char *ptr4;  // rax
    char *ptr8;  // rax
    char *ptr13;  // rax
    unsigned long v5;  // cc_dep2
    char *ptr7;  // rax
    unsigned int *ptr14;  // rax
    char ptr10[268436467];  // rax
    unsigned int *ptr15;  // rax
    char ptr11[268437458];  // rax
    char *p;  // rax
    char v38;  // 4252
    char *addr;  // rax
    unsigned long v6;  // cc_ndep
    unsigned long v7;  // 4106
    unsigned long v8;  // 4112
    char v9;  // al
    char v10;  // al
    unsigned long v11;  // 4126
    char v0;  // [bp+0x0]

    ptr9 = a0 - 1;
    v7 = _ccall(4, v3, v4, v5, v6);
    if (a0 - 1 & (char)v7)
        goto LABEL_0x7ff24f9137b;
    v8 = _ccall(v3, v4, v5, v6);
    *((unsigned int *)ptr9) = *((int *)ptr9) - (unsigned int)&v0 - ((unsigned int)v8 & 1);
    v10 = _INSERT(v9 CONCAT 0, 1, 28);
    v11 = _ccall(6, 1, (unsigned long long)v10, 186, v8 & 1);
    if (!((char)v11))
        goto LABEL_0x7ff24f913ba;
    v12 = v10 - 70;
    v13 = _INSERT(*((long long *)0xb3e3e0532a3542a5), 1, 0);
    if (ptr9 - 1 & ((char)v14 & v15->field_4a))
    {
        v18 = _ccall(17, (unsigned long long)((char)v14 & v15->field_4a), 0, v8 & 1);
        ptr6 = (char *)_INSERT(v13, 0, v13 - 112 + ((char)v18 & 1));
        ptr12 = v20 + 1;
        v22 = v14 + 1;
        *((unsigned long *)&(&ptr16->padding_0)[1]) = *((long long *)&(&ptr16->padding_0)[1]) - v23;
        v24 = *((long long *)(v22 + a2 * 2 - 126));
        *((unsigned long *)(v22 + a2 * 2 - 126)) = *((long long *)(v22 + a2 * 2 - 126)) ^ v15;
        v25 = (int)ptr12[113];
        v26 = _ccall(20, v24 ^ v15, 0, v18 & 1);
        *((unsigned int *)&ptr12[113]) = v25 * 2 | v25 >> 31;
        v27 = _ccall(10, 39, (unsigned long long)(__ROL__(v25, 1)), 0, v26);
        if (!((char)v27))
            goto LABEL_0x7ff24f9144b;
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + v12;
        ptr3 = (char *)_INSERT(ptr6, 0, *((char *)&ptr6) + 1);
        *((char *)(ptr3 & 4294967295)) = *((char *)(ptr3 & 4294967295)) + *((char *)&ptr6) + 1;
        *(ptr3) = *(ptr3) + *((char *)&ptr6) + 1;
        *(ptr3) = *(ptr3) + *((char *)&ptr6) + 1;
        *(ptr3) = *(ptr3) + *((char *)&ptr6) + 1;
        *(ptr3) = *(ptr3) + v12;
        ptr4 = (char *)_INSERT(ptr3, 0, *((char *)&ptr6) + 3);
        *((char *)(ptr4 & 4294967295)) = *((char *)(ptr4 & 4294967295)) + *((char *)&ptr6) + 3;
        *(ptr4) = *(ptr4) + *((char *)&ptr6) + 3;
        *(ptr4) = *(ptr4) + *((char *)&ptr6) + 3;
        *(ptr4) = *(ptr4) + *((char *)&ptr6) + 3;
        *(ptr4) = *(ptr4) + v12;
        ptr8 = (char *)_INSERT(ptr4, 0, *((char *)&ptr6) + 4);
        *(ptr8) = *(ptr8) + *((char *)&ptr6) + 4;
        *(ptr8) = *(ptr8) + *((char *)&ptr6) + 4;
        ptr13 = (char *)_INSERT(ptr8, 0, *((char *)&ptr6) + 4 ^ 3);
        *(ptr13) = *(ptr13) + v12;
        ptr7 = (char *)_INSERT(ptr13, 0, (*((char *)&ptr6) + 4 ^ 3) + 2);
        *(ptr7) = *(ptr7) + (*((char *)&ptr6) + 4 ^ 3) + 2;
        *(ptr7) = *(ptr7) + (*((char *)&ptr6) + 4 ^ 3) + 2;
        *(ptr7) = *(ptr7) + v12;
        ptr14 = (unsigned int *)_INSERT(ptr7, 0, (*((char *)&ptr6) + 4 ^ 3) + 3);
        ptr10 = *(ptr14) * 0;
        ptr10[0] = ptr10[0] + *((char *)&ptr10);
        ptr10[268436466] = ptr10[268436466] + *((char *)&ptr10);
        ptr15 = (unsigned int *)_INSERT(ptr10, 0, *((char *)&ptr10) + 2);
        ptr11 = *(ptr15) * 0;
        ptr11[0] = ptr11[0] + *((char *)&ptr11);
        ptr11[268437457] = ptr11[268437457] + *((char *)&ptr11);
        p = (char *)_INSERT(ptr11, 0, *((char *)&ptr11) + 1);
        *(p) = *(p) + *((char *)&ptr11) + 1;
        *(p) = *(p) + *((char *)&ptr11) + 1;
        *(p) = *(p) + *((char *)&ptr11) + 1;
        v38 = *(p);
        *(p) = *(p) + *((char *)&ptr11) + 1;
        *(p) = *(p) + v12 + 7 + ((char)(v38 + *((char *)&ptr11) + 1 <= v38 ? 1 : 0) & 1);
        addr = (char *)_INSERT(p, 0, *((char *)&ptr11) + 3);
        *(addr) = *(addr) + *((char *)&ptr11) + 3;
        *(addr) = *(addr) + *((char *)&ptr11) + 3;
        *(addr) = *(addr) + *((char *)&ptr11) + 3;
        *(addr) = *(addr) + *((char *)&ptr11) + 3;
        *(addr) = *(addr) + v12 + 7 + ((char)(v38 + *((char *)&ptr11) + 1 <= v38 ? 1 : 0) & 1);
        return *((char *)&ptr11) + 4;
    }
    ptr = [D] syscall()();
    *(ptr) = *(ptr) ^ *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *((char *)&ptr9[1]) = (char)ptr9[1] + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    ptr5 = (char *)_INSERT(ptr, 0, *((char *)&ptr) * 2);
    *(ptr5) = *(ptr5) + *((char *)&ptr) * 2;
    *(ptr5) = *(ptr5) + *((char *)&ptr) * 2;
    *(ptr5) = *(ptr5) + *((char *)&ptr) * 2;
}
