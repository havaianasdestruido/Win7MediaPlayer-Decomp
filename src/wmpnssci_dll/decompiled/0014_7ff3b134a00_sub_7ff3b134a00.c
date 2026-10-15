/* sub_7ff3b134a00 @ 0x7ff3b134a00
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b134a00  (947 bytes, 62 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern char g_4;
extern char g_7fecf134a59;
extern char g_7feef134d51;
extern char g_7ff43134d79;
extern char g_7ff97134aa9;
extern char g_7ff9b134da1;

int sub_7ff3b134a00(void)
{
    void* ptr37;  // rax
    char *ptr40;  // rax
    char *ptr16;  // rbx
    unsigned long v102;  // 4186
    char *ptr3;  // rax
    char v104;  // 4121
    unsigned long v105;  // 4158
    char v106;  // 4110
    unsigned long v107;  // 4129
    void* ptr38;  // rax
    char *ptr44;  // rax
    char v13[3];  // rsi
    char *ptr13;  // rax
    char v15;  // 4173
    unsigned long v16;  // 4229
    char *ptr22;  // rax
    char ptr41[2];  // rdi
    char *ptr30;  // rax
    unsigned long v20;  // 4142
    char *ptr8;  // rax
    char v4;  // 4110
    char v22;  // 4121
    char v23;  // 4106
    char *ptr17;  // rax
    char v25;  // 4121
    char ptr39[2];  // rdi
    char ptr45[3];  // rsi
    char *ptr31;  // rax
    void* ptr18;  // rax
    char v30;  // 4121
    unsigned long v31;  // 4145
    unsigned long long v5;  // cc_ndep
    void* ptr19;  // rax
    char v33;  // 4113
    char *ptr46;  // rax
    void* ptr23;  // rax
    void* ptr5;  // rax
    char v37;  // 4160
    unsigned long v38;  // 4209
    char ptr14[119];  // rax
    char v40;  // 4142
    unsigned long v41;  // 4179
    char *ptr32;  // rax
    char *ptr33;  // rax
    char *ptr42;  // rax
    char v44;  // 4148
    char *ptr6;  // rax
    unsigned long v46;  // 4192
    char v47;  // 4114
    unsigned long v48;  // 4131
    char *addr;  // rax
    char v50;  // 4121
    unsigned long v51;  // 4145
    char *p;  // rcx
    void* ptr26;  // rax
    char v53;  // 4121
    unsigned long v54;  // 4145
    void* ptr24;  // rax
    void* ptr4;  // rax
    char v57;  // 4129
    unsigned long v58;  // 4154
    void* ptr27;  // rax
    void* ptr20;  // rax
    unsigned long long v61;  // rbp
    char *ptr;  // rdx
    char ptr15[122];  // rax
    char v63;  // 4155
    unsigned long v64;  // 4198
    void* ptr28;  // rax
    char ptr21[5];  // rax
    unsigned long v67;  // 4101
    unsigned long v68;  // 4101
    unsigned long v69;  // 4101
    unsigned long v70;  // 4101
    unsigned long v71;  // 4101
    char *ptr7;  // rax
    unsigned long v72;  // 4101
    unsigned long v73;  // 4101
    char *ptr47;  // rax
    unsigned long v75;  // 4101
    char *ptr34;  // rax
    char *ptr43;  // rax
    char v78;  // 4148
    char ptr12[805307514];  // rax
    unsigned long v80;  // 4191
    char *ptr25;  // rax
    char v10;  // 4149
    void* ptr29;  // rax
    unsigned long v83;  // 4152
    char *ptr9;  // rax
    char v85;  // 4122
    unsigned long v86;  // 4150
    char v87;  // 4106
    unsigned long v88;  // 4119
    char *ptr10;  // rax
    char v90;  // 4121
    unsigned long v91;  // 4158
    unsigned long v11;  // 4200
    char v92;  // 4106
    unsigned long v93;  // 4119
    char *ptr11;  // rax
    char v95;  // 4121
    unsigned long v96;  // 4149
    char v97;  // 4106
    unsigned long v98;  // 4119
    char *ptr48;  // rax
    char *ptr35;  // rax
    char *ptr36;  // rax
    unsigned long v0;  // [bp+0x0]

    *((char *)ptr37) = *((char *)ptr37) + *((char *)&ptr37);
    *((char *)ptr37) = *((char *)ptr37) + *((char *)&ptr37);
    ptr40 = (unsigned int)ptr37 + *((int *)ptr37);
    v4 = *(ptr40);
    *(ptr40) = *(ptr40) + *((char *)&ptr40);
    v5 = (v4 + *((char *)&ptr40) <= v4 ? 1 : 0) & 1;
    ptr32 = (char *)_INSERT(ptr40, 0, *((char *)&ptr40) + 113 + ((char)(v4 + *((char *)&ptr40) <= v4 ? 1 : 0) & 1));
    *(ptr32) = *(ptr32) + *((char *)&ptr40) + 113 + ((char)(v4 + *((char *)&ptr40) <= v4 ? 1 : 0) & 1);
    *(ptr32) = *(ptr32) + *((char *)&ptr40) + 113 + ((char)(v4 + *((char *)&ptr40) <= v4 ? 1 : 0) & 1);
    *(ptr32) = *(ptr32) + *((char *)&ptr40) + 113 + ((char)(v4 + *((char *)&ptr40) <= v4 ? 1 : 0) & 1);
    *(p) = *(p) + *((char *)&ptr40) + 113 + ((char)(v4 + *((char *)&ptr40) <= v4 ? 1 : 0) & 1);
    *(ptr32) = *(ptr32) + *((char *)&ptr40) + 113 + ((char)(v4 + *((char *)&ptr40) <= v4 ? 1 : 0) & 1);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr32 + 1));
    ptr7 = (unsigned int)ptr32 + 72083;
    v10 = *(ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    v11 = _ccall(0, 1, (unsigned long long)v10, (unsigned long long)*((char *)(void*)&ptr7), (v4 + *((char *)(void*)&ptr40) <= v4 ? 1 : 0) & 1);
    if ((char)v11)
    {
        *(ptr7) = *(ptr7) + *((char *)&ptr7);
        *(ptr7) = *(ptr7) + *((char *)&ptr7);
    }
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr16) = *(ptr16) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(4 + p + 0x2 * v13) = *(4 + p + 0x2 * v13) + *((char *)&p);
    *(ptr7) = *(ptr7) + *((char *)((void*)&ptr + 1));
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(p) = *(p) + *((char *)&ptr7);
    *(ptr7) = *(ptr7) + *((char *)&ptr7);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr7 + 1));
    ptr13 = (unsigned int)ptr7 + 137619;
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    v15 = g_7fecf134a59;
    g_7fecf134a59 = g_7fecf134a59 + *((char *)&ptr13);
    v16 = _ccall(0, 1, (unsigned long long)v15, (unsigned long long)*((char *)(void*)&ptr13), v5);
    if ((char)v16)
        *(ptr13) = *(ptr13) + *((char *)&ptr);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(p) = *(p) + *((char *)&ptr13);
    *(ptr13) = *(ptr13) + *((char *)&ptr13);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr13 + 1));
    ptr22 = (unsigned int)ptr13 + 203155;
    *(ptr22) = *(ptr22) + *((char *)&ptr22);
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
    *(ptr22) = *(ptr22) + *((char *)&ptr22);
    *(ptr22) = *(ptr22) + *((char *)&ptr22);
    *(ptr22) = *(ptr22) + *((char *)&ptr22);
    *(ptr22) = *(ptr22) + *((char *)&ptr22);
    ptr41[0] = ptr41[0] + *((char *)&ptr22);
    *(ptr22) = *(ptr22) + *((char *)&ptr22);
    ptr30 = (char *)_INSERT(ptr22, 1, *((char *)((void*)&ptr22 + 1)) + *((char *)((void*)&ptr + 1)));
    v20 = _ccall(0, 1, (unsigned long long)*((char *)((void*)&ptr22 + 1)), (unsigned long long)*((char *)((void*)&ptr + 1)), v5);
    if ((char)v20)
        *(ptr30) = *(ptr30) + *((char *)&ptr30);
    *(ptr30) = *(ptr30) + *((char *)&ptr30);
    *(ptr30) = *(ptr30) + *((char *)&ptr30);
    *(p) = *(p) + *((char *)&ptr30);
    *(ptr30) = *(ptr30) + *((char *)&ptr30);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr30 + 1));
    ptr8 = (unsigned int)ptr30 + 137619;
    v22 = *(ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    if (!((char)__CFADD__(v22, *((char *)&ptr8))))
    {
        *(ptr8) = *(ptr8) + *((char *)&ptr8);
        *(ptr8) = *(ptr8) + *((char *)&ptr8);
    }
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    v23 = g_7ff97134aa9;
    g_7ff97134aa9 = g_7ff97134aa9 + *((char *)&ptr8);
    if (!((char)__CFADD__(v23, *((char *)&ptr8))))
        *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(p) = *(p) + *((char *)&ptr8);
    *(ptr8) = *(ptr8) + *((char *)&ptr8);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr8 + 1));
    ptr17 = (unsigned int)ptr8 + 399763;
    v25 = *(ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    ptr41[0] = v13[0];
    ptr39 = &ptr41[1];
    ptr45 = &v13[1];
    if (!((char)__CFADD__(v25, *((char *)&ptr17))))
    {
        *(ptr17) = *(ptr17) + *((char *)&ptr17);
        *(ptr17) = *(ptr17) + *((char *)&ptr17);
    }
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    ptr39[0] = ptr39[0] + *((char *)&p);
    *(ptr17) = *(ptr17) + *((char *)&ptr17);
    ptr31 = (char *)_INSERT(ptr17, 1, *((char *)((void*)&ptr17 + 1)) + *((char *)&ptr));
    if (!((char)__CFADD__(*((char *)((void*)&ptr17 + 1)), *((char *)&ptr))))
        *(ptr31) = *(ptr31) + *((char *)((void*)&p + 1));
    *(ptr31) = *(ptr31) + *((char *)&ptr31);
    *(ptr31) = *(ptr31) + *((char *)&ptr31);
    *(p) = *(p) + *((char *)&ptr31);
    *(ptr31) = *(ptr31) + *((char *)&ptr31);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr31 + 1));
    ptr18 = (unsigned int)ptr31 + 661907;
    v30 = *((char *)ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    v31 = _ccall(4, 1, (unsigned long long)v30, (unsigned long long)*((char *)(void*)&ptr18), v5);
    if (!((char)v31))
    {
        ptr19 = (void*)_INSERT(ptr18, 0, *((char *)&ptr18));
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr18);
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr18);
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr18);
        v33 = *((char *)ptr19);
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr18);
        *((unsigned int *)ptr19) = *((int *)ptr19) - (unsigned int)ptr19 - ((unsigned int)(v33 + *((char *)&ptr18) <= v33 ? 1 : 0) & 1);
        *((char *)ptr19) = *((char *)ptr19) + *((char *)&ptr18);
    }
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)(ptr45 * 2 + 4)) = *((char *)(ptr45 * 2 + 4)) + *((char *)&ptr16);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    ptr46 = (unsigned int)ptr18 + *((int *)ptr18);
    *(ptr46) = *(ptr46) + *((char *)&ptr46);
    ptr23 = (void*)_INSERT(ptr46, 0, *((char *)&ptr46) & 117);
    *((char *)ptr23) = *((char *)ptr23) & *((char *)&ptr46) & 117;
    *((char *)ptr23) = *((char *)ptr23) + (*((char *)&ptr46) & 117);
    *((char *)ptr23) = *((char *)ptr23) + (*((char *)&ptr46) & 117);
    *((char *)ptr23) = *((char *)ptr23) + (*((char *)&ptr46) & 117);
    *((unsigned int *)ptr23) = *((int *)ptr23) + (unsigned int)ptr23;
    *((char *)ptr23) = *((char *)ptr23) + (*((char *)&ptr46) & 117);
    ptr5 = (void*)_INSERT(ptr23, 0, *((char *)&ptr46) & 117 & 172);
    v37 = *((char *)ptr5);
    *((char *)ptr5) = *((char *)ptr5) + (*((char *)&ptr46) & 117 & 172);
    vvar_145{r48|8b} = v0;
    v38 = _ccall(4, 1, (unsigned long long)v37, (unsigned long long)(*((char *)(void*)&ptr46) & 117 & 172), v5);
    if ((char)v38)
    {
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
        *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    }
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *(ptr16) = *(ptr16) + *((char *)&p);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)(vvar_146{r56|8b} + ptr45 * 2 + 4718596)) = *((char *)(vvar_146{r56|8b} + ptr45 * 2 + 4718596)) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    *((unsigned int *)ptr5) = *((int *)ptr5) + (unsigned int)ptr5;
    *((char *)ptr5) = *((char *)ptr5) + *((char *)&ptr5);
    ptr14 = (char [119])_INSERT(ptr5, 0, *((char *)&ptr5) & 70);
    v40 = ptr14[0];
    ptr14[0] = ptr14[0] + (*((char *)&ptr5) & 70);
    v41 = _ccall(6, 1, (unsigned long long)v40, (unsigned long long)(*((char *)(void*)&ptr5) & 70), v5);
    if (!((char)v41))
    {
        ptr14[0] = ptr14[0] + *((char *)&ptr14);
        ptr14[0] = ptr14[0] + *((char *)&ptr14);
    }
    ptr14[0] = ptr14[0] + *((char *)&ptr14);
    ptr14[0] = ptr14[0] + *((char *)&ptr14);
    ptr45[0] = ptr45[0] + *((char *)&p);
    ptr14[0] = ptr14[0] + *((char *)&ptr14);
    ptr14[118] = ptr14[118] + *((char *)((void*)&p + 1));
    ptr33 = (char *)_INSERT(ptr14, 0, *((char *)&ptr14));
    *(ptr33) = *(ptr33) + *((char *)&ptr14);
    *(ptr33) = *(ptr33) + *((char *)&ptr14);
    *(ptr33) = *(ptr33) + *((char *)&ptr14);
    *(p) = *(p) + *((char *)&ptr14);
    *(ptr33) = *(ptr33) + *((char *)&ptr14);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr33 + 1));
    ptr42 = (unsigned int)ptr33 + 72083;
    v44 = *(ptr42);
    *(ptr42) = *(ptr42) + *((char *)&ptr42);
    ptr6 = (char *)_INSERT(ptr42, 0, ptr45[0]);
    v46 = _ccall(4, 1, (unsigned long long)v44, (unsigned long long)*((char *)(void*)&ptr42), v5);
    if (!((char)v46))
    {
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
    }
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr16) = *(ptr16) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    v47 = *(ptr6);
    *(ptr6) = *(ptr6) + *((char *)((void*)&ptr16 + 1));
    v48 = _ccall(6, 1, (unsigned long long)v47, (unsigned long long)*((char *)((void*)&ptr16 + 1)), v5);
    if ((char)v48)
    {
        *(ptr6) = *(ptr6) + *((char *)((void*)&ptr6 + 1));
        *(ptr6) = *(ptr6) + *((char *)&ptr6);
    }
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(p) = *(p) + *((char *)&ptr6);
    *(ptr6) = *(ptr6) + *((char *)&ptr6);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr6 + 1));
    addr = (unsigned int)ptr6 + 72083;
    v50 = *(addr);
    *(addr) = v50 + *((char *)&addr);
    v51 = _ccall(0, 1, (unsigned long long)v50, (unsigned long long)*((char *)(void*)&addr), v5);
    if (!((char)v51))
    {
        ptr26 = (void*)_INSERT(addr, 0, *((char *)&addr));
        *((char *)ptr26) = *((char *)ptr26) + *((char *)&addr);
        *((char *)ptr26) = *((char *)ptr26) + *((char *)&addr);
        *((char *)ptr26) = *((char *)ptr26) + *((char *)&addr);
        *((char *)ptr26) = *((char *)ptr26) + *((char *)&addr);
        addr = (unsigned int)ptr26 + *((int *)ptr26);
        v53 = *(addr);
        *(addr) = v53 + *((char *)&addr);
        v54 = _ccall(8, 1, (unsigned long long)v53, (unsigned long long)*((char *)(void*)&addr), v5);
        if ((char)v54)
        {
            v70 = _ccall(8, 1, (unsigned long long)v53, (unsigned long long)*((char *)(void*)&addr), v5);
            if (!((char)v70))
            {
LABEL_7ff3b134c8b:
                addr = (char *)_INSERT(addr, 0, *((char *)&addr) + *((char *)&ptr));
                *(addr) = *(addr) + *((char *)&addr) + *((char *)&ptr);
            }
LABEL_7ff3b134c8f:
            *(addr) = *(addr) + *((char *)&addr);
            *(addr) = *(addr) + *((char *)&addr);
            *(p) = *(p) + *((char *)&addr);
            *(addr) = *(addr) + *((char *)&addr);
            *(ptr) = *(ptr) + *((char *)((void*)&addr + 1));
            ptr4 = (unsigned int)addr + 72083;
            *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
            v73 = _ccall(8, 1, (unsigned long long)(char)*((char *)ptr4), (unsigned long long)*((char *)(void*)&ptr4), v5);
            if (!((char)v73))
                goto LABEL_7ff3b134ca3;
            goto LABEL_7ff3b134ca7;
        }
        ptr24 = (void*)_INSERT(addr, 0, *((char *)&addr));
        *((char *)ptr24) = *((char *)ptr24) & *((char *)&addr);
        *((char *)ptr24) = *((char *)ptr24) + *((char *)&addr);
        *((char *)ptr24) = *((char *)ptr24) + *((char *)&addr);
        *((char *)ptr24) = *((char *)ptr24) + *((char *)&addr);
        *((unsigned int *)ptr24) = *((int *)ptr24) + (unsigned int)ptr24;
        *((char *)ptr24) = *((char *)ptr24) + *((char *)&addr);
        ptr4 = (void*)_INSERT(ptr24, 0, *((char *)&addr) & 104);
        v57 = *((char *)ptr4);
        *((char *)ptr4) = v57 + (*((char *)&addr) & 104);
        v58 = _ccall(0, 1, (unsigned long long)v57, (unsigned long long)(*((char *)(void*)&addr) & 104), v5);
        if ((char)v58)
        {
            v69 = _ccall(8, 1, (unsigned long long)v57, (unsigned long long)(*((char *)(void*)&addr) & 104), v5);
            if (!((char)v69))
            {
LABEL_7ff3b134ca3:
                *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
                *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
            }
LABEL_7ff3b134ca7:
            *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
            *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
            *(ptr16) = *(ptr16) + *((char *)&ptr4);
            *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
            *((char *)&ptr4[1879047048]) = (char)ptr4[1879047048] + *((char *)&ptr);
            *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
            *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
            *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
            *(p) = *(p) + *((char *)&ptr4);
            *((char *)ptr4) = *((char *)ptr4) + *((char *)&ptr4);
            *(ptr) = *(ptr) + *((char *)((void*)&ptr4 + 1));
            ptr47 = (unsigned int)ptr4 + 72083;
            *(ptr47) = *(ptr47) + *((char *)&ptr47);
            vvar_391{r48|8b} = vvar_169{r48|8b} + 8;
            ptr15 = *((long long *)vvar_169{r48|8b});
            v75 = _ccall(8, 1, (unsigned long long)*(ptr47), (unsigned long long)*((char *)(void*)&ptr47), v5);
            if ((char)v75)
                goto LABEL_7ff3b134ccb;
            goto LABEL_7ff3b134ccf;
        }
        ptr27 = (void*)_INSERT(ptr4, 0, *((char *)&ptr4));
        *((char *)ptr27) = *((char *)ptr27) + *((char *)&ptr4);
        *((char *)ptr27) = *((char *)ptr27) + *((char *)&ptr4);
        *((char *)ptr27) = *((char *)ptr27) + *((char *)&ptr4);
        *((char *)ptr27) = *((char *)ptr27) + *((char *)&ptr4);
        ptr20 = (unsigned int)ptr27 + *((int *)ptr27);
        *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
        *((int *)(vvar_145{r48|8b} - 8)) = vvar_146{r56|8b};
        v61 = vvar_314{r48|8b} - 8;
        vvar_359{r48|8b} = vvar_314{r48|8b} - 1151;
        *((char *)ptr20) = *((char *)ptr20) & *((char *)&ptr20);
        *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
        *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
        *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
        *((unsigned int *)ptr20) = *((int *)ptr20) + (unsigned int)ptr20;
        *((char *)ptr20) = *((char *)ptr20) + *((char *)&ptr20);
        ptr15 = (char [122])_INSERT(ptr20, 0, 0);
        v63 = ptr15[0];
        ptr15[0] = v63;
        v64 = _ccall(0, 1, (unsigned long long)v63, 0, v5);
        if (!((char)v64))
        {
            ptr28 = (void*)_INSERT(ptr15, 0, *((char *)&ptr15));
            *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr15);
            *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr15);
            *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr15);
            *((char *)ptr28) = *((char *)ptr28) + *((char *)&ptr15);
            ptr21 = (unsigned int)ptr28 + *((int *)ptr28);
            ptr21[0] = ptr21[0] + *((char *)&ptr21);
            ptr21[4] = ptr21[4] + *((char *)((void*)&ptr16 + 1));
            ptr21[0] = ptr21[0] + *((char *)((void*)&ptr21 + 1));
            ptr21[0] = ptr21[0] + *((char *)&ptr21);
            ptr21[0] = ptr21[0] + *((char *)&ptr21);
            ptr21[0] = ptr21[0] + *((char *)&ptr21);
            *(p) = *(p) + *((char *)&ptr21);
            ptr21[0] = ptr21[0] + *((char *)&ptr21);
            *(ptr) = *(ptr) + *((char *)((void*)&ptr21 + 1));
            addr = (unsigned int)ptr21 + 72083;
            *(addr) = *(addr) + *((char *)&addr);
            v67 = _ccall(8, 1, (unsigned long long)*(addr), (unsigned long long)*((char *)(void*)&addr), v5);
            if (!((char)v67))
                goto LABEL_7ff3b134c7b;
            goto LABEL_7ff3b134c7f;
        }
        else
        {
            v68 = _ccall(8, 1, (unsigned long long)v63, 0, v5);
            if ((char)v68)
            {
LABEL_7ff3b134ccb:
                ptr15[0] = ptr15[0] + *((char *)&ptr15);
                ptr15[0] = ptr15[0] + *((char *)&ptr15);
            }
        }
    }
    else
    {
        v71 = _ccall(8, 1, (unsigned long long)v50, (unsigned long long)*((char *)(void*)&addr), v5);
        if (!((char)v71))
        {
LABEL_7ff3b134c7b:
            *(addr) = *(addr) + *((char *)&addr);
            *(addr) = *(addr) + *((char *)&addr);
        }
LABEL_7ff3b134c7f:
        *(addr) = *(addr) + *((char *)&addr);
        *(addr) = *(addr) + *((char *)&addr);
        *(ptr16) = *(ptr16) + *((char *)&addr);
        *(addr) = *(addr) + *((char *)&addr);
        v72 = _ccall(8, 1, (unsigned long long)*(addr), (unsigned long long)*((char *)(void*)&addr), v5);
        if (!((char)v72))
            goto LABEL_7ff3b134c8b;
        goto LABEL_7ff3b134c8f;
    }
LABEL_7ff3b134ccf:
    ptr15[0] = ptr15[0] + *((char *)&ptr15);
    ptr15[0] = ptr15[0] + *((char *)&ptr15);
    *(ptr16) = *(ptr16) + *((char *)&ptr15);
    ptr15[0] = ptr15[0] + *((char *)&ptr15);
    ptr15[121] = ptr15[121] + *((char *)((void*)&ptr15 + 1));
    ptr34 = (char *)_INSERT(ptr15, 0, *((char *)&ptr15));
    *(ptr34) = *(ptr34) + *((char *)&ptr15);
    *(ptr34) = *(ptr34) + *((char *)&ptr15);
    *(ptr34) = *(ptr34) + *((char *)&ptr15);
    *(p) = *(p) + *((char *)&ptr15);
    *(ptr34) = *(ptr34) + *((char *)&ptr15);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr15 + 1));
    ptr43 = (unsigned int)ptr34 + 72083;
    v78 = *(ptr43);
    *(ptr43) = *(ptr43) + *((char *)&ptr43);
    ptr12 = *((unsigned short *)&ptr43);
    v80 = _ccall(8, 1, (unsigned long long)v78, (unsigned long long)*((char *)(void*)&ptr43), v5);
    if ((char)v80)
    {
        ptr12[0] = ptr12[0] + *((char *)&ptr12);
        ptr12[0] = ptr12[0] + *((char *)&ptr12);
    }
    ptr12[0] = ptr12[0] + *((char *)&ptr12);
    ptr12[0] = ptr12[0] + *((char *)&ptr12);
    *(ptr16) = *(ptr16) + *((char *)&ptr12);
    ptr12[0] = ptr12[0] + *((char *)&ptr12);
    ptr12[805307513] = ptr12[805307513] + *((char *)((void*)&ptr12 + 1));
    ptr12[0] = ptr12[0] + *((char *)&ptr12);
    ptr12[0] = ptr12[0] + *((char *)&ptr12);
    ptr12[0] = ptr12[0] + *((char *)&ptr12);
    *(p) = *(p) + *((char *)&ptr12);
    ptr12[0] = ptr12[0] + *((char *)&ptr12);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr12 + 1));
    ptr25 = (unsigned int)ptr12 + 399763;
    *(ptr25) = *(ptr25) + *((char *)&ptr25);
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
    *(ptr25) = *(ptr25) + *((char *)&ptr25);
    *(ptr25) = *(ptr25) + *((char *)&ptr25);
    *(ptr25) = *(ptr25) + *((char *)&ptr25);
    *(ptr25) = *(ptr25) + *((char *)&ptr25);
    ptr39[0] = ptr39[0] + *((char *)&p);
    *(ptr25) = *(ptr25) + *((char *)&ptr25);
    *(ptr + 0x2 * ptr39) = *(ptr + 0x2 * ptr39) + *((char *)&p);
    ptr29 = (void*)_INSERT(ptr25, 0, *((char *)&ptr25));
    v83 = _ccall(8, 1, (unsigned long long)*((char *)(void*)&ptr25), 0, v5);
    if (Conv(64I->1I, vvar_556)) { Goto None } else { Goto None }
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    *((unsigned int *)ptr29) = *((int *)ptr29) + (unsigned int)ptr29;
    *((char *)ptr29) = *((char *)ptr29) + *((char *)&ptr29);
    ptr9 = (char *)_INSERT(ptr29, 0, *((char *)&ptr29) & 85);
    v85 = *(ptr9);
    *(ptr9) = *(ptr9) + (*((char *)&ptr29) & 85);
    ptr39[0] = ptr45[1];
    v86 = _ccall(10, 1, (unsigned long long)v85, (unsigned long long)(*((char *)(void*)&ptr29) & 85), v5);
    if (!((char)v86))
    {
        *(ptr9) = *(ptr9) + *((char *)&ptr9);
        *(ptr9) = *(ptr9) + *((char *)&ptr9);
    }
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    v87 = g_7feef134d51;
    g_7feef134d51 = g_7feef134d51 + *((char *)&ptr9);
    v88 = _ccall(10, 1, (unsigned long long)v87, (unsigned long long)*((char *)(void*)&ptr9), v5);
    if (!((char)v88))
        *(ptr9) = *(ptr9) + *((char *)&p);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(p) = *(p) + *((char *)&ptr9);
    *(ptr9) = *(ptr9) + *((char *)&ptr9);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr9 + 1));
    ptr10 = (unsigned int)ptr9 + 137619;
    v90 = *(ptr10);
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    v91 = _ccall(1, (unsigned long long)v90, (unsigned long long)*((char *)(void*)&ptr10), v5);
    if (!((char)((v91 & 18446744073709551614) >> 2) & 1))
    {
        *(ptr10) = *(ptr10) + *((char *)&ptr10);
        *(ptr10) = *(ptr10) + *((char *)&ptr10);
    }
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    v92 = g_7ff43134d79;
    g_7ff43134d79 = g_7ff43134d79 + *((char *)&ptr10);
    v93 = _ccall(10, 1, (unsigned long long)v92, (unsigned long long)*((char *)(void*)&ptr10), 0);
    if ((char)v93)
        *(ptr10) = *(ptr10) + *((char *)&ptr10);
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    *(p) = *(p) + *((char *)&ptr10);
    *(ptr10) = *(ptr10) + *((char *)&ptr10);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr10 + 1));
    ptr11 = (unsigned int)ptr10 + 137619;
    v95 = *(ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    vvar_467{r48|8b} = vvar_181{r48|8b} - 8;
    *((char **)(vvar_145{r48|8b} - 8)) = ptr11;
    v96 = _ccall(10, 1, (unsigned long long)v95, (unsigned long long)*((char *)(void*)&ptr11), 0);
    if ((char)v96)
    {
        *(ptr11) = *(ptr11) + *((char *)&ptr11);
        *(ptr11) = *(ptr11) + *((char *)&ptr11);
    }
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    v97 = g_7ff9b134da1;
    g_7ff9b134da1 = g_7ff9b134da1 + *((char *)&ptr11);
    v98 = _ccall(10, 1, (unsigned long long)v97, (unsigned long long)*((char *)(void*)&ptr11), 0);
    if ((char)v98)
        *(ptr11) = *(ptr11) + *((char *)&ptr);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(p) = *(p) + *((char *)&ptr11);
    *(ptr11) = *(ptr11) + *((char *)&ptr11);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr11 + 1));
    ptr48 = (unsigned int)ptr11 + 137619;
    *(ptr48) = *(ptr48) + *((char *)&ptr48);
    ptr35 = (char *)_INSERT(ptr48, 0, *((char *)&ptr48));
    *(ptr35) = *(ptr35) + *((char *)&ptr48);
    *(ptr35) = *(ptr35) + *((char *)&ptr48);
    *(ptr35) = *(ptr35) + *((char *)&ptr48);
    *(ptr35) = *(ptr35) + *((char *)&ptr48);
    ptr36 = (unsigned int)ptr35 - 0x48000000;
    v102 = _ccall(10, 3, ptr35 & 4294967295, 0xb8000000, 0);
    if ((char)v102)
        *(ptr36) = *(ptr36) + *((char *)((void*)&ptr16 + 1));
    *(ptr36) = *(ptr36) + *((char *)&ptr36);
    *(ptr36) = *(ptr36) + *((char *)&ptr36);
    *(p) = *(p) + *((char *)&ptr36);
    *(ptr36) = *(ptr36) + *((char *)&ptr36);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr36 + 1));
    ptr3 = (unsigned int)ptr36 + 596371;
    v104 = *(ptr3);
    *(ptr3) = *(ptr3) + *((char *)&ptr3);
    v105 = _ccall(1, (unsigned long long)v104, (unsigned long long)*((char *)(void*)&ptr3), 0);
    if (((char)((v105 & 18446744073709551614) >> 2) & 1))
    {
        *(ptr3) = *(ptr3) + *((char *)&ptr3);
        *(ptr3) = *(ptr3) + *((char *)&ptr3);
    }
    *(ptr3) = *(ptr3) + *((char *)&ptr3);
    *(ptr3) = *(ptr3) + *((char *)&ptr3);
    *((char *)(ptr3 * 2)) = *((char *)(ptr3 * 2)) + *((char *)&p);
    v106 = *(ptr3);
    *(ptr3) = *(ptr3) + *((char *)&ptr3);
    v107 = _ccall(12, 1, (unsigned long long)v106, (unsigned long long)*((char *)(void*)&ptr3), 0);
    if (!((char)v107))
    {
        *(ptr3) = *(ptr3) + *((char *)((void*)&ptr3 + 1));
        *(ptr3) = *(ptr3) + *((char *)&ptr3);
    }
    *(ptr3) = *(ptr3) + *((char *)&ptr3);
    *(ptr3) = *(ptr3) + *((char *)&ptr3);
    *(p) = *(p) + *((char *)&ptr3);
    *(ptr3) = *(ptr3) + *((char *)&ptr3);
    *(ptr) = *(ptr) + *((char *)((void*)&ptr3 + 1));
    ptr38 = (unsigned int)ptr3 + 137619;
    *((char *)ptr38) = *((char *)ptr38) + *((char *)&ptr38);
    *(vvar_467{r48|8b} + (char *)ptr38) = *(vvar_467{r48|8b} + (char *)ptr38) * 2;
    *((unsigned int *)ptr38) = *((int *)ptr38) + (unsigned int)ptr38;
    *((char *)ptr38) = *((char *)ptr38) + *((char *)&ptr38);
    *((unsigned long long *)(vvar_467{r48|8b} - 8)) = v61;
    ptr44 = (char *)_INSERT(ptr38, 0, *((char *)&ptr38));
    *(ptr44) = *(ptr44) + *((char *)&ptr38);
}
