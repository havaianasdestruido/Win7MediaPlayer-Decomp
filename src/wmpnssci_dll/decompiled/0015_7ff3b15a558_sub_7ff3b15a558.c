/* sub_7ff3b15a558 @ 0x7ff3b15a558
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b15a558  (619 bytes, 61 basic blocks)
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
    unsigned short field_2;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_1;

typedef struct struct_2 {
    char padding_0[8];
    unsigned long long field_8;
} struct_2;

typedef struct struct_3 {
    char padding_0[8];
    unsigned long long field_8;
} struct_3;

int sub_7ff3b15a558(void)
{
    struct_0 **ptr;  // rdx
    unsigned short v2[2];  // rax
    char *addr;  // r8, Other Possible Types: long long
    struct_1 *p;  // rcx, Other Possible Types: unsigned int *
    unsigned long v9;  // r11
    unsigned long v11;  // r11
    unsigned long v3;  // rbx
    char *ptr3;  // r8
    unsigned int v4;  // eax
    unsigned short v5[2];  // rax
    unsigned short v6[2];  // rax

    v2 = *(ptr);
    if (v2[0] == 123)
    {
        *(ptr) = &v2[1];
        sub_7ff3b15a87c();
        return;
    }
    if (v2[0] == 40)
    {
        *(ptr) = &v2[1];
        v3 = sub_7ff3b159c08();
        if ((unsigned int)v3 >= 0 && sub_7ff3b159c08(p, 17) >= 0)
        {
            if (!(!*(ptr)->field_0 || !((v4 = (unsigned int)(int)sub_7ff3b159c7c(p, ptr, addr), v4 >= 0))))
            {
LABEL_7ff3b15a602:
                if (v3 >= *((long long *)&p[1].field_0))
                    sub_7ff3b137480(2147942487); /* do not return */
                *((long long *)(p->field_8 + v3 * 16 + 8)) = v4;
                v5 = *(ptr);
                if (v5[0] == 41)
                    goto LABEL_7ff3b15a62f;
LABEL_7ff3b15a639:
                p->field_0 = 3;
            }
            else if (!p->field_0)
            {
                if (*(ptr)->field_0 != 41)
                    goto LABEL_7ff3b15a639;
                v4 = sub_7ff3b159c08(p, 0);
                if (v4 >= 0)
                    goto LABEL_7ff3b15a602;
            }
        }
    }
    else
    {
        if (v2[0] != 91)
        {
            if (v2[0] == 92)
            {
                *(ptr) = &v2[1];
                0x7ff3b200100();
            }
            else if (v2[0] == 33)
            {
                *(ptr) = &v2[1];
                sub_7ff3b15aaa0();
                return;
            }
            else
            {
                if (v2[0] == 125 || v2[0] == 93 || v2[0] == 41 || !v2[0])
                    return;
                if (v2[0] == 46)
                {
                    if (sub_7ff3b159c08() >= 0)
                    {
                        *(ptr3) = 0;
                        *(ptr) = &*(ptr)->field_2;
                        return;
                    }
                }
                else
                {
                    if (v2[0] == 36 && !v2[1])
                    {
                        v9 = sub_7ff3b159c08();
                        if ((unsigned int)v9 >= 0)
                        {
                            if (v9 >= *((long long *)&p[1].field_0))
                                sub_7ff3b137480(2147942487); /* do not return */
                            *((unsigned long *)(p->field_8 + v9 * 16 + 8)) = 0;
                            *(ptr3) = 0;
                            *(ptr) = &*(ptr)->field_2;
                            return;
                        }
                    }
                    else
                    {
                        v11 = sub_7ff3b159c08();
                        if ((unsigned int)v11 >= 0)
                        {
                            if (v11 >= *((long long *)&p[1].field_0))
                                sub_7ff3b137480(2147942487); /* do not return */
                            *((unsigned long long *)(p->field_8 + v11 * 16 + 8)) = *(ptr)->field_0;
                            *(ptr3) = 0;
                            *(ptr) = &*(ptr)->field_2;
                            return;
                        }
                    }
                }
                return;
            }
        }
        *(ptr) = &v2[1];
        *(addr) = 0;
        v6 = *(ptr);
        if (v6[0] == 93)
        {
LABEL_7ff3b15a664:
            *(ptr) = &v6[1];
            *(p) = 6;
        }
        else
        {
            if (v6[0] == 94)
                *(ptr) = &v6[1];
            v6 = *(ptr);
            if (v6[0] == 93)
                goto LABEL_7ff3b15a664;
            if (sub_7ff3b15adcc() < 0)
                goto LABEL_7ff3b15a63f;
            v5 = *(ptr);
            if (v5[0] == 93)
            {
LABEL_7ff3b15a62f:
                *(ptr) = &v5[1];
            }
            else
            {
                p->field_0 = 4;
            }
        }
    }
LABEL_7ff3b15a63f:
    return;
}
