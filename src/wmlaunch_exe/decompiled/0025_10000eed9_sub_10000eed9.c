/* sub_10000eed9 @ 0x10000eed9
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10000eed9  (2455 bytes, 27 basic blocks)
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

extern char g_1000075;
extern char g_1000076;
extern char g_100028e;
extern char g_11500ef95;

int sub_10000eed9(void)
{
    unsigned long v6;  // cc_op
    unsigned long v7;  // cc_dep1
    unsigned long v16;  // 4460
    void* ptr30;  // rdx
    void* ptr7;  // rax
    unsigned long v19;  // 4264
    struct_0 *ptr40;  // rsi
    char v21;  // 4203
    char v22;  // 4256
    void* ptr23;  // rax
    char v24;  // 4329
    void* ptr35;  // rax
    unsigned long v8;  // cc_dep2
    char v26;  // 4141
    void* ptr3;  // rax
    char v28;  // 4214
    char *ptr8;  // rax
    unsigned short v30;  // es_seg
    char v31;  // 4215
    void* ptr18;  // rax
    void* p;  // rax
    unsigned long long v34;  // cc_ndep
    void* ptr13;  // rax
    unsigned long v9;  // cc_ndep
    char v36;  // 4342
    void* ptr24;  // rax
    char v38;  // 4415
    void* ptr36;  // rax
    unsigned long v40;  // 4601
    char v41;  // 4141
    void* ptr25;  // rax
    void* ptr;  // rax
    char v44;  // 4444
    void* ptr4;  // rcx
    unsigned long v10;  // 4101
    unsigned long v46;  // 4642
    void* ptr29;  // rax
    char v48;  // 4210
    unsigned long v49;  // 4290
    void* ptr34;  // rax
    char v51;  // 4114
    unsigned long long v52;  // cc_ndep
    char *ptr11;  // rax
    char v54;  // 4214
    unsigned long v55;  // 4282
    void* ptr12;  // rcx
    void* ptr9;  // rax
    char v57;  // 4264
    void* ptr22;  // rax
    char v59;  // 4146
    void* ptr5;  // rax
    unsigned long v61;  // 4182
    char v62;  // 4254
    unsigned long v63;  // 4346
    char v64;  // 4097
    void* ptr10;  // rax
    char *ptr37;  // rax
    char v66;  // 4218
    void* ptr26;  // rax
    char v68;  // 4586
    void* ptr39;  // rax
    char v70;  // 4327
    void* ptr27;  // rax
    char *ptr14;  // rax
    unsigned long v73;  // 4160
    char *ptr6;  // rax
    unsigned long v75;  // 4282
    void* ptr15;  // rax
    char v76;  // 4215
    unsigned long v77;  // 4283
    void* ptr19;  // rax
    char v79;  // 4214
    unsigned long v80;  // 4283
    void* addr;  // rax
    char v82;  // 4214
    unsigned long v83;  // 4283
    char v84;  // 4369
    void* ptr31;  // rax
    char *ptr20;  // rbx
    void* ptr33;  // rax
    char v87;  // 4480
    void* ptr28;  // rax
    void* ptr32;  // rax
    char *ptr38;  // rax
    unsigned long v91;  // 4374
    char v92;  // 4238
    char *ptr17;  // rax
    char v94;  // 4214
    unsigned long v95;  // 4282
    char ptr21[16777871];  // rax
    char v96;  // 4279
    void* ptr16;  // rax
    void* v0;  // [bp-0x74]
    void* v1;  // [bp+0x0], Other Possible Types: unsigned long, char
    char v3;  // [bp+0x10002]
    char v5;  // [bp+0x11000a]

    v10 = _ccall(0, v6, v7, v8, v9);
    if (!((char)v10))
        goto LABEL_10000eedb;
LABEL_10000eedb:
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr37);
    *(ptr37) = *(ptr37) + *((char *)&ptr37);
    *(ptr37) = *(ptr37) + *((char *)&ptr37);
    *(ptr37) = *(ptr37) + *((char *)&ptr37);
    *(ptr37) = *(ptr37) + *((char *)&ptr37);
    *(ptr37) = *(ptr37) + *((char *)&ptr37);
    *(ptr37) = *(ptr37) + *((char *)&ptr37);
    *(ptr37) = *(ptr37) + *((char *)&ptr37);
    *(ptr37) = *(ptr37) + *((char *)&ptr37);
    *(ptr37) = *(ptr37) + *((char *)&ptr37);
    ptr15 = (void*)_INSERT(ptr37, 0, *((char *)&ptr37) + *((char *)&ptr12));
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *(ptr20) = *(ptr20) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *(ptr20) = *(ptr20) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)&ptr15[113]) = (char)ptr15[113] + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((unsigned int *)ptr15) = *((int *)ptr15) + (unsigned int)ptr15;
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    *((char *)ptr15) = *((char *)ptr15) + *((char *)&ptr37) + *((char *)&ptr12);
    g_100028e = g_100028e + 142;
    g_100028e = g_100028e + 142;
    g_100028e = g_100028e + 142;
    g_100028e = g_100028e + 142;
    g_100028e = g_100028e + 142;
    g_100028e = g_100028e + 142;
    g_100028e = g_100028e + 142;
    g_100028e = g_100028e + 142;
    g_100028e = g_100028e + 142;
    *((char *)ptr12) = *((char *)ptr12) + 142;
    g_100028e = g_100028e + 142;
    g_100028e = g_100028e + 142;
    g_100028e = g_100028e + 142;
    *(ptr20) = *(ptr20) + *((char *)&ptr12);
    g_100028e = g_100028e + 142;
    *(ptr20) = *(ptr20) + *((char *)&ptr12);
    g_100028e = g_100028e + 142;
    ptr21 = 142 + *((char *)&ptr20) | 0x1000200;
    v16 = _ccall(0, 1, 142, (unsigned long long)*((char *)(void*)&ptr20), v9);
    if (!((char)v16))
        goto LABEL_10000ef5b;
LABEL_10000ef5b:
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    *((char *)(ptr21 + &g_100028e)) = *((char *)(ptr21 + &g_100028e)) + *((char *)&ptr20);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    g_11500ef95 = g_11500ef95 + *((char *)&ptr30);
    ptr21[0] = ptr21[0] + *((char *)&ptr21);
    ptr7 = (void*)_INSERT(ptr21, 0, *((char *)&ptr21) + *((char *)((void*)&ptr30 + 1)));
    v19 = _ccall(0, 1, (unsigned long long)*((char *)(void*)&ptr21), (unsigned long long)*((char *)((void*)&ptr30 + 1)), v9);
    if (!((char)v19))
        goto LABEL_10000ef9b;
LABEL_10000ef9b:
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    ptr40->field_10002 = *((char *)&ptr12);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((unsigned int *)ptr7) = *((int *)ptr7) + (unsigned int)ptr7;
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) | *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) | *((char *)&ptr7);
    v21 = *((char *)ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr30) = *((char *)ptr30) - *((char *)((void*)&ptr30 + 1)) - ((char)(v21 + *((char *)&ptr7) <= v21 ? 1 : 0) & 1);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr30) = *((char *)ptr30) + *((char *)&ptr30);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)ptr7) = *((char *)ptr7) + *((char *)&ptr7);
    *((char *)&ptr7[114]) = (char)ptr7[114] + *((char *)((void*)&ptr30 + 1));
    v22 = *((char *)ptr7);
    ptr23 = (void*)_INSERT(ptr7, 0, *((char *)&ptr7) + v22);
    *((unsigned int *)ptr23) = *((int *)ptr23) + (unsigned int)ptr23;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((unsigned int *)ptr23) = *((int *)ptr23) + (unsigned int)ptr23;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) | *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    *((char *)ptr23) = *((char *)ptr23) | *((char *)&ptr7) + v22;
    v24 = *((char *)ptr23);
    *((char *)ptr23) = *((char *)ptr23) + *((char *)&ptr7) + v22;
    ptr35 = v1;
    if (!((char)__CFADD__(v24, *((char *)&ptr7) + v22)))
        goto LABEL_10000f01b;
LABEL_10000f01b:
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr35);
    *((char *)ptr35) = *((char *)ptr35) + *((char *)&ptr35);
    *((char *)ptr35) = *((char *)ptr35) + *((char *)&ptr35);
    *((char *)ptr35) = *((char *)ptr35) + *((char *)&ptr35);
    *((char *)ptr35) = *((char *)ptr35) + *((char *)&ptr35);
    *((char *)ptr35) = *((char *)ptr35) + *((char *)&ptr35);
    *((char *)ptr35) = *((char *)ptr35) + *((char *)&ptr30);
    *((char *)ptr35) = *((char *)ptr35) + *((char *)&ptr35);
    *((char *)ptr35) = *((char *)ptr35) + *((char *)&ptr35);
    *((char *)ptr35) = *((char *)ptr35) + *((char *)&ptr35);
    *((char *)&ptr35[114]) = (char)ptr35[114] + *((char *)&ptr20);
    v26 = *((char *)ptr35);
    ptr3 = (void*)_INSERT(ptr35, 0, *((char *)&ptr35) + v26);
    *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) | *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    *((char *)ptr3) = *((char *)ptr3) | *((char *)&ptr35) + v26;
    v28 = *((char *)ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr35) + v26;
    if (!((char)__CFADD__(v28, *((char *)&ptr35) + v26)))
        goto LABEL_10000f05b;
LABEL_10000f05b:
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)((void*)&ptr30 + 1));
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr12);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr12);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    ptr8 = (char *)_INSERT(ptr3, 0, *((char *)&ptr3) + *((char *)&ptr30));
    if (!((char)__CFADD__(*((char *)&ptr3), *((char *)&ptr30))))
        goto LABEL_10000f09b;
LABEL_10000f09b:
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr20);
    v30 = *((short *)ptr30);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr12);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr12);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    v31 = *(ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr30);
    if (!((char)__CFADD__(v31, *((char *)&ptr30))))
        goto LABEL_10000f0db;
LABEL_10000f0db:
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr12);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    ptr18 = ptr30 & 4294967295;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *(ptr20) = *(ptr20) + *((char *)&ptr12);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *(ptr20) = *(ptr20) + *((char *)&ptr12);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)&ptr18[115]) = (char)ptr18[115] + *((char *)&ptr18);
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
    p = ptr30 & 4294967295;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *(ptr20) = *(ptr20) + *((char *)&ptr12);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *(ptr20) = *(ptr20) + *((char *)&ptr12);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[115]) = (char)p[115] + *((char *)&ptr20);
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
    v34 = (v21 + *((char *)&ptr7) <= v21 ? 1 : 0) & 1;
    v5 |= v5 * 0x100;
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&ptr12);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&ptr12);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[16777331]) = (char)p[16777331] + *((char *)((void*)&p + 1));
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[16777869]) = (char)p[16777869] + *((char *)((void*)&p + 1));
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&ptr12);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)p) = *((char *)p) + *((char *)&ptr12);
    *((char *)p) = *((char *)p) + *((char *)&p);
    *((char *)&p[116]) = (char)p[116] + *((char *)&ptr12);
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
    ptr13 = ptr30 & 4294967295;
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *(ptr20) = *(ptr20) + *((char *)&ptr12);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *(ptr20) = *(ptr20) + *((char *)&ptr12);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)&ptr13[116]) = (char)ptr13[116] + *((char *)((void*)&ptr12 + 1));
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((unsigned int *)ptr13) = *((int *)ptr13) + (unsigned int)ptr13;
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)ptr13) = *((char *)ptr13) + *((char *)&ptr13);
    *((char *)&ptr13[115]) = (char)ptr13[115] + *((char *)((void*)&ptr12 + 1));
    v36 = *((char *)ptr13);
    ptr24 = (void*)_INSERT(ptr13, 0, *((char *)&ptr13) + v36);
    *((unsigned int *)ptr24) = *((int *)ptr24) + (unsigned int)ptr24;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((unsigned int *)ptr24) = *((int *)ptr24) + (unsigned int)ptr24;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) | *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    *((char *)ptr24) = *((char *)ptr24) | *((char *)&ptr13) + v36;
    v38 = *((char *)ptr24);
    *((char *)ptr24) = *((char *)ptr24) + *((char *)&ptr13) + v36;
    ptr36 = *((unsigned short *)&ptr24);
    v40 = _ccall(4, 1, (unsigned long long)v38, (unsigned long long)(*((char *)(void*)&ptr13) + v36), v34);
    if (Conv(64I->1I, vvar_185)) { Goto None } else { Goto None }
    *((char *)ptr12) = *((char *)ptr12) + *((char *)&ptr36);
    *((char *)ptr36) = *((char *)ptr36) + *((char *)&ptr36);
    *((char *)ptr36) = *((char *)ptr36) + *((char *)&ptr36);
    *((char *)ptr36) = *((char *)ptr36) + *((char *)&ptr36);
    *((char *)ptr36) = *((char *)ptr36) + *((char *)&ptr36);
    *((char *)ptr36) = *((char *)ptr36) + *((char *)&ptr36);
    *((char *)ptr36) = *((char *)ptr36) + *((char *)&ptr12);
    *((char *)ptr36) = *((char *)ptr36) + *((char *)&ptr36);
    *((char *)ptr36) = *((char *)ptr36) + *((char *)&ptr36);
    *((char *)ptr36) = *((char *)ptr36) + *((char *)&ptr36);
    *((char *)&ptr36[115]) = (char)ptr36[115] + *((char *)&ptr30);
    v41 = *((char *)ptr36);
    ptr25 = (void*)_INSERT(ptr36, 0, *((char *)&ptr36) + v41);
    *((unsigned int *)ptr25) = *((int *)ptr25) + (unsigned int)ptr25;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((unsigned int *)ptr25) = *((int *)ptr25) + (unsigned int)ptr25;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) | *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) | *((char *)&ptr36) + v41;
    *((char *)ptr25) = *((char *)ptr25) + *((char *)&ptr36) + v41;
    ptr = (void*)_INSERT(ptr25, 0, 116);
    *((char *)ptr) = *((char *)ptr) + 116;
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) | 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) | 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) | 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    v1 = vvar_25{r56|8b};
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) | 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    v3 &= *((char *)&ptr12);
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) | 116;
    *((char *)ptr) = *((char *)ptr) + 116;
    *((char *)ptr) = *((char *)ptr) | 116;
    v44 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + 116;
    ptr4 = ptr12 - 1;
    v46 = _ccall(5, 1, (unsigned long long)v44, 116, v34);
    ptr29 = ptr;
    if (!(ptr12 - 1 & (char)v46))
    {
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) | *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        v3 |= *((char *)&ptr4);
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
        v48 = *((char *)ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        v49 = _ccall(1, (unsigned long long)v48, (unsigned long long)*((char *)(void*)&ptr), v34);
        if (((v49 & 18446744073709551614) >> 6 & 1) != 1)
            goto LABEL_10000f35b;
LABEL_10000f35b:
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr4);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        ptr34 = (void*)_INSERT(ptr, 0, *((char *)&ptr) + *((char *)((void*)&ptr30 + 1)));
        *((unsigned short *)ptr30) = v30;
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr34) = *((char *)ptr34) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr34) = *((char *)ptr34) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr34) = *((char *)ptr34) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr34) = *((char *)ptr34) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr34) = *((char *)ptr34) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr34) = *((char *)ptr34) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr34) = *((char *)ptr34) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr34) = *((char *)ptr34) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr34) = *((char *)ptr34) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr34) = *((char *)ptr34) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr34) = *((char *)ptr34) + *((char *)&ptr) + *((char *)((void*)&ptr30 + 1));
        ptr29 = ptr34;
    }
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) | *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) | *((char *)&ptr29);
    v51 = *((char *)ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    v1 = (char)v1 + *((char *)((void*)&ptr30 + 1)) + ((char)(v51 + *((char *)&ptr29) <= v51 ? 1 : 0) & 1);
    v52 = (v51 + *((char *)&ptr29) <= v51 ? 1 : 0) & 1;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr4);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    ptr11 = (char *)_INSERT(ptr29, 0, *((char *)&ptr29) + *((char *)&ptr20));
    *((unsigned short *)ptr30) = v30;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *(ptr11) = *(ptr11) + *((char *)&ptr29) + *((char *)&ptr20);
    v54 = *(ptr11);
    *(ptr11) = *(ptr11) + *((char *)((void*)&ptr4 + 1));
    v55 = _ccall(4, 1, (unsigned long long)v54, (unsigned long long)*((char *)((void*)&ptr4 + 1)), v52);
    if (!((char)v55))
        goto LABEL_10000f3db;
LABEL_10000f3db:
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr4);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    ptr9 = (void*)_INSERT(ptr11, 0, *((char *)&ptr11) * 2);
    *((unsigned short *)ptr30) = v30;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr4);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr4);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)&ptr9[117]) = (char)ptr9[117] + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((unsigned int *)ptr9) = *((int *)ptr9) + (unsigned int)ptr9;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) | *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr11) * 2;
    v57 = *((char *)ptr9);
    ptr22 = (void*)_INSERT(ptr9, 0, *((char *)&ptr11) * 2 + v57);
    *((unsigned int *)ptr22) = *((int *)ptr22) + (unsigned int)ptr22;
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr11) * 2 + v57;
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr11) * 2 + v57;
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr11) * 2 + v57;
    *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr11) * 2 + v57;
    do
    {
        *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
        *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
        *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
        *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
        *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
        *((unsigned int *)ptr22) = *((int *)ptr22) + (unsigned int)ptr22;
        *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
        *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
        *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
        *((char *)ptr22) = *((char *)ptr22) | *((char *)&ptr22);
        *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
        *((char *)ptr22) = *((char *)ptr22) | *((char *)&ptr22);
        v59 = *((char *)ptr22);
        *((char *)ptr22) = *((char *)ptr22) + *((char *)&ptr22);
        ptr5 = v0;
        v61 = _ccall(4, 1, (unsigned long long)v59, (unsigned long long)*((char *)(void*)&ptr22), v52);
        if (!((char)v61))
            goto LABEL_10000f45b;
LABEL_10000f45b:
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)&ptr5[16777868]) = (char)ptr5[16777868] + *((char *)&ptr30);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr4);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)&ptr5[117]) = (char)ptr5[117] + *((char *)((void*)&ptr30 + 1));
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) | *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        v62 = *((char *)ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        v63 = _ccall(8, 1, (unsigned long long)v62, (unsigned long long)*((char *)(void*)&ptr5), v52);
        ptr22 = ptr5;
    } while ((char)v63);
    v64 = *((char *)ptr5);
    ptr10 = (void*)_INSERT(ptr5, 0, *((char *)&ptr5) + v64);
    *((unsigned int *)ptr10) = *((int *)ptr10) + (unsigned int)ptr10;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((unsigned int *)ptr10) = *((int *)ptr10) + (unsigned int)ptr10;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) | *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) | *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    v1 = *((char *)((void*)&ptr30 + 1));
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr4);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr5) + v64;
    *((char *)&ptr10[116]) = (char)ptr10[116] + *((char *)((void*)&ptr10 + 1));
    v66 = *((char *)ptr10);
    ptr26 = (void*)_INSERT(ptr10, 0, *((char *)&ptr5) + v64 + v66);
    *((unsigned int *)ptr26) = *((int *)ptr26) + (unsigned int)ptr26;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((unsigned int *)ptr26) = *((int *)ptr26) + (unsigned int)ptr26;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) | *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) | *((char *)&ptr5) + v64 + v66;
    *((char *)ptr26) = *((char *)ptr26) + *((char *)&ptr5) + v64 + v66;
    v68 = g_1000075;
    ptr39 = (void*)_INSERT(ptr26, 0, v68);
    *((char *)ptr39) = *((char *)ptr39) + v68;
    *((char *)ptr39) = *((char *)ptr39) + v68;
    *((char *)ptr39) = *((char *)ptr39) + v68;
    *((char *)ptr39) = *((char *)ptr39) + *((char *)&ptr4);
    *((char *)ptr39) = *((char *)ptr39) + v68;
    *((char *)ptr39) = *((char *)ptr39) + v68;
    *((char *)ptr39) = *((char *)ptr39) + v68;
    *((char *)&ptr39[116]) = (char)ptr39[116] + *((char *)&ptr4);
    v70 = *((char *)ptr39);
    ptr27 = (void*)_INSERT(ptr39, 0, v68 + v70);
    *((unsigned int *)ptr27) = *((int *)ptr27) + (unsigned int)ptr27;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((unsigned int *)ptr27) = *((int *)ptr27) + (unsigned int)ptr27;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) | v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) | v68 + v70;
    *((char *)ptr27) = *((char *)ptr27) + v68 + v70;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + *((char *)&ptr4);
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + *((char *)((void*)&ptr30 + 1));
    *((unsigned short *)ptr30) = v30;
    *((char *)ptr4) = *((char *)ptr4) + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    *((char *)ptr4) = *((char *)ptr4) + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + *((char *)&ptr4);
    g_1000075 = g_1000075 + 117;
    g_1000075 = g_1000075 + *((char *)&ptr4);
    g_1000075 = g_1000075 + 117;
    ptr14 = 117 + *((char *)&ptr30) | 0x1000000;
    v73 = _ccall(4, 1, 117, (unsigned long long)*((char *)(void*)&ptr30), v52);
    if (!((char)v73))
        goto LABEL_10000f59b;
LABEL_10000f59b:
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr4);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr20);
    *((unsigned short *)ptr30) = v30;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr4);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    *(ptr14) = *(ptr14) + *((char *)&ptr4);
    *(ptr14) = *(ptr14) + *((char *)&ptr14);
    ptr6 = (char *)_INSERT(ptr14, 0, *((char *)&ptr14) + *((char *)((void*)&ptr4 + 1)));
    v75 = _ccall(4, 1, (unsigned long long)*((char *)(void*)&ptr14), (unsigned long long)*((char *)((void*)&ptr4 + 1)), v52);
    if (!((char)v75))
        goto LABEL_10000f5db;
LABEL_10000f5db:
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr4);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *((unsigned short *)ptr30) = v30;
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr4);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr4);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    v76 = *(ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    v77 = _ccall(6, 1, (unsigned long long)v76, (unsigned long long)*((char *)(void*)&ptr6), v52);
    if (!((char)v77))
        goto LABEL_10000f61b;
LABEL_10000f61b:
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr4);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    ptr19 = *((int *)ptr30);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *(ptr20) = *(ptr20) + *((char *)&ptr30);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *(ptr20) = *(ptr20) + *((char *)&ptr30);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    v79 = *((char *)ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr20);
    v80 = _ccall(6, 1, (unsigned long long)v79, (unsigned long long)*((char *)(void*)&ptr20), v52);
    if (!((char)v80))
        goto LABEL_10000f65b;
LABEL_10000f65b:
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr19);
    addr = *((int *)ptr30);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr20) = *(ptr20) + *((char *)&ptr30);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr20) = *(ptr20) + *((char *)&ptr30);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    v82 = *((char *)addr);
    *((char *)addr) = *((char *)addr) + *((char *)((void*)&ptr30 + 1));
    v83 = _ccall(6, 1, (unsigned long long)v82, (unsigned long long)*((char *)((void*)&ptr30 + 1)), v52);
    if (!((char)v83))
        goto LABEL_10000f69b;
LABEL_10000f69b:
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)&addr[16777867]) = (char)addr[16777867] + *((char *)&ptr20);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr20) = *(ptr20) + *((char *)&ptr4);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr20) = *(ptr20) + *((char *)&ptr4);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)&addr[118]) = (char)addr[118] + *((char *)&ptr30);
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
    *((char *)&addr[16777867]) = (char)addr[16777867] + *((char *)&ptr4);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr20) = *(ptr20) + *((char *)&ptr30);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *(ptr20) = *(ptr20) + *((char *)&ptr30);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)(addr + &g_1000076)) = *((char *)(addr + &g_1000076)) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)addr) = *((char *)addr) + *((char *)&addr);
    *((char *)&addr[117]) = (char)addr[117] + *((char *)((void*)&ptr30 + 1));
    v84 = *((char *)addr);
    ptr31 = (void*)_INSERT(addr, 0, *((char *)&addr) + v84);
    *((unsigned int *)ptr31) = *((int *)ptr31) + (unsigned int)ptr31;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    *((unsigned int *)ptr31) = *((int *)ptr31) + (unsigned int)ptr31;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    *((char *)ptr31) = *((char *)ptr31) + *((char *)&addr) + v84;
    ptr33 = (unsigned int)ptr31 | 0xd000000;
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr33);
    *((char *)(ptr33 + &g_1000076)) = *((char *)(ptr33 + &g_1000076)) + *((char *)&ptr20);
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr33);
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr33);
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr33);
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr33);
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr33);
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr33);
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr33);
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr33);
    *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr33);
    *((char *)&ptr33[117]) = (char)ptr33[117] + *((char *)((void*)&ptr33 + 1));
    v87 = *((char *)ptr33);
    ptr28 = (void*)_INSERT(ptr33, 0, *((char *)&ptr33) + *((char *)ptr33));
    *((unsigned int *)ptr28) = *((int *)ptr28) + (unsigned int)ptr28;
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr33) + v87;
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((unsigned int *)ptr28) = *((int *)ptr28) + (unsigned int)ptr28;
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) | *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) | *((char *)&ptr28);
    *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr28);
    g_1000076 = g_1000076 + 118;
    g_1000076 = g_1000076 + 118;
    g_1000076 = g_1000076 + 118;
    g_1000076 = g_1000076 + 118;
    g_1000076 = g_1000076 + 118;
    *((char *)ptr4) = *((char *)ptr4) + 118;
    g_1000076 = g_1000076 + 118;
    g_1000076 = g_1000076 + 118;
    g_1000076 = g_1000076 + 118;
    g_1000076 = g_1000076 + *((char *)&ptr20);
    ptr32 = *((int *)ptr30);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *(ptr20) = *(ptr20) + *((char *)&ptr4);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    *(ptr20) = *(ptr20) + *((char *)&ptr4);
    *((char *)ptr32) = *((char *)ptr32) + *((char *)&ptr32);
    ptr38 = (char *)_INSERT(ptr32, 0, *((char *)&ptr32) + *((char *)((void*)&ptr30 + 1)));
    v91 = _ccall(6, 1, (unsigned long long)*((char *)(void*)&ptr32), (unsigned long long)*((char *)((void*)&ptr30 + 1)), v52);
    if (!((char)v91))
        goto LABEL_10000f7db;
LABEL_10000f7db:
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr38);
    *(ptr38) = *(ptr38) + *((char *)&ptr38);
    *(ptr38) = *(ptr38) + *((char *)&ptr38);
    *(ptr38) = *(ptr38) + *((char *)&ptr38);
    *(ptr38) = *(ptr38) + *((char *)&ptr38);
    *(ptr38) = *(ptr38) + *((char *)&ptr38);
    *(ptr38) = *(ptr38) + *((char *)&ptr38);
    *(ptr38) = *(ptr38) + *((char *)&ptr38);
    *(ptr38) = *(ptr38) + *((char *)&ptr38);
    *(ptr38) = *(ptr38) + *((char *)&ptr38);
    v92 = *((char *)ptr30);
    ptr17 = (char *)_INSERT(ptr38, 0, v92);
    *((char *)ptr4) = *((char *)ptr4) + v92;
    *(ptr17) = *(ptr17) + v92;
    *(ptr17) = *(ptr17) + v92;
    *(ptr17) = *(ptr17) + v92;
    *(ptr17) = *(ptr17) + v92;
    *(ptr17) = *(ptr17) + v92;
    *(ptr17) = *(ptr17) + v92;
    *(ptr17) = *(ptr17) + v92;
    *(ptr17) = *(ptr17) + v92;
    *(ptr17) = *(ptr17) + v92;
    *((char *)ptr4) = *((char *)ptr4) + v92;
    *(ptr17) = *(ptr17) + v92;
    *(ptr17) = *(ptr17) + v92;
    *(ptr17) = *(ptr17) + v92;
    *(ptr20) = *(ptr20) + *((char *)&ptr4);
    *(ptr17) = *(ptr17) + v92;
    *(ptr20) = *(ptr20) + *((char *)&ptr4);
    *(ptr17) = *(ptr17) + v92;
    v94 = *(ptr17);
    *(ptr17) = *(ptr17) + *((char *)((void*)&ptr4 + 1));
    v95 = _ccall(6, 1, (unsigned long long)v94, (unsigned long long)*((char *)((void*)&ptr4 + 1)), v52);
    if (!((char)v95))
        goto LABEL_10000f81b;
LABEL_10000f81b:
    *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    v96 = *((char *)ptr30);
    ptr16 = (void*)_INSERT(ptr17, 0, v96);
    *((char *)ptr4) = *((char *)ptr4) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr4) = *((char *)ptr4) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *(ptr20) = *(ptr20) + *((char *)&ptr30);
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *(ptr20) = *(ptr20) + *((char *)&ptr30);
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)&ptr16[119]) = (char)ptr16[119] + *((char *)((void*)&ptr30 + 1));
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((unsigned int *)ptr16) = *((int *)ptr16) + (unsigned int)ptr16;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((unsigned int *)ptr16) = *((int *)ptr16) + (unsigned int)ptr16;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
    *((char *)ptr16) = *((char *)ptr16) + v96;
}
