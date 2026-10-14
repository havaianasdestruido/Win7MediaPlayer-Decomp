/* sub_100010619 @ 0x100010619
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100010619  (1661 bytes, 32 basic blocks)
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

int sub_100010619(void)
{
    unsigned long v6;  // cc_op
    unsigned long v7;  // cc_dep1
    unsigned long v16;  // 4211
    char v17;  // 4097
    void* ptr3;  // rax
    char v19;  // 4170
    unsigned long v20;  // 4217
    char *ptr23;  // rbx
    char v22;  // 4141
    void* ptr12;  // rax
    char v24;  // 4198
    void* ptr26;  // rax
    unsigned long v8;  // cc_dep2
    char v26;  // 4208
    void* ptr10;  // rax
    char v28;  // 4218
    unsigned long v29;  // 4319
    void* ptr25;  // rdx
    char v31;  // 4190
    void* ptr27;  // rax
    char v33;  // 4200
    unsigned long long v34;  // cc_ndep
    char ptr30[3];  // rdi
    unsigned long v9;  // cc_ndep
    void* ptr7;  // rax
    unsigned long v37;  // 4276
    unsigned long long v38;  // r12
    char v39;  // 4200
    unsigned long v40;  // 4265
    void* ptr15;  // rax
    void* ptr31;  // rax
    void* ptr;  // rax
    char v44;  // 4213
    unsigned long v45;  // 4288
    unsigned long v10;  // 4101
    void* ptr16;  // rax
    void* ptr32;  // rax
    char *ptr34;  // rax
    char v49;  // 4202
    unsigned long v50;  // 4267
    char v51;  // 4255
    void* ptr13;  // rax
    char v53;  // 4312
    void* ptr28;  // rax
    char v55;  // 4322
    char ptr8[65537];  // rcx
    void* ptr9;  // rax
    char v57;  // 4332
    unsigned long v58;  // 4495
    char v59;  // 4134
    char v60;  // 4192
    void* ptr29;  // rax
    char v62;  // 4202
    void* ptr21;  // rax
    char *ptr18;  // rax
    unsigned long v65;  // 4383
    void* ptr4;  // rax
    void* ptr6;  // rax
    unsigned long v67;  // 4208
    char v68;  // 4574
    void* ptr5;  // rax
    char v70;  // 4423
    unsigned long long v71;  // cc_ndep
    void* ptr20;  // rax
    void* p;  // rax
    char v74;  // 4204
    unsigned long v75;  // 4267
    char v13;  // 4134
    char *ptr14;  // rax
    unsigned long v77;  // 4450
    void* ptr22;  // rax
    void* ptr11;  // rax
    unsigned long v80;  // 4275
    void* addr;  // rax
    char v82;  // 4238
    char v83;  // 4256
    unsigned long v84;  // 4359
    char v85;  // 4097
    unsigned long v14;  // 4163
    void* ptr17;  // rax
    void* ptr33;  // rax
    void* ptr19;  // rax
    char v89;  // 4170
    unsigned long v90;  // 4223
    char v91;  // 4141
    void* ptr24;  // rax
    unsigned long long v93;  // rdx
    struct_0 *ptr35;  // rsi
    char v15;  // 4166
    unsigned long long v0;  // [bp-0x9f]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long long v3;  // [bp-0x8]

    v10 = _ccall(12, v6, v7, v8, v9);
    if (Conv(64I->1I, vvar_225)) { Goto None } else { Goto None }
    ptr8[0] = ptr8[0] + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    v13 = *((char *)ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    v14 = _ccall(8, 1, (unsigned long long)v13, (unsigned long long)*((char *)(void*)&ptr4), v9);
    if ((char)v14)
    {
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
        v15 = *((char *)ptr4);
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
        v16 = _ccall(12, 1, (unsigned long long)v15, (unsigned long long)*((char *)(void*)&ptr4), v9);
        if (!((char)v16))
            goto LABEL_1000105db;
LABEL_1000105db:
        ptr8[0] = ptr8[0] + *((char *)&ptr4);
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr8);
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    }
    v17 = *((char *)ptr4);
    ptr3 = (void*)_INSERT(ptr4, 0, *((char *)&ptr4) + v17);
    *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) | *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    *((char *)ptr3) = *((char *)ptr3) | *((char *)&ptr4) + v17;
    v19 = *((char *)ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr4) + v17;
    v20 = _ccall(8, 1, (unsigned long long)v19, (unsigned long long)(*((char *)(void*)&ptr4) + v17), v9);
    if (!((char)v20))
    {
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
        *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
        *((char *)&ptr3[126]) = (char)ptr3[126] + *((char *)&ptr23);
        v22 = *((char *)ptr3);
        ptr12 = (void*)_INSERT(ptr3, 0, *((char *)&ptr3) + v22);
        *((unsigned int *)ptr12) = *((int *)ptr12) + (unsigned int)ptr12;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        *((unsigned int *)ptr12) = *((int *)ptr12) + (unsigned int)ptr12;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        v24 = *((char *)ptr12);
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3) + v22;
        ptr26 = (unsigned int)ptr12 + *((int *)ptr12) + ((unsigned int)(v24 + *((char *)&ptr3) + v22 <= v24 ? 1 : 0) & 1);
        v26 = *((char *)ptr26);
        *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr26);
        ptr10 = (unsigned int)ptr26 + *((int *)ptr26) + ((unsigned int)(v26 + *((char *)&ptr26) <= v26 ? 1 : 0) & 1);
        v28 = *((char *)ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        v29 = _ccall(12, 1, (unsigned long long)v28, (unsigned long long)*((char *)(void*)&ptr10), (v26 + *((char *)(void*)&ptr26) <= v26 ? 1 : 0) & 1);
        if (!((char)v29))
            goto LABEL_10001069b;
LABEL_10001069b:
        ptr8[0] = ptr8[0] + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)&ptr25[65538]) = (char)ptr25[65538] | *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((unsigned int *)ptr10) = *((int *)ptr10) + (unsigned int)ptr10;
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        v31 = *((char *)ptr10);
        *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
        ptr27 = (unsigned int)ptr10 + *((int *)ptr10) + ((unsigned int)(v31 + *((char *)&ptr10) <= v31 ? 1 : 0) & 1);
        v33 = *((char *)ptr27);
        *((char *)ptr27) = *((char *)ptr27) + *((char *)&ptr27);
        v34 = (v33 + *((char *)&ptr27) <= v33 ? 1 : 0) & 1;
        ptr3 = (unsigned int)ptr27 + *((int *)ptr27) + ((unsigned int)(v33 + *((char *)&ptr27) <= v33 ? 1 : 0) & 1);
    }
    *((char *)&ptr3[16777341]) = (char)ptr3[16777341] + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)((void*)&ptr3 + 1));
    *((unsigned int *)ptr25) = *((int *)ptr25) + 0x100;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    ptr8[0] = ptr8[0] + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    ptr30[0] = ptr30[0] + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    ptr30[0] = ptr30[0] + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    ptr7 = (void*)_INSERT(ptr3, 0, *((char *)&ptr3) + *((char *)((void*)&ptr3 + 1)));
    v37 = _ccall(12, 1, (unsigned long long)*((char *)(void*)&ptr3), (unsigned long long)*((char *)((void*)&ptr3 + 1)), v34);
    if (Conv(64I->1I, vvar_238)) { Goto None } else { Goto None }
    ptr8[0] = ptr8[0] + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr8);
    *((unsigned int *)ptr25) = *((int *)ptr25) + 0x100;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)&ptr7[90]) = (char)ptr7[90] + *((char *)&ptr25);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((unsigned int *)ptr7) = *((int *)ptr7) + (unsigned int)ptr7;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((unsigned int *)ptr7) = *((int *)ptr7) + (unsigned int)ptr7;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    v3 = v38;
    *((char *)ptr7) = *((char *)ptr7) | *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) | *((char *)&ptr7);
    v39 = *((char *)ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    v40 = _ccall(14, 1, (unsigned long long)v39, (unsigned long long)*((char *)(void*)&ptr7), v34);
    if (Conv(64I->1I, vvar_241)) { Goto None } else { Goto None }
    ptr8[0] = ptr8[0] + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    ptr8[0] = ptr8[0] + *((char *)&ptr8);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    ptr15 = (void*)_INSERT(ptr7, 0, *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1)));
    *((char *)ptr25) = *((char *)ptr25);
    *((unsigned int *)ptr15) = *((int *)ptr15) + (unsigned int)ptr15;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    *((unsigned int *)ptr15) = *((int *)ptr15) + (unsigned int)ptr15;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr7) + *((char *)((void*)&ptr8 + 1));
    ptr31 = (unsigned int)ptr15 | *((int *)ptr15);
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&ptr31);
    ptr = (unsigned int)ptr31 | *((int *)ptr31);
    v44 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v45 = _ccall(8, 1, (unsigned long long)v44, (unsigned long long)*((char *)(void*)&ptr), v34);
    if (!((char)v45))
    {
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
        ptr16 = (void*)_INSERT(ptr, 0, *((char *)&ptr) + *((char *)&ptr8));
        *((char *)ptr25) = *((char *)ptr25);
        *((unsigned int *)ptr16) = *((int *)ptr16) + (unsigned int)ptr16;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        *((unsigned int *)ptr16) = *((int *)ptr16) + (unsigned int)ptr16;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr) + *((char *)&ptr8);
        ptr32 = (unsigned int)ptr16 | *((int *)ptr16);
        *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
        ptr34 = (unsigned int)ptr32 | *((int *)ptr32);
        *(ptr34) = *(ptr34) + *((char *)&ptr34);
        ptr = (void*)_INSERT(ptr34, 0, 126);
        *((char *)ptr) = *((char *)ptr) + 126;
        *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)&ptr[16777856]) = (char)ptr[16777856] + *((char *)((void*)&ptr8 + 1));
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        ptr8[0] = ptr8[0] + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *((char *)ptr) = *((char *)ptr) + 126;
        *(ptr23) = *(ptr23) + *((char *)&ptr8);
        *((char *)ptr) = *((char *)ptr) + 126;
        *(ptr23) = *(ptr23) + *((char *)&ptr8);
        *((char *)ptr) = *((char *)ptr) + 126;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 4295034904()
    ptr8[0] = ptr8[0] + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)&ptr[65538]) = (char)ptr[65538];
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    ptr8[0] = ptr8[0] + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr8);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr8);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v49 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)((void*)&ptr + 1));
    v50 = _ccall(14, 1, (unsigned long long)v49, (unsigned long long)*((char *)((void*)&ptr + 1)), v34);
    if (Conv(64I->1I, vvar_245)) { Goto None } else { Goto None }
    ptr8[0] = ptr8[0] + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v2 = 16777856;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    ptr8[0] = ptr8[0] + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr8);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr8);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)&ptr[127]) = (char)ptr[127] + *((char *)&ptr23);
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
    *((char *)&ptr[128]) = (char)ptr[128] + *((char *)&ptr8);
    v51 = *((char *)ptr);
    ptr13 = (void*)_INSERT(ptr, 0, *((char *)&ptr) + v51);
    *((unsigned int *)ptr13) = *((int *)ptr13) + (unsigned int)ptr13;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    *((unsigned int *)ptr13) = *((int *)ptr13) + (unsigned int)ptr13;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    v53 = *((char *)ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v51;
    ptr28 = (unsigned int)ptr13 + *((int *)ptr13) + ((unsigned int)(v53 + *((char *)&ptr) + v51 <= v53 ? 1 : 0) & 1);
    v55 = *((char *)ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    ptr9 = (unsigned int)ptr28 + *((int *)ptr28) + ((unsigned int)(v55 + *((char *)&ptr28) <= v55 ? 1 : 0) & 1);
    v57 = *((char *)ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    v58 = _ccall(14, 1, (unsigned long long)v57, (unsigned long long)*((char *)(void*)&ptr9), (v55 + *((char *)(void*)&ptr28) <= v55 ? 1 : 0) & 1);
    if (Conv(64I->1I, vvar_251)) { Goto None } else { Goto None }
    ptr8[0] = ptr8[0] + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    ptr8[0] = ptr8[0] + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    v59 = *((char *)ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)&ptr9[65538]) = (char)ptr9[65538] - *((char *)&ptr9) - ((char)(v59 + *((char *)&ptr9) <= v59 ? 1 : 0) & 1);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((unsigned int *)ptr9) = *((int *)ptr9) + (unsigned int)ptr9;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    v60 = *((char *)ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    ptr29 = (unsigned int)ptr9 + *((int *)ptr9) + ((unsigned int)(v60 + *((char *)&ptr9) <= v60 ? 1 : 0) & 1);
    v62 = *((char *)ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    ptr21 = (unsigned int)ptr29 + *((int *)ptr29) + ((unsigned int)(v62 + *((char *)&ptr29) <= v62 ? 1 : 0) & 1);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    v1 = vvar_77{r56|8b};
    *((unsigned int *)ptr21) = *((int *)ptr21) + (unsigned int)ptr21;
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    ptr18 = (char *)_INSERT(ptr21, 0, *((char *)&ptr21) + *((char *)&ptr25));
    v65 = _ccall(14, 1, (unsigned long long)*((char *)(void*)&ptr21), (unsigned long long)*((char *)(void*)&ptr25), (v62 + *((char *)(void*)&ptr29) <= v62 ? 1 : 0) & 1);
    if ((char)v65)
        ptr8[0] = ptr8[0] + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    ptr8[0] = ptr8[0] + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr23) = *(ptr23) + *((char *)&ptr8);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr23) = *(ptr23) + *((char *)&ptr8);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    ptr6 = (void*)_INSERT(ptr18, 0, *((char *)&ptr18) + *((char *)((void*)&ptr23 + 1)));
    v67 = _ccall(14, 1, (unsigned long long)*((char *)(void*)&ptr18), (unsigned long long)*((char *)((void*)&ptr23 + 1)), (v62 + *((char *)(void*)&ptr29) <= v62 ? 1 : 0) & 1);
    if (!((char)v67))
        goto LABEL_10001095b;
LABEL_10001095b:
    ptr8[0] = ptr8[0] + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)&ptr6[16777855]) = (char)ptr6[16777855] + *((char *)((void*)&ptr23 + 1));
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    ptr8[0] = ptr8[0] + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *(ptr23) = *(ptr23) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *(ptr23) = *(ptr23) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr25);
    *((char *)ptr6) = *((char *)ptr6);
    *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr6);
    v68 = *(0x100027f);
    ptr5 = (void*)_INSERT(ptr6, 0, v68);
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    ptr8[0] = ptr8[0] + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *(ptr23) = *(ptr23) + *((char *)&ptr25);
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *(ptr23) = *(ptr23) + *((char *)&ptr25);
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)((void*)&ptr8 + 1));
    *((char *)ptr5) = *((char *)ptr5);
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    *((char *)ptr5) = *((char *)ptr5) + v68;
    v70 = *((char *)ptr5);
    *((char *)ptr5) = *((char *)ptr5) + v68;
    v71 = (v70 + v68 <= v70 ? 1 : 0) & 1;
    ptr20 = (unsigned int)ptr5 + 0x15000000 + ((unsigned int)(v70 + v68 <= v70 ? 1 : 0) & 1);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)&ptr20[128]) = (char)ptr20[128] + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((unsigned int *)ptr20) = *((int *)ptr20) + (unsigned int)ptr20;
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)&ptr20[127]) = (char)ptr20[127] + *((char *)((void*)&ptr20 + 1));
    p = (void*)_INSERT(ptr20, 0, *((char *)&ptr20) + *((char *)ptr20));
    *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) | *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) | *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    v0 = 16777344;
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    v74 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)((void*)&ptr25 + 1));
    v75 = _ccall(14, 1, (unsigned long long)v74, (unsigned long long)*((char *)((void*)&ptr25 + 1)), v71);
    if ((char)v75)
        ptr8[0] = ptr8[0] + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    ptr8[0] = ptr8[0] + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&ptr8);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&ptr8);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[16777344]) = (char)p[16777344] + *((char *)&ptr23);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    ptr30[2] = ptr30[2] + *((char *)((void*)&ptr23 + 1));
    ptr8[0] = ptr8[0] + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    ptr8[0] = ptr8[0] + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&ptr8);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&ptr8);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[16777344]) = (char)p[16777344] + *((char *)((void*)&ptr25 + 1));
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    ptr14 = (char *)_INSERT(p, 0, *((char *)&p) + *((char *)((void*)&p + 1)));
    v77 = _ccall(14, 1, (unsigned long long)*((char *)(void*)&p), (unsigned long long)*((char *)((void*)&p + 1)), v71);
    if (!((char)v77))
        ptr8[0] = ptr8[0] + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    ptr8[0] = ptr8[0] + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr8);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr8);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    ptr22 = (void*)_INSERT(ptr14, 0, *((char *)&ptr14) + *((char *)((void*)&ptr14 + 1)));
    *((char *)ptr22) = *((char *)ptr22);
    *((unsigned int *)ptr22) = *((int *)ptr22) + (unsigned int)ptr22;
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr14) + *((char *)((void*)&ptr14 + 1));
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr14) + *((char *)((void*)&ptr14 + 1));
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr14) + *((char *)((void*)&ptr14 + 1));
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr14) + *((char *)((void*)&ptr14 + 1));
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr14) + *((char *)((void*)&ptr14 + 1));
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr14) + *((char *)((void*)&ptr14 + 1));
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr14) + *((char *)((void*)&ptr14 + 1));
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr14) + *((char *)((void*)&ptr14 + 1));
    ptr11 = (void*)_INSERT(ptr22, 0, (*((char *)&ptr14) + *((char *)((void*)&ptr14 + 1))) * 2);
    v80 = _ccall(14, 1, (unsigned long long)(*((char *)(void*)&ptr14) + *((char *)((void*)&ptr14 + 1))), (unsigned long long)(*((char *)(void*)&ptr14) + *((char *)((void*)&ptr14 + 1))), v71);
    if (!((char)v80))
        ptr8[0] = ptr8[0] + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    ptr8[0] = ptr8[0] + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr8);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr8);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)&ptr11[127]) = (char)ptr11[127] + *((char *)&ptr11);
    do
    {
        addr = ptr11;
        ptr8[0] = ptr8[0] + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)&addr[16777854]) = (char)addr[16777854] + *((char *)((void*)&addr + 1));
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        ptr8[0] = ptr8[0] + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&ptr8);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&ptr8);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)&addr[127]) = (char)addr[127] + *((char *)&ptr23);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((unsigned int *)addr) = *((int *)addr) + (unsigned int)addr;
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        v82 = *((char *)addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr) + ((char)(v82 + *((char *)&addr) <= v82 ? 0 : 1) & 1);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        v83 = *((char *)addr);
        *((char *)addr) = *((char *)addr) + *((char *)&addr);
        v84 = _ccall(8, 1, (unsigned long long)v83, (unsigned long long)*((char *)(void*)&addr), (v82 + *((char *)(void*)&addr) <= v82 ? 1 : 0) & 1);
        if ((char)v84)
            goto LABEL_100010c30;
        v85 = *((char *)addr);
        ptr17 = (void*)_INSERT(addr, 0, *((char *)&addr) + v85);
        *((unsigned int *)ptr17) = *((int *)ptr17) + (unsigned int)ptr17;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        *((unsigned int *)ptr17) = *((int *)ptr17) + (unsigned int)ptr17;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&addr) + v85;
        ptr33 = (unsigned int)ptr17 | *((int *)ptr17);
        *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr33);
        ptr19 = (unsigned int)ptr33 | *((int *)ptr33);
        v89 = *((char *)ptr19);
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
        v90 = _ccall(8, 1, (unsigned long long)v89, (unsigned long long)*((char *)(void*)&ptr19), (v82 + *((char *)(void*)&addr) <= v82 ? 1 : 0) & 1);
        ptr11 = ptr19;
    } while ((char)v90);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((unsigned int *)ptr19) = *((int *)ptr19) + (unsigned int)ptr19;
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)&ptr19[126]) = (char)ptr19[126] + *((char *)&ptr19);
    v91 = *((char *)ptr19);
    ptr24 = (void*)_INSERT(ptr19, 0, *((char *)&ptr19) + v91);
    *((unsigned int *)ptr24) = *((int *)ptr24) + (unsigned int)ptr24;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr19) + v91;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr19) + v91;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr19) + v91;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr19) + v91;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr19) + v91;
    addr = *((unsigned short *)&ptr24);
    v93 = v0;
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((unsigned int *)addr) = *((int *)addr) + (unsigned int)addr;
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((unsigned int *)addr) = *((int *)addr) + (unsigned int)addr;
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) | *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) | *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    ptr8[0x10000] = ptr8[0x10000];
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
LABEL_100010c30:
    ptr35->field_2 = ptr35->field_2 - *((char *)((void*)&ptr23 + 1));
}
