/* sub_7ff3b150602 @ 0x7ff3b150602
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b150602  (277 bytes, 28 basic blocks)
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
    char padding_0[24];
    unsigned long long field_18;
    int field_20;
    char padding_24[4];
    unsigned long long field_28;
    unsigned int field_30;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern struct_1 *g_7ff3b17a130;

int sub_7ff3b150602(void)
{
    struct_0 *ptr;  // rdi
    unsigned long long *v3;  // rbx, Other Possible Types: unsigned long
    unsigned long long v10;  // rax
    unsigned int v4;  // ebp
    unsigned long long *p;  // rdx
    unsigned long v6;  // r13
    unsigned long v7;  // r15
    unsigned long v8;  // r14
    unsigned int v9;  // ebp
    int v1;  // [bp+0x20]

    if (ptr->field_20 == 64)
    {
        sub_7ff3b13776c(87);
    }
    else
    {
        if (ptr->field_20 == ptr->padding_24)
        {
            if (ptr->padding_24 != (unsigned int)v3)
            {
                v4 = ptr->field_20 * 2;
                if (v4 < (unsigned int)v3 || v4 > 268435455)
                    goto LABEL_7ff3b15070c;
            }
            g_7ff3b17a130();
        }
        p = ptr->field_18 + ptr->field_20 * 8;
        if (p != v3)
            *(p) = v6;
        ptr->field_20 = ptr->field_20 + 1;
        *((unsigned long *)&v1) = v7;
        *((unsigned long *)&(&v1)[8]) = v8;
        if (ptr->field_30 != *((int *)&ptr[1].padding_0[0]))
        {
            v10 = ptr->field_30 * 16;
            if (v10 + ptr->field_28)
                *((void*)(v10 + ptr->field_28)) = v1;
            ptr->field_30 = ptr->field_30 + 1;
            if (ptr->field_20 > 2)
            {
                if (ptr->field_20 <= 1)
                    8792790009312();
                0x7ff3b200500();
            }
        }
        else if (*((int *)&ptr[1].padding_0[0]) == (unsigned int)v3)
        {
LABEL_7ff3b15068d:
            g_7ff3b17a130();
        }
        else
        {
            v9 = ptr->field_30 * 2;
            if (v9 >= (unsigned int)v3 && v9 <= 134217727)
                goto LABEL_7ff3b15068d;
            sub_7ff3b150bec(&ptr->field_18, ptr->field_20 - 1);
LABEL_7ff3b15070c:
        }
    }
    8792790009304();
}
