/* sub_7ff3b15aaa0 @ 0x7ff3b15aaa0
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b15aaa0  (668 bytes, 49 basic blocks)
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
    char padding_10[28];
    unsigned int field_2c;
} struct_0;

int sub_7ff3b15aaa0(void)
{
    unsigned int v1;  // eax
    unsigned long v2;  // rbp
    unsigned int v11;  // eax
    unsigned long v12;  // r11
    unsigned int v13;  // eax
    unsigned long v14;  // r13
    void* v15;  // rdx
    void* v16;  // r8
    unsigned int v17;  // eax
    unsigned int v18;  // eax
    unsigned long v19;  // rdx
    unsigned int v20;  // eax
    struct_0 *ptr;  // rcx
    unsigned long v21;  // rdx
    unsigned int v22;  // eax
    unsigned int v4;  // eax
    unsigned long v5;  // rdi
    unsigned int v6;  // eax
    unsigned long v7;  // r12
    unsigned int v8;  // eax
    unsigned long v9;  // r8
    unsigned long long v10;  // r8

    v1 = sub_7ff3b159c08();
    v2 = v1;
    if (v1 >= 0)
    {
        if (v2 >= *((long long *)&ptr->padding_10[0]))
            sub_7ff3b137480(2147942487); /* do not return */
        *((unsigned long long *)(ptr->field_8 + v2 * 16 + 8)) = ptr->field_2c;
        ptr->field_2c = ptr->field_2c + 1;
    }
    v4 = sub_7ff3b159c08(ptr, 23);
    v5 = v4;
    if (v4 >= 0)
    {
        if (v5 >= *((long long *)&ptr->padding_10[0]))
            sub_7ff3b137480(2147942487); /* do not return */
        *((unsigned long long *)(ptr->field_8 + v5 * 16 + 8)) = ptr->field_2c;
        ptr->field_2c = ptr->field_2c + 1;
    }
    v6 = sub_7ff3b159c08(ptr, 16);
    v7 = v6;
    if (v6 < 0)
        return;
    v8 = sub_7ff3b159c08(ptr, 24);
    if (v8 >= 0)
    {
        if (v2 >= *((long long *)&ptr->padding_10[0]))
            sub_7ff3b137480(2147942487); /* do not return */
        v9 = v8;
        if (v9 >= *((long long *)&ptr->padding_10[0]))
            sub_7ff3b137480(2147942487); /* do not return */
        v10 = v9 * 2;
        *((long long *)(ptr->field_8 + v10 * 8 + 8)) = *((long long *)(v2 * 16 + ptr->field_8 + 8));
        v11 = sub_7ff3b159c08(ptr, 25, v10);
        v12 = v11;
        if (v11 >= 0)
        {
            if (v5 >= *((long long *)&ptr->padding_10[0]))
            {
                sub_7ff3b137480(2147942487); /* do not return */
            }
            else if (v12 >= *((long long *)&ptr->padding_10[0]))
            {
                sub_7ff3b137480(2147942487); /* do not return */
            }
            else
            {
                *((long long *)(ptr->field_8 + v12 * 16 + 8)) = *((long long *)(v5 * 16 + ptr->field_8 + 8));
                v13 = sub_7ff3b159c08(ptr, 13);
                v14 = v13;
                if (v13 >= 0)
                {
                    v17 = sub_7ff3b15a558(ptr, v15, v16);
                    if (v17 < 0)
                    {
                        return;
                    }
                    else if (v7 >= *((long long *)&ptr->padding_10[0]))
                    {
                        sub_7ff3b137480(2147942487); /* do not return */
                    }
                    else
                    {
                        *((long long *)(ptr->field_8 + v7 * 16 + 8)) = v17;
                        v18 = sub_7ff3b159c08(ptr, 24);
                        if (v18 >= 0)
                        {
                            if (v2 >= *((long long *)&ptr->padding_10[0]))
                                sub_7ff3b137480(2147942487); /* do not return */
                            v19 = v18;
                            if (v19 >= *((long long *)&ptr->padding_10[0]))
                                sub_7ff3b137480(2147942487); /* do not return */
                            *((long long *)(ptr->field_8 + v19 * 16 + 8)) = *((long long *)(v2 * 16 + ptr->field_8 + 8));
                            v20 = sub_7ff3b159c08(ptr, 25);
                            if (v20 >= 0)
                            {
                                if (v5 >= *((long long *)&ptr->padding_10[0]))
                                    sub_7ff3b137480(2147942487); /* do not return */
                                v21 = v20;
                                if (v21 >= *((long long *)&ptr->padding_10[0]))
                                    sub_7ff3b137480(2147942487); /* do not return */
                                *((long long *)(ptr->field_8 + v21 * 16 + 8)) = *((long long *)(v5 * 16 + ptr->field_8 + 8));
                                v22 = sub_7ff3b159c08(ptr, 17);
                                if (v22 >= 0)
                                {
                                    if (v14 >= *((long long *)&ptr->padding_10[0]))
                                        sub_7ff3b137480(2147942487); /* do not return */
                                    *((long long *)(ptr->field_8 + v14 * 16 + 8)) = v22 + 1;
                                    return;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return;
}
