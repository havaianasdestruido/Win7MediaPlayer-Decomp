/* sub_7ff33cb71db @ 0x7ff33cb71db
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb71db  (179 bytes, 29 basic blocks)
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

int sub_7ff33cb71db(void)
{
    unsigned short *ptr;  // rax
    unsigned int v2;  // ecx
    unsigned long long *v11;  // rsi
    unsigned int v12;  // ecx
    unsigned int flag;  // ecx
    unsigned int choice;  // ecx
    unsigned int v15;  // ecx
    unsigned int v16;  // ecx
    unsigned long v17;  // rdi
    unsigned int v18;  // r12d
    unsigned int v3;  // ecx
    unsigned int v4;  // ecx
    unsigned int v5;  // ecx
    unsigned int v6;  // ecx
    unsigned int v7;  // ecx
    unsigned long v8;  // rdi
    unsigned long v10;  // rsi

    if (!ptr)
        goto LABEL_0x7ff33cb7296;
    v2 = *(ptr);
    if (v2 > 103)
    {
        v12 = v2 - 105;
        if (v2 != 105)
        {
            flag = v12 - 5;
            if (v12 != 5)
            {
                choice = flag - 1;
                if (flag != 1)
                {
                    v15 = choice - 1;
                    if (choice != 1)
                    {
                        v16 = v15 - 3;
                        if (v15 != 3)
                        {
                            if (v16 != 2)
                                if (v16 - 2 != 3)
                                    goto LABEL_0x7ff33cb7296;
                        }
                        else
                        {
                            if ((unsigned int)v17 < v18)
                                v11 = &v11[v18 + -1 * v17];
                            if (!*(v11))
                                goto LABEL_0x7ff33cb7296;
                            8792667325080();
                        }
                    }
                }
            }
        }
    }
    else if (v2 < 101)
    {
        v3 = v2 - 67;
        if (v2 == 67)
            goto LABEL_0x7ff33cb71c1;
        v4 = v3 - 2;
        if (v3 != 2)
        {
            v5 = v4 - 2;
            if (v4 != 2)
            {
                v6 = v5 - 12;
                if (v5 != 12)
                {
                    v7 = v6 - 5;
                    if (v6 != 5)
                    {
                        if (v7 == 11)
                            goto LABEL_0x7ff33cb71c1;
                        if (v7 - 11 != 1)
                            goto LABEL_0x7ff33cb7296;
                    }
                }
                else
                {
                    if ((unsigned int)v17 < v18)
                        v11 = v10 + (v18 - v8) * 8;
                    if (!*(v11))
                        goto LABEL_0x7ff33cb7296;
                    8792667324768();
                }
            }
        }
    }
}
