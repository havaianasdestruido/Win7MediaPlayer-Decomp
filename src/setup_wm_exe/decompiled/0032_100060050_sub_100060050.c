/* sub_100060050 @ 0x100060050
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100060050  (424 bytes, 39 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): f069226052de289452ef5ff9dd67557193c15308c5351bc7b70b6692b350951b
 *   Evidence: analysis/report/rea-evidence/setup_wm_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    char padding_0[8];
    struct struct_1 *field_8;
    char padding_10[8];
    unsigned int field_18;
} struct_2;

typedef struct struct_1 {
    struct struct_0 *field_0;
    struct struct_1 *field_8;
} struct_1;

typedef struct struct_4 {
    struct struct_3 *field_0;
    struct struct_4 *field_8;
} struct_4;

typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[28];
    unsigned long long field_30;
} struct_0;

typedef struct struct_3 {
    char padding_0[16];
    unsigned int field_10;
    char padding_14[28];
    unsigned long long field_30;
} struct_3;

long long sub_100060050(struct_2 *p, unsigned long a1, long long *ptr)
{
    struct_1 *v4;  // rdi
    unsigned long long v5;  // r15
    int v14;  // esi
    int v6;  // r12d
    struct_1 *addr;  // rdi
    struct_4 *v8;  // r13
    struct_4 *v9;  // rdi
    long long v10;  // rdx
    unsigned int choice;  // [bp-0x48]
    int flag;  // [bp-0x40]
    unsigned int v2;  // [bp+0x8]
    unsigned int flag2;  // [bp+0x20]

    v4 = p->field_8;
    v5 = 0;
    flag = 0;
    v6 = 0;
    v2 = 0;
    choice = 0;
    flag2 = 0;
    if (v4)
    {
        do
        {
            addr = v4;
            v8 = addr->field_8;
            if (sub_1000616bc(addr->field_0))
            {
                v6 = -2147467259;
                v5 += 1;
                if (sub_100061b04(addr->field_0))
                    sub_100061b04(addr->field_0);
                sub_1000527f4();
            }
        } while ((v9 = v8, p->field_18 = p->field_18 + (unsigned int)(char)(addr->field_0->field_10), v4 = (struct_1 *)v8, v8));
        v2 = v5;
    }
    if (ptr)
    {
        v10 = *(ptr);
        if ((!v10 ? v10 : sub_100066bf8(ptr)))
        {
            if (!v10)
                v10 = sub_100066bf8(ptr);
            sub_100064948(v10); /* do not return */
        }
    }
    if ((unsigned int)v5)
        sub_100051d60(v5 & 4294967295); /* do not return */
    sub_1000527a0(4, "  No downloads required.\r\n");
    v14 = (v6 < 0 ? v6 : 0);
    if (v14 >= 0 && 0 < (unsigned int)v5)
        v14 = (1 ? flag : 1);
    return v14;
}
