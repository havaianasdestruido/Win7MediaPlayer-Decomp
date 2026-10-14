/* sub_7ff2c175200 @ 0x7ff2c175200
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c175200  (562 bytes, 34 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned short field_0;
} struct_0;

unsigned long long sub_7ff2c175200(void* ptr, struct_0 **ptr3, char *ptr4)
{
    unsigned int v9;  // eax
    unsigned long v10;  // rdx
    unsigned int v11;  // eax
    unsigned long v12;  // rsi
    struct_0 **p;  // rcx
    unsigned long v14;  // rcx
    struct_0 **v15;  // rdx
    unsigned int v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned int v2;  // [bp-0x30]
    unsigned int v3;  // [bp-0x2c]
    unsigned int v4;  // [bp-0x28]
    unsigned short *v5;  // [bp-0x20]
    char v6[8];  // [bp+0x8]
    struct_0 **addr;  // [bp+0x10], Other Possible Types: unsigned int
    unsigned int v8;  // [bp+0x20]

    addr = ptr3;
    v5 = &*(ptr3)->field_0;
    v8 = (int)ptr[16];
    v0 = (int)ptr[40];
    v1 = (int)ptr[44];
    v2 = sub_7ff2c17501c();
    if (v2 < 0)
        return 4294967295;
    v9 = sub_7ff2c17501c(ptr, 16);
    if (v9 >= 0)
    {
        v10 = v9;
        if (v10 >= (long long)ptr[16])
            8792537709680();
        *((long long *)((long long)ptr[8] + v10 * 16 + 8)) = v2 + 4;
        if (sub_7ff2c17501c(ptr, 15) >= 0)
        {
            v3 = sub_7ff2c17501c(ptr, 13);
            if (v3 >= 0)
            {
                v11 = sub_7ff2c17548c(ptr, ptr3, ptr4);
                if (v11 >= 0)
                {
                    v4 = sub_7ff2c17501c(ptr, 13);
                    if (v4 >= 0)
                    {
                        v12 = v3;
                        if (v12 >= (long long)ptr[16])
                            8792537709680();
                        *((long long *)((long long)ptr[8] + v12 * 16 + 8)) = v4 + 1;
                        p = addr;
                        if (*(p)->field_0 != 124)
                        {
                            sub_7ff2c176360(ptr + 8, v8, 4294967295);
                            v15 = addr;
                            *((unsigned int *)&ptr[44]) = v1;
                            *((unsigned int *)&ptr[40]) = v0;
                            *(addr) = v5;
                            return sub_7ff2c17548c(ptr, addr, ptr4);
                        }
                        *(p) = *(p) + 1;
                        v14 = v4;
                        addr = sub_7ff2c175200(ptr, p, &v6);
                        if (v14 >= (long long)ptr[16])
                            8792537709680();
                        *((long long *)((long long)ptr[8] + v14 * 16 + 8)) = (long long)ptr[16];
                        if (v12 >= (long long)ptr[16])
                            8792537709680();
                        *((unsigned long long *)((long long)ptr[8] + v12 * 16 + 8)) = addr;
                        if (addr >= 0)
                        {
                            *((char [8])&ptr4) = *(ptr4) | v6;
                            return v2;
                        }
                        if (!*((int *)ptr))
                        {
                            sub_7ff2c176360(ptr + 8, v8, 4294967295);
                            *((unsigned int *)&ptr[44]) = v1;
                            *((unsigned int *)&ptr[40]) = v0;
                            return addr;
                        }
                    }
                }
                else if (!*((int *)ptr))
                {
                    sub_7ff2c176360(ptr + 8, v8, 4294967295);
                    *((unsigned int *)&ptr[44]) = v1;
                    *((unsigned int *)&ptr[40]) = v0;
                    return v11;
                }
            }
        }
    }
    return 4294967295;
}
