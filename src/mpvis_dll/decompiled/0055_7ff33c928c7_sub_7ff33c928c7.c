/* sub_7ff33c928c7 @ 0x7ff33c928c7
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33c928c7  (1375 bytes, 16 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

int sub_7ff33c928c7(void)
{
    unsigned long v7;  // cc_op
    unsigned long v8;  // cc_dep1
    char v17;  // 4158
    char v18;  // 4168
    char v19;  // 4171
    char *ptr20;  // rax
    char v21;  // 4205
    char ptr7[33];  // rax
    char v23;  // 4278
    char v24;  // 4153
    void* ptr17;  // rax
    char v26;  // 4158
    unsigned long v9;  // cc_dep2
    char v27;  // 4168
    char v28;  // 4205
    char ptr9[116];  // rax
    char *ptr27;  // rbx
    char v31;  // 4347
    void* ptr25;  // rax
    char v33;  // 4363
    void* ptr11;  // rax
    char v35;  // 4473
    char *ptr28;  // rax
    unsigned long v10;  // cc_ndep
    char v37;  // 4478
    char v38;  // 4481
    unsigned long long v39;  // 4716
    void* ptr33;  // rax
    char v41;  // cc_dep2
    void* ptr21;  // rax
    char *ptr;  // rax
    char v44;  // 4198
    char *ptr15;  // rax
    char ptr10[33];  // rax
    unsigned long v11;  // 4101
    char v47;  // 4318
    char *ptr29;  // rax
    char v49;  // 4323
    char v50;  // 4326
    unsigned long long v51;  // 4575
    void* ptr30;  // rax
    char v53;  // 4333
    void* ptr22;  // rax
    void* ptr14;  // rax
    char v56;  // 4443
    char ptr18[33];  // rax
    unsigned long v57;  // 4659
    void* ptr6;  // rax
    char v59;  // 4097
    void* p;  // rax
    char v61;  // 4110
    char v62;  // 4287
    void* ptr19;  // rax
    char v64;  // 4300
    char v65;  // 4245
    void* addr;  // rax
    char *ptr13;  // rcx
    char v67;  // 4258
    char v68;  // 4265
    void* ptr3;  // rax
    char v70;  // 4278
    char v71;  // 4225
    void* ptr4;  // rax
    char v73;  // 4238
    char v74;  // 4247
    void* ptr5;  // rax
    char v76;  // 4260
    char *ptr8;  // rdx
    char v77;  // 4213
    void* ptr26;  // rax
    char v79;  // 4229
    void* ptr12;  // rax
    char v81;  // 4171
    char *ptr31;  // rax
    char v83;  // 4176
    char v84;  // 4179
    unsigned long long v85;  // 4346
    void* ptr32;  // rax
    char v15;  // 4153
    char v87;  // 4186
    void* ptr23;  // rax
    char *ptr16;  // rax
    void* ptr24;  // rax
    void* v0;  // [bp-0x30]
    void* v1;  // [bp-0x28]
    void* v2;  // [bp-0x20]
    void* v3;  // [bp-0x18]
    char v4[116];  // [bp-0x10]
    char v5[33];  // [bp-0x8]

    v11 = _ccall(2, v7, v8, v9, v10);
    if ((char)v11)
        ptr18[0] = ptr18[0] + *((char *)&ptr18);
    *(ptr13) = *(ptr13) + *((char *)&ptr18);
    ptr18[0] = ptr18[0] + *((char *)&ptr18);
    ptr18[0] = ptr18[0] + *((char *)&ptr8);
    ptr18[0] = ptr18[0] + *((char *)&ptr18);
    ptr18[0] = ptr18[0] + *((char *)&ptr18);
    ptr18[0] = ptr18[0] + *((char *)&ptr18);
    ptr18[0] = ptr18[0] + *((char *)&ptr18);
    ptr18[0] = ptr18[0] + *((char *)&ptr18);
    ptr18[0] = ptr18[0] + *((char *)&ptr18);
    ptr18[0] = ptr18[0] + *((char *)&ptr18);
    *(ptr13) = *(ptr13) + *((char *)&ptr18);
    ptr18[0] = ptr18[0] + *((char *)&ptr18);
    ptr18[0] = ptr18[0] + *((char *)&ptr18);
    ptr18[32] = ptr18[32] + *((char *)&ptr8);
    v15 = ptr18[0];
    ptr24 = (void*)_INSERT(ptr18, 0, *((char *)&ptr18) + v15);
    v17 = *((char *)ptr24);
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr18) + v15;
    *((unsigned int *)ptr24) = *((int *)ptr24) + (unsigned int)ptr24 + ((unsigned int)(v17 + *((char *)&ptr18) + v15 <= v17 ? 1 : 0) & 1);
    v18 = *((char *)ptr24);
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr18) + v15;
    v19 = *((char *)ptr24);
    ptr20 = (char *)_INSERT(ptr24, 0, *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1));
    *(ptr20) = *(ptr20) + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1);
    *(ptr20) = *(ptr20) + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1);
    *(ptr20) = *(ptr20) + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1);
    *(ptr20) = *(ptr20) + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1);
    *(ptr20) = *(ptr20) | *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1);
    *(ptr20) = *(ptr20) + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1);
    *(ptr20) = *(ptr20) + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1);
    v21 = *(ptr20);
    ptr7 = (char [33])_INSERT(ptr20, 0, *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21);
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    v23 = ptr7[0];
    ptr7[0] = ptr7[0] + *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21;
    v5 = ptr7;
    if ((char)__CFADD__(v23, *((char *)&ptr18) + v15 + v19 + ((char)(v18 + *((char *)&ptr18) + v15 <= v18 ? 1 : 0) & 1) + v21))
        ptr7[0] = ptr7[0] + *((char *)&ptr7);
    *(ptr13) = *(ptr13) + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    *(ptr8) = *(ptr8) + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    *(ptr13) = *(ptr13) + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[32] = ptr7[32] + *((char *)&ptr8);
    v24 = ptr7[0];
    ptr17 = (void*)_INSERT(ptr7, 0, *((char *)&ptr7) + v24);
    v26 = *((char *)ptr17);
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr7) + v24;
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr7) + v24 + ((char)(v26 + *((char *)&ptr7) + v24 <= v26 ? 1 : 0) & 1);
    v27 = *((char *)ptr17);
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr7) + v24;
    *((unsigned int *)ptr17) = *((int *)ptr17) + (unsigned int)ptr17 + ((unsigned int)(v27 + *((char *)&ptr7) + v24 <= v27 ? 1 : 0) & 1);
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr7) + v24;
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr7) + v24;
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr7) + v24;
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr7) + v24;
    *((char *)ptr17) = *((char *)ptr17) | *((char *)&ptr7) + v24;
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr7) + v24;
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr7) + v24;
    v28 = *((char *)ptr17);
    ptr9 = (char [116])_INSERT(ptr17, 0, *((char *)&ptr7) + v24 + v28);
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    v4 = ptr9;
    *(ptr8) = *(ptr8) & *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    *(ptr27) = *(ptr27) + *((char *)&ptr8);
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    *(ptr27) = *(ptr27) + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[0] = ptr9[0] + *((char *)&ptr7) + v24 + v28;
    ptr9[115] = ptr9[115] + *((char *)((void*)&ptr9 + 1));
    v31 = ptr9[0];
    ptr25 = (void*)_INSERT(ptr9, 0, *((char *)&ptr7) + v24 + v28 + v31);
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr7) + v24 + v28 + v31;
    *((unsigned int *)ptr25) = *((int *)ptr25) + (unsigned int)ptr25;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr7) + v24 + v28 + v31;
    v33 = *((char *)ptr25);
    ptr11 = (void*)_INSERT(ptr25, 0, *((char *)&ptr7) + v24 + v28 + v31 + v33);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((unsigned int *)ptr11) = *((int *)ptr11) + (unsigned int)ptr11;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    v3 = ptr11;
    *(ptr8) = *(ptr8) & *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr8);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *(ptr13) = *(ptr13) + *((char *)&ptr8);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr13);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *(ptr8) = *(ptr8) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr7) + v24 + v28 + v31 + v33;
    *((char *)&ptr11[32]) = (char)ptr11[32] + *((char *)&ptr8);
    v35 = *((char *)ptr11);
    ptr28 = (char *)_INSERT(ptr11, 0, *((char *)&ptr7) + v24 + v28 + v31 + v33 + v35);
    v37 = *(ptr28);
    *(ptr28) = *(ptr28) + *((char *)&ptr7) + v24 + v28 + v31 + v33 + v35;
    v38 = *(ptr28);
    v39 = (v37 + *((char *)&ptr7) + v24 + v28 + v31 + v33 + v35 <= v37 ? 1 : 0);
    ptr33 = (void*)_INSERT(ptr28, 0, *((char *)&ptr7) + v24 + v28 + v31 + v33 + v35 + v38 + ((char)(v37 + *((char *)&ptr7) + v24 + v28 + v31 + v33 + v35 <= v37 ? 1 : 0) & 1));
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr7) + v24 + v28 + v31 + v33 + v35 + v38 + ((char)v39 & 1);
    v41 = *((char *)&ptr7) + v24 + v28 + v31 + v33 + v35 + v38 + ((char)(v37 + *((char *)&ptr7) + v24 + v28 + v31 + v33 + v35 <= v37 ? 1 : 0) & 1);
    ptr21 = (unsigned int)ptr33 + *((int *)ptr33) + ((unsigned int)(*((char *)ptr33) + v41 <= *((char *)ptr33) ? 1 : 0) & 1);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    ptr = (unsigned int)ptr21 + *((int *)ptr21);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    v44 = *(ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    InterlockedExchange8(ptr13, *(ptr13) + *((char *)&ptr) + ((char)(v44 + *((char *)&ptr) <= v44 ? 1 : 0) & 1));
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr13) = *(ptr13) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr13) = *(ptr13) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr + 1));
    *(ptr8) = *(ptr8) & *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr8);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr13) = *(ptr13) + *((char *)&ptr8);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr8) = *(ptr8) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    ptr15 = (char *)_INSERT(ptr, 0, *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)));
    *(ptr13) = *(ptr13) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) + ((char)(*((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) <= *((char *)&ptr) ? 1 : 0) & 1);
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr13) = *(ptr13) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr13) = *(ptr13) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)((void*)&ptr8 + 1));
    *(ptr8) = *(ptr8) & *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr8);
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr13) = *(ptr13) + *((char *)&ptr8);
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr15) = *(ptr15) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr8) = *(ptr8) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    *(ptr) = *(ptr) + *((char *)&ptr);
    ptr10 = (char [33])_INSERT(ptr, 0, *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)));
    *(ptr13) = *(ptr13) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) + ((char)(*((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) <= *((char *)&ptr) ? 1 : 0) & 1);
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr13) = *(ptr13) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr13) = *(ptr13) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr27) = *(ptr27) ^ *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr8) = *(ptr8) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr8);
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr13) = *(ptr13) + *((char *)&ptr8);
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    *(ptr8) = *(ptr8) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    ptr10[32] = ptr10[32] + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1));
    v47 = ptr10[0];
    ptr29 = (char *)_INSERT(ptr10, 0, *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) + v47);
    v49 = *(ptr29);
    *(ptr29) = *(ptr29) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) + v47;
    v50 = *(ptr29);
    v51 = (v49 + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) + v47 <= v49 ? 1 : 0);
    ptr30 = (void*)_INSERT(ptr29, 0, *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) + v47 + v50 + ((char)(v49 + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) + v47 <= v49 ? 1 : 0) & 1));
    v53 = *((char *)ptr30);
    *((char *)ptr30) = *((char *)ptr30) + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) + v47 + v50 + ((char)(v49 + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) + v47 <= v49 ? 1 : 0) & 1);
    ptr22 = (unsigned int)ptr30 + *((int *)ptr30) + ((unsigned int)(v53 + *((char *)&ptr) + *((char *)((void*)&ptr8 + 1)) + v47 + v50 + ((char)v51 & 1) <= v53 ? 1 : 0) & 1);
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
    ptr14 = (unsigned int)ptr22 + *((int *)ptr22);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    v56 = *((char *)ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    v57 = _ccall(0, 1, (unsigned long long)v56, (unsigned long long)*((char *)(void*)&ptr14), (v53 + *((char *)(void*)&ptr) + *((char *)((void*)&ptr8 + 1)) + v47 + v50 + ((char)(v49 + *((char *)(void*)&ptr) + *((char *)((void*)&ptr8 + 1)) + v47 <= v49 ? 1 : 0) & 1) <= v53 ? 1 : 0) & 1);
    ptr6 = ptr14;
    if (!((char)v57))
    {
        v59 = *((char *)ptr14);
        p = (void*)_INSERT(ptr14, 0, *((char *)&ptr14) + v59);
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
        v61 = *((char *)p);
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59 + ((char)(v61 + *((char *)&ptr14) + v59 <= v61 ? 1 : 0) & 1);
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *(ptr8) = *(ptr8) & *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *(ptr13) = *(ptr13) + *((char *)&ptr8);
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *(ptr8) = *(ptr8) + *((char *)&ptr8);
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *(ptr8) = *(ptr8) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)p) = *((char *)p) + *((char *)&ptr14) + v59;
        *((char *)&p[116]) = (char)p[116] + *((char *)((void*)&p + 1));
        v62 = *((char *)p);
        ptr19 = (void*)_INSERT(p, 0, *((char *)&ptr14) + v59 + v62);
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr14) + v59 + v62;
        *((unsigned int *)ptr19) = *((int *)ptr19) + (unsigned int)ptr19;
        v64 = *((char *)ptr19);
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr14) + v59 + v62;
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr14) + v59 + v62 + ((char)(v64 + *((char *)&ptr14) + v59 + v62 <= v64 ? 1 : 0) & 1);
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr14) + v59 + v62;
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr14) + v59 + v62;
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr14) + v59 + v62;
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr14) + v59 + v62;
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr14) + v59 + v62;
        ptr6 = ptr19;
    }
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *(ptr8) = *(ptr8) & *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *(ptr13) = *(ptr13) + *((char *)&ptr8);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *(ptr8) = *(ptr8) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)&ptr6[116]) = (char)ptr6[116] + *((char *)&ptr6);
    v65 = *((char *)ptr6);
    addr = (void*)_INSERT(ptr6, 0, *((char *)&ptr6) + v65);
    *((char *)addr) = *((char *)addr) + *((char *)&ptr6) + v65;
    *((unsigned int *)addr) = *((int *)addr) + (unsigned int)addr;
    v67 = *((char *)addr);
    *((char *)addr) = *((char *)addr) + *((char *)&ptr6) + v65;
    *((char *)addr) = *((char *)addr) + *((char *)&ptr6) + v65 + ((char)(v67 + *((char *)&ptr6) + v65 <= v67 ? 1 : 0) & 1);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((unsigned int *)addr) = *((int *)addr) + (unsigned int)addr;
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr8) = *(ptr8) & *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr13) = *(ptr13) + *((char *)&ptr8);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr8) = *(ptr8) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)&addr[116]) = (char)addr[116] + *((char *)&ptr8);
    v68 = *((char *)addr);
    ptr3 = (void*)_INSERT(addr, 0, *((char *)&addr) + v68);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68;
    *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
    v70 = *((char *)ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68 + ((char)(v70 + *((char *)&addr) + v68 <= v70 ? 1 : 0) & 1);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68;
    *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v68;
    *(ptr8) = *(ptr8) & *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *(ptr13) = *(ptr13) + *((char *)&ptr8);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *(ptr8) = *(ptr8) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)&ptr3[116]) = (char)ptr3[116] + *((char *)((void*)&ptr8 + 1));
    v71 = *((char *)ptr3);
    ptr4 = (void*)_INSERT(ptr3, 0, *((char *)&ptr3) + v71);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr3) + v71;
    *((unsigned int *)ptr4) = *((int *)ptr4) + (unsigned int)ptr4;
    v73 = *((char *)ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr3) + v71;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr3) + v71 + ((char)(v73 + *((char *)&ptr3) + v71 <= v73 ? 1 : 0) & 1);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr3) + v71;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr3) + v71;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr3) + v71;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr3) + v71;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr3) + v71;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((unsigned int *)ptr4) = *((int *)ptr4) + (unsigned int)ptr4;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    v2 = ptr4;
    *(ptr8) = *(ptr8) & *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *(ptr13) = *(ptr13) + *((char *)&ptr8);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr13);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *(ptr8) = *(ptr8) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)&ptr4[116]) = (char)ptr4[116] + *((char *)((void*)&ptr4 + 1));
    v74 = *((char *)ptr4);
    ptr5 = (void*)_INSERT(ptr4, 0, *((char *)&ptr4) + v74);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    v76 = *((char *)ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74 + ((char)(v76 + *((char *)&ptr4) + v74 <= v76 ? 1 : 0) & 1);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    v1 = ptr5;
    *(ptr8) = *(ptr8) & *((char *)&ptr4) + v74;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4) + v74;
    *(ptr13) = *(ptr13) + *((char *)&ptr8);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr13);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *(ptr8) = *(ptr8) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)&ptr5[116]) = (char)ptr5[116] + *((char *)((void*)&ptr8 + 1));
    v77 = *((char *)ptr5);
    ptr26 = (void*)_INSERT(ptr5, 0, *((char *)&ptr5) + v77);
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v77;
    *((unsigned int *)ptr26) = *((int *)ptr26) + (unsigned int)ptr26;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v77;
    v79 = *((char *)ptr26);
    ptr12 = (void*)_INSERT(ptr26, 0, *((char *)&ptr5) + v77 + v79);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr5) + v77 + v79;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr5) + v77 + v79;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr5) + v77 + v79;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr5) + v77 + v79;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr5) + v77 + v79;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr5) + v77 + v79;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr5) + v77 + v79;
    *((unsigned int *)ptr12) = *((int *)ptr12) + (unsigned int)ptr12;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    v0 = ptr12;
    *(ptr8) = *(ptr8) & *((char *)&ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *(ptr13) = *(ptr13) + *((char *)&ptr8);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr13);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *(ptr8) = *(ptr8) + *((char *)&ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *((char *)&ptr12[32]) = (char)ptr12[32] + *((char *)&ptr8);
    v81 = *((char *)ptr12);
    ptr31 = (char *)_INSERT(ptr12, 0, *((char *)&ptr12) + v81);
    v83 = *(ptr31);
    *(ptr31) = *(ptr31) + *((char *)&ptr12) + v81;
    v84 = *(ptr31);
    v85 = (v83 + *((char *)&ptr12) + v81 <= v83 ? 1 : 0);
    ptr32 = (void*)_INSERT(ptr31, 0, *((char *)&ptr12) + v81 + v84 + ((char)(v83 + *((char *)&ptr12) + v81 <= v83 ? 1 : 0) & 1));
    v87 = *((char *)ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr12) + v81 + v84 + ((char)(v83 + *((char *)&ptr12) + v81 <= v83 ? 1 : 0) & 1);
    ptr23 = (unsigned int)ptr32 + *((int *)ptr32) + ((unsigned int)(v87 + *((char *)&ptr12) + v81 + v84 + ((char)v85 & 1) <= v87 ? 1 : 0) & 1);
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr23);
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr23);
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr23);
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr23);
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr23);
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr23);
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr23);
    ptr16 = (unsigned int)ptr23 + *((int *)ptr23);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
}
