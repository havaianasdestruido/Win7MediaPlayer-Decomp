/* sub_10000fe19 @ 0x10000fe19
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10000fe19  (1623 bytes, 22 basic blocks)
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
    char padding_0[65538];
    char field_10002;
} struct_0;

extern char g_100020a;
extern void g_1000285;
extern char g_1000300;
extern char g_200050a;

int sub_10000fe19(void)
{
    unsigned long v3;  // cc_op
    unsigned long v4;  // cc_dep1
    char v13;  // 4097
    void* p;  // rax
    unsigned long v15;  // fs
    char v16;  // 4166
    char v17;  // cc_dep1
    char v18;  // cc_dep2
    unsigned long v19;  // 4216
    char *ptr26;  // rdx
    char v21;  // 4139
    void* ptr10;  // rax
    unsigned long v5;  // cc_dep2
    char *ptr11;  // rbx
    unsigned long v24;  // gs
    char v25;  // 4198
    void* ptr22;  // rax
    char v27;  // 4208
    char *ptr13;  // rax
    char v29;  // 4218
    unsigned long v30;  // 4317
    char v31;  // 4140
    void* ptr6;  // rax
    unsigned long v6;  // cc_ndep
    char v33;  // 4197
    unsigned long long v34;  // cc_ndep
    void* ptr3;  // rax
    char *ptr4;  // rax
    unsigned long v37;  // 4309
    char *ptr18;  // rax
    unsigned long v39;  // 4274
    char v40;  // 4136
    char *ptr12;  // rax
    char *ptr;  // rax
    unsigned long v7;  // 4101
    unsigned long v43;  // 4282
    char v44;  // 4134
    struct_0 *ptr29;  // rsi
    unsigned long long v46;  // cc_ndep
    void* ptr21;  // rcx
    char v48;  // 4162
    unsigned long v49;  // 4203
    char v50;  // 4216
    unsigned long v51;  // 4291
    char v52;  // 4134
    void* ptr28;  // rcx
    void* ptr20;  // rcx
    unsigned long v54;  // 4168
    char v55;  // 4097
    void* ptr7;  // rax
    char v57;  // 4154
    void* ptr23;  // rax
    char v59;  // 4164
    char *ptr16;  // rax
    char v61;  // 4453
    void* ptr8;  // rax
    char *ptr15;  // rax
    char v63;  // 4114
    void* ptr24;  // rax
    char v65;  // 4124
    void* ptr14;  // rax
    char v67;  // 4181
    void* ptr9;  // rax
    char v69;  // 4238
    void* ptr25;  // rax
    char v71;  // 4248
    char *ptr27;  // rax
    char v10;  // 4134
    char v73;  // 4258
    void* addr;  // rax
    unsigned long v75;  // 4410
    void* ptr5;  // rax
    char *ptr19;  // rax
    unsigned long v78;  // 4461
    void* ptr17;  // rcx
    unsigned long v12;  // 4168
    unsigned long long v0;  // [bp-0x8]
    char v2;  // [bp+0x11000a]

    v7 = _ccall(10, v3, v4, v5, v6);
    if (Conv(64I->1I, vvar_123)) { Goto None } else { Goto None }
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr15);
    *(ptr15) = *(ptr15) + *((char *)&ptr15);
    *(ptr15) = *(ptr15) + *((char *)&ptr15);
    *(ptr15) = *(ptr15) + *((char *)&ptr15);
    *(ptr15) = *(ptr15) + *((char *)&ptr15);
    *(ptr15) = *(ptr15) + *((char *)&ptr15);
    *(ptr15) = *(ptr15) + *((char *)&ptr15);
    *(ptr15) = *(ptr15) + *((char *)&ptr15);
    *(ptr15) = *(ptr15) + *((char *)&ptr15);
    v10 = *(ptr15);
    *(ptr15) = *(ptr15) + *((char *)&ptr15);
    ptr17 = ptr28 - 1;
    v12 = _ccall(5, 1, (unsigned long long)v10, (unsigned long long)*((char *)(void*)&ptr15), v6);
    if (ptr28 - 1 & (char)v12)
        goto LABEL_0x10000fdb8;
    v13 = *(ptr15);
    p = (void*)_INSERT(ptr15, 0, *((char *)&ptr15) + v13);
    *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
    *((char *)p) = *((char *)p) + *((char *)&ptr15) + v13;
    *((char *)p) = *((char *)p) + *((char *)&ptr15) + v13;
    *((char *)p) = *((char *)p) + *((char *)&ptr15) + v13;
    *((char *)p) = *((char *)p) + *((char *)&ptr15) + v13;
    *((char *)p) = *((char *)p) + *((char *)&ptr15) + v13;
    *((char *)p + v15) = *((char *)p + v15) + *((char *)&ptr15) + v13;
    *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
    *((char *)p) = *((char *)p) + *((char *)&ptr15) + v13;
    *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
    *((char *)p) = *((char *)p) + *((char *)&ptr15) + v13;
    *((char *)p) = *((char *)p) + *((char *)&ptr15) + v13;
    *((char *)p) = *((char *)p) + *((char *)&ptr15) + v13;
    *((char *)p) = *((char *)p) | *((char *)&ptr15) + v13;
    *((char *)p) = *((char *)p) + *((char *)&ptr15) + v13;
    *((char *)p) = *((char *)p) | *((char *)&ptr15) + v13;
    v16 = *((char *)p);
    *((char *)p) = v16 + *((char *)&ptr15) + v13;
    v17 = v16;
    v18 = *((char *)&ptr15) + v13;
    v19 = _ccall(8, 1, (unsigned long long)v16, (unsigned long long)(*((char *)(void*)&ptr15) + v13), v6);
    if (!((char)v19))
    {
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
        v21 = *(ptr26);
        InterlockedExchange8(ptr26, *((char *)&p) * 2);
        ptr10 = (void*)_INSERT(*((char *)&p) * 2 CONCAT 0, 0, v21);
        *((char *)ptr17) = *((char *)ptr17) + v21;
        *((char *)ptr10) = *((char *)ptr10) + v21;
        *((char *)ptr10) = *((char *)ptr10) + v21;
        *((char *)ptr10) = *((char *)ptr10) + v21;
        *((char *)ptr10) = *((char *)ptr10) + v21;
        *((char *)ptr10) = *((char *)ptr10) + v21;
        *((char *)ptr10) = *((char *)ptr10) + *((char *)((void*)&ptr11 + 1));
        *((char *)ptr10 + v24) = *((char *)ptr10 + v24) + v21;
        *((unsigned int *)ptr10) = *((int *)ptr10) + (unsigned int)ptr10;
        *((char *)ptr10) = *((char *)ptr10) + v21;
        *((char *)ptr10) = *((char *)ptr10) + v21;
        *((char *)ptr10) = *((char *)ptr10) + v21;
        *((char *)ptr10) = *((char *)ptr10) + v21;
        v25 = *((char *)ptr10);
        *((char *)ptr10) = *((char *)ptr10) + v21;
        ptr22 = (unsigned int)ptr10 + *((int *)ptr10) + ((unsigned int)(v25 + v21 <= v25 ? 1 : 0) & 1);
        v27 = *((char *)ptr22);
        *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
        ptr13 = (unsigned int)ptr22 + *((int *)ptr22) + ((unsigned int)(v27 + *((char *)&ptr22) <= v27 ? 1 : 0) & 1);
        v29 = *(ptr13);
        *(ptr13) = *(ptr13) + *((char *)&ptr13);
        v30 = _ccall(10, 1, (unsigned long long)v29, (unsigned long long)*((char *)(void*)&ptr13), (v27 + *((char *)(void*)&ptr22) <= v27 ? 1 : 0) & 1);
        if (!((char)v30))
            goto LABEL_10000fe9b;
LABEL_10000fe9b:
        *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr13);
        *(ptr13) = *(ptr13) + *((char *)&ptr13);
        *(ptr13) = *(ptr13) + *((char *)&ptr13);
        *(ptr13) = *(ptr13) + *((char *)&ptr13);
        *(ptr13) = *(ptr13) + *((char *)&ptr13);
        *(ptr13) = *(ptr13) + *((char *)&ptr13);
        *(ptr13) = *(ptr13) + *((char *)&ptr13);
        *(ptr13) = *(ptr13) + *((char *)&ptr13);
        *(ptr13) = *(ptr13) + *((char *)&ptr13);
        *(ptr13) = *(ptr13) + *((char *)&ptr13);
        v31 = *(ptr13);
        ptr6 = (void*)_INSERT(ptr13, 0, *((char *)&ptr13) + v31);
        *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        *((unsigned int *)ptr6) = *((int *)ptr6) + (unsigned int)ptr6;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        v33 = *((char *)ptr6);
        *((char *)ptr6) = *((char *)ptr6) + *((char *)&ptr13) + v31;
        p = (unsigned int)ptr6 + *((int *)ptr6) + ((unsigned int)(v33 + *((char *)&ptr13) + v31 <= v33 ? 1 : 0) & 1);
        *((char *)p) = *((char *)p) + *((char *)&p);
        v17 = *((char *)p);
        v18 = *((char *)&p);
    }
    v34 = (v17 + v18 <= v17 ? 1 : 0) & 1;
    ptr3 = (unsigned int)p + *((int *)p) + ((unsigned int)(v17 + v18 <= v17 ? 1 : 0) & 1);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
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
    *((char *)&ptr3[16777862]) = (char)ptr3[16777862] + *((char *)&ptr26);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *(ptr11) = *(ptr11) + *((char *)&ptr17);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *(ptr11) = *(ptr11) + *((char *)&ptr17);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    ptr4 = (char *)_INSERT(ptr3, 0, *((char *)&ptr3) * 2);
    v37 = _ccall(10, 1, (unsigned long long)*((char *)(void*)&ptr3), (unsigned long long)*((char *)(void*)&ptr3), (v17 + v18 <= v17 ? 1 : 0) & 1);
    if (!((char)v37))
        goto LABEL_10000ff1b;
LABEL_10000ff1b:
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    v0 = 16777862;
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr17);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    *(ptr4) = *(ptr4) + *((char *)&ptr17);
    *(ptr4) = *(ptr4) + *((char *)&ptr4);
    ptr18 = (char *)_INSERT(ptr4, 0, *((char *)&ptr4) + *((char *)&ptr11));
    v39 = _ccall(10, 1, (unsigned long long)*((char *)(void*)&ptr4), (unsigned long long)*((char *)(void*)&ptr11), v34);
    if (!((char)v39))
        goto LABEL_10000ff5b;
LABEL_10000ff5b:
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    v40 = *(ptr26);
    InterlockedExchange8(ptr26, *((char *)&ptr18));
    ptr12 = (char *)_INSERT(ptr18, 0, v40);
    *((char *)ptr17) = *((char *)ptr17) + v40;
    *(ptr12) = *(ptr12) + v40;
    *(ptr12) = *(ptr12) + v40;
    *(ptr12) = *(ptr12) + v40;
    *(ptr12) = *(ptr12) + v40;
    *(ptr12) = *(ptr12) + v40;
    *(ptr12) = *(ptr12) + v40;
    *(ptr12) = *(ptr12) + v40;
    *(ptr12) = *(ptr12) + v40;
    *(ptr12) = *(ptr12) + v40;
    *((char *)ptr17) = *((char *)ptr17) + v40;
    *(ptr12) = *(ptr12) + v40;
    *(ptr12) = *(ptr12) + v40;
    *(ptr12) = *(ptr12) + v40;
    *(ptr11) = *(ptr11) + *((char *)&ptr17);
    *(ptr12) = *(ptr12) + v40;
    *(ptr11) = *(ptr11) + *((char *)&ptr17);
    *(ptr12) = *(ptr12) + v40;
    ptr = (char *)_INSERT(ptr12, 0, v40 + *((char *)((void*)&ptr26 + 1)));
    v43 = _ccall(10, 1, (unsigned long long)v40, (unsigned long long)*((char *)((void*)&ptr26 + 1)), v34);
    if (!((char)v43))
        goto LABEL_10000ff9b;
LABEL_10000ff9b:
    *((char *)ptr17) = *((char *)ptr17) + *((char *)&ptr);
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
    ptr29->field_10002 = ptr29->field_10002 - *((char *)&ptr) - ((char)(v44 + *((char *)&ptr) <= v44 ? 1 : 0) & 1);
    v46 = (v44 + *((char *)&ptr) <= v44 ? 1 : 0) & 1;
    do
    {
        ptr21 = ptr17;
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr11) = *(ptr11) + *((char *)&ptr26);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr11) = *(ptr11) + *((char *)&ptr26);
        *(ptr) = *(ptr) + *((char *)&ptr);
        v48 = *(ptr);
        *(ptr) = *(ptr) + *((char *)&ptr21);
        v49 = _ccall(10, 1, (unsigned long long)v48, (unsigned long long)*((char *)(void*)&ptr21), v46);
        if (!((char)v49))
            goto LABEL_10000ffdb;
LABEL_10000ffdb:
        *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        v46 = 0;
        *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr11) = *(ptr11) + *((char *)&ptr26);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr11) = *(ptr11) + *((char *)&ptr26);
        *(ptr) = *(ptr) + *((char *)&ptr);
        v50 = *(ptr);
        *(ptr) = *(ptr) + *((char *)((void*)&ptr + 1));
        v51 = _ccall(10, 1, (unsigned long long)v50, (unsigned long long)*((char *)((void*)&ptr + 1)), 0);
        if (Conv(64I->1I, vvar_145)) { Goto None } else { Goto None }
        *((char *)ptr21) = *((char *)ptr21) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        v52 = *(ptr);
        *(ptr) = *(ptr) + *((char *)&ptr);
        v54 = _ccall(5, 1, (unsigned long long)v52, (unsigned long long)*((char *)(void*)&ptr), 0);
        ptr17 = ptr21 - 1;
    } while (ptr21 - 1 & (char)v54);
    v55 = *(ptr);
    ptr7 = (void*)_INSERT(ptr, 0, *((char *)&ptr) + v55);
    *((unsigned int *)ptr7) = *((int *)ptr7) + (unsigned int)ptr7;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    *((unsigned int *)ptr7) = *((int *)ptr7) + (unsigned int)ptr7;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    v57 = *((char *)ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr) + v55;
    ptr23 = (unsigned int)ptr7 + *((int *)ptr7) + ((unsigned int)(v57 + *((char *)&ptr) + v55 <= v57 ? 1 : 0) & 1);
    v59 = *((char *)ptr23);
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr23);
    ptr16 = (unsigned int)ptr23 + *((int *)ptr23) + ((unsigned int)(v59 + *((char *)&ptr23) <= v59 ? 1 : 0) & 1);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    *(ptr16) = *(ptr16) + *((char *)&ptr16);
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    *((char *)ptr20) = *((char *)ptr20) + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    *(ptr11) = *(ptr11) + *((char *)&ptr20);
    g_1000285 = g_1000285 + 133;
    *(ptr11) = *(ptr11) + *((char *)&ptr20);
    g_1000285 = g_1000285 + 133;
    g_1000300 = g_1000300 + *((char *)&ptr26);
    g_1000285 = g_1000285 + 133;
    *((void **)&g_1000285) = &(&g_1000285)[*((int *)&g_1000285)];
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_200050a = g_200050a + *((char *)&ptr20);
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    *((char *)ptr20) = *((char *)ptr20) + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    *(ptr11) = *(ptr11) + *((char *)&ptr20);
    g_1000285 = g_1000285 + 133;
    *(ptr11) = *(ptr11) + *((char *)&ptr20);
    g_1000285 = g_1000285 + 133;
    g_1000300 = g_1000300 + *((char *)((void*)&ptr20 + 1));
    g_1000285 = g_1000285 + 133;
    *((void **)&g_1000285) = &(&g_1000285)[*((int *)&g_1000285)];
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_1000285 = g_1000285 + 133;
    g_100020a = g_100020a + *((char *)((void*)&ptr20 + 1));
    v61 = g_1000285;
    ptr8 = 133 + v61 | 0x1000200;
    *((unsigned int *)ptr8) = *((int *)ptr8) + (unsigned int)ptr8;
    *((char *)ptr8) = *((char *)ptr8) + 133 + v61;
    *((char *)ptr8) = *((char *)ptr8) + 133 + v61;
    *((char *)ptr8) = *((char *)ptr8) + 133 + v61;
    *((char *)ptr8) = *((char *)ptr8) + 133 + v61;
    *((char *)ptr8) = *((char *)ptr8) + 133 + v61;
    *((char *)ptr8) = *((char *)ptr8) + 133 + v61;
    *((char *)ptr8) = *((char *)ptr8) + 133 + v61;
    *((char *)ptr8) = *((char *)ptr8) + 133 + v61;
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((unsigned int *)ptr8) = *((int *)ptr8) + (unsigned int)ptr8;
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    v63 = *((char *)ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    ptr24 = (unsigned int)ptr8 + *((int *)ptr8) + ((unsigned int)(v63 + *((char *)&ptr8) <= v63 ? 1 : 0) & 1);
    v65 = *((char *)ptr24);
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr24);
    ptr14 = (unsigned int)ptr24 + *((int *)ptr24) + ((unsigned int)(v65 + *((char *)&ptr24) <= v65 ? 1 : 0) & 1);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((unsigned int *)ptr14) = *((int *)ptr14) + (unsigned int)ptr14;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)&ptr14[123]) = (char)ptr14[123] + *((char *)&ptr14);
    v67 = *((char *)ptr14);
    ptr9 = (void*)_INSERT(ptr14, 0, *((char *)&ptr14) + v67);
    *((unsigned int *)ptr9) = *((int *)ptr9) + (unsigned int)ptr9;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    *((unsigned int *)ptr9) = *((int *)ptr9) + (unsigned int)ptr9;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    v69 = *((char *)ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v67;
    ptr25 = (unsigned int)ptr9 + *((int *)ptr9) + ((unsigned int)(v69 + *((char *)&ptr14) + v67 <= v69 ? 1 : 0) & 1);
    v71 = *((char *)ptr25);
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr25);
    ptr27 = (unsigned int)ptr25 + *((int *)ptr25) + ((unsigned int)(v71 + *((char *)&ptr25) <= v71 ? 1 : 0) & 1);
    v73 = *(ptr27);
    *(ptr27) = *(ptr27) + *((char *)&ptr27);
    addr = *((unsigned short *)&ptr27);
    v75 = _ccall(10, 1, (unsigned long long)v73, (unsigned long long)*((char *)(void*)&ptr27), (v71 + *((char *)(void*)&ptr25) <= v71 ? 1 : 0) & 1);
    if (!((char)v75))
        goto LABEL_10001015b;
LABEL_10001015b:
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    v2 -= *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
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
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) | *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) | *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    ptr5 = (void*)_INSERT(addr, 0, 123);
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr20);
    *((char *)ptr20) = *((char *)ptr20) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr20) = *((char *)ptr20) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *(ptr11) = *(ptr11) + *((char *)&ptr26);
    *((char *)ptr5) = *((char *)ptr5) + 123;
    *(ptr11) = *(ptr11) + *((char *)&ptr26);
    *((char *)ptr5) = *((char *)ptr5) + 123;
    ptr19 = (char *)_INSERT(ptr5, 0, 123 + *((char *)&ptr20));
    v78 = _ccall(10, 1, 123, (unsigned long long)*((char *)(void*)&ptr20), (v71 + *((char *)(void*)&ptr25) <= v71 ? 1 : 0) & 1);
    if (!((char)v78))
        goto LABEL_1000101db;
LABEL_1000101db:
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr19);
    *(ptr19) = *(ptr19) + *((char *)&ptr19);
    *(ptr19) = *(ptr19) + *((char *)&ptr19);
    *(ptr19) = *(ptr19) + *((char *)&ptr19);
    *(ptr19) = *(ptr19) + *((char *)&ptr19);
    *(ptr19) = *(ptr19) + *((char *)&ptr19);
    *(ptr19) = *(ptr19) + *((char *)&ptr19);
    *(ptr19) = *(ptr19) + *((char *)&ptr19);
    *(ptr19) = *(ptr19) + *((char *)&ptr19);
    *(ptr19) = *(ptr19) + *((char *)&ptr19);
    4311811193();
}
