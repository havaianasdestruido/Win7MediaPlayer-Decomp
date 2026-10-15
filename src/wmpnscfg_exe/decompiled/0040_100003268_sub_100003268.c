/* sub_100003268 @ 0x100003268
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100003268  (136 bytes, 11 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 10888bb9c3799e1e8b010c0f9088ced376aad63a509fce1727c457b022cdc717
 *   Evidence: analysis/report/rea-evidence/wmpnscfg_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_3 {
    char padding_0[8];
    unsigned int field_8;
    char padding_c[4];
    struct struct_4 *field_10;
    char padding_18[40];
    struct struct_5 *field_40;
} struct_3;

typedef struct struct_6 {
    unsigned long long field_0;
} struct_6;

typedef struct struct_7 {
    char padding_0[16];
    struct struct_8 *field_10;
} struct_7;

typedef struct struct_4 {
    struct struct_0 *field_0;
} struct_4;

typedef struct struct_5 {
    struct struct_1 *field_0;
} struct_5;

typedef struct struct_8 {
    unsigned long long field_0;
} struct_8;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    struct struct_2 *field_10;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

void sub_100003268(struct_3 *ptr)
{
    struct_3 *p;  // rsi
    struct_3 *v2;  // rdi
    struct_7 **v3;  // rcx

    p = &ptr->field_8;
    v2 = ptr;
    if (!*((int *)&p->padding_0[0]))
        return;
    if (ptr->field_10)
    {
        if (!p)
        {
            4296016616();
        }
        else if (*((long long *)&p->field_8))
        {
            (*((long long *)*((long long *)&p->field_8)))();
        }
        else
        {
            *((struct_6 ***)&p->field_8) = NULL;
            ptr->field_10 = NULL;
        }
    }
    v3 = ptr->field_40;
    if (!ptr->field_40)
        4296016648();
    ptr->field_40->field_0->field_10();
}
