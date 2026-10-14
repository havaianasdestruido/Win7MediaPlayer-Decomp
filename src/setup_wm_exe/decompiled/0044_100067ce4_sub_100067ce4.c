/* sub_100067ce4 @ 0x100067ce4
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100067ce4  (311 bytes, 34 basic blocks)
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
    char padding_0[16];
    struct struct_0 *field_10;
    char padding_18[84];
    unsigned int field_6c;
} struct_2;

typedef struct struct_0 {
    struct struct_1 *field_0;
    struct struct_0 *field_8;
} struct_0;

typedef struct struct_1 {
    char padding_0[264];
    unsigned int field_108;
    char padding_10c[8];
    unsigned int field_114;
} struct_1;

unsigned int sub_100067ce4(struct_2 *ptr)
{
    unsigned int flag[70];  // r13
    unsigned int v2;  // esi
    unsigned int v11[70];  // rcx
    struct_0 *cur;  // rbx
    unsigned int v13[70];  // rdx
    int i;  // r12d
    unsigned int v4[70];  // rbx
    unsigned long long v5;  // rbp
    int flag2;  // ecx
    unsigned int choice;  // ecx
    unsigned int v8[70];  // rbx
    unsigned int v9[70];  // rax
    struct_0 *iter;  // rax

    flag = NULL;
    v2 = 2147500037;
    i = (ptr->field_6c ? 1 : 4);
    v4 = NULL;
    v5 = 0;
    if (i > 0)
    {
        do
        {
            flag2 = v5;
            if ((unsigned int)v5)
            {
                choice = flag2 - 1;
                if (flag2 == 1)
                {
                    v9 = sub_100066c28(ptr);
                }
                else if (choice != 1)
                {
                    v8 = v4;
                    if (choice - 1 != 1)
                        continue;
                    v9 = sub_100066cac(ptr, 1);
                }
                else
                {
                    iter = ptr->field_10;
                    while (true)
                    {
                        if (!(iter && !((v11 = (unsigned int [70])iter->field_0, !v11))))
                        {
                            v8 = flag;
                            break;
                        }
                        else if (!v11[69])
                        {
                            iter = iter->field_8;
                        }
                        else
                        {
                            v8 = v11;
                            break;
                        }
                    }
                }
            }
            else
            {
                v9 = sub_100066bf8(ptr);
            }
            v8 = v9;
            v4 = v8;
            if (v4 && 0 <= sub_100067a88(ptr, v4))
                v2 = 0;
            v5 += 1;
        } while ((unsigned int)v5 < i);
    }
    if (ptr->field_6c)
        return v2;
    cur = ptr->field_10;
    while (cur)
    {
        v13 = cur->field_0;
        if (!v13)
            return v2;
        if (v13[66])
        {
            if (sub_100067a88(ptr, v13) >= 0)
            {
                v2 = 0;
            }
            else if (0 <= sub_100067a88(ptr, cur->field_0))
            {
                v2 = 0;
            }
        }
LABEL_100067df1:
        cur = cur->field_8;
        goto LABEL_100067df1;
    }
    return v2;
}
