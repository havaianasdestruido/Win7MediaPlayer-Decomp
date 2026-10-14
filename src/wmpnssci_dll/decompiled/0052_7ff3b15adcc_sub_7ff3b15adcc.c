/* sub_7ff3b15adcc @ 0x7ff3b15adcc
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b15adcc  (372 bytes, 29 basic blocks)
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
    char field_4;
} struct_0;

typedef struct struct_2 {
    unsigned short field_0;
    unsigned short field_2;
    char field_4;
} struct_2;

typedef struct struct_1 {
    unsigned int field_0;
    char padding_4[4];
    unsigned long long field_8;
} struct_1;

int sub_7ff3b15adcc(void)
{
    unsigned long v1;  // r13
    unsigned long long v2;  // rbp
    unsigned long v10;  // rdx
    unsigned long long v3;  // rsi
    struct_0 **ptr;  // rdx
    struct_0 *v5;  // rax
    struct_2 *addr;  // rax
    struct_1 *p;  // rcx
    unsigned long v8;  // r12
    unsigned int v9;  // eax

    v1 = sub_7ff3b159c08();
    if ((unsigned int)v1 < 0)
        return;
    while (true)
    {
        v5 = *(ptr);
        if (!v5->field_0 || v5->field_0 == 93)
        {
            if (v1 >= *((long long *)&p[1].field_0))
                sub_7ff3b137480(2147942487); /* do not return */
            *((long long *)(p->field_8 + v1 * 16 + 8)) = *((long long *)&p[1].field_0);
            return;
        }
        if (v5->field_0 == 92 && !((v5 += 2, *(ptr) = v5, v5->field_0 != 116)))
            v3 = 9;
        else
            v3 = _INSERT(v3, 0, v5->field_0);
        *(ptr) = &*(ptr)->field_2;
        if (*(ptr)->field_0 == 45)
        {
            addr = &*(ptr)->field_2;
            *(ptr) = addr;
            v2 = addr->field_0;
            if ((unsigned short)v2 && (unsigned short)v2 != 93)
            {
                *(ptr) = &addr->field_2;
                if ((unsigned short)v2 < (unsigned short)v3)
                {
                    p->field_0 = 8;
                    break;
                }
            }
            else
            {
                p->field_0 = 4;
                break;
            }
        }
        else
        {
            v2 = _INSERT(v2, 0, v3);
        }
        v8 = sub_7ff3b159c08(p, 0);
        if ((unsigned int)v8 < 0 || !((v9 = (unsigned int)(unsigned long long)sub_7ff3b159c08(p, 0), v9 >= 0)))
            break;
        if (v8 >= *((long long *)&p[1].field_0))
            sub_7ff3b137480(2147942487); /* do not return */
        *((unsigned long long *)(p->field_8 + v8 * 16 + 8)) = (unsigned short)v3;
        v10 = v9;
        if (v10 >= *((long long *)&p[1].field_0))
            sub_7ff3b137480(2147942487); /* do not return */
        *((unsigned long long *)(p->field_8 + v10 * 16 + 8)) = (unsigned short)v2;
    }
    return;
}
