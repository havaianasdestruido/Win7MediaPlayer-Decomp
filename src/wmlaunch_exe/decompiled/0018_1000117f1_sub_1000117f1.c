/* sub_1000117f1 @ 0x1000117f1
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x1000117f1  (1432 bytes, 31 basic blocks)
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
    char padding_3[65533];
    char field_10000;
} struct_0;

extern char g_1000277;

int sub_1000117f1(void)
{
    unsigned long v3;  // cc_op
    unsigned long v4;  // cc_dep1
    char v13;  // 4446
    unsigned long v14;  // 4652
    char v15;  // 4202
    unsigned long v16;  // 4267
    char v17;  // 4097
    void* ptr12;  // rax
    void* ptr10;  // rax
    unsigned int *ptr23;  // rax
    char *ptr17;  // rax
    char v22;  // 4111
    unsigned long v5;  // cc_dep2
    void* ptr14;  // rax
    unsigned int *ptr24;  // rax
    void* addr;  // rax
    char v26;  // 4182
    unsigned long v27;  // 4235
    char v28;  // 4202
    unsigned long v29;  // 4269
    char v30;  // 4206
    unsigned long v31;  // 4271
    void* ptr20;  // rax
    unsigned long v6;  // cc_ndep
    void* ptr22;  // rax
    char *ptr25;  // rax
    void* ptr15;  // rax
    struct_0 *ptr19;  // rdi
    void* ptr8;  // rax
    unsigned short v38;  // es_seg
    char v39;  // 4320
    unsigned long v40;  // 4455
    char ptr16[120];  // rax
    char v42;  // 4214
    unsigned long v7;  // 4101
    void* ptr13;  // rax
    char v44;  // 4271
    void* ptr21;  // rax
    char v46;  // 4281
    unsigned long long v47;  // cc_ndep
    char *ptr26;  // rax
    void* p;  // rax
    char v50;  // 4332
    unsigned long v51;  // 4497
    char v52;  // 4330
    char *ptr4;  // rcx
    unsigned long v53;  // 4462
    char *ptr7;  // rax
    char v55;  // 4210
    unsigned long v56;  // 4277
    char *ptr18;  // rax
    char *ptr9;  // rax
    unsigned long v59;  // 4276
    char ptr5[16777847];  // rax
    unsigned long v61;  // 4276
    char ptr3[16777360];  // rax
    void* ptr;  // rax
    char v63;  // 4318
    unsigned long v64;  // 4444
    char v65;  // 4097
    void* ptr6;  // rax
    char v67;  // 4170
    char v68;  // 4110
    unsigned long v69;  // 4125
    char v70;  // 4206
    unsigned long v71;  // 4271
    char v10;  // dl
    char v11;  // dh
    char *ptr11;  // rbx
    unsigned long long v0;  // [bp-0x8]
    void* ptr27;  // [bp+0x0]

    v7 = _ccall(8, v3, v4, v5, v6);
    if (!((char)v7))
        *(ptr4) = *(ptr4) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr4) = *(ptr4) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)&ptr[117]) = (char)ptr[117] + v10;
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
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)&ptr[2]) = (char)ptr[2] >> 1;
    *(ptr4) = *(ptr4) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr4) = *(ptr4) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)&ptr[117]) = (char)ptr[117] + *((char *)((void*)&ptr4 + 1));
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
    *((char *)&ptr[16777848]) = (char)ptr[16777848] + v11;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr4) = *(ptr4) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)&ptr[16777355]) = (char)ptr[16777355] + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v13 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v14 = _ccall(8, 1, (unsigned long long)v13, (unsigned long long)*((char *)(void*)&ptr), v6);
    if (!((char)v14))
        *(ptr4) = *(ptr4) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr4) = *(ptr4) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)&ptr[16777355]) = (char)ptr[16777355] + *((char *)&ptr11);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v15 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v16 = _ccall(8, 1, (unsigned long long)v15, (unsigned long long)*((char *)(void*)&ptr), v6);
    if (!((char)v16))
    {
        v17 = *((char *)ptr);
        ptr12 = (void*)_INSERT(ptr, 0, *((char *)&ptr) + v17);
        *((unsigned int *)ptr12) = *((int *)ptr12) + (unsigned int)ptr12;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((unsigned int *)ptr12) = *((int *)ptr12) + (unsigned int)ptr12;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) | *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) | *((char *)&ptr) + v17;
        *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr) + v17;
        ptr10 = (void*)_INSERT(ptr12, 0, 139);
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((unsigned int *)ptr10) = *((int *)ptr10) + (unsigned int)ptr10;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) | 139;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        v0 = 16777848;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *(ptr4) = *(ptr4) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *(ptr11) = *(ptr11) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        *(ptr11) = *(ptr11) - 117;
        *((char *)ptr10) = *((char *)ptr10) - 117;
        ptr23 = (unsigned int *)_INSERT(ptr10, 0, 139 + *((char *)&ptr4));
        ptr17 = *(ptr23);
        *(ptr4) = *(ptr4) + *((char *)&ptr17);
        *(ptr17) = *(ptr17) + *((char *)&ptr17);
        *(ptr17) = *(ptr17) + *((char *)&ptr17);
        *(ptr17) = *(ptr17) + *((char *)&ptr17);
        *(ptr17) = *(ptr17) + *((char *)&ptr17);
        *(ptr17) = *(ptr17) + *((char *)&ptr17);
        *(ptr17) = *(ptr17) + *((char *)&ptr17);
    }
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    v22 = *(ptr17);
    ptr14 = (void*)_INSERT(ptr17, 0, *((char *)&ptr17) + v22);
    *((unsigned int *)ptr14) = *((int *)ptr14) + (unsigned int)ptr14;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr17) + v22;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr17) + v22;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr17) + v22;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr17) + v22;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr17) + v22;
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
        [D] PutI(968:I8x8)[t12,0] = 0x00()
    else
        [D] PutI(968:I8x8)[t12,0] = 0x00()
    *(ptr4) = *(ptr4) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *(ptr11) = *(ptr11) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    ptr24 = (unsigned int *)_INSERT(ptr14, 0, *((char *)&ptr14) + v11);
    addr = *(ptr24);
    *(ptr4) = *(ptr4) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    v26 = *((char *)addr);
    *((char *)addr) = *((char *)addr) + v11;
    v27 = _ccall(8, 1, (unsigned long long)v26, (unsigned long long)v11, 0);
    if (!((char)v27))
        *(ptr4) = *(ptr4) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)&addr[16777317]) = (char)addr[16777317] + *((char *)((void*)&addr + 1));
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr11) = *(ptr11) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)&addr[116]) = (char)addr[116] + *((char *)&ptr4);
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
    v28 = *((char *)addr);
    *((char *)addr) = *((char *)addr) + v10;
    v29 = _ccall(8, 1, (unsigned long long)v28, (unsigned long long)v10, 0);
    if (!((char)v29))
        *(ptr4) = *(ptr4) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr4) = *(ptr4) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)&addr[16777356]) = (char)addr[16777356] + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    v30 = *((char *)addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    v31 = _ccall(8, 1, (unsigned long long)v30, (unsigned long long)*((char *)(void*)&addr), 0);
    if (!((char)v31))
        *(ptr4) = *(ptr4) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + v10;
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((unsigned int *)addr) = *((int *)addr) + (unsigned int)addr;
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    ptr20 = (unsigned int)addr + *((int *)addr);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    ptr22 = (unsigned int)ptr20 | *((int *)ptr20);
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
    ptr25 = (unsigned int)ptr22 | *((int *)ptr22);
    *(ptr25) = *(ptr25) + *((char *)&ptr25);
    ptr15 = (void*)_INSERT(ptr25, 0, 140);
    *((char *)ptr15) = *((char *)ptr15) - 116;
    *((unsigned int *)ptr15) = *((int *)ptr15) + (unsigned int)ptr15;
    *((char *)ptr15) = *((char *)ptr15) - 116;
    *((char *)ptr15) = *((char *)ptr15) - 116;
    *((char *)ptr15) = *((char *)ptr15) - 116;
    *((char *)ptr15) = *((char *)ptr15) - 116;
    *((char *)ptr15) = *((char *)ptr15) - 116;
    *((char *)ptr15) = *((char *)ptr15) - 116;
    *((char *)ptr15) = *((char *)ptr15) - 116;
    *((char *)ptr15) = *((char *)ptr15) - 116;
    *((char *)ptr15) = *((char *)ptr15) - 116;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    *(ptr4) = *(ptr4) + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    g_1000277 = g_1000277 + 119;
    ptr19->field_0 = ptr19->field_0 + 119;
    g_1000277 = g_1000277 + 119;
    ptr19->field_0 = ptr19->field_0 + 119;
    g_1000277 = g_1000277 + 119;
    ptr8 = 119 + v10 | 0x1000200;
    *((unsigned short *)ptr8) = v38;
    *(ptr4) = *(ptr4) + 119 + v10;
    *((char *)ptr8) = *((char *)ptr8) + 119 + v10;
    *((char *)ptr8) = *((char *)ptr8) + 119 + v10;
    *((char *)ptr8) = *((char *)ptr8) + 119 + v10;
    *((char *)ptr8) = *((char *)ptr8) + 119 + v10;
    *((char *)ptr8) = *((char *)ptr8) + 119 + v10;
    *((char *)ptr8) = *((char *)ptr8) + 119 + v10;
    *((char *)ptr8) = *((char *)ptr8) + 119 + v10;
    *((char *)ptr8) = *((char *)ptr8) + 119 + v10;
    v39 = *((char *)ptr8);
    *((char *)ptr8) = *((char *)ptr8) + 119 + v10;
    v40 = _ccall(6, 1, (unsigned long long)v39, (unsigned long long)(119 + v10), 0);
    if ((char)v40)
        *(ptr4) = *(ptr4) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *(ptr4) = *(ptr4) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *(ptr11) = *(ptr11) + v10;
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *(ptr11) = *(ptr11) + v10;
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr4);
    ptr16 = ptr8 & 4294967295;
    *(ptr4) = *(ptr4) + *((char *)&ptr16);
    ptr16[0] = ptr16[0] + *((char *)&ptr16);
    ptr16[0] = ptr16[0] + *((char *)&ptr16);
    ptr16[0] = ptr16[0] + *((char *)&ptr16);
    ptr16[0] = ptr16[0] + *((char *)&ptr16);
    ptr16[0] = ptr16[0] + *((char *)&ptr16);
    ptr16[0] = ptr16[0] + *((char *)&ptr16);
    ptr16[0] = ptr16[0] + *((char *)&ptr16);
    ptr16[0] = ptr16[0] + *((char *)&ptr16);
    ptr16[0] = ptr16[0] + *((char *)&ptr16);
    ptr16[119] = ptr16[119] + *((char *)((void*)&ptr11 + 1));
    v42 = ptr16[0];
    ptr13 = (void*)_INSERT(ptr16, 0, *((char *)&ptr16) + v42);
    *((unsigned int *)ptr13) = *((int *)ptr13) + (unsigned int)ptr13;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    *((unsigned int *)ptr13) = *((int *)ptr13) + (unsigned int)ptr13;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    v44 = *((char *)ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr16) + v42;
    ptr21 = (unsigned int)ptr13 + *((int *)ptr13) + ((unsigned int)(v44 + *((char *)&ptr16) + v42 <= v44 ? 1 : 0) & 1);
    v46 = *((char *)ptr21);
    *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr21);
    v47 = (v46 + *((char *)&ptr21) <= v46 ? 1 : 0) & 1;
    ptr26 = (unsigned int)ptr21 + *((int *)ptr21) + ((unsigned int)(v46 + *((char *)&ptr21) <= v46 ? 1 : 0) & 1);
    *(ptr26) = *(ptr26) + *((char *)&ptr26);
    p = ptr26 & 4294967295;
    *(ptr4) = *(ptr4) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    v50 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((void* *)&ptr27[8]) = p;
    v51 = _ccall(6, 1, (unsigned long long)v50, (unsigned long long)*((char *)(void*)&p), (v46 + *((char *)(void*)&ptr21) <= v46 ? 1 : 0) & 1);
    if ((char)v51)
        *(ptr4) = *(ptr4) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *(ptr4) = *(ptr4) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *(ptr11) = *(ptr11) + v10;
    *((char *)p) = *((char *)p) + *((char *)&p);
    *(ptr11) = *(ptr11) + v10;
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[115]) = (char)p[115] + *((char *)((void*)&ptr11 + 1));
    *((char *)p) = *((char *)p) + *((char *)&p);
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
    ptr19->field_2 = ptr19->field_2 ^ v11;
    *(ptr4) = *(ptr4) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *(ptr4) = *(ptr4) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    ptr19->field_0 = ptr19->field_0 + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    ptr19->field_0 = ptr19->field_0 + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[16777357]) = (char)p[16777357] + v11;
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    v52 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)&ptr11);
    v53 = _ccall(6, 1, (unsigned long long)v52, (unsigned long long)*((char *)(void*)&ptr11), v47);
    if ((char)v53)
        *(ptr4) = *(ptr4) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *(ptr4) = *(ptr4) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&ptr4);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&ptr4);
    *((char *)p) = *((char *)p) + *((char *)&p);
    ptr7 = _INSERT(p, 0, *((char *)&p) + *((char *)((void*)&p + 1))) & 4294967295;
    *(ptr4) = *(ptr4) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    v55 = *(ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    v56 = _ccall(6, 1, (unsigned long long)v55, (unsigned long long)*((char *)(void*)&ptr7), v47);
    if ((char)v56)
        *(ptr4) = *(ptr4) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr4) = *(ptr4) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr4);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr4);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    ptr18 = _INSERT(ptr7, 0, *((char *)&ptr7) + *((char *)((void*)&ptr11 + 1))) & 4294967295;
    *(ptr4) = *(ptr4) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    ptr9 = (char *)_INSERT(ptr18, 0, *((char *)&ptr18) + *((char *)((void*)&ptr18 + 1)));
    v59 = _ccall(6, 1, (unsigned long long)*((char *)(void*)&ptr18), (unsigned long long)*((char *)((void*)&ptr18 + 1)), v47);
    if (!((char)v59))
        *(ptr4) = *(ptr4) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr4) = *(ptr4) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr4);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr4);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + v11;
    *(ptr4) = *(ptr4) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + v10;
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    ptr5 = (char [16777847])_INSERT(ptr9, 0, *((char *)&ptr9) + *((char *)&ptr4));
    v61 = _ccall(6, 1, (unsigned long long)*((char *)(void*)&ptr9), (unsigned long long)*((char *)(void*)&ptr4), v47);
    if (!((char)v61))
        *(ptr4) = *(ptr4) + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    *(ptr4) = *(ptr4) + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr4);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr4);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[16777358] = ptr5[16777358] + v11;
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[16777846] = ptr5[16777846] + v10;
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    *(ptr4) = *(ptr4) + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr3 = (char [16777360])_INSERT(ptr5, 0, *((char *)&ptr5) + *((char *)((void*)&ptr4 + 1)));
    *(ptr4) = *(ptr4) + *((char *)&ptr5) + *((char *)((void*)&ptr4 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr5) + *((char *)((void*)&ptr4 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr5) + *((char *)((void*)&ptr4 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr5) + *((char *)((void*)&ptr4 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr5) + *((char *)((void*)&ptr4 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr5) + *((char *)((void*)&ptr4 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr5) + *((char *)((void*)&ptr4 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr5) + *((char *)((void*)&ptr4 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr5) + *((char *)((void*)&ptr4 + 1));
    v63 = ptr3[0];
    ptr3[0] = ptr3[0] + *((char *)&ptr5) + *((char *)((void*)&ptr4 + 1));
    v64 = _ccall(0, 1, (unsigned long long)v63, (unsigned long long)(*((char *)(void*)&ptr5) + *((char *)((void*)&ptr4 + 1))), v47);
    if (!((char)v64))
    {
        v65 = ptr3[0];
        ptr6 = (void*)_INSERT(ptr3, 0, *((char *)&ptr3) + v65);
        *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        v67 = *((char *)ptr6);
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        ptr19->field_10000 = ptr19->field_10000 - *((char *)&ptr4) - ((char)(v67 + *((char *)&ptr3) + v65 <= v67 ? 1 : 0) & 1);
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr3) + v65;
    }
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    v68 = ptr3[0];
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    v69 = _ccall(4, 1, (unsigned long long)v68, (unsigned long long)*((char *)(void*)&ptr3), v47);
    if ((char)v69)
        *(ptr4) = *(ptr4) + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    *(ptr4) = *(ptr4) + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr4);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr4);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[16777359] = ptr3[16777359] + v11;
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    v70 = ptr3[0];
    ptr3[0] = ptr3[0] + *((char *)&ptr4);
    v71 = _ccall(4, 1, (unsigned long long)v70, (unsigned long long)*((char *)(void*)&ptr4), v47);
    if ((char)v71)
        *(ptr4) = *(ptr4) + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr11);
}
