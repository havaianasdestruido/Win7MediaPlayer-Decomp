/* sub_7ff33cb3f82 @ 0x7ff33cb3f82
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb3f82  (213 bytes, 16 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    unsigned int field_10;
    unsigned int field_14;
    char padding_18[80];
    unsigned long long field_68;
    unsigned int field_70;
    char padding_74[2];
    char field_76;
    char padding_77[169];
    unsigned long long field_120;
    unsigned long long field_128;
} struct_0;

int sub_7ff33cb3f82(void)
{
    struct_0 *ptr;  // rsi
    unsigned int v4;  // edi
    unsigned int v5;  // ecx
    unsigned int v6;  // ebx
    unsigned int v7;  // ymm6
    unsigned int v8;  // ecx
    unsigned int v9;  // ebx
    int v10;  // xmm0
    int v11;  // xmm0
    unsigned int v1;  // [bp+0x20]
    unsigned long v2;  // [bp+0x100030]

    if (ptr->field_76 != (char)v4)
    {
        v5 = *((int *)&ptr->padding_77[1]);
        if (v5 == v4)
        {
            ptr->field_128 = SubV(ptr->field_128, MulV(MulV(ptr->field_68, v2), 0x3fe0000000000000));
LABEL_7ff33cb3fca:
        }
        else if (v5 == v6)
        {
            goto LABEL_7ff33cb3fca;
        }
        v1 = v7;
        sub_7ff33cafa5c(&ptr->padding_77[9], ptr->field_10, ptr->field_14); /* do not return */
    }
    else
    {
        v8 = ptr->field_70;
        if (v8 == v4)
        {
            v11 = (int)v2;
            v10 = MulV(MulV(v11, v11), ptr->field_68);
        }
        else if (v8 == v9)
        {
            v10 = (int)(MulV(ptr->field_68, v2));
        }
        else if (v8 - v9 == v9)
        {
            v10 = (int)ptr->field_68;
        }
        else
        {
            return;
        }
        ptr->field_120 = *((unsigned long long *)&AddV(v10, ptr->field_120));
        return;
    }
}
