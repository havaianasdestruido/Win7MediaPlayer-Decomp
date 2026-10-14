/* sub_10000a404 @ 0x10000a404
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000a404  (182 bytes, 17 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 0f8f45cd381f60a41cca4834188157d25906911108d7280cb2540d2245327a9d
 *   Evidence: analysis/report/rea-evidence/wmpsideshowgadget_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_4 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned int field_10;
} struct_4;

typedef struct struct_0 {
    struct struct_1 *field_0;
    char padding_8[8];
    struct struct_0 *field_10;
} struct_0;

typedef struct struct_2 {
    struct struct_3 *field_0;
    char padding_8[8];
    struct struct_2 *field_10;
} struct_2;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

typedef struct struct_3 {
    unsigned short field_0;
} struct_3;

int sub_10000a404(struct_4 *p, unsigned short *addr, unsigned int *ptr5, unsigned int *ptr6, struct_2 **ptr)
{
    unsigned short v1;  // ax
    unsigned int v2;  // ebx
    unsigned int v11;  // edx
    unsigned int v12;  // r10d
    unsigned short ptr8[2];  // rcx
    unsigned short ptr7[2];  // rcx
    unsigned long long ptr9;  // rcx
    unsigned long long index;  // rdx
    struct_0 *cur;  // rax
    struct_0 *v9;  // r9
    unsigned short *iter;  // rcx

    if (!addr)
        4295012220();
    v1 = *(addr);
    v2 = 0;
    for (ptr8 = addr; v1; ptr8 = ptr7)
    {
        v2 = v2 * 33 + v1;
        ptr7 = &ptr8[1];
        v1 = ptr7[0];
    }
    ptr9 = p->field_0;
    index = v2 % p->field_10 & 4294967295;
    *(ptr6) = v2;
    *(ptr5) = index;
    if (!ptr9)
        return NULL;
    cur = *((long long *)(ptr9 + index * 8));
    v9 = NULL;
    for (*(ptr) = NULL; cur; cur = cur->field_10)
    {
        if ((int)cur[1].field_0 == v2)
        {
            iter = &cur->field_0->field_0;
            do
            {
                v11 = *(iter);
                v12 = *((short *)(iter + addr - (char *)cur->field_0));
            } while (v11 == v12 && (iter += 2, v12));
            if (!v11 - v12)
            {
                *(ptr) = v9;
                return *((unsigned int *)&cur);
            }
        }
        v9 = cur;
    }
    return NULL;
}
