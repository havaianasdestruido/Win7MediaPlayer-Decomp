/* sub_10005b038 @ 0x10005b038
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10005b038  (268 bytes, 30 basic blocks)
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

typedef struct struct_1 {
    struct struct_0 *field_0;
    struct struct_1 *field_8;
} struct_1;

typedef struct struct_0 {
    unsigned int field_0;
    unsigned int field_4;
    long long field_8;
    long long field_10;
    unsigned int field_18;
    char padding_1c[4];
    long long field_20;
} struct_0;

unsigned int sub_10005b038(struct_1 **ptr)
{
    struct_1 *cur;  // rsi
    unsigned int v3;  // ebx
    struct_0 *v4;  // rcx
    struct_0 *p;  // rdi
    unsigned int v6;  // ecx
    unsigned long long v7;  // rax
    char v0;  // [bp-0xa8]

    cur = *(ptr);
    v3 = 1;
    while (true)
    {
        if (!cur)
            return v3;
        v4 = cur->field_0;
        if (v4->field_0)
        {
            if (v4->field_0 != 5)
                goto LABEL_10005b13c;
            goto LABEL_10005b06f;
        }
        else
        {
            v3 = sub_10005a1a0(v4);
            if (v3)
                goto LABEL_10005b140;
            p = cur->field_0;
            v3 = 1;
            if (p->field_0 != v3)
            {
                if (p->field_0 != 5)
                    goto LABEL_10005b13c;
LABEL_10005b06f:
                v3 = !sub_100059dbc();
                goto LABEL_10005b13c;
            }
            else
            {
                v6 = p->field_4;
                v3 = 0;
                if (!v6)
                    sub_100060c34(&v0, p->field_8, 0, 1); /* do not return */
                if (v6 != 2)
                {
                    if (v6 != 3 || !sub_100059e3c(p))
                        goto LABEL_10005b13c;
                    v7 = sub_100052d68(p->field_20);
                }
                else
                {
                    if (!sub_100059e3c(p))
                        goto LABEL_10005b13c;
                    v7 = (!p->field_10 ? 0 : sub_100054858(p->field_10));
                }
                v3 = sub_100052f54(v7, *((long long *)&p->field_18), 1);
LABEL_10005b13c:
                if (!v3)
                    return v3;
LABEL_10005b140:
                cur = cur->field_8;
            }
        }
    }
}
