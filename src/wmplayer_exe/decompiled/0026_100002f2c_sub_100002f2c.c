/* sub_100002f2c @ 0x100002f2c
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100002f2c  (41 bytes, 4 basic blocks)
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
    char field_0;
    char padding_1[3];
    char field_4;
} struct_0;

void sub_100002f2c(unsigned long a0, unsigned int *ptr3, unsigned long a2, unsigned long a3, unsigned long a4)
{
    char v1;  // al
    unsigned long v2;  // rax
    unsigned int v11;  // ebx
    unsigned int v12;  // 4102
    unsigned int v13;  // 4119
    struct_0 *p;  // rdx
    void* addr;  // rsi
    char v5;  // al
    unsigned long v6;  // cc_ndep
    unsigned long v7;  // 4134
    void* ptr;  // rax
    char v9;  // 4101
    unsigned long v10;  // 4113

    *(ptr3) = *(ptr3) + (unsigned int)a0;
    v2 = _INSERT(v1 CONCAT 0, 0, v1);
    p = (struct_0 *)_INSERT(ptr3, 1, *((char *)((void*)&ptr3 + 1)) | *((char *)(v2 + a0)));
    p->field_0 = p->field_0 + (char)a0;
    v5 = v1 ^ *((char *)addr);
    v7 = _ccall(0, 17, (unsigned long long)(v1 ^ *((char *)addr)), 0, v6);
    if (!((char)v7))
        [D] Unsupported jumpkind Ijk_NoDecode at address 4294979385()
    ptr = (void*)_INSERT(v5 CONCAT 0, 0, v5);
    v9 = p->field_4;
    p->field_4 = p->field_4 | *((char *)((void*)&p + 1));
    v10 = _ccall(0, 17, (unsigned long long)(v9 | *((char *)((void*)&p + 1))), 0, v6);
    if (!((char)v10))
        goto LABEL_0x100002f41;
    *((unsigned int *)ptr) = *((int *)ptr) + v11;
    v12 = *((int *)ptr);
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((unsigned int *)ptr) = *((int *)ptr) + v11;
    v13 = *((int *)ptr);
    *((unsigned int *)ptr) = *((int *)ptr) + (unsigned int)ptr;
    *((char *)ptr) = *((char *)ptr) + *((char *)&ptr);
    *((unsigned int *)addr) = *((int *)addr) + _INSERT(p, 0, *((char *)&p) - *((char *)&ptr) - ((char)(v12 + (unsigned int)ptr <= v12 ? 1 : 0) & 1) - *((char *)&ptr) - ((char)(v13 + (unsigned int)ptr <= v13 ? 1 : 0) & 1));
}
