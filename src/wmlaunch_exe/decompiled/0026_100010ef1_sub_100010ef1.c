/* sub_100010ef1 @ 0x100010ef1
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100010ef1  (1383 bytes, 27 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char field_0;
    char padding_1[1];
    char field_2;
} struct_0;

typedef struct struct_1 {
    char padding_0[65536];
    char field_10000;
} struct_1;

typedef struct struct_2 {
    char padding_0[65536];
    char field_10000;
} struct_2;

extern char g_100;
extern char g_1000087;
extern char g_1000102;
extern char g_1000202;
extern void g_100027b;

int sub_100010ef1(void)
{
    unsigned long v4;  // cc_op
    unsigned long v5;  // cc_dep1
    char v14;  // 4606
    void* ptr6;  // rax
    char v16;  // 4418
    char v17;  // 4461
    char v18;  // 4098
    void* ptr17;  // rax
    char v20;  // 4108
    void* ptr7;  // rax
    unsigned long long v22;  // cc_ndep
    void* v23;  // rcx
    unsigned long v6;  // cc_dep2
    char v24;  // 4129
    void* ptr;  // rax
    struct_1 *ptr20;  // rsi
    char v27;  // 4318
    void* ptr10;  // rcx
    unsigned long v29;  // 4453
    char v30;  // 4138
    unsigned long v31;  // 4169
    void* ptr9;  // rax
    char v33;  // 4215
    unsigned long v7;  // cc_ndep
    unsigned long v34;  // 4284
    char *ptr14;  // rax
    void* addr;  // rax
    unsigned long v37;  // 4283
    char v38;  // 4687
    char ptr3[16777852];  // rax
    char v40;  // 4281
    void* ptr12;  // rax
    char v42;  // 4397
    void* ptr5;  // rax
    unsigned long v8;  // 4101
    char v44;  // 4470
    unsigned long long v45;  // 4700
    unsigned long long v46;  // cc_ndep
    struct_2 *ptr21;  // rdi
    char v48;  // 4118
    unsigned long v49;  // 4137
    unsigned int *ptr18;  // rax
    char *p;  // rax
    char v52;  // 4214
    unsigned long v53;  // 4283
    void* ptr15;  // rcx
    char v54;  // 4211
    unsigned long v55;  // 4277
    char *ptr11;  // rax
    unsigned long v57;  // 4276
    void* ptr4;  // rax
    unsigned long v59;  // 4276
    char *ptr13;  // rax
    struct_0 *ptr16;  // rbx
    void* ptr8;  // rax
    char *ptr19;  // rdx
    unsigned long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v8 = _ccall(12, v4, v5, v6, v7);
    if (!((char)v8))
        *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    ptr16->field_0 = ptr16->field_0 + *((char *)&ptr15);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    ptr16->field_0 = ptr16->field_0 + *((char *)&ptr15);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    ptr8 = (void*)_INSERT(ptr13, 0, *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1)));
    *((int *)ptr8) = *((int *)ptr8);
    *((unsigned int *)ptr8) = *((int *)ptr8) + (unsigned int)ptr8;
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)&ptr8[16777852]) = (char)ptr8[16777852] + *((char *)((void*)&ptr16 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    ptr16->field_0 = ptr16->field_0 + *((char *)&ptr15);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    ptr16->field_0 = ptr16->field_0 + *((char *)&ptr15);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)((void*)&ptr19 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr13) + *((char *)((void*)&ptr13 + 1));
    v14 = *(0x100027c);
    ptr6 = (void*)_INSERT(ptr8, 0, v14);
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr15) = *((char *)ptr15) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr15);
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr15);
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)&ptr6[124]) = (char)ptr6[124] + *((char *)((void*)&ptr16 + 1));
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    v16 = *((char *)ptr6);
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14 + ((char)(v16 + v14 <= v16 ? 1 : 0) & 1);
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)(ptr19 + ptr6)) = *((char *)((void*)&ptr16 + 1));
    *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    v17 = *((char *)ptr6);
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *(ptr19) = *(ptr19) - *((char *)&ptr16) - ((char)(v17 + v14 <= v17 ? 1 : 0) & 1);
    *((char *)ptr15) = *((char *)ptr15) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)(ptr6 * 2)) = *((char *)(ptr6 * 2)) + v14;
    *((char *)ptr6) = *((char *)ptr6) + v14;
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    v18 = *((char *)ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    ptr17 = (unsigned int)ptr6 + *((int *)ptr6) + ((unsigned int)(v18 + *((char *)&ptr6) <= v18 ? 1 : 0) & 1);
    v20 = *((char *)ptr17);
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr17);
    ptr7 = (unsigned int)ptr17 + *((int *)ptr17) + ((unsigned int)(v20 + *((char *)&ptr17) <= v20 ? 1 : 0) & 1);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    v22 = (v20 + *((char *)&ptr17) <= v20 ? 1 : 0) & 1;
    *((char *)(ptr7 * 2 + 0x100)) = *((char *)(ptr7 * 2 + 0x100));
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    v1 = 16777852;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)&ptr7[123]) = (char)ptr7[123] + *((char *)((void*)&ptr19 + 1));
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((unsigned int *)ptr7) = *((int *)ptr7) + (unsigned int)ptr7;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    do
    {
        *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
        *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
        *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
        *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
        *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
        *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
        *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
        *((char *)&ptr7[124]) = (char)ptr7[124] + *((char *)&ptr19);
        v24 = *((char *)ptr7);
        ptr = (void*)_INSERT(ptr7, 0, *((char *)&ptr7) + v24);
        *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) | *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) | *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        ptr20->field_10000 = ptr20->field_10000 ^ *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)(ptr19 + ptr)) = *((char *)(ptr19 + ptr)) ^ *((char *)((void*)&ptr16 + 1));
        *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) | *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        *((char *)ptr) = *((char *)ptr) | *((char *)&ptr7) + v24;
        v27 = *((char *)ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr7) + v24;
        v29 = _ccall(5, 1, (unsigned long long)v27, (unsigned long long)(*((char *)(void*)&ptr7) + v24), v22);
        v23 -= 1;
        ptr7 = ptr;
    } while (v23 - 1 & (char)v29);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v30 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr16);
    v31 = _ccall(12, 1, (unsigned long long)v30, (unsigned long long)*((char *)(void*)&ptr16), v22);
    if (!((char)v31))
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr10);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr10);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr19);
    InterlockedExchange(ptr, (unsigned int)ptr);
    ptr9 = *((int *)ptr);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    v33 = *((char *)ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    v34 = _ccall(12, 1, (unsigned long long)v33, (unsigned long long)*((char *)(void*)&ptr9), v22);
    if (!((char)v34))
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr10);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr10);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)((void*)&ptr10 + 1));
    InterlockedExchange(ptr9, (unsigned int)ptr9);
    ptr14 = *((int *)ptr9);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    addr = (void*)_INSERT(ptr14, 0, *((char *)&ptr14) + *((char *)((void*)&ptr10 + 1)));
    v37 = _ccall(10, 1, (unsigned long long)*((char *)(void*)&ptr14), (unsigned long long)*((char *)((void*)&ptr10 + 1)), v22);
    if ((char)v37)
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&ptr10);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&ptr10);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)&addr[121]) = (char)addr[121] + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((unsigned int *)addr) = *((int *)addr) + (unsigned int)addr;
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    ptr16->field_2 = ptr16->field_2 >> 1;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&ptr10);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&ptr10);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)&addr[121]) = (char)addr[121] + *((char *)&ptr16);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((unsigned int *)addr) = *((int *)addr) + (unsigned int)addr;
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    *((char *)ptr10) = *((char *)ptr10) + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + *((char *)&ptr10);
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + *((char *)&ptr10);
    g_100027b = g_100027b + 123;
    g_1000202 = g_1000202 + *((char *)((void*)&ptr19 + 1));
    g_100027b = g_100027b + 123;
    *((void **)&g_100027b) = &(&g_100027b)[*((int *)&g_100027b)];
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    g_100027b = g_100027b + 123;
    v38 = g_100027b;
    ptr3 = v38 | 0x1000200;
    ptr3[0] = ptr3[0] + v38;
    ptr3[0] = ptr3[0] + v38;
    ptr3[0] = ptr3[0] + v38;
    ptr3[0] = ptr3[0] + v38;
    ptr3[0] = ptr3[0] + v38;
    ptr3[0] = ptr3[0] + v38;
    ptr3[0] = ptr3[0] + v38;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr10);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr10);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    *((char *)(ptr3 + &g_1000087)) = *((char *)(ptr3 + &g_1000087)) + *((char *)&ptr10);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    *((char *)(ptr3 + &g_100027b)) = *((char *)(ptr3 + &g_100027b)) + *((char *)&ptr10);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr10);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr10);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    *((char *)(ptr3 + &g_1000087)) = *((char *)(ptr3 + &g_1000087)) + *((char *)((void*)&ptr3 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[123] = ptr3[123] + *((char *)((void*)&ptr19 + 1));
    v40 = ptr3[0];
    ptr12 = (void*)_INSERT(ptr3, 0, *((char *)&ptr3) + v40);
    *((unsigned int *)ptr12) = *((int *)ptr12) + (unsigned int)ptr12;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((unsigned int *)ptr12) = *((int *)ptr12) + (unsigned int)ptr12;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) | *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) | *((char *)&ptr3) + v40;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v40;
    g_1000087 = g_1000087 + 135;
    g_1000087 = g_1000087 + 135;
    g_1000087 = g_1000087 + 135;
    g_1000087 = g_1000087 + 135;
    g_1000087 = g_1000087 + 135;
    g_1000087 = g_1000087 + 135;
    g_1000087 = g_1000087 + 135;
    g_1000087 = g_1000087 + 135;
    g_1000087 = g_1000087 + 135;
    g_1000102 = g_1000102 + *((char *)&ptr16);
    v42 = g_1000087;
    ptr5 = 135 + v42 | 0x1000000;
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) | 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) | 135 + v42;
    v44 = *((char *)ptr5);
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    v45 = _ccall(1, (unsigned long long)v44, (unsigned long long)(135 + v42), v22);
    v46 = v45;
    ptr21->field_10000 = ptr21->field_10000 * 2 | ptr21->field_10000 >> 7;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + 135 + v42;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    v48 = *((char *)ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    v49 = _ccall(10, 1, (unsigned long long)v48, (unsigned long long)*((char *)(void*)&ptr5), v46);
    if ((char)v49)
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr10);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr10);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    ptr18 = (unsigned int *)_INSERT(ptr5, 0, *((char *)&ptr5) + *((char *)((void*)&ptr10 + 1)));
    InterlockedExchange(ptr18, (unsigned int)ptr18);
    p = *(ptr18);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    v52 = *(p);
    *(p) = *(p) + *((char *)((void*)&ptr10 + 1));
    v53 = _ccall(10, 1, (unsigned long long)v52, (unsigned long long)*((char *)((void*)&ptr10 + 1)), v46);
    if ((char)v53)
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&ptr10);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&ptr10);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *((char *)&p);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    v54 = *(p);
    *(p) = *(p) + *((char *)&ptr19);
    v55 = _ccall(10, 1, (unsigned long long)v54, (unsigned long long)*((char *)(void*)&ptr19), v46);
    if ((char)v55)
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&ptr10);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&ptr10);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&ptr16);
    *(p) = *((char *)&p);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    *(p) = *(p) + *((char *)&p);
    ptr11 = (char *)_INSERT(p, 0, *((char *)&p) + *((char *)((void*)&ptr16 + 1)));
    v57 = _ccall(10, 1, (unsigned long long)*((char *)(void*)&p), (unsigned long long)*((char *)((void*)&ptr16 + 1)), v46);
    if (!((char)v57))
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr10);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr10);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)((void*)&ptr19 + 1));
    *(ptr11) = *((char *)&ptr11);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    ptr4 = (void*)_INSERT(ptr11, 0, *((char *)&ptr11) + *((char *)((void*)&ptr11 + 1)));
    v59 = _ccall(10, 1, (unsigned long long)*((char *)(void*)&ptr11), (unsigned long long)*((char *)((void*)&ptr11 + 1)), v46);
    if (!((char)v59))
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr10);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr10);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)&ptr4[120]) = (char)ptr4[120] + *((char *)&ptr10);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((unsigned int *)ptr4) = *((int *)ptr4) + (unsigned int)ptr4;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    v0 = vvar_69{r56|8b};
    *((unsigned int *)ptr4) = *((int *)ptr4) + (unsigned int)ptr4;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((unsigned int *)ptr4) = *((int *)ptr4) + (unsigned int)ptr4;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) | *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) | *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
}
