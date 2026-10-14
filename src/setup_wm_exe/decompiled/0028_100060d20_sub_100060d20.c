/* sub_100060d20 @ 0x100060d20
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100060d20  (362 bytes, 41 basic blocks)
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
    char padding_0[24];
    unsigned long long field_18;
    unsigned long long field_20;
    unsigned long long field_28;
    unsigned long long field_30;
    unsigned long long field_38;
    unsigned long long field_40;
    unsigned long long field_48;
    unsigned long long field_50;
    unsigned long long field_58;
    char padding_60[32];
    struct struct_3 *field_80;
    struct struct_4 *field_88;
} struct_2;

typedef struct struct_0 {
    long long field_0;
    unsigned long long field_8;
} struct_0;

typedef struct struct_1 {
    long long field_0;
    unsigned long long field_8;
} struct_1;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

long long sub_100060d20(struct_2 *p)
{
    struct_0 **ptr;  // rdi
    struct_0 *ptr3;  // rax
    unsigned long long i;  // rsi
    struct_1 **addr;  // rdi
    unsigned long long j;  // rsi
    unsigned long v6;  // rax

    if (p->field_20)
    {
        4295490210();
    }
    else if (p->field_18)
    {
        4295490210();
    }
    else if (p->field_28)
    {
        4295490210();
    }
    else if (p->field_40)
    {
        4295490210();
    }
    else if (p->field_30)
    {
        4295490210();
    }
    else if (p->field_38)
    {
        4295490210();
    }
    else if (p->field_48)
    {
        4295490210();
    }
    else if (p->field_50)
    {
        4295490210();
    }
    else if (p->field_58)
    {
        4298113112();
    }
    else
    {
        ptr = p->field_80;
        if (ptr)
        {
            if (*(ptr))
            {
                do
                {
                    ptr3 = *(ptr);
                    i = ptr3->field_8;
                    if (ptr3->field_0)
                    {
                        if (ptr3->field_0)
                            sub_10005a72c(ptr3->field_0, 1); /* do not return */
                        *(ptr)->field_0 = 0;
                    }
                    if (*(ptr))
                        4295490222();
                    *(ptr) = i;
                } while (i);
            }
            4295490222();
        }
        else
        {
            addr = p->field_88;
            if (!addr)
                return v6;
            if (*(addr))
            {
                do
                {
                    j = *(addr)->field_8;
                    if (!*(addr)->field_0)
                        sub_1000527a0(4, "Error deleting package list object.");
                    if (*(addr)->field_0)
                    {
                        if (*(addr)->field_0)
                            sub_10005ce9c(*(addr)->field_0, 1); /* do not return */
                        *(addr)->field_0 = 0;
                    }
                    if (*(addr))
                        4295490222();
                    *(addr) = j;
                } while (j);
            }
            4295490222();
        }
    }
}
