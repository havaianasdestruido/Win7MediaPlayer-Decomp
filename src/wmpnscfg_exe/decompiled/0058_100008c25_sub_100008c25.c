/* sub_100008c25 @ 0x100008c25
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100008c25  (100 bytes, 9 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 10888bb9c3799e1e8b010c0f9088ced376aad63a509fce1727c457b022cdc717
 *   Evidence: analysis/report/rea-evidence/wmpnscfg_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[133];
    char field_85;
} struct_0;

typedef struct struct_1 {
    char padding_0[125];
    char field_7d;
} struct_1;

void sub_100008c25(void* addr, void* ptr, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    char v2;  // 4097
    char v3;  // al
    char ptr7[3];  // rdi
    unsigned long v13;  // 4173
    struct_1 *ptr9;  // rbx
    char v15;  // 4110
    char v16;  // al
    unsigned long v17;  // 4135
    char v18;  // 4098
    unsigned long v19;  // 4109
    char *ptr3;  // rax
    char v21;  // 4109
    char *ptr5;  // rax
    char ptr4[3];  // rdi
    unsigned long v23;  // 4128
    char *ptr6;  // rcx
    unsigned long v25;  // 4118
    char v26;  // 4098
    unsigned long v27;  // 4107
    char v28;  // 4106
    unsigned long v29;  // 4119
    char v5;  // 4110
    unsigned long v6;  // cc_ndep
    unsigned long v7;  // 4127
    struct_0 *ptr10;  // rsi
    char *p;  // rax
    char v10;  // 4129
    char ptr8[3];  // rdi
    char v0;  // [bp-0x69efff73]

    v2 = *((char *)ptr);
    ptr5 = v3 ^ *((char *)ptr);
    *((char *)&ptr[16777339]) = (char)ptr[16777339] ^ *((char *)((void*)&addr + 1));
    *(ptr5) = *(ptr5) + (v3 ^ v2);
    v5 = (char)ptr[150994822];
    *((char *)&ptr[150994822]) = (char)ptr[150994822] + *((char *)((void*)&ptr + 1));
    v7 = _ccall(10, 1, (unsigned long long)v5, (unsigned long long)*((char *)((void*)&ptr + 1)), v6);
    if (!((char)v7))
        goto LABEL_100008c37;
LABEL_100008c37:
    ptr10->field_85 = ptr10->field_85 + *((char *)&ptr5);
    *(ptr5) = *(ptr5) + *((char *)&ptr5);
    *((char *)addr) = *((char *)addr) + *((char *)&ptr5);
    p = (char *)_INSERT(ptr5, 0, *((char *)&ptr5) + 1);
    *((char *)(ptr * 2)) = *((char *)(ptr * 2)) + *((char *)&ptr5) + 1;
    *(p) = *(p) + *((char *)&ptr5) + 1;
    *((unsigned int *)(addr + p)) = *((int *)(addr + p)) | (unsigned int)p;
    *((char *)ptr + 0x2 * p) = *((char *)ptr + 0x2 * p) + *((char *)&ptr5) + 1;
    v10 = *(p);
    *(p) = *(p) + *((char *)&ptr5) + 1;
    ptr8[0] = *((char *)&ptr5) + 1;
    ptr7 = &ptr8[1];
    v13 = _ccall(10, 1, (unsigned long long)v10, (unsigned long long)(*((char *)(void*)&ptr5) + 1), v6);
    if (!((char)v13))
        goto LABEL_100008c53;
LABEL_100008c53:
    *((char *)addr) = *((char *)addr) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    ptr9->field_7d = ptr9->field_7d + *((char *)((void*)&p + 1));
    v15 = *(p);
    *(p) = *(p) + *((char *)&p);
    v16 = (char)ptr10;
    v17 = _ccall(12, 1, (unsigned long long)v15, (unsigned long long)*((char *)(void*)&p), v6);
    if (!((char)v17))
        goto LABEL_100008c5f;
LABEL_100008c5f:
    v18 = v0;
    v0 += v16;
    v19 = _ccall(12, 1, (unsigned long long)v18, (unsigned long long)v16, v6);
    if (!((char)v19))
        goto LABEL_100008c67;
LABEL_100008c67:
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    ptr3 = (char *)_INSERT(v16, 0, v16 + 1);
    *((char *)ptr) = *((char *)ptr) + v16 + 1;
    v21 = *(ptr3);
    *(ptr3) = *(ptr3) + v16 + 1;
    ptr7[0] = v16 + 1;
    ptr4 = &ptr7[1];
    v23 = _ccall(10, 1, (unsigned long long)v21, (unsigned long long)(v16 + 1), v6);
    if (!((char)v23))
        goto LABEL_100008c73;
LABEL_100008c73:
    *((char *)addr) = *((char *)addr) + *((char *)&ptr3);
    *(ptr3) = *(ptr3) + *((char *)&ptr3);
    ptr6 = (char *)_INSERT(addr, 0, *((char *)&addr) + *((char *)&ptr9));
    v25 = _ccall(12, 1, (unsigned long long)*((char *)(void*)&addr), (unsigned long long)*((char *)(void*)&ptr9), v6);
    if (!((char)v25))
        goto LABEL_100008c7b;
LABEL_100008c7b:
    v26 = ptr4[0];
    ptr4[0] = ptr4[0] + *((char *)&ptr6);
    v27 = _ccall(14, 1, (unsigned long long)v26, (unsigned long long)*((char *)(void*)&ptr6), v6);
    if (!((char)v27))
        goto LABEL_100008c7f;
LABEL_100008c7f:
    *(ptr6) = *(ptr6) + *((char *)&ptr3);
    *(ptr3) = *(ptr3) + *((char *)&ptr3);
    v28 = ptr4[0];
    ptr4[0] = ptr4[0] + *((char *)&ptr6);
    v29 = _ccall(14, 1, (unsigned long long)v28, (unsigned long long)*((char *)(void*)&ptr6), v6);
    if (!((char)v29))
        goto LABEL_100008c87;
LABEL_100008c87:
    *(ptr6) = *(ptr6) + *((char *)&ptr3);
}
