/* sub_10000d6f1 @ 0x10000d6f1
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10000d6f1  (271 bytes, 25 basic blocks)
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
    char padding_0[1];
    char field_1;
} struct_0;

extern char g_1000277;
extern char g_10002ee;
extern char g_20004ee;

int sub_10000d6f1(void)
{
    unsigned long v3;  // cc_op
    unsigned long v4;  // cc_dep1
    unsigned long v13;  // 4135
    char v14;  // bl
    char ptr3[2];  // rax
    unsigned long v16;  // 4126
    char v17;  // dl
    char v18;  // bh
    char v19;  // 4163
    void* ptr;  // rax
    char v21;  // 4182
    unsigned long v22;  // 4248
    unsigned long v5;  // cc_dep2
    char *ptr5;  // rcx
    char v24;  // 4117
    unsigned long v25;  // 4136
    char v26;  // 4117
    unsigned long v27;  // 4136
    char v28;  // bl
    char v29;  // 4117
    unsigned long v30;  // 4136
    char *ptr8;  // rax
    char *ptr6;  // rax
    unsigned long v6;  // cc_ndep
    unsigned long v33;  // 4135
    char ptr4[2];  // rcx
    char addr[16777847];  // rax
    unsigned long v36;  // 4135
    char v37;  // 4137
    unsigned long v38;  // 4170
    char v39;  // 4120
    void* p;  // rax
    char v41;  // 4129
    unsigned long v42;  // 4180
    unsigned long v7;  // 4101
    char v43;  // 4148
    unsigned long v44;  // 4201
    char v45;  // 4114
    unsigned long v46;  // 4136
    char *ptr11;  // rcx
    char *ptr7;  // rax
    char *ptr9;  // rcx
    struct_0 *ptr12;  // rdx
    char *ptr10;  // rax
    void* v0;  // [bp-0x10]
    char v1;  // [bp-0x7]

    v7 = _ccall(8, v3, v4, v5, v6);
    if (!((char)v7))
        *(ptr11) = *(ptr11) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    ptr9 = (char *)_INSERT(ptr11, 1, *((char *)((void*)&ptr11 + 1)) + *((char *)&ptr7));
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    ptr10 = (char *)_INSERT(ptr7, 0, *((char *)&ptr7) + *((char *)((void*)&ptr12 + 1)));
    v13 = _ccall(6, 1, (unsigned long long)*((char *)(void*)&ptr7), (unsigned long long)*((char *)((void*)&ptr12 + 1)), v6);
    if ((char)v13)
        *(ptr9) = *(ptr9) + *((char *)&ptr10);
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    ptr12->field_1 = ptr12->field_1 + *((char *)&ptr10);
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    ptr3 = (char [2])_INSERT(ptr10, 0, *((char *)&ptr10) + v14);
    v16 = _ccall(6, 1, (unsigned long long)*((char *)(void*)&ptr10), (unsigned long long)v14, v6);
    if ((char)v16)
        *(ptr9) = *(ptr9) + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[1] = ptr3[1] + *((char *)((void*)&ptr9 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    g_1000277 = g_1000277 + 119;
    v17 = _INSERT(ptr12, 1, *((char *)((void*)&ptr12 + 1)) + 119);
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_20004ee = g_20004ee + v17;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_10002ee = g_10002ee + v18 + 119;
    v19 = g_1000277;
    ptr = 119 + v19 | 0x1000200;
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + 119 + v19;
    *((char *)ptr) = *((char *)ptr) + 119 + v19;
    v21 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + 119 + v19;
    v0 = ptr;
    v22 = _ccall(6, 1, (unsigned long long)v21, (unsigned long long)(119 + v19), v6);
    if ((char)v22)
        *(ptr9) = *(ptr9) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    ptr5 = (char *)_INSERT(ptr9, 0, *((char *)&ptr9) * 2);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v24 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + v17;
    v25 = _ccall(6, 1, (unsigned long long)v24, (unsigned long long)v17, v6);
    if ((char)v25)
        *(ptr5) = *(ptr5) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v26 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + v14;
    v27 = _ccall(6, 1, (unsigned long long)v26, (unsigned long long)v14, v6);
    if ((char)v27)
        *(ptr5) = *(ptr5) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v28 = v14 + *((char *)&ptr5);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v29 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v30 = _ccall(6, 1, (unsigned long long)v29, (unsigned long long)*((char *)(void*)&ptr), v6);
    if ((char)v30)
        *(ptr5) = *(ptr5) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    ptr8 = (char *)_INSERT(ptr, 1, *((char *)((void*)&ptr + 1)) + *((char *)&ptr5));
    *(ptr8) = *(ptr8) + *((char *)&ptr);
    *(ptr8) = *(ptr8) + *((char *)&ptr);
    *(ptr8) = *(ptr8) + *((char *)&ptr);
    ptr6 = (char *)_INSERT(ptr8, 0, *((char *)&ptr) + *((char *)((void*)&ptr + 1)) + *((char *)&ptr5));
    v33 = _ccall(6, 1, (unsigned long long)*((char *)(void*)&ptr), (unsigned long long)(*((char *)((void*)&ptr + 1)) + *((char *)(void*)&ptr5)), v6);
    if (!((char)v33))
        *(ptr5) = *(ptr5) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    ptr4 = (char [2])_INSERT(ptr5, 1, *((char *)((void*)&ptr5 + 1)) + *((char *)&ptr5));
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    addr = (char [16777847])_INSERT(ptr6, 0, *((char *)&ptr6) + *((char *)&ptr5));
    v36 = _ccall(6, 1, (unsigned long long)*((char *)(void*)&ptr6), (unsigned long long)*((char *)(void*)&ptr5), v6);
    if (!((char)v36))
        ptr4[0] = ptr4[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[16777846] = addr[16777846] + v18 + 119;
    addr[0] = addr[0] + *((char *)&addr);
    ptr4[1] = ptr4[1] + *((char *)((void*)&ptr4 + 1));
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    v37 = addr[0];
    addr[0] = addr[0] + *((char *)&addr);
    v38 = _ccall(6, 1, (unsigned long long)v37, (unsigned long long)*((char *)(void*)&addr), v6);
    if (!((char)v38))
        ptr4[0] = ptr4[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[118] = addr[118] + v17 + *((char *)&ptr5) + *((char *)&ptr4);
    v39 = addr[0];
    p = (void*)_INSERT(addr, 0, *((char *)&addr) + v39);
    *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
    v41 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)&addr) + v39;
    v42 = _ccall(1, (unsigned long long)v41, (unsigned long long)(*((char *)(void*)&addr) + v39), v6);
    *((char *)p) = *((char *)p) * 2 | *((char *)p) >> 7;
    *((char *)p) = *((char *)p) + *((char *)&addr) + v39;
    *((char *)p) = *((char *)p) + *((char *)&addr) + v39;
    v43 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)&addr) + v39;
    v44 = _ccall(6, 1, (unsigned long long)v43, (unsigned long long)(*((char *)(void*)&addr) + v39), v42);
    if (!((char)v44))
        ptr4[0] = ptr4[0] + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)(ptr4 + p)) = *((char *)(ptr4 + p)) + *((char *)((void*)&ptr4 + 1));
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    v45 = *((char *)p);
    *((char *)p) = *((char *)p) + v28;
    v46 = _ccall(6, 1, (unsigned long long)v45, (unsigned long long)v28, v42);
    if (!((char)v46))
        ptr4[0] = ptr4[0] + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    v1 = vvar_78{r56|1b} + *((char *)((void*)&ptr4 + 1));
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
}
