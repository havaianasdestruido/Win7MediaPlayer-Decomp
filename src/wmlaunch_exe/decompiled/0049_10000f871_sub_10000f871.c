/* sub_10000f871 @ 0x10000f871
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10000f871  (1447 bytes, 19 basic blocks)
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

extern char g_1000212;
extern char g_1000287;
extern void g_1000289;
extern char g_2000301;

int sub_10000f871(void)
{
    void* ptr21;  // rdx
    char v4;  // 4450
    char v13;  // 4118
    void* ptr22;  // rax
    char v15;  // 4128
    char *ptr26;  // rax
    char v17;  // 4138
    char *ptr18;  // rax
    unsigned long v19;  // 4196
    char v20;  // 4356
    void* ptr12;  // rax
    char v22;  // 4413
    char ptr7[16777336];  // rax
    void* ptr23;  // rax
    char v24;  // 4423
    unsigned long long v25;  // cc_ndep
    void* ptr;  // rax
    char v27;  // 4433
    void* cur;  // rcx
    unsigned long v29;  // 4658
    char v30;  // 4154
    unsigned long v31;  // 4192
    unsigned long v32;  // 4198
    void* ptr20;  // rcx
    char v33;  // 4190
    char v34;  // 4098
    char v35;  // 4108
    char v36;  // 4154
    unsigned long v37;  // 4221
    char v38;  // 4097
    void* ptr13;  // rax
    char v40;  // 4154
    void* ptr24;  // rax
    char *ptr16;  // rbx
    char v42;  // 4164
    void* p;  // rax
    char v44;  // 4456
    void* ptr15;  // rax
    void* ptr27;  // rax
    void* addr;  // rax
    char v48;  // 4126
    unsigned long v49;  // 4155
    char v50;  // 4141
    void* ptr3;  // rax
    char v8;  // 4511
    char v52;  // 4311
    void* ptr8;  // rax
    char *ptr6;  // rax
    char *ptr19;  // rax
    unsigned long v56;  // 4196
    char v57;  // 4223
    char v58;  // 4199
    unsigned long v59;  // 4261
    char v60;  // 4134
    unsigned long v61;  // 4163
    void* ptr10;  // rax
    char v62;  // 4097
    void* ptr14;  // rax
    char v64;  // 4154
    void* ptr25;  // rax
    char v66;  // 4164
    char *ptr17;  // rax
    char v68;  // 4174
    void* ptr5;  // rax
    char v70;  // 4303
    unsigned long v71;  // 4458
    unsigned long long v10;  // r8
    struct_0 *ptr30;  // rdi
    void* ptr28;  // rax
    void* ptr9;  // rax
    char v75;  // 4158
    unsigned long v76;  // 4203
    void* ptr29;  // rax
    char *ptr31;  // rax
    char v11;  // 4576
    void* ptr4;  // rax
    char *v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x8]

    v4 = *((char *)ptr21);
    ptr7 = (char [16777336])_INSERT(0, 0, v4);
    *((char *)ptr20) = *((char *)ptr20) + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    *((char *)ptr20) = *((char *)ptr20) + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + *((char *)&ptr20);
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + *((char *)&ptr20);
    ptr7[0] = ptr7[0] + v4;
    ptr7[16777335] = ptr7[16777335] + *((char *)((void*)&ptr16 + 1));
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + v4;
    ptr7[0] = ptr7[0] + *((char *)&ptr16);
    v8 = *((char *)ptr21);
    ptr10 = (void*)_INSERT(ptr7, 0, v8);
    *((char *)ptr20) = *((char *)ptr20) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)&ptr10[90]) = (char)ptr10[90] + *((char *)((void*)&ptr20 + 1));
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((unsigned int *)ptr10) = *((int *)ptr10) + (unsigned int)ptr10;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((unsigned int *)ptr10) = *((int *)ptr10) + (unsigned int)ptr10;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    v1 = v10;
    *((char *)ptr10) = *((char *)ptr10) | v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) | v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)((void*)&ptr16 + 1));
    *((char *)ptr20) = *((char *)ptr20) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *(ptr16) = *(ptr16) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + v8;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr20);
    v11 = *((char *)ptr21);
    ptr4 = (void*)_INSERT(ptr10, 0, v11);
    *((char *)ptr20) = *((char *)ptr20) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr20) = *((char *)ptr20) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *(ptr16) = *(ptr16) + *((char *)&ptr21);
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *(ptr16) = *(ptr16) + *((char *)&ptr21);
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)&ptr4[120]) = (char)ptr4[120] + *((char *)((void*)&ptr20 + 1));
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((unsigned int *)ptr4) = *((int *)ptr4) + (unsigned int)ptr4;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    *((char *)ptr4) = *((char *)ptr4) + v11;
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(904:F64x8)[t3,0] = t4()
        [D] PutI(968:I8x8)[t3,0] = 0x01()
    }
    else
    {
        [D] PutI(904:F64x8)[t3,0] = t4()
        [D] PutI(968:I8x8)[t3,0] = 0x01()
    }
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
    v13 = *((char *)ptr4);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
    ptr22 = (unsigned int)ptr4 + *((int *)ptr4) + ((unsigned int)(v13 + *((char *)&ptr4) <= v13 ? 1 : 0) & 1);
    v15 = *((char *)ptr22);
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
    ptr26 = (unsigned int)ptr22 + *((int *)ptr22) + ((unsigned int)(v15 + *((char *)&ptr22) <= v15 ? 1 : 0) & 1);
    v17 = *(ptr26);
    *(ptr26) = *(ptr26) + *((char *)&ptr26);
    ptr18 = *((unsigned short *)&ptr26);
    v19 = _ccall(8, 1, (unsigned long long)v17, (unsigned long long)*((char *)(void*)&ptr26), (v15 + *((char *)(void*)&ptr22) <= v15 ? 1 : 0) & 1);
    if (Conv(64I->1I, vvar_315)) { Goto None } else { Goto None }
    *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    *(ptr18) = *(ptr18) + *((char *)&ptr18);
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    *((char *)ptr20) = *((char *)ptr20) + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    *(ptr16) = *(ptr16) + *((char *)&ptr20);
    g_1000289 = g_1000289 + 137;
    *(ptr16) = *(ptr16) + *((char *)&ptr20);
    g_1000289 = g_1000289 + 137;
    g_2000301 = g_2000301 + *((char *)((void*)&ptr21 + 1));
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    *((char *)&ptr20[65538]) = *((char *)&ptr20);
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    *((void **)&g_1000289) = &(&g_1000289)[*((int *)&g_1000289)];
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 | 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 | 137;
    g_1000289 = g_1000289 + 137;
    *((void **)&g_1000289) = &(&g_1000289)[*((int *)&g_1000289)];
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000289 = g_1000289 + 137;
    g_1000212 = g_1000212 + *((char *)&ptr16);
    v20 = g_1000289;
    ptr12 = 137 + v20 | 0x1000200;
    *((unsigned int *)ptr12) = *((int *)ptr12) + (unsigned int)ptr12;
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    *((unsigned int *)ptr12) = *((int *)ptr12) + (unsigned int)ptr12;
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    v22 = *((char *)ptr12);
    *((char *)ptr12) = *((char *)ptr12) + 137 + v20;
    ptr23 = (unsigned int)ptr12 + *((int *)ptr12) + ((unsigned int)(v22 + 137 + v20 <= v22 ? 1 : 0) & 1);
    v24 = *((char *)ptr23);
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr23);
    v25 = (v24 + *((char *)&ptr23) <= v24 ? 1 : 0) & 1;
    ptr = (unsigned int)ptr23 + *((int *)ptr23) + ((unsigned int)(v24 + *((char *)&ptr23) <= v24 ? 1 : 0) & 1);
    v27 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    cur = ptr20 - 1;
    v29 = _ccall(5, 1, (unsigned long long)v27, (unsigned long long)*((char *)(void*)&ptr), (v24 + *((char *)(void*)&ptr23) <= v24 ? 1 : 0) & 1);
    if (!(ptr20 - 1 & (char)v29))
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
        *((char *)ptr) = *((char *)ptr) + *((char *)((void*)&ptr + 1));
        *((unsigned int *)ptr21) = (unsigned int)ptr;
        *((char *)cur) = *((char *)cur) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    }
    do
    {
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
        v30 = *((char *)ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        v31 = _ccall(1, (unsigned long long)v30, (unsigned long long)*((char *)(void*)&ptr), v25);
        v32 = _ccall(8, 0, v31 & 18446744073709551614, 0, 0);
        if (!((char)v32))
            goto LABEL_10000fa5b;
LABEL_10000fa5b:
        *((char *)cur) = *((char *)cur) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&cur);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)&cur[65538]) = (char)cur[65538] | *((char *)&cur);
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
        v33 = *((char *)ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        ptr = (unsigned int)ptr + *((int *)ptr) + ((unsigned int)(v33 + *((char *)&ptr) <= v33 ? 1 : 0) & 1);
        v34 = *((char *)ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        ptr = (unsigned int)ptr + *((int *)ptr) + ((unsigned int)(v34 + *((char *)&ptr) <= v34 ? 1 : 0) & 1);
        v35 = *((char *)ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)cur) = *((char *)cur) + *((char *)((void*)&ptr16 + 1)) + ((char)(v35 + *((char *)&ptr) <= v35 ? 0 : 1) & 1);
        v25 = (v35 + *((char *)&ptr) <= v35 ? 1 : 0) & 1;
        *((char *)cur) = *((char *)cur) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        v36 = *((char *)ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        cur -= 1;
        v37 = _ccall(5, 1, (unsigned long long)v36, (unsigned long long)*((char *)(void*)&ptr), (v35 + *((char *)(void*)&ptr) <= v35 ? 1 : 0) & 1);
    } while (cur - 1 & (char)v37);
    v38 = *((char *)ptr);
    ptr13 = (void*)_INSERT(ptr, 0, *((char *)&ptr) + v38);
    *((unsigned int *)ptr13) = *((int *)ptr13) + (unsigned int)ptr13;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    *((unsigned int *)ptr13) = *((int *)ptr13) + (unsigned int)ptr13;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    v40 = *((char *)ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr) + v38;
    ptr24 = (unsigned int)ptr13 + *((int *)ptr13) + ((unsigned int)(v40 + *((char *)&ptr) + v38 <= v40 ? 1 : 0) & 1);
    v42 = *((char *)ptr24);
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr24);
    p = (unsigned int)ptr24 + *((int *)ptr24) + ((unsigned int)(v42 + *((char *)&ptr24) <= v42 ? 1 : 0) & 1);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)cur) = *((char *)cur) - *((char *)((void*)&ptr16 + 1));
    *((char *)cur) = *((char *)cur) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[65538]) = (char)p[65538] | (char)p[65538] * 0x100;
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)cur) = *((char *)cur) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&cur);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&cur);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[121]) = (char)p[121] + *((char *)&p);
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
    *((char *)&p[16777864]) = (char)p[16777864] + *((char *)((void*)&p + 1));
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)cur) = *((char *)cur) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *(ptr16) = *(ptr16) + *((char *)&ptr21);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *(ptr16) = *(ptr16) + *((char *)&ptr21);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[121]) = (char)p[121] + *((char *)&ptr16);
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
    *((char *)&p[120]) = (char)p[120] + *((char *)((void*)&ptr21 + 1));
    v44 = *((char *)p);
    ptr15 = (void*)_INSERT(p, 0, *((char *)&p) + v44);
    *((unsigned int *)ptr15) = *((int *)ptr15) + (unsigned int)ptr15;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&p) + v44;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&p) + v44;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&p) + v44;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&p) + v44;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&p) + v44;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&p) + v44;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&p) + v44;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&p) + v44;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&p) + v44;
    *((unsigned int *)ptr15) = *((int *)ptr15) + (unsigned int)ptr15;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr15);
    ptr27 = (unsigned int)ptr15 | *((int *)ptr15);
    *((char *)ptr27) = *((char *)ptr27) + *((char *)&ptr27);
    addr = (unsigned int)ptr27 | *((int *)ptr27);
    v48 = *((char *)addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    v49 = _ccall(0, 1, (unsigned long long)v48, (unsigned long long)*((char *)(void*)&addr), (v42 + *((char *)(void*)&ptr24) <= v42 ? 1 : 0) & 1);
    if (!((char)v49))
    {
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
        *((char *)&addr[120]) = (char)addr[120] + *((char *)&ptr21);
        v50 = *((char *)addr);
        ptr3 = (void*)_INSERT(addr, 0, *((char *)&addr) + v50);
        *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) | *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) | *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)cur) = *((char *)((void*)&ptr16 + 1));
        *((char *)cur) = *((char *)cur) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&cur);
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)&ptr3[65538]) = (char)ptr3[65538] - *((char *)&cur);
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        v52 = *((char *)ptr3);
        *((char *)ptr3) = *((char *)ptr3) + *((char *)&addr) + v50;
        addr = (unsigned int)ptr3 + *((int *)ptr3) + ((unsigned int)(v52 + *((char *)&addr) + v50 <= v52 ? 1 : 0) & 1);
    }
    *(ptr16) = *(ptr16) + *((char *)&ptr21);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)&addr[16777337]) = (char)addr[16777337] + *((char *)((void*)&addr + 1));
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&cur);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    InterlockedExchange(ptr21, (unsigned int)addr);
    ptr8 = *((int *)ptr21);
    *((char *)cur) = *((char *)cur) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)cur) = *((char *)cur) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&cur);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&cur);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)&ptr8[16777337]) = (char)ptr8[16777337] + *((char *)((void*)&ptr16 + 1));
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&cur);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    *((char *)ptr8) = *((char *)ptr8) + *((char *)&ptr8);
    if ([D] unsupported_<class 'pyvex.expr.GetI'>())
    {
        [D] PutI(904:F64x8)[t3,0] = t4()
        [D] PutI(968:I8x8)[t3,0] = 0x01()
    }
    else
    {
        [D] PutI(904:F64x8)[t3,0] = t4()
        [D] PutI(968:I8x8)[t3,0] = 0x01()
    }
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
    *((char *)cur) = *((char *)cur) >> 1;
    *((char *)cur) = *((char *)cur) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    ptr6 = &g_1000287;
    g_1000287 = g_1000287 + 135;
    g_1000287 = g_1000287 + 135;
    do
    {
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *((char *)cur) = *((char *)cur) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr16) = *(ptr16) + *((char *)&ptr21);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr16) = *(ptr16) + *((char *)&ptr21);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        ptr19 = (char *)_INSERT(ptr6, 0, *((char *)&ptr6) + *((char *)((void*)&cur + 1)));
        v56 = _ccall(8, 1, (unsigned long long)*((char *)(void*)&ptr6), (unsigned long long)*((char *)((void*)&cur + 1)), 0);
        if (!((char)v56))
            goto LABEL_10000fcdb;
LABEL_10000fcdb:
        *((char *)cur) = *((char *)cur) + *((char *)&ptr19);
        *(ptr19) = *(ptr19) + *((char *)&ptr19);
        *(ptr19) = *(ptr19) + *((char *)&ptr19);
        *(ptr19) = *(ptr19) + *((char *)&ptr19);
        *(ptr19) = *(ptr19) + *((char *)&ptr19);
        *(ptr19) = *(ptr19) + *((char *)&ptr19);
        *(ptr19) = *(ptr19) + *((char *)&ptr19);
        *(ptr19) = *(ptr19) + *((char *)&ptr19);
        *(ptr19) = *(ptr19) + *((char *)&ptr19);
        *(ptr19) = *(ptr19) + *((char *)&ptr19);
        v57 = g_1000287;
        ptr6 = (char *)_INSERT(ptr19, 0, v57);
        *(ptr6) = *(ptr6) + v57;
        *(ptr6) = *(ptr6) + v57;
        *(ptr6) = *(ptr6) + v57;
        *(ptr6) = *(ptr6) + v57;
        *(ptr6) = *(ptr6) + v57;
        *(ptr6) = *(ptr6) + v57;
        *(ptr6) = *(ptr6) + v57;
        *((char *)cur) = *((char *)cur) + v57;
        *(ptr6) = *(ptr6) + v57;
        *(ptr6) = *(ptr6) + v57;
        *(ptr6) = *(ptr6) + v57;
        *(ptr16) = *(ptr16) + *((char *)&ptr21);
        *(ptr6) = *(ptr6) + v57;
        *(ptr16) = *(ptr16) + *((char *)&ptr21);
        *(ptr6) = *(ptr6) + v57;
        v58 = *(ptr6);
        *(ptr6) = *(ptr6) + v57;
        v59 = _ccall(10, 1, (unsigned long long)v58, (unsigned long long)v57, 0);
        if (Conv(64I->1I, vvar_341)) { Goto None } else { Goto None }
        *((char *)cur) = *((char *)cur) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        v60 = *(ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        v61 = _ccall(8, 1, (unsigned long long)v60, (unsigned long long)*((char *)(void*)&ptr6), 0);
    } while ((char)v61);
    v62 = *(ptr6);
    ptr14 = (void*)_INSERT(ptr6, 0, *((char *)&ptr6) + v62);
    *((unsigned int *)ptr14) = *((int *)ptr14) + (unsigned int)ptr14;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    *((unsigned int *)ptr14) = *((int *)ptr14) + (unsigned int)ptr14;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    v64 = *((char *)ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr6) + v62;
    ptr25 = (unsigned int)ptr14 + *((int *)ptr14) + ((unsigned int)(v64 + *((char *)&ptr6) + v62 <= v64 ? 1 : 0) & 1);
    v66 = *((char *)ptr25);
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr25);
    ptr17 = (unsigned int)ptr25 + *((int *)ptr25) + ((unsigned int)(v66 + *((char *)&ptr25) <= v66 ? 1 : 0) & 1);
    v68 = *(ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *((char *)ptr21) = *((char *)ptr21) - *((char *)((void*)&ptr16 + 1)) - ((char)(v68 + *((char *)&ptr17) <= v68 ? 1 : 0) & 1);
    *((char *)cur) = *((char *)cur) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    v0 = ptr17;
    InterlockedExchange(ptr21, (unsigned int)ptr17);
    ptr5 = *((int *)ptr21);
    *((char *)cur) = *((char *)cur) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)cur) = *((char *)cur) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *(ptr16) = *(ptr16) + *((char *)&cur);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *(ptr16) = *(ptr16) + *((char *)&cur);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    v70 = *((char *)ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)((void*)&ptr21 + 1));
    v71 = _ccall(10, 1, (unsigned long long)v70, (unsigned long long)*((char *)((void*)&ptr21 + 1)), (v68 + *((char *)(void*)&ptr17) <= v68 ? 1 : 0) & 1);
    if (!((char)v71))
        goto LABEL_10000fd9b;
LABEL_10000fd9b:
    *((char *)cur) = *((char *)cur) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    ptr30->field_10002 = ptr30->field_10002 - *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    ptr28 = (unsigned int)ptr5 | *((int *)ptr5);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    ptr9 = (unsigned int)ptr28 | *((int *)ptr28);
    v75 = *((char *)ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    v76 = _ccall(10, 1, (unsigned long long)v75, (unsigned long long)*((char *)(void*)&ptr9), (v68 + *((char *)(void*)&ptr17) <= v68 ? 1 : 0) & 1);
    if (!((char)v76))
        goto LABEL_10000fddb;
LABEL_10000fddb:
    *((char *)cur) = *((char *)cur) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    ptr30->field_10002 = ptr30->field_10002 + *((char *)&ptr9);
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
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    ptr29 = (unsigned int)ptr9 | *((int *)ptr9);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    ptr31 = (unsigned int)ptr29 | *((int *)ptr29);
    *(ptr31) = *(ptr31) + *((char *)&ptr31);
}
