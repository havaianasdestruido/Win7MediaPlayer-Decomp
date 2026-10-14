/* sub_100011ff1 @ 0x100011ff1
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100011ff1  (1164 bytes, 21 basic blocks)
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
    char padding_0[65536];
    char field_10000;
} struct_0;

extern char g_100;

int sub_100011ff1(void)
{
    unsigned long v2;  // cc_op
    unsigned long v3;  // cc_dep1
    char *ptr8;  // rax
    struct_0 *ptr29;  // rdx
    char ptr21[65537];  // rbx
    void* ptr3;  // rax
    char ptr26[65537];  // rdx
    char v17;  // 4332
    unsigned long v18;  // 4528
    char ptr9[16777363];  // rax
    char v20;  // 4208
    void* p;  // rax
    unsigned long v4;  // cc_dep2
    char v22;  // 4281
    unsigned long v23;  // 4588
    unsigned long v24;  // 4591
    void* ptr18;  // rax
    char v26;  // 4444
    void* ptr11;  // rax
    void* ptr19;  // rax
    char *ptr27;  // rdx
    char v30;  // 4177
    void* ptr13;  // rax
    unsigned long v5;  // cc_ndep
    void* ptr24;  // rax
    void* addr;  // rax
    char v34;  // 4290
    char ptr7[16777364];  // rax
    unsigned long v36;  // 4278
    char *ptr12;  // rax
    unsigned long v38;  // 4270
    void* ptr;  // rax
    char *ptr22;  // rbx
    char v41;  // 4195
    unsigned long v6;  // 4101
    unsigned long long v42;  // cc_ndep
    void* ptr4;  // rax
    char v44;  // 4451
    unsigned long v45;  // 4678
    char v46;  // 4097
    void* ptr6;  // rax
    char v48;  // 4215
    void* ptr16;  // rax
    char v50;  // 4122
    unsigned long v51;  // 4143
    char ptr10[3];  // rcx
    void* ptr5;  // rax
    char *ptr25;  // rax
    char *ptr14;  // rax
    unsigned long v55;  // 4466
    unsigned int v56;  // esi
    void* ptr20;  // rax
    char *ptr28;  // rax
    char v59;  // 4215
    void* ptr17;  // rax
    void* ptr15;  // rax
    char v9;  // 4146
    void* ptr23;  // rax
    char v11;  // 4156
    char v0;  // [bp+0x0]

    v6 = _ccall(2, v2, v3, v4, v5);
    if ((char)v6)
        ptr10[0] = ptr10[0] + *((char *)&ptr15);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    *((char *)&ptr15[92]) = (char)ptr15[92] + *((char *)((void*)&ptr15 + 1));
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    *((unsigned int *)ptr15) = *((int *)ptr15) + (unsigned int)ptr15;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    v9 = *((char *)ptr15);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    ptr23 = (unsigned int)ptr15 + *((int *)ptr15) + ((unsigned int)(v9 + *((char *)&ptr15) <= v9 ? 1 : 0) & 1);
    v11 = *((char *)ptr23);
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr23);
    ptr8 = (unsigned int)ptr23 + *((int *)ptr23) + ((unsigned int)(v11 + *((char *)&ptr23) <= v11 ? 1 : 0) & 1);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    ptr29->field_10000 = ptr29->field_10000 | *((char *)&ptr29);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    ptr21[2] = ptr21[2] - *((char *)((void*)&ptr29 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    ptr10[0] = ptr10[0] + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    ptr21[0] = ptr21[0] + *((char *)&ptr29);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    ptr21[0] = ptr21[0] + *((char *)&ptr29);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)((void*)&ptr21 + 1));
    ptr3 = ptr29 & 4294967295;
    ptr26 = ptr8 & 4294967295;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    v17 = *((char *)ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    v18 = _ccall(1, (unsigned long long)v17, (unsigned long long)*((char *)(void*)&ptr3), (v11 + *((char *)(void*)&ptr23) <= v11 ? 1 : 0) & 1);
    ptr10[0] = ptr10[0] + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    ptr10[0] = ptr10[0] + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    ptr21[0] = ptr21[0] + *((char *)&ptr26);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    ptr21[0] = ptr21[0] + *((char *)&ptr26);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)&ptr3[110]) = (char)ptr3[110] + *((char *)&ptr21);
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
    ptr9 = (char [16777363])_INSERT(ptr3, 0, *((char *)&ptr3) + *((char *)&ptr10));
    if (!((char)__CFADD__(*((char *)&ptr3), *((char *)&ptr10))))
        ptr10[0] = ptr10[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr10[0] = ptr10[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr21[0] = ptr21[0] + *((char *)&ptr26);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr21[0] = ptr21[0] + *((char *)&ptr26);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[16777362] = ptr9[16777362] + *((char *)&ptr26);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    ptr9[0] = ptr9[0] + *((char *)&ptr9);
    v20 = ptr9[0];
    p = (void*)_INSERT(ptr9, 0, *((char *)&ptr9) + v20);
    *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) | *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) | *((char *)&ptr9) + v20;
    v22 = *((char *)p);
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    v23 = _ccall(1, (unsigned long long)v22, (unsigned long long)(*((char *)(void*)&ptr9) + v20), 0);
    v24 = _ccall((unsigned long long)ptr26[0x10000], 0, v23, 1);
    ptr26[0x10000] = v24;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    ptr26[2] = *((char *)((void*)&ptr26 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    ptr10[0] = ptr10[0] + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr10);
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    *((char *)p) = *((char *)p) + *((char *)&ptr10);
    *((char *)p) = *((char *)p) + *((char *)&ptr9) + v20;
    ptr18 = ptr26 & 4294967295;
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((unsigned int *)ptr18) = *((int *)ptr18) + (unsigned int)ptr18;
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)&ptr18[114]) = (char)ptr18[114] + *((char *)((void*)&ptr18 + 1));
    v26 = *((char *)ptr18);
    ptr11 = (void*)_INSERT(ptr18, 0, *((char *)&ptr18) + v26);
    *((unsigned int *)ptr11) = *((int *)ptr11) + (unsigned int)ptr11;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr18) + v26;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr18) + v26;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr18) + v26;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr18) + v26;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr18) + v26;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr18) + v26;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr18) + v26;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr18) + v26;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((unsigned int *)ptr11) = *((int *)ptr11) + (unsigned int)ptr11;
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) | *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) | *((char *)&ptr11);
    *((char *)ptr11) = *((char *)ptr11) + *((char *)&ptr11);
    ptr19 = _INSERT(p, 0, *((char *)&ptr9) + v20 + *((char *)&ptr21)) & 4294967295;
    ptr27 = ptr11 & 4294967295;
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
    *((char *)&ptr19[114]) = (char)ptr19[114] + *((char *)&ptr10);
    v30 = *((char *)ptr19);
    ptr13 = (void*)_INSERT(ptr19, 0, *((char *)&ptr19) + v30);
    *((unsigned int *)ptr13) = *((int *)ptr13) + (unsigned int)ptr13;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    *((unsigned int *)ptr13) = *((int *)ptr13) + (unsigned int)ptr13;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr19) + v30;
    ptr24 = (unsigned int)ptr13 + *((int *)ptr13);
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr24);
    addr = (unsigned int)ptr24 + *((int *)ptr24);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    ptr21[0x10000] = ptr21[0x10000] - *((char *)&ptr27);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    v34 = *((char *)addr);
    *((char *)addr) = *((char *)addr) + *((char *)&ptr27);
    if (!((char)__CFADD__(v34, *((char *)&ptr27))))
        ptr10[0] = ptr10[0] + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    ptr10[0] = ptr10[0] + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&ptr10);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&ptr10);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)&addr[109]) = (char)addr[109] + *((char *)&ptr10);
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
    ptr7 = (char [16777364])_INSERT(addr, 0, *((char *)&addr) + *((char *)((void*)&ptr27 + 1)));
    v36 = _ccall(0, 1, (unsigned long long)*((char *)(void*)&addr), (unsigned long long)*((char *)((void*)&ptr27 + 1)), 0);
    if ((char)v36)
        ptr10[0] = ptr10[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr10[0] = ptr10[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr10);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr10);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[16777363] = ptr7[16777363] + *((char *)&ptr10);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr27);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr7[0] = ptr7[0] + *((char *)&ptr7);
    ptr12 = (char *)_INSERT(ptr7, 0, *((char *)&ptr7) + *((char *)&ptr21));
    v38 = _ccall(0, 1, (unsigned long long)*((char *)(void*)&ptr7), (unsigned long long)*((char *)(void*)&ptr21), 0);
    if ((char)v38)
        ptr10[0] = ptr10[0] + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    ptr10[0] = ptr10[0] + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr10);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    *(ptr12) = *(ptr12) + *((char *)&ptr10);
    *(ptr12) = *(ptr12) + *((char *)&ptr12);
    ptr = ptr21 & 4294967295;
    ptr22 = _INSERT(ptr12, 0, *((char *)&ptr12) + *((char *)&ptr10)) & 4294967295;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v41 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr) + ((char)(v41 + *((char *)&ptr) <= v41 ? 1 : 0) & 1);
    v42 = (v41 + *((char *)&ptr) <= v41 ? 1 : 0) & 1;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    ptr10[2] = ptr10[2];
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
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) | *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) | *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)(ptr * 2 + 0x100)) = *((char *)(ptr * 2 + 0x100)) + *((char *)&ptr27);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)&ptr[16777841]) = (char)ptr[16777841] + *((char *)((void*)&ptr + 1));
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    ptr10[0] = ptr10[0] + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr10);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr10);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)((void*)&ptr22 + 1));
    ptr4 = &v0 & 4294967295;
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
    v44 = *((char *)ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    v45 = _ccall(8, 1, (unsigned long long)v44, (unsigned long long)*((char *)(void*)&ptr4), (v41 + *((char *)(void*)&ptr) <= v41 ? 1 : 0) & 1);
    if (!((char)v45))
    {
        v46 = *((char *)ptr4);
        ptr6 = (void*)_INSERT(ptr4, 0, *((char *)&ptr4) + v46);
        *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) | *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) | *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((unsigned long *)((ptr & 4294967295) - 8)) = 16777364;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr4) + v46;
        *((char *)&ptr6[113]) = (char)ptr6[113] + *((char *)&ptr22);
        v48 = *((char *)ptr6);
        ptr16 = (void*)_INSERT(ptr6, 0, *((char *)&ptr4) + v46 + v48);
        *((unsigned int *)ptr16) = *((int *)ptr16) + (unsigned int)ptr16;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
        *((unsigned int *)ptr16) = *((int *)ptr16) + (unsigned int)ptr16;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
        *((char *)ptr16) = *((char *)ptr16) + *((char *)&ptr4) + v46 + v48;
    }
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    v50 = *((char *)ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)((void*)&ptr27 + 1));
    v51 = _ccall(0, 1, (unsigned long long)v50, (unsigned long long)*((char *)((void*)&ptr27 + 1)), v42);
    if ((char)v51)
        ptr10[0] = ptr10[0] + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    ptr10[0] = ptr10[0] + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *(ptr22) = *(ptr22) + *((char *)&ptr27);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *(ptr22) = *(ptr22) + *((char *)&ptr27);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr27);
    ptr5 = vvar_53{r56|4b};
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr10);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    ptr10[2] = ptr10[2] | *((char *)((void*)&ptr27 + 1));
    ptr10[0] = ptr10[0] + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    ptr10[0] = ptr10[0] + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *(ptr22) = *(ptr22) + *((char *)&ptr27);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *(ptr22) = *(ptr22) + *((char *)&ptr27);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)&ptr5[16777365]) = (char)ptr5[16777365] + *((char *)&ptr27);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    ptr25 = (char *)_INSERT(ptr5, 0, *((char *)&ptr5));
    *(ptr25) = *(ptr25) + *((char *)&ptr5);
    *(ptr25) = *(ptr25) + *((char *)&ptr5);
    ptr14 = (char *)_INSERT(ptr25, 0, *((char *)&ptr5) + *((char *)((void*)&ptr25 + 1)));
    v55 = _ccall(0, 1, (unsigned long long)*((char *)(void*)&ptr5), (unsigned long long)*((char *)((void*)&ptr25 + 1)), v42);
    if (!((char)v55))
        ptr10[0] = ptr10[0] + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    ptr10[0] = ptr10[0] + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr22) = *(ptr22) + *((char *)&ptr27);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr22) = *(ptr22) + *((char *)&ptr27);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    ptr20 = v56;
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((unsigned int *)ptr20) = *((int *)ptr20) + (unsigned int)ptr20;
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *(ptr27) = *(ptr27) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
    ptr28 = (char *)_INSERT(ptr20, 0, 112);
    v59 = *(ptr28);
    ptr17 = (void*)_INSERT(ptr28, 0, 112 + v59);
    *((unsigned int *)ptr17) = *((int *)ptr17) + (unsigned int)ptr17;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
    *((unsigned int *)ptr17) = *((int *)ptr17) + (unsigned int)ptr17;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
    *((char *)ptr17) = *((char *)ptr17) + 112 + v59;
}
