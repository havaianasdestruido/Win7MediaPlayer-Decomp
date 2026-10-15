/* sub_100001274 @ 0x100001274
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001274  (54 bytes, 7 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 883d9616dfc7586fa88c58013f70e055df9328f3cfc3ef39898c15c6970fb0db
 *   Evidence: analysis/report/rea-evidence/wmplayer_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[104];
    char field_68;
} struct_0;

extern char g_68;

void sub_100001274(unsigned int a0, char a1, char *ptr3)
{
    void* p;  // rax
    struct_0 *v4;  // rbx
    unsigned long v13;  // gs
    char v14;  // al
    char v15;  // 4124
    char v16;  // al
    char *addr;  // r14
    char v18;  // 4102
    char v19;  // 4098
    unsigned long v20;  // 4101
    unsigned long v5;  // cc_ndep
    unsigned long v6;  // 4121
    unsigned long v7;  // 4124
    unsigned long v8;  // 4127
    unsigned long v9;  // rbx
    unsigned long v10;  // 4134
    unsigned long v11;  // 4101
    char v12;  // dh
    char *ptr;  // [bp+0x0]
    char v2;  // [bp+0x100008]

    p = a0;
    v6 = _ccall(5, (unsigned long long)v4->field_68, 72, v5);
    v7 = _ccall((unsigned long long)*((char *)((void*)&v4 + 1)), 1, v6, 1);
    v8 = _ccall((unsigned long long)*((char *)((void*)&v4 + 1)), 1, v6, 18446744073709551615);
    v9 = _INSERT(v4, 1, v7);
    v10 = _ccall(14, 0, v8, 0, 0);
    if (!((char)v10))
    {
        v11 = _ccall(10, 0, v8, 0, 0);
        if (!((char)v11))
            goto LABEL_0x100001281;
    }
    else
    {
        *(ptr) = *(ptr) + v12;
        *((char *)p) = *((char *)p) + v12;
        *(ptr) = *(ptr) + (char)v9;
        *(ptr3) = *(ptr3) + (char)vvar_7{r56|8b};
        *((char *)(v9 + v13)) = *((char *)(v9 + v13)) + *((char *)((void*)&p + 1));
        v14 = (char)*((int *)p) * 70;
        v15 = *(ptr);
        *(ptr) = *(ptr) + v16;
        if (Conv(64I->1I, Call(__CFADD__, <SimCCUsercall>: [vvar_39, vvar_3{r16|1b}]))) { Goto None } else { Goto None }
        *((char *)(ptr3 * 2 + 104)) = *((char *)(ptr3 * 2 + 104)) + *((char *)&addr);
        v18 = v2;
        v2 += v14;
        if (Conv(64I->1I, Call(__CFADD__, <SimCCUsercall>: [vvar_41, vvar_21{r16|1b}]))) { Goto None } else { Goto None }
        v19 = *(addr);
        *(addr) = v19 + (char)vvar_7{r56|8b};
        if (Conv(64I->1I, Call(__CFADD__, <SimCCUsercall>: [vvar_43, Extract(vvar_7{r56|8b}, 8bits@0x0<64>)]))) { Goto None } else { Goto None }
        v20 = _ccall(4, 1, (unsigned long long)v19, (unsigned long long)(char)vvar_7{r56|8b}, 0);
        if ((char)v20)
            goto LABEL_0x1000012f0;
        else
            goto LABEL_0x1000012f0;
    }
}
