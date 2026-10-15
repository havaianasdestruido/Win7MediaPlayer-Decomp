/* sub_10000f66c @ 0x10000f66c
 *
 * MODULE   : wmpsideshowgadget_exe  (bin/WMPSideShowGadget.exe)
 * ADDRESS  : 0x10000f66c  (446 bytes, 39 basic blocks)
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

typedef struct struct_0 {
    struct struct_0 *field_0;
    struct struct_0 *field_8;
    struct struct_0 *field_10;
    struct struct_0 *field_18;
} struct_0;

typedef struct struct_4 {
    char padding_0[48];
    struct struct_1 *field_30;
    char padding_38[176];
    struct struct_5 *field_e8;
    char padding_f0[40];
    unsigned int field_118;
} struct_4;

typedef struct struct_1 {
    char padding_0[24];
    unsigned long long field_18;
} struct_1;

typedef struct struct_2 {
    char padding_0[72];
    struct struct_3 *field_48;
} struct_2;

typedef struct struct_5 {
    struct struct_2 *field_0;
} struct_5;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

unsigned long long sub_10000f66c(struct_4 *p, unsigned int a1, unsigned short a2, struct_0 *cur, unsigned int *ptr)
{
    unsigned long v3;  // cc_ndep
    unsigned long v4;  // 4101
    char v5;  // cl
    char *v0;  // [bp-0x28], Other Possible Types: unsigned long
    unsigned long flag;  // [bp-0x18]

    if (a1 <= 78)
    {
        if (a1 == 78)
        {
            cur = cur->field_0;
            goto LABEL_10000f7b5;
        }
        if (a1 != 43)
        {
            if (a1 != 44)
            {
                if (a1 != 45)
                {
                    v4 = _ccall(6, 7, (unsigned long long)a1, 45, v3);
                    if (!((char)v4))
                    {
                        if (a1 <= 47)
                            goto LABEL_10000f7b2;
                        if (a1 == 57)
                        {
                            cur = cur->field_8;
                            goto LABEL_10000f7b5;
                        }
                    }
                }
                else
                {
                    cur = cur->field_10;
                    goto LABEL_10000f7b5;
                }
            }
            else
            {
                if ((int)cur->field_0 != 1)
                    goto LABEL_10000f797;
            }
        }
        else
        {
            if ((int)cur->field_0 != 1)
            {
                cur = cur->field_18;
                goto LABEL_10000f7b5;
            }
            else
            {
                4296016904();
            }
        }
    }
    else if (a1 != 273)
    {
        if (a1 > 275)
        {
            if (a1 <= 277)
                goto LABEL_10000f7b2;
            if (a1 > 305)
            {
                if (a1 <= 312)
                    goto LABEL_10000f7b2;
                if (a1 == 528)
                {
                    if (p->field_30)
                    {
                        v0 = p->field_30->field_18;
                        4296016616();
                    }
                    if (a2 - 1 > 1)
                    {
LABEL_10000f797:
                        4296016888();
                    }
LABEL_10000f7b5:
                    if (cur)
                    {
                        v5 = p->field_118;
                        if ((v5 & 8))
                        {
                            flag = 0;
                            if (!(v5 & 1) || !p->field_e8)
                                return 0;
                            v0 = &flag;
                            p->field_e8->field_0->field_48();
                            return 0;
                        }
                        0x100100400();
                    }
                }
            }
        }
    }
    else
    {
        if (cur)
        {
LABEL_10000f7b2:
            goto LABEL_10000f7b5;
        }
    }
    *(ptr) = 0;
    return 1;
}
