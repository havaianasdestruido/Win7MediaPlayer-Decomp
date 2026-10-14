/* sub_10000d2b1 @ 0x10000d2b1
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10000d2b1  (1050 bytes, 57 basic blocks)
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
    char padding_0[16777849];
    char field_1000279;
} struct_0;

typedef struct struct_1 {
    char field_0;
    char padding_1[1];
    char field_2;
    char padding_3[117];
    char field_78;
    char padding_79[16777727];
    char field_1000278;
} struct_1;

extern char g_0;
extern char g_1000279;
extern char g_10002f2;
extern char g_20004f2;
extern char g_79;

int sub_10000d2b1(void)
{
    unsigned long v3;  // cc_op
    unsigned long v4;  // cc_dep1
    char ptr23[3];  // rsi
    struct_1 *ptr4;  // rax
    unsigned long v104;  // 4126
    char v105;  // 4169
    void* ptr17;  // rax
    char v107;  // 4200
    void* ptr18;  // rax
    char v109;  // 4231
    void* ptr24;  // rax
    char *ptr40;  // rax
    char v112;  // 4258
    char v14;  // 4110
    void* ptr33;  // rax
    unsigned long v15;  // 4127
    char *ptr26;  // rdi
    char *ptr28;  // rax
    unsigned long v18;  // 4126
    char ptr21[16777855];  // rax
    unsigned long v20;  // 4126
    char ptr14[3];  // rbx
    char v22;  // 4129
    unsigned long v5;  // cc_dep2
    void* ptr29;  // rax
    char *ptr6;  // rax
    char v25;  // 4151
    unsigned long v26;  // 4198
    char v27;  // 4130
    unsigned long v28;  // 4164
    char *ptr34;  // rax
    unsigned long v30;  // 4126
    char *ptr30;  // rax
    unsigned long v32;  // 4126
    unsigned long v6;  // cc_ndep
    char ptr5[16777854];  // rax
    unsigned long v34;  // 4126
    char v35;  // 4161
    void* ptr35;  // rax
    char ptr25[126];  // rax
    char v38;  // 4191
    void* ptr36;  // rax
    char *ptr8;  // rax
    char *ptr41;  // rbp
    char v42;  // 4218
    unsigned long v7;  // 4101
    unsigned long v43;  // 4319
    char v44;  // 4110
    unsigned long v45;  // 4127
    char ptr3[16777853];  // rax
    unsigned long v47;  // 4126
    char v48;  // 4161
    void* ptr13;  // rax
    char v50;  // 4170
    unsigned long v51;  // 4285
    unsigned long v52;  // id
    char *ptr;  // rcx
    unsigned long v53;  // ac
    char v54;  // 4194
    void* p;  // rax
    unsigned long long v56;  // d
    char v57;  // 4221
    unsigned long v58;  // 4342
    char v59;  // 4110
    unsigned long v60;  // 4127
    char v61;  // 4110
    unsigned long v62;  // 4127
    char *ptr11;  // rax
    char *ptr37;  // rax
    unsigned long v64;  // 4126
    char ptr7[16777852];  // rax
    unsigned long v66;  // 4126
    char v67;  // 4162
    void* ptr19;  // rax
    char v69;  // 4195
    void* ptr20;  // rax
    char *ptr31;  // rdi
    void* ptr42;  // rsi
    char v10;  // 4110
    char v73;  // 4228
    void* ptr9;  // rax
    char v75;  // 4276
    unsigned long v76;  // 4412
    char *ptr38;  // rax
    unsigned long v78;  // 4126
    void* ptr27;  // rax
    unsigned long v80;  // 4126
    char addr[16777851];  // rax
    void* ptr32;  // rsi
    char *ptr15;  // rdx
    char v83;  // 4185
    void* ptr22;  // rax
    char v85;  // 4207
    char *ptr12;  // rax
    unsigned long v87;  // 4303
    char v88;  // 4110
    unsigned long v89;  // 4127
    char v90;  // 4110
    unsigned long v91;  // 4127
    void* ptr16;  // rax
    unsigned long v12;  // 4127
    unsigned long v93;  // 4126
    struct_0 *ptr43;  // rcx
    char v95;  // 4183
    void* ptr39;  // rax
    char v97;  // 4203
    void* ptr10;  // rax
    char v99;  // 4220
    unsigned long v100;  // 4323
    char v101;  // 4110
    unsigned long v102;  // 4127
    char v0;  // [bp+0x0]
    char v2;  // [bp+0x100008]

    v7 = _ccall(14, v3, v4, v5, v6);
    if ((char)v7)
        *(ptr) = *(ptr) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    v2 += *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    v10 = *(ptr11);
    *(ptr11) = *(ptr11) + *((char *)((void*)&ptr15 + 1));
    v12 = _ccall(14, 1, (unsigned long long)v10, (unsigned long long)*((char *)((void*)&ptr15 + 1)), v6);
    if ((char)v12)
        *(ptr) = *(ptr) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    ptr23[0] = ptr23[0] + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    v14 = *(ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    v15 = _ccall(14, 1, (unsigned long long)v14, (unsigned long long)*((char *)(void*)&ptr11), v6);
    if ((char)v15)
        *(ptr) = *(ptr) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr26) = *(ptr26) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    ptr28 = (char *)_INSERT(ptr11, 0, *((char *)&ptr11) + *((char *)((void*)&ptr11 + 1)));
    v18 = _ccall(14, 1, (unsigned long long)*((char *)(void*)&ptr11), (unsigned long long)*((char *)((void*)&ptr11 + 1)), v6);
    if (!((char)v18))
        *(ptr) = *(ptr) + *((char *)&ptr28);
    *(ptr28) = *(ptr28) + *((char *)&ptr28);
    *(ptr28) = *(ptr28) + *((char *)&ptr);
    *(ptr28) = *(ptr28) + *((char *)&ptr28);
    ptr21 = (char [16777855])_INSERT(ptr28, 0, *((char *)&ptr28) * 2);
    v20 = _ccall(14, 1, (unsigned long long)*((char *)(void*)&ptr28), (unsigned long long)*((char *)(void*)&ptr28), v6);
    if (!((char)v20))
        *(ptr) = *(ptr) + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    *(ptr) = *(ptr) + *((char *)&ptr);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[16777854] = ptr21[16777854] + *((char *)((void*)&ptr21 + 1));
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    *(ptr15) = *(ptr15) + *((char *)&ptr);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[126] = ptr21[126] + *((char *)((void*)&ptr14 + 1));
    v22 = ptr21[0];
    ptr29 = (void*)_INSERT(ptr21, 0, *((char *)&ptr21) + ptr21[0]);
    *((unsigned int *)ptr29) = *((int *)ptr29) + (unsigned int)ptr29;
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr21) + v22;
    ptr6 = *((int *)ptr29);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    v25 = *(ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    v26 = _ccall(14, 1, (unsigned long long)v25, (unsigned long long)*((char *)(void*)&ptr6), v6);
    if (!((char)v26))
        *(ptr) = *(ptr) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *((char *)(ptr6 * 2)) = *((char *)(ptr6 * 2)) + *((char *)&ptr);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    ptr23[2] = ptr23[2] - *((char *)((void*)&ptr14 + 1));
    *(ptr) = *(ptr) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    v2 += *((char *)&ptr);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    v27 = *(ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr15);
    v28 = _ccall(14, 1, (unsigned long long)v27, (unsigned long long)*((char *)(void*)&ptr15), v6);
    if (!((char)v28))
        *(ptr) = *(ptr) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    ptr23[0] = ptr23[0] + *((char *)&ptr);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    ptr34 = (char *)_INSERT(ptr6, 0, *((char *)&ptr6) + *((char *)((void*)&ptr14 + 1)));
    v30 = _ccall(12, 1, (unsigned long long)*((char *)(void*)&ptr6), (unsigned long long)*((char *)((void*)&ptr14 + 1)), v6);
    if ((char)v30)
        *(ptr) = *(ptr) + *((char *)&ptr34);
    *(ptr34) = *(ptr34) + *((char *)&ptr34);
    *(ptr26) = *(ptr26) + *((char *)&ptr);
    *(ptr34) = *(ptr34) + *((char *)&ptr34);
    ptr30 = (char *)_INSERT(ptr34, 0, *((char *)&ptr34) + *((char *)((void*)&ptr34 + 1)));
    v32 = _ccall(12, 1, (unsigned long long)*((char *)(void*)&ptr34), (unsigned long long)*((char *)((void*)&ptr34 + 1)), v6);
    if ((char)v32)
        *(ptr) = *(ptr) + *((char *)&ptr30);
    *(ptr30) = *(ptr30) + *((char *)&ptr30);
    *(ptr30) = *(ptr30) + *((char *)&ptr15);
    *(ptr30) = *(ptr30) + *((char *)&ptr30);
    ptr5 = (char [16777854])_INSERT(ptr30, 0, *((char *)&ptr30) * 2);
    v34 = _ccall(12, 1, (unsigned long long)*((char *)(void*)&ptr30), (unsigned long long)*((char *)(void*)&ptr30), v6);
    if ((char)v34)
        *(ptr) = *(ptr) + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    *(ptr) = *(ptr) + *((char *)&ptr15);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[16777853] = ptr5[16777853] + *((char *)((void*)&ptr5 + 1));
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    *(ptr15) = *(ptr15) + *((char *)&ptr15);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[16777853] = ptr5[16777853] + *((char *)&ptr15);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr14[0] = ptr14[0] + *((char *)&ptr15);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[16777853] = ptr5[16777853] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr23[1] = ptr23[1] + *((char *)&ptr5);
    ptr5[0] = ptr5[0] + *((char *)&ptr5);
    ptr5[125] = ptr5[125] + *((char *)((void*)&ptr15 + 1));
    v35 = ptr5[0];
    ptr35 = (void*)_INSERT(ptr5, 0, *((char *)&ptr5) + ptr5[0]);
    *((unsigned int *)ptr35) = *((int *)ptr35) + (unsigned int)ptr35;
    *((char *)ptr35) = *((char *)ptr35) + *((char *)&ptr5) + v35;
    ptr25 = &v0 & 4294967295;
    vvar_249{r48|8b} = ptr35 & 4294967295;
    ptr25[0] = ptr25[0] + *((char *)&ptr25);
    ptr25[0] = ptr25[0] + *((char *)&ptr25);
    ptr25[0] = ptr25[0] + *((char *)&ptr25);
    ptr25[125] = ptr25[125] + *((char *)&ptr14);
    v38 = ptr25[0];
    ptr36 = (void*)_INSERT(ptr25, 0, *((char *)&ptr25) + ptr25[0]);
    *((unsigned int *)ptr36) = *((int *)ptr36) + (unsigned int)ptr36;
    *((char *)ptr36) = *((char *)ptr36) + *((char *)&ptr25) + v38;
    ptr8 = vvar_173{r56|8b} & 4294967295;
    ptr41 = ptr36 & 4294967295;
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    v42 = *(ptr8);
    *(ptr8) = *(ptr8) + *((char *)((void*)&ptr14 + 1));
    v43 = _ccall(12, 1, (unsigned long long)v42, (unsigned long long)*((char *)((void*)&ptr14 + 1)), v6);
    if ((char)v43)
        *(ptr) = *(ptr) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    ptr23[0] = ptr23[0] + *((char *)&ptr15);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    v44 = *(ptr8);
    *(ptr8) = *(ptr8) + *((char *)((void*)&ptr8 + 1));
    v45 = _ccall(12, 1, (unsigned long long)v44, (unsigned long long)*((char *)((void*)&ptr8 + 1)), v6);
    if ((char)v45)
        *(ptr) = *(ptr) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr26) = *(ptr26) + *((char *)&ptr15);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    ptr3 = (char [16777853])_INSERT(ptr8, 0, *((char *)&ptr8) + *((char *)((void*)&ptr15 + 1)));
    v47 = _ccall(12, 1, (unsigned long long)*((char *)(void*)&ptr8), (unsigned long long)*((char *)((void*)&ptr15 + 1)), v6);
    if (!((char)v47))
        *(ptr) = *(ptr) + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[0] = ptr3[0] + *((char *)&ptr14);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[16777852] = ptr3[16777852] + *((char *)((void*)&ptr14 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    *(ptr) = *(ptr) + *((char *)&ptr14);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[16777852] = ptr3[16777852] + *((char *)((void*)&ptr3 + 1));
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    *(ptr15) = *(ptr15) + *((char *)&ptr14);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[16777852] = ptr3[16777852] + *((char *)&ptr);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr14[0] = ptr14[0] + *((char *)&ptr14);
    ptr3[0] = ptr3[0] + *((char *)&ptr3);
    ptr3[124] = ptr3[124] + *((char *)((void*)&ptr + 1));
    v48 = ptr3[0];
    ptr13 = (void*)_INSERT(ptr3, 0, *((char *)&ptr3) + v48);
    *((unsigned int *)ptr13) = *((int *)ptr13) + (unsigned int)ptr13;
    v50 = *((char *)ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr3) + v48;
    vvar_273{r48|8b} = vvar_249{r48|8b} - 8;
    v51 = _ccall(1, (unsigned long long)v50, (unsigned long long)(*((char *)(void*)&ptr3) + v48), v6);
    *((unsigned long long *)(vvar_249{r48|8b} - 8)) = v51 | v52 * 0x200000 & 0x200000 | v53 * 0x40000 & 0x40000;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr3) + v48;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr3) + v48;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr3) + v48;
    *((char *)&ptr13[124]) = (char)ptr13[124] + *((char *)&ptr15);
    v54 = *((char *)ptr13);
    p = (void*)_INSERT(ptr13, 0, *((char *)&ptr3) + v48 + v54);
    *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
    *((char *)p) = *((char *)p) + *((char *)&ptr3) + v48 + v54;
    vvar_275{r48|8b} = vvar_273{r48|8b} + 8;
    v56 = ((char)(*((long long *)vvar_273{r48|8b}) >> 10) ? 18446744073709551615 : 1);
    *((char *)p) = *((char *)p) + *((char *)&ptr3) + v48 + v54;
    *((char *)p) = *((char *)p) + *((char *)&ptr3) + v48 + v54;
    *((char *)p) = *((char *)p) + *((char *)&ptr3) + v48 + v54;
    v57 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)((void*)&ptr15 + 1));
    v58 = _ccall(12, 1, (unsigned long long)v57, (unsigned long long)*((char *)((void*)&ptr15 + 1)), v6);
    if (!((char)v58))
        *(ptr) = *(ptr) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    ptr23[0] = ptr23[0] + *((char *)&ptr14);
    *((char *)p) = *((char *)p) + *((char *)&p);
    v59 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)&ptr14);
    v60 = _ccall(12, 1, (unsigned long long)v59, (unsigned long long)*((char *)(void*)&ptr14), v6);
    if (!((char)v60))
        *(ptr) = *(ptr) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *(ptr26) = *(ptr26) + *((char *)&ptr14);
    *((char *)p) = *((char *)p) + *((char *)&p);
    v61 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    v62 = _ccall(12, 1, (unsigned long long)v61, (unsigned long long)*((char *)(void*)&p), v6);
    if (!((char)v62))
        *(ptr) = *(ptr) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)((void*)&p + 1));
    *((char *)p) = *((char *)p) + *((char *)&p);
    ptr37 = (char *)_INSERT(p, 0, *((char *)&p) + *((char *)((void*)&ptr + 1)));
    v64 = _ccall(10, 1, (unsigned long long)*((char *)(void*)&p), (unsigned long long)*((char *)((void*)&ptr + 1)), v6);
    if ((char)v64)
        *(ptr) = *(ptr) + *((char *)&ptr37);
    *(ptr37) = *(ptr37) + *((char *)&ptr37);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr37 + 1));
    *(ptr37) = *(ptr37) + *((char *)&ptr37);
    ptr7 = (char [16777852])_INSERT(ptr37, 0, *((char *)&ptr37) + *((char *)&ptr15));
    v66 = _ccall(10, 1, (unsigned long long)*((char *)(void*)&ptr37), (unsigned long long)*((char *)(void*)&ptr15), v6);
    if ((char)v66)
        *(ptr) = *(ptr) + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    *(ptr15) = *(ptr15) + *((char *)((void*)&ptr7 + 1));
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[16777851] = ptr7[16777851] + *((char *)((void*)&ptr14 + 1));
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr14[0] = ptr14[0] + *((char *)((void*)&ptr7 + 1));
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[16777851] = ptr7[16777851] + *((char *)((void*)&ptr7 + 1));
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    *((char *)(ptr7 * 2)) = *((char *)(ptr7 * 2)) + *((char *)((void*)&ptr7 + 1));
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr14[2] = *((char *)((void*)&ptr14 + 1));
    *(ptr) = *(ptr) + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    *(ptr41) = *(ptr41) + *((char *)((void*)&ptr7 + 1));
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[123] = ptr7[123] + *((char *)((void*)&ptr15 + 1));
    v67 = ptr7[0];
    ptr19 = (void*)_INSERT(ptr7, 0, *((char *)&ptr7) + v67);
    *((unsigned int *)ptr19) = *((int *)ptr19) + (unsigned int)ptr19;
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr7) + v67;
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr7) + v67;
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr7) + v67;
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr7) + v67;
    *((char *)&ptr19[123]) = (char)ptr19[123] + *((char *)&ptr14);
    v69 = *((char *)ptr19);
    ptr20 = (void*)_INSERT(ptr19, 0, *((char *)&ptr7) + v67 + v69);
    *((unsigned int *)ptr20) = *((int *)ptr20) + (unsigned int)ptr20;
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr7) + v67 + v69;
    ptr31 = &ptr26[v56 + 4 * v56];
    ptr42 = &ptr23[v56 + 4 * v56];
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr7) + v67 + v69;
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr7) + v67 + v69;
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr7) + v67 + v69;
    *((char *)&ptr20[123]) = (char)ptr20[123] + *((char *)&ptr7) + v67 + v69;
    v73 = *((char *)ptr20);
    ptr9 = (void*)_INSERT(ptr20, 0, *((char *)&ptr7) + v67 + v69 + v73);
    *((unsigned int *)ptr9) = *((int *)ptr9) + (unsigned int)ptr9;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr7) + v67 + v69 + v73;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr7) + v67 + v69 + v73;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr7) + v67 + v69 + v73;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr7) + v67 + v69 + v73;
    ptr14[2] = ptr14[2] - *((char *)((void*)&ptr14 + 1));
    *(ptr) = *(ptr) + *((char *)&ptr7) + v67 + v69 + v73;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr7) + v67 + v69 + v73;
    *(ptr) = *(ptr) + *((char *)((void*)&ptr + 1));
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr7) + v67 + v69 + v73;
    v75 = *((char *)ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr15);
    v76 = _ccall(10, 1, (unsigned long long)v75, (unsigned long long)*((char *)(void*)&ptr15), v6);
    if ((char)v76)
        *(ptr) = *(ptr) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *(ptr15) = *(ptr15) + *((char *)((void*)&ptr + 1));
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    ptr38 = (char *)_INSERT(ptr9, 0, *((char *)&ptr9) + *((char *)((void*)&ptr14 + 1)));
    v78 = _ccall(10, 1, (unsigned long long)*((char *)(void*)&ptr9), (unsigned long long)*((char *)((void*)&ptr14 + 1)), v6);
    if (!((char)v78))
        *(ptr) = *(ptr) + *((char *)&ptr38);
    *(ptr38) = *(ptr38) + *((char *)&ptr38);
    ptr14[0] = ptr14[0] + *((char *)((void*)&ptr + 1));
    *(ptr38) = *(ptr38) + *((char *)&ptr38);
    ptr27 = (void*)_INSERT(ptr38, 0, *((char *)&ptr38) + *((char *)((void*)&ptr38 + 1)));
    v80 = _ccall(10, 1, (unsigned long long)*((char *)(void*)&ptr38), (unsigned long long)*((char *)((void*)&ptr38 + 1)), v6);
    if (!((char)v80))
        *(ptr) = *(ptr) + *((char *)&ptr27);
    *((char *)ptr27) = *((char *)ptr27) + *((char *)&ptr27);
    *((char *)(ptr27 * 2)) = *((char *)(ptr27 * 2)) + *((char *)((void*)&ptr + 1));
    *((char *)ptr27) = *((char *)ptr27) + *((char *)&ptr27);
    *((char **)(vvar_275{r48|8b} - 8)) = ptr41;
    vvar_340{r48|8b} = vvar_275{r48|8b} - 642;
    *((unsigned int *)ptr27) = *((int *)ptr27) + (unsigned int)ptr27;
    *((char *)ptr27) = *((char *)ptr27) + *((char *)&ptr27);
    addr = *((int *)ptr42);
    ptr32 = ptr42 + v56 * 4;
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[16777850] = addr[16777850] + *((char *)((void*)&ptr15 + 1));
    addr[0] = addr[0] + *((char *)&addr);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)((void*)&ptr + 1));
    addr[0] = addr[0] + *((char *)&addr);
    addr[16777850] = addr[16777850] + *((char *)&ptr14);
    addr[0] = addr[0] + *((char *)&addr);
    *(ptr31) = *(ptr31) + *((char *)((void*)&ptr + 1));
    addr[0] = addr[0] + *((char *)&addr);
    addr[16777850] = addr[16777850] + *((char *)&ptr);
    addr[0] = addr[0] + *((char *)&addr);
    addr[0] = addr[0] + *((char *)((void*)&ptr15 + 1));
    addr[0] = addr[0] + *((char *)&addr);
    addr[122] = addr[122] + *((char *)((void*)&ptr15 + 1));
    v83 = addr[0];
    ptr22 = (void*)_INSERT(addr, 0, *((char *)&addr) + v83);
    *((unsigned int *)ptr22) = *((int *)ptr22) + (unsigned int)ptr22;
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&addr) + v83;
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&addr) + v83;
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&addr) + v83;
    v85 = *((char *)ptr22);
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&addr) + v83;
    vvar_348{r48|8b} = vvar_340{r48|8b} + 8;
    ptr12 = *((long long *)vvar_340{r48|8b});
    v87 = _ccall(10, 1, (unsigned long long)v85, (unsigned long long)(*((char *)(void*)&addr) + v83), v6);
    if (!((char)v87))
        *(ptr) = *(ptr) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr15 + 1));
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    v88 = *(ptr12);
    *(ptr12) = *(ptr12) + *((char *)((void*)&ptr15 + 1));
    v89 = _ccall(10, 1, (unsigned long long)v88, (unsigned long long)*((char *)((void*)&ptr15 + 1)), v6);
    if (!((char)v89))
        *(ptr) = *(ptr) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr15) = *(ptr15) + *((char *)((void*)&ptr15 + 1));
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    v90 = *(ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr14);
    v91 = _ccall(10, 1, (unsigned long long)v90, (unsigned long long)*((char *)(void*)&ptr14), v6);
    if (!((char)v91))
        *(ptr) = *(ptr) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    ptr14[0] = ptr14[0] + *((char *)((void*)&ptr15 + 1));
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    ptr16 = (void*)_INSERT(ptr12, 0, *((char *)&ptr12) + *((char *)((void*)&ptr14 + 1)));
    v93 = _ccall(8, 1, (unsigned long long)*((char *)(void*)&ptr12), (unsigned long long)*((char *)((void*)&ptr14 + 1)), v6);
    if ((char)v93)
        *(ptr) = *(ptr) + *((char *)&ptr16);
    *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr16);
    *((char *)(ptr16 * 2)) = *((char *)(ptr16 * 2)) + *((char *)((void*)&ptr15 + 1));
    *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr16);
    *((unsigned long long *)(vvar_348{r48|8b} - 8)) = vvar_275{r48|8b} - 8;
    *((unsigned int *)ptr16) = *((int *)ptr16) + (unsigned int)ptr16;
    *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr16);
    ptr43 = (struct_0 *)_INSERT(ptr, 1, 0);
    *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr16);
    *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr16);
    *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr16);
    g_1000279 = g_1000279 + 121;
    *((char *)(ptr43 + &g_1000279)) = *((char *)(ptr43 + &g_1000279)) + 121;
    g_1000279 = g_1000279 + 121;
    g_1000279 = g_1000279 + 121;
    g_20004f2 = g_20004f2 + 121;
    g_1000279 = g_1000279 + 121;
    *((char *)ptr32) = *((char *)ptr32) + *((char *)((void*)&ptr15 + 1));
    g_1000279 = g_1000279 + 121;
    g_20004f2 = g_20004f2 + *((char *)&ptr43);
    g_1000279 = g_1000279 + 121;
    *(ptr31) = *(ptr31) + *((char *)((void*)&ptr15 + 1));
    g_1000279 = g_1000279 + 121;
    g_10002f2 = g_10002f2;
    v95 = g_1000279;
    ptr39 = 121 + g_1000279 | 0x1000200;
    *((unsigned int *)ptr39) = *((int *)ptr39) + (unsigned int)ptr39;
    *((char *)ptr39) = *((char *)ptr39) + 121 + v95;
    g_0 = g_0;
    g_79 = g_79 + *((char *)&ptr43);
    v97 = g_0;
    ptr10 = 0 + v97;
    *((unsigned int *)ptr10) = *((int *)ptr10) + (unsigned int)ptr10;
    *((char *)ptr10) = *((char *)ptr10) + 0 + v97;
    *((char *)ptr10) = *((char *)ptr10) + 0 + v97;
    v99 = *((char *)ptr10);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)((void*)&ptr15 + 1));
    v100 = _ccall(8, 1, (unsigned long long)v99, (unsigned long long)*((char *)((void*)&ptr15 + 1)), v6);
    if ((char)v100)
        g_0 = g_0 + *((char *)&ptr10);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
    *(ptr15) = *(ptr15) + *((char *)((void*)&ptr14 + 1));
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
    v101 = *((char *)ptr10);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr14);
    v102 = _ccall(8, 1, (unsigned long long)v101, (unsigned long long)*((char *)(void*)&ptr14), v6);
    if ((char)v102)
        g_0 = g_0 + *((char *)&ptr10);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
    ptr14[0] = ptr14[0] + *((char *)((void*)&ptr14 + 1));
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
    ptr4 = (struct_1 *)_INSERT(ptr10, 0, *((char *)&ptr10) + *((char *)((void*)&ptr15 + 1)));
    v104 = _ccall(8, 1, (unsigned long long)*((char *)(void*)&ptr10), (unsigned long long)*((char *)((void*)&ptr15 + 1)), v6);
    if (!((char)v104))
        g_0 = g_0 + *((char *)&ptr4);
    ptr4->field_0 = ptr4->field_0 + *((char *)&ptr4);
    *((char *)(ptr4 * 2)) = *((char *)(ptr4 * 2)) + *((char *)((void*)&ptr14 + 1));
    ptr4->field_0 = ptr4->field_0 + *((char *)&ptr4);
    ptr4->field_2 = ptr4->field_2 >> 1;
    g_0 = g_0 + *((char *)&ptr4);
    ptr4->field_0 = ptr4->field_0 + *((char *)&ptr4);
    *((char *)(vvar_348{r48|8b} - 8)) = *((char *)(vvar_348{r48|8b} - 8)) + *((char *)((void*)&ptr14 + 1));
    ptr4->field_0 = ptr4->field_0 + *((char *)&ptr4);
    ptr4->field_1000278 = ptr4->field_1000278 + *((char *)((void*)&ptr15 + 1));
    ptr4->field_0 = ptr4->field_0 + *((char *)&ptr4);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)((void*)&ptr14 + 1));
    ptr4->field_0 = ptr4->field_0 + *((char *)&ptr4);
    ptr4->field_1000278 = ptr4->field_1000278 + *((char *)&ptr15);
    ptr4->field_0 = ptr4->field_0 + *((char *)&ptr4);
    *(ptr31) = *(ptr31) + *((char *)((void*)&ptr14 + 1));
    ptr4->field_0 = ptr4->field_0 + *((char *)&ptr4);
    ptr4->field_78 = ptr4->field_78 + *((char *)((void*)&ptr14 + 1));
    v105 = ptr4->field_0;
    ptr17 = (void*)_INSERT(ptr4, 0, *((char *)&ptr4) + v105);
    *((unsigned int *)ptr17) = *((int *)ptr17) + (unsigned int)ptr17;
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr4) + v105;
    *((char *)ptr17) = *((char *)ptr17);
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr4) + v105;
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr4) + v105;
    *((char *)&ptr17[120]) = (char)ptr17[120];
    v107 = *((char *)ptr17);
    ptr18 = (void*)_INSERT(ptr17, 0, *((char *)&ptr4) + v105 + v107);
    *((unsigned int *)ptr18) = *((int *)ptr18) + (unsigned int)ptr18;
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr4) + v105 + v107;
    *((int *)ptr18) = *((int *)ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr4) + v105 + v107;
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr4) + v105 + v107;
    *((char *)&ptr18[120]) = (char)ptr18[120] + *((char *)&ptr15);
    v109 = *((char *)ptr18);
    ptr24 = (void*)_INSERT(ptr18, 0, *((char *)&ptr4) + v105 + v107 + v109);
    *((unsigned int *)ptr24) = *((int *)ptr24) + (unsigned int)ptr24;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr4) + v105 + v107 + v109;
    *((unsigned short *)ptr24) = *((short *)ptr24) + *((unsigned short *)&ptr24);
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr4) + v105 + v107 + v109;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr4) + v105 + v107 + v109;
    ptr40 = (char *)_INSERT(ptr24, 0, *((char *)&ptr4) + v105 + v107 + v109 + *((char *)((void*)&ptr14 + 1)));
    v112 = *(ptr40);
    ptr33 = (void*)_INSERT(ptr40, 0, *((char *)&ptr4) + v105 + v107 + v109 + *((char *)((void*)&ptr14 + 1)) + *(ptr40));
    *((unsigned int *)ptr33) = *((int *)ptr33) + (unsigned int)ptr33;
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr4) + v105 + v107 + v109 + *((char *)((void*)&ptr14 + 1)) + v112;
    return;
}
