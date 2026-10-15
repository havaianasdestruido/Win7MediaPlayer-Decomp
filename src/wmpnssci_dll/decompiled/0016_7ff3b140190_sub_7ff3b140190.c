/* sub_7ff3b140190 @ 0x7ff3b140190
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b140190  (614 bytes, 59 basic blocks)
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
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

typedef struct struct_2 {
    char padding_0[148];
    char field_94;
} struct_2;

typedef struct struct_3 {
    char padding_0[148];
    char field_94;
} struct_3;

typedef struct struct_4 {
    char padding_0[144];
    unsigned int field_90;
    char field_94;
} struct_4;

typedef struct struct_1 {
    char padding_0[104];
    unsigned long long field_68;
} struct_1;

typedef struct struct_5 {
    char padding_0[104];
    unsigned long long field_68;
} struct_5;

int sub_7ff3b140190(void)
{
    unsigned int flag2;  // r8d
    unsigned long long v13;  // rbp
    unsigned long long v20;  // r9
    struct_0 *addr;  // rcx
    unsigned long long v15;  // r9
    struct_3 *v17;  // rcx
    char *v0;  // [bp-0x88]
    unsigned int v1;  // [bp-0x78]
    unsigned int v2;  // [bp-0x74]
    unsigned long v3;  // [bp-0x70]
    unsigned int v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long flag;  // [bp-0x50]
    unsigned long long choice;  // [bp-0x48]
    unsigned long long v9;  // [bp+0x28]
    unsigned long long *ptr;  // [bp+0x30]
    unsigned int v11;  // [bp+0x38]

    if (v11)
        return;
    if (flag2 == 1)
        sub_7ff3b140da0(); /* do not return */
    if (flag2 == 2)
        8792790008200();
    v13 = v9;
    if (flag2 - 0x200 <= 14)
    {
        v4 = flag2;
        v3 = addr->field_8;
        v5 = v15;
        flag = 0;
        choice = 0;
        8792790008200();
    }
    if (flag2 == 20)
    {
        *(ptr) = 1;
    }
    else if (!(flag2 == 15 || flag2 == 792))
    {
        if (flag2 == 7 || flag2 == 8)
        {
            if ((1 & v17->field_94))
                8792790008512();
            sub_7ff3b140305();
            return;
        }
        if (flag2 == 0x200)
        {
            v1 = 1;
            v0 = &v1;
            *(ptr) = sub_7ff3b14085c(v17);
            if (!v1)
                return;
        }
        else
        {
            if (flag2 == 675 && ((char)(*((int *)&v17->padding_0[144]) >> 1) & 1) && (v17->field_94 & 4))
            {
                v17->field_94 = v17->field_94 & 251;
                goto LABEL_7ff3b1404c6;
            }
            if (flag2 == 513)
            {
                v1 = (short)v13;
                v2 = (short)(v13 >> 16);
                0x7ff3b200200();
            }
            if (flag2 == 514)
                8792790008488();
            if (flag2 == 258)
            {
                if (v20 == 13 || v20 == 32)
                    sub_7ff3b140ca0(v17); /* do not return */
                goto LABEL_7ff3b1401cb;
            }
            else
            {
                if (flag2 == 135)
                {
                    *(ptr) = 128;
                }
                else
                {
                    if (flag2 == 32)
                    {
                        v1 = 0;
                        v2 = 0;
                        8792790008464();
                    }
                    if (flag2 == 10)
                    {
LABEL_7ff3b1404c6:
                        8792790008512();
                    }
                    if (flag2 == 49)
                    {
                        *(ptr) = *((long long *)&v17->padding_0[104]);
                    }
                    else
                    {
                        if (flag2 == 48)
                        {
                            *((unsigned long long *)&v17->padding_0[104]) = v20;
                            if ((unsigned int)v13)
                                goto LABEL_7ff3b1404c6;
                        }
                        else
                        {
                            if (flag2 != 296)
                            {
                                if (flag2 != 5)
                                    return;
                                sub_7ff3b14098c(v17); /* do not return */
                            }
                        }
LABEL_7ff3b1401cb:
                        *(ptr) = 0;
                    }
                }
            }
        }
    }
    else if (!(1 & v17->field_94))
    {
        *(ptr) = 1;
        return;
    }
    else
    {
        sub_7ff3b140700(v17, v20); /* do not return */
    }
    return;
}
