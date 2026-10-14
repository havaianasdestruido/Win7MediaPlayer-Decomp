/* sub_7ff3b15a87c @ 0x7ff3b15a87c
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b15a87c  (532 bytes, 38 basic blocks)
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
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
    char padding_10[24];
    unsigned int field_28;
} struct_0;

typedef struct struct_1 {
    unsigned short field_0;
} struct_1;

int sub_7ff3b15a87c(void)
{
    unsigned long v1;  // r12
    unsigned long v2;  // rsi
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    unsigned long v13;  // rdx
    struct_0 *ptr;  // rcx
    unsigned int v4;  // eax
    unsigned long v5;  // rdi
    unsigned long v6;  // r14
    unsigned int v7;  // eax
    unsigned long v8;  // rdx
    struct_1 **p;  // rdx
    long long v10;  // r8

    v1 = sub_7ff3b159c08();
    if ((unsigned int)v1 < 0)
        return;
    v2 = v1;
    if (v2 >= *((long long *)&ptr->padding_10[0]))
        sub_7ff3b137480(2147942487); /* do not return */
    *((unsigned long long *)(ptr->field_8 + v2 * 16 + 8)) = ptr->field_28;
    v4 = sub_7ff3b159c08(ptr, 1);
    if (v4 >= 0)
    {
        v5 = v4;
        if (v5 >= *((long long *)&ptr->padding_10[0]))
            sub_7ff3b137480(2147942487); /* do not return */
        *((unsigned long long *)(ptr->field_8 + v5 * 16 + 8)) = ptr->field_28;
        ptr->field_28 = ptr->field_28 + 1;
        v6 = sub_7ff3b159c08(ptr, 16);
        if ((unsigned int)v6 >= 0 && (v7 = (unsigned int)(unsigned long long)sub_7ff3b159c08(ptr, 32), v7 >= 0))
        {
            if (v2 >= *((long long *)&ptr->padding_10[0]))
                sub_7ff3b137480(2147942487); /* do not return */
            v8 = v7;
            if (v8 >= *((long long *)&ptr->padding_10[0]))
                sub_7ff3b137480(2147942487); /* do not return */
            *((long long *)(ptr->field_8 + v8 * 16 + 8)) = *((long long *)(v2 * 16 + ptr->field_8 + 8));
            if (sub_7ff3b159c08(ptr, 17) >= 0)
            {
                if (!(!*(p)->field_0 || !((v11 = (unsigned int)(int)sub_7ff3b159c7c(ptr, p, v10), v11 >= 0))))
                {
LABEL_7ff3b15a9e8:
                    if (v6 >= *((long long *)&ptr->padding_10[0]))
                        sub_7ff3b137480(2147942487); /* do not return */
                    *((long long *)(ptr->field_8 + v6 * 16 + 8)) = v11;
                    if (*(p)->field_0 == 125)
                    {
                        *(p) = *(p) + 1;
                        v12 = sub_7ff3b159c08(ptr, 2);
                        if (v12 >= 0)
                        {
                            if (v5 >= *((long long *)&ptr->padding_10[0]))
                                sub_7ff3b137480(2147942487); /* do not return */
                            v13 = v12;
                            if (v13 < *((long long *)&ptr->padding_10[0]))
                            {
                                *((long long *)(ptr->field_8 + v13 * 16 + 8)) = *((long long *)(v5 * 16 + ptr->field_8 + 8));
                                return;
                            }
                            sub_7ff3b137480(2147942487); /* do not return */
                        }
                    }
                    else
                    {
LABEL_7ff3b15aa71:
                        ptr->field_0 = 2;
                    }
                }
                else if (!ptr->field_0)
                {
                    if (*(p)->field_0 != 125)
                        goto LABEL_7ff3b15aa71;
                    v11 = sub_7ff3b159c08(ptr, 0);
                    if (v11 >= 0)
                        goto LABEL_7ff3b15a9e8;
                }
            }
        }
    }
    return;
}
