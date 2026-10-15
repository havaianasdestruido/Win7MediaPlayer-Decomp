/* sub_7ff24f94b42 @ 0x7ff24f94b42
 *
 * MODULE   : wmpnssui_dll  (bin/WMPNSSUI.dll)
 * ADDRESS  : 0x7ff24f94b42  (108 bytes, 10 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb
 *   Evidence: analysis/report/rea-evidence/wmpnssui_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_4 {
    char padding_0[16];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_2 {
    char padding_0[64];
    struct struct_3 *field_40;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_5 {
    struct struct_2 *field_0;
} struct_5;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

void sub_7ff24f94b42(unsigned long a0, struct_0 **a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5, struct_0 **a6)
{
    int v1;  // eax
    int v2;  // ebx
    unsigned int v11;  // edi
    unsigned long v12;  // rdx
    struct_0 **v3;  // rcx
    unsigned int v4;  // edi
    unsigned long v5;  // rdi
    struct_0 **v6;  // rcx
    struct_4 *ptr;  // rsi
    int v8;  // eax
    int v9;  // eax
    struct_2 **v10;  // rcx

    if (v1 < v2)
        goto LABEL_0x7ff24f94c6e;
    v3 = a6;
    v4 = ~(-(NULL < v3));
    v5 = v4 & 2147500035;
    v6 = v3;
    if ((v4 & 2147500035) >= 0)
    {
        a1 = v3;
        v8 = sub_7ff24f94f9c(&ptr->padding_0[8], a1);
        v5 = v8;
        if (v8 >= v2)
        {
            v9 = sub_7ff24f94ec8(&ptr->padding_0[8]);
            v5 = v9;
            if (v9 >= v2)
            {
                v10 = ptr->field_10;
                v11 = ~(-(NULL < ptr->field_10));
                v5 = v11 & 2147942487;
                if ((v11 & 2147942487) >= 0)
                {
                    v12 = &vvar_5;
                    ptr->field_10->field_0->field_40();
                }
            }
        }
        v6 = a6;
    }
    *(v6)->field_10();
}
