/* sub_7ff3b159dec @ 0x7ff3b159dec
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b159dec  (562 bytes, 34 basic blocks)
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

typedef struct struct_0 {
    unsigned short field_0;
} struct_0;

int sub_7ff3b159dec(void)
{
    struct_0 **p;  // rdx
    void* ptr;  // rcx
    unsigned int v11;  // eax
    unsigned long v12;  // rdx
    char *addr;  // r8
    unsigned long v14;  // rsi
    struct_0 **ptr3;  // rcx
    unsigned long v16;  // rcx
    struct_0 **ptr4;  // rdx
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x2c]
    unsigned int v4;  // [bp-0x28]
    unsigned short *v5;  // [bp-0x20]
    unsigned long v6;  // [bp+0x8]
    struct_0 **v7;  // [bp+0x10], Other Possible Types: unsigned int
    unsigned int v8;  // [bp+0x20]

    v7 = p;
    v5 = &*(p)->field_0;
    v8 = (int)ptr[16];
    v0 = (int)ptr[40];
    v1 = (int)ptr[44];
    v2 = sub_7ff3b159c08();
    if (v2 < 0)
        return;
    v11 = sub_7ff3b159c08(ptr, 16);
    if (v11 >= 0)
    {
        v12 = v11;
        if (v12 >= (long long)ptr[16])
            sub_7ff3b137480(2147942487); /* do not return */
        *((long long *)((long long)ptr[8] + v12 * 16 + 8)) = v2 + 4;
        if (sub_7ff3b159c08(ptr, 15) >= 0)
        {
            v3 = sub_7ff3b159c08(ptr, 13);
            if (v3 >= 0)
            {
                if ((int)sub_7ff3b15a078(ptr, p, addr) >= 0)
                {
                    v4 = sub_7ff3b159c08(ptr, 13);
                    if (v4 >= 0)
                    {
                        v14 = v3;
                        if (v14 >= (long long)ptr[16])
                            sub_7ff3b137480(2147942487); /* do not return */
                        *((long long *)((long long)ptr[8] + v14 * 16 + 8)) = v4 + 1;
                        ptr3 = v7;
                        if (*(ptr3)->field_0 != 124)
                        {
                            sub_7ff3b15af4c(ptr + 8, v8, 4294967295);
                            ptr4 = v7;
                            *((unsigned int *)&ptr[44]) = v1;
                            *((unsigned int *)&ptr[40]) = v0;
                            *(ptr4) = v5;
                            sub_7ff3b15a078(ptr, ptr4, addr);
                            return;
                        }
                        *(ptr3) = *(ptr3) + 1;
                        v16 = v4;
                        v7 = sub_7ff3b159dec(ptr, ptr3, &v6);
                        if (v16 >= (long long)ptr[16])
                            sub_7ff3b137480(2147942487); /* do not return */
                        *((long long *)((long long)ptr[8] + v16 * 16 + 8)) = (long long)ptr[16];
                        if (v14 >= (long long)ptr[16])
                            sub_7ff3b137480(2147942487); /* do not return */
                        *((unsigned long long *)((long long)ptr[8] + v14 * 16 + 8)) = v7;
                        if (v7 >= 0)
                        {
                            *((unsigned long *)&addr) = *(addr) | v6;
                            return;
                        }
                        if (!*((int *)ptr))
                        {
                            sub_7ff3b15af4c(ptr + 8, v8, 4294967295);
                            *((unsigned int *)&ptr[44]) = v1;
                            *((unsigned int *)&ptr[40]) = v0;
                            return;
                        }
                    }
                }
                else if (!*((int *)ptr))
                {
                    sub_7ff3b15af4c(ptr + 8, v8, 4294967295);
                    *((unsigned int *)&ptr[44]) = v1;
                    *((unsigned int *)&ptr[40]) = v0;
                    return;
                }
            }
        }
    }
    return;
}
