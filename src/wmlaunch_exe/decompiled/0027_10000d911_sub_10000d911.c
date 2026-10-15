/* sub_10000d911 @ 0x10000d911
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10000d911  (359 bytes, 27 basic blocks)
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
    char padding_0[2];
    char field_2;
} struct_0;

typedef struct struct_1 {
    char padding_0[2];
    char field_2;
} struct_1;

typedef struct struct_2 {
    char padding_0[1];
    char field_1;
} struct_2;

int sub_10000d911(void)
{
    unsigned long v1;  // cc_op
    unsigned long v2;  // cc_dep1
    char v11;  // dl
    char v12;  // dl
    char v13;  // bl
    char v14;  // 4168
    void* p;  // rax
    char v16;  // 4190
    char v17;  // 4114
    char *ptr16;  // rcx
    char *ptr10;  // rax
    struct_1 *ptr20;  // rdx
    unsigned long v3;  // cc_dep2
    char ptr6[16777843];  // rax
    char ptr3[16777843];  // rax
    void* v23;  // rcx
    char v24;  // 4166
    void* ptr5;  // rax
    char v26;  // 4175
    unsigned long v27;  // 4232
    char v28;  // 4109
    void* ptr;  // rax
    void* ptr11;  // rcx
    unsigned long v4;  // cc_ndep
    char v31;  // 4106
    char v32;  // bl
    char v33;  // 4117
    struct_2 *ptr21;  // rsi
    char v35;  // 4114
    unsigned long long v36;  // cc_ndep
    char *ptr15;  // rax
    char *ptr12;  // rax
    unsigned long v39;  // 4193
    char *ptr17;  // rcx
    unsigned long v5;  // 4101
    char *ptr13;  // rax
    unsigned long v42;  // 4135
    char ptr7[16777842];  // rax
    unsigned long v44;  // 4135
    char ptr4[16777842];  // rax
    char v46;  // 4159
    void* ptr8;  // rax
    char v48;  // 4105
    void* ptr18;  // rax
    char *ptr19;  // rcx
    char *ptr14;  // rax
    struct_0 *ptr22;  // rbx
    char ptr9[2];  // rcx
    char addr[16777844];  // rax

    v5 = _ccall(2, v1, v2, v3, v4);
    if ((char)v5)
        *(ptr19) = *(ptr19) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    ptr9 = (char [2])_INSERT(ptr19, 0, *((char *)&ptr19) + *((char *)&ptr22));
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    addr = (char [16777844])_INSERT(ptr14, 0, *((char *)&ptr14) * 2);
    if ((char)__CFADD__(*((char *)&ptr14), *((char *)&ptr14)))
        ptr9[0] = ptr9[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    v12 = v11 + *((char *)&ptr22);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[16777843] = addr[16777843] + v12;
    addr[0] = addr[0] + *((char *)&addr);
    ptr9[1] = ptr9[1] + *((char *)((void*)&ptr22 + 1));
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    ptr22->field_2 = v12;
    ptr9[0] = ptr9[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    v13 = *((char *)&ptr22) * 2;
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[115] = addr[115] + *((char *)((void*)&addr + 1));
    v14 = addr[0];
    p = (void*)_INSERT(addr, 0, *((char *)&addr) + v14);
    *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
    *((char *)p) = *((char *)p) + *((char *)&addr) + v14;
    [D] PutI(904:F64x8)[t149,0] = t150()
    [D] PutI(968:I8x8)[t149,0] = 0x01()
    *((char *)p) = *((char *)p) + *((char *)&addr) + v14;
    *((char *)p) = *((char *)p) + *((char *)&addr) + v14;
    v16 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)&addr) + v14;
    if ((char)__CFADD__(v16, *((char *)&addr) + v14))
        ptr9[0] = ptr9[0] + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)(ptr9 + p)) = *((char *)(ptr9 + p)) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    v17 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)((void*)&ptr9 + 1));
    if ((char)__CFADD__(v17, *((char *)((void*)&ptr9 + 1))))
        ptr9[0] = ptr9[0] + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    ptr16 = (char *)_INSERT(ptr9, 1, *((char *)((void*)&ptr9 + 1)) + v13);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    ptr10 = (char *)_INSERT(p, 0, *((char *)&p) + v13);
    if (!((char)__CFADD__(*((char *)&p), v13)))
        *(ptr16) = *(ptr16) + *((char *)&ptr10);
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    ptr20 = (struct_1 *)_INSERT(v12, 1, v12 + v13);
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    ptr6 = (char [16777843])_INSERT(ptr10, 0, *((char *)&ptr10) + *((char *)&ptr16));
    if (!((char)__CFADD__(*((char *)&ptr10), *((char *)&ptr16))))
        *(ptr16) = *(ptr16) + *((char *)&ptr6);
    ptr6[0] = ptr6[0] + *((char *)&ptr6);
    ptr6[0] = ptr6[0] + *((char *)&ptr6);
    ptr6[0] = ptr6[0] + *((char *)&ptr6);
    ptr6[0] = ptr6[0] + *((char *)&ptr6);
    ptr6[16777842] = ptr6[16777842] + *((char *)((void*)&ptr16 + 1));
    ptr6[0] = ptr6[0] + *((char *)&ptr6);
    ptr3 = (char [16777843])_INSERT(ptr6, 0, *((char *)&ptr6) + *((char *)((void*)&ptr6 + 1)));
    ptr3[0] = ptr3[0] + *((char *)&ptr6) + *((char *)((void*)&ptr6 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr6) + *((char *)((void*)&ptr6 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr6) + *((char *)((void*)&ptr6 + 1));
    ptr3[16777842] = ptr3[16777842] + *((char *)&ptr16);
    ptr3[0] = ptr3[0] + *((char *)&ptr6) + *((char *)((void*)&ptr6 + 1));
    v23 = (void*)_INSERT(ptr16, 0, *((char *)&ptr16) + *((char *)((void*)&ptr6 + 1)));
    ptr3[0] = ptr3[0] + *((char *)&ptr6) + *((char *)((void*)&ptr6 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr6) + *((char *)((void*)&ptr6 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr6) + *((char *)((void*)&ptr6 + 1));
    ptr3[114] = ptr3[114] + *((char *)((void*)&ptr20 + 1));
    v24 = ptr3[0];
    ptr5 = (void*)_INSERT(ptr3, 0, *((char *)&ptr6) + *((char *)((void*)&ptr6 + 1)) + v24);
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    v26 = *((char *)ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr6) + *((char *)((void*)&ptr6 + 1)) + v24;
    v27 = _ccall(12, 1, (unsigned long long)v26, (unsigned long long)(*((char *)(void*)&ptr6) + *((char *)((void*)&ptr6 + 1)) + v24), v4);
    if (!((char)v27))
        [D] Unsupported jumpkind Ijk_NoDecode at address 4295023050()
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)&ptr5[114]) = (char)ptr5[114] + *((char *)((void*)&ptr5 + 1));
    v28 = *((char *)ptr5);
    ptr = (void*)_INSERT(ptr5, 0, *((char *)&ptr5) + *((char *)ptr5));
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr5) + v28;
    ptr11 = v23 - 1;
    if (((vvar_122{r24|8b} - 0x1<64>) != 0x0<64>)) { Goto None } else { Goto None }
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v31 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    if (!((char)__CFADD__(v31, *((char *)&ptr))))
        *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v32 = (char)_INSERT(v13, 1, v13 * 2) + *((char *)((void*)&ptr + 1));
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v33 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)((void*)&ptr11 + 1));
    if (!((char)__CFADD__(v33, *((char *)((void*)&ptr11 + 1)))))
        *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    ptr21->field_1 = ptr21->field_1 + v32;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v35 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    ptr20->field_2 = ptr20->field_2 + *((char *)((void*)&ptr20 + 1)) + ((char)(v35 + *((char *)&ptr) <= v35 ? 1 : 0) & 1);
    v36 = (v35 + *((char *)&ptr) <= v35 ? 1 : 0) & 1;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    ptr15 = (char *)_INSERT(ptr, 1, *((char *)((void*)&ptr + 1)) * 2);
    *(ptr15) = *(ptr15) + *((char *)&ptr);
    *(ptr15) = *(ptr15) + *((char *)&ptr);
    *(ptr15) = *(ptr15) + *((char *)&ptr);
    ptr12 = (char *)_INSERT(ptr15, 0, *((char *)&ptr) + *((char *)((void*)&ptr20 + 1)));
    v39 = _ccall(0, 1, (unsigned long long)*((char *)(void*)&ptr), (unsigned long long)*((char *)((void*)&ptr20 + 1)), (v35 + *((char *)(void*)&ptr) <= v35 ? 1 : 0) & 1);
    if ((char)v39)
        *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    ptr17 = (char *)_INSERT(ptr11, 1, *((char *)((void*)&ptr11 + 1)) + *((char *)((void*)&ptr12 + 1)));
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    ptr13 = (char *)_INSERT(ptr12, 0, *((char *)&ptr12) + v32);
    v42 = _ccall(0, 1, (unsigned long long)*((char *)(void*)&ptr12), (unsigned long long)v32, v36);
    if ((char)v42)
        *(ptr17) = *(ptr17) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    ptr7 = (char [16777842])_INSERT(ptr13, 0, *((char *)&ptr13) * 2);
    v44 = _ccall(0, 1, (unsigned long long)*((char *)(void*)&ptr13), (unsigned long long)*((char *)(void*)&ptr13), v36);
    if ((char)v44)
        *(ptr17) = *(ptr17) + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[16777841] = ptr7[16777841] + *((char *)((void*)&ptr7 + 1));
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr4 = (char [16777842])_INSERT(ptr7, 0, *((char *)&ptr7) + *((char *)((void*)&ptr17 + 1)));
    ptr4[0] = ptr4[0] + *((char *)&ptr7) + *((char *)((void*)&ptr17 + 1));
    ptr4[0] = ptr4[0] + *((char *)&ptr7) + *((char *)((void*)&ptr17 + 1));
    ptr4[0] = ptr4[0] + *((char *)&ptr7) + *((char *)((void*)&ptr17 + 1));
    ptr4[16777841] = ptr4[16777841] + (char)_INSERT(ptr20, 1, *((char *)((void*)&ptr20 + 1)) + *((char *)((void*)&ptr13 + 1)));
    ptr4[0] = ptr4[0] + *((char *)&ptr7) + *((char *)((void*)&ptr17 + 1));
    ptr4[1] = ptr4[1] + *((char *)&ptr7) + *((char *)((void*)&ptr17 + 1));
    ptr4[0] = ptr4[0] + *((char *)&ptr7) + *((char *)((void*)&ptr17 + 1));
    ptr4[113] = ptr4[113] + v32 + *((char *)((void*)&ptr7 + 1));
    v46 = ptr4[0];
    ptr8 = (void*)_INSERT(ptr4, 0, *((char *)&ptr7) + *((char *)((void*)&ptr17 + 1)) + ptr4[0]);
    *((unsigned int *)ptr8) = *((int *)ptr8) + (unsigned int)ptr8;
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr7) + *((char *)((void*)&ptr17 + 1)) + v46;
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)&ptr8[113]) = (char)ptr8[113] + (char)_INSERT(v32, 1, v32 + *((char *)((void*)&ptr7 + 1)));
    v48 = *((char *)ptr8);
    ptr18 = (void*)_INSERT(ptr8, 0, *((char *)&ptr8) + *((char *)ptr8));
    *((unsigned int *)ptr18) = *((int *)ptr18) + (unsigned int)ptr18;
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr8) + v48;
}
