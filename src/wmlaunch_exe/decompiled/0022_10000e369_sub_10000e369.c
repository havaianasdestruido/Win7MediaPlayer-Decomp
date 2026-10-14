/* sub_10000e369 @ 0x10000e369
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10000e369  (659 bytes, 29 basic blocks)
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

typedef struct struct_3 {
    char padding_0[1];
    char field_1;
} struct_3;

typedef struct struct_0 {
    char padding_0[2];
    char field_2;
} struct_0;

typedef struct struct_2 {
    char padding_0[1];
    char field_1;
} struct_2;

typedef struct struct_1 {
    char padding_0[2];
    char field_2;
} struct_1;

int sub_10000e369(void)
{
    void* ptr3;  // rax
    char ptr38[3];  // rbx
    char v19;  // 4108
    unsigned long v20;  // 4124
    char v21;  // 4109
    void* ptr9;  // rax
    char v23;  // 4118
    unsigned long v24;  // 4141
    char ptr29[2];  // rdx
    char v26;  // 4111
    void* ptr10;  // rax
    char v28;  // 4120
    void* ptr6;  // rcx
    unsigned long v29;  // 4142
    struct_3 *v30;  // rsi
    char v31;  // 4111
    void* ptr18;  // rax
    char v33;  // 4120
    unsigned long v34;  // 4142
    char *v35;  // rax
    char ptr27[2];  // rax
    char v12;  // 4130
    unsigned long v13;  // cc_ndep
    unsigned long v14;  // 4161
    char v15;  // 4097
    void* ptr33;  // rax
    char v17;  // 4099
    void* ptr14;  // rax
    struct_3 *v1;  // [bp+0x10]
    char v8;  // [bp+0x100009]

    *((unsigned int *)ptr3) = *((int *)ptr3) + (unsigned int)ptr3;
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)&ptr3[16777823]) = (char)ptr3[16777823] + *((char *)((void*)&ptr38 + 1));
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    v8 += *((char *)((void*)&ptr6 + 1));
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    v12 = *((char *)ptr3);
    *((char *)ptr3) = *((char *)ptr3) + *((char *)&ptr3);
    v14 = _ccall(0, 1, (unsigned long long)v12, (unsigned long long)*((char *)(void*)&ptr3), v13);
    if (!((char)v14))
    {
        v15 = *((char *)ptr3);
        ptr33 = (void*)_INSERT(ptr3, 0, *((char *)&ptr3) + *((char *)ptr3));
        *((unsigned int *)ptr33) = *((int *)ptr33) + (unsigned int)ptr33;
        *((char *)ptr33) = *((char *)ptr33) + *((char *)&ptr3) + v15;
    }
    v17 = *((char *)ptr3);
    ptr14 = (void*)_INSERT(ptr3, 0, *((char *)&ptr3) + v17);
    *((unsigned int *)ptr14) = *((int *)ptr14) + (unsigned int)ptr14;
    v19 = *((char *)ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr3) + v17;
    v20 = _ccall(4, 1, (unsigned long long)v19, (unsigned long long)(*((char *)(void*)&ptr3) + v17), v13);
    if (!((char)v20))
        [D] Unsupported jumpkind Ijk_NoDecode at address 4295025642()
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)ptr14) = *((char *)ptr14) + *((char *)&ptr14);
    *((char *)&ptr14[94]) = (char)ptr14[94] + *((char *)((void*)&ptr14 + 1));
    v21 = *((char *)ptr14);
    ptr9 = (void*)_INSERT(ptr14, 0, *((char *)&ptr14) + v21);
    *((unsigned int *)ptr9) = *((int *)ptr9) + (unsigned int)ptr9;
    v23 = *((char *)ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr14) + v21;
    v24 = _ccall(4, 1, (unsigned long long)v23, (unsigned long long)(*((char *)(void*)&ptr14) + v21), v13);
    if ((char)v24)
        [D] Unsupported jumpkind Ijk_NoDecode at address 4295025658()
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)&ptr9);
    *((char *)ptr9) = *((char *)ptr9) + *((char *)((void*)&ptr29 + 1));
    v26 = *((char *)ptr9);
    ptr10 = (void*)_INSERT(ptr9, 0, *((char *)&ptr9) + v26);
    *((unsigned int *)ptr10) = *((int *)ptr10) + (unsigned int)ptr10;
    v28 = *((char *)ptr10);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr9) + v26;
    v29 = _ccall(6, 1, (unsigned long long)v28, (unsigned long long)(*((char *)(void*)&ptr9) + v26), v13);
    if (!((char)v29))
        [D] Unsupported jumpkind Ijk_NoDecode at address 4295025674()
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr10);
    *((char *)ptr10) = *((char *)ptr10) + *((char *)&ptr6);
    v30 = v1;
    v31 = *((char *)ptr10);
    ptr18 = (void*)_INSERT(ptr10, 0, *((char *)&ptr10) + v31);
    *((unsigned int *)ptr18) = *((int *)ptr18) + (unsigned int)ptr18;
    v33 = *((char *)ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr10) + v31;
    v34 = _ccall(6, 1, (unsigned long long)v33, (unsigned long long)(*((char *)(void*)&ptr10) + v31), v13);
    if ((char)v34)
        [D] Unsupported jumpkind Ijk_NoDecode at address 4295025690()
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    *((char *)ptr18) = *((char *)ptr18) + *((char *)&ptr18);
    v35 = (char *)_INSERT(ptr18, 0, *((char *)&ptr18) + *((char *)((void*)&ptr6 + 1)));
    ptr27 = (char [2])_INSERT(v35, 0, *((char *)&ptr18) + *((char *)((void*)&ptr6 + 1)) + *(v35));
    ptr27[0] = ptr27[0] + *((char *)&ptr27);
    ptr27[1] = ptr27[1] + *((char *)((void*)&ptr38 + 1));
}
