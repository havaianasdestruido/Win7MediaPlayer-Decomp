/* sub_10000760c @ 0x10000760c
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x10000760c  (97 bytes, 9 basic blocks)
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

typedef struct struct_4 {
    unsigned int field_0;
    char padding_4[12];
    struct struct_5 *field_10;
} struct_4;

typedef struct struct_2 {
    char padding_0[32];
    struct struct_3 *field_20;
} struct_2;

typedef struct struct_0 {
    char padding_0[16];
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_5 {
    struct struct_2 *field_0;
} struct_5;

typedef struct struct_3 {
    struct struct_0 *field_0;
} struct_3;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

void sub_10000760c(struct_4 *p)
{
    struct_2 **cur;  // rdi
    struct_2 *ptr;  // rsi
    struct_0 **v3;  // rcx

    if (!p->field_0)
        return;
    cur = p->field_10;
    if (cur < *((long long *)&p[1].field_0))
    {
        do
        {
            ptr = *(cur);
            if (ptr)
            {
                v3 = ptr->field_20;
                if (ptr->field_20)
                    ptr->field_20->field_0->field_10();
                ptr->field_20 = NULL;
            }
        } while ((cur += 8, cur < *((long long *)&p[1].field_0)));
    }
    4296016648();
}
