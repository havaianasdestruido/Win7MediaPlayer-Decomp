/* sub_7ff24f965ac @ 0x7ff24f965ac
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f965ac  (101 bytes, 5 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[1040187483];
    char field_3e00005b;
} struct_0;

typedef struct struct_1 {
    char padding_0[7];
    char field_7;
} struct_1;

void sub_7ff24f965ac(char *ptr3, char *addr, unsigned long a2, unsigned long a3, char a4, char a5)
{
    unsigned long v2;  // cc_op
    unsigned long v3;  // cc_dep1
    unsigned long v12;  // 4221
    struct_0 *ptr6;  // rsi
    unsigned int *ptr4;  // rdi
    char v15;  // 4102
    unsigned long v16;  // 4135
    unsigned long v17;  // 4141
    char *ptr5;  // rax
    char v19;  // 4102
    void* p;  // rax
    struct_1 *ptr7;  // rax
    unsigned long v4;  // cc_dep2
    unsigned long v5;  // cc_ndep
    unsigned long v6;  // 4208
    void* ptr;  // rax
    unsigned long v8;  // 4210
    unsigned int v9;  // 4110
    unsigned int v10;  // ebx
    char v11;  // 4138
    unsigned int v1;  // [bp+0x100008]

    v6 = _ccall(v2, v3, v4, v5);
    v8 = _ccall((unsigned long long)(unsigned int)*((int *)(ptr * 2)), 221, v6, 4);
    *((unsigned int *)(ptr * 2)) = v8;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v9 = *((int *)(ptr * 2));
    *((unsigned int *)(ptr * 2)) = -(v9);
    *((char *)(ptr * 2)) = *((char *)(ptr * 2)) - *((char *)((void*)&ptr + 1)) - (0 < v9);
    *((int *)(ptr * 2)) = -(*((int *)(ptr * 2)));
    v1 &= v10;
    *((char *)ptr) = *((char *)ptr) + (char)v10;
    v11 = *((char *)ptr);
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    v12 = _ccall(8, 1, (unsigned long long)v11, (unsigned long long)*((char *)(void*)&ptr), (unsigned long long)(char)(0 < v9));
    if (!((char)v12))
    {
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        ptr6->field_3e00005b = ptr6->field_3e00005b + *((char *)&ptr3);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        if ([D] unsupported_<class 'pyvex.expr.GetI'>())
        {
            [D] PutI(904:F64x8)[t6,0] = t7()
            [D] PutI(968:I8x8)[t6,0] = 0x01()
        }
        else
        {
            [D] PutI(904:F64x8)[t6,0] = t7()
            [D] PutI(968:I8x8)[t6,0] = 0x01()
        }
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
        *(ptr4) = *(ptr4) + (unsigned int)ptr3;
    }
    else
    {
        *((unsigned int *)ptr) = *((int *)ptr) | (unsigned int)ptr;
        v15 = addr[12];
        addr[12] = v15 + *((char *)&addr);
        v16 = _ccall(0, 9, (unsigned long long)v15, (unsigned long long)(*((char *)(void*)&addr) ^ 0), 0);
        if (!((char)v16))
        {
            v17 = _ccall(9, (unsigned long long)v15, (unsigned long long)(*((char *)(void*)&addr) ^ 0), 0);
            ptr5 = (unsigned int)ptr - 17498117 - ((unsigned int)v17 & 1);
            v19 = *(ptr5);
            p = (void*)_INSERT(ptr5, 0, (*((char *)&ptr5) & v19) + 112);
            *((char *)p) = *((char *)p) ^ (*((char *)&ptr5) & v19) + 112;
            *((char *)&p[97]) = (char)p[97] + *((char *)((void*)&ptr3 + 1));
            *((unsigned int *)p) = *((int *)p) + (unsigned int)p;
            *(ptr3) = *(ptr3) + (*((char *)&ptr5) & v19) + 112;
        }
        *((char *)p) = *((char *)p) | *((char *)&p);
        *((char *)(addr + ptr3)) = *((char *)(addr + ptr3)) + *((char *)((void*)&addr + 1));
        *((char *)p) = *((char *)p) + *((char *)&addr);
        ptr7 = (struct_1 *)_INSERT(p, 0, *((char *)&p));
        ptr7->field_7 = ptr7->field_7 | *((char *)((void*)&addr + 1));
    }
}
