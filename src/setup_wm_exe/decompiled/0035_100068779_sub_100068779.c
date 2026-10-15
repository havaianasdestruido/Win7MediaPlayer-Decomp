/* sub_100068779 @ 0x100068779
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x100068779  (341 bytes, 39 basic blocks)
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

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    long long field_18;
    char padding_20[40];
    long long field_48;
    char padding_50[40];
    long long field_78;
    char field_80;
    char padding_81[171];
    unsigned int field_12c;
} struct_0;

typedef struct struct_1 {
    char padding_0[16];
    unsigned long long field_10;
    unsigned long long field_18;
    char padding_20[40];
    unsigned long long field_48;
    char padding_50[40];
    unsigned long long field_78;
    char field_80;
    char padding_81[171];
    unsigned int field_12c;
} struct_1;

long long sub_100068779(void)
{
    unsigned int v3;  // eax
    struct_0 **ptr;  // rbx
    struct_0 *v13;  // rax
    struct_0 *v14;  // rdx
    struct_0 *v15;  // rax
    struct_0 *p;  // rax
    long long v18;  // rbp
    struct_0 *addr;  // rax
    struct_0 *v20;  // rdi
    struct_0 *v21;  // rax
    struct_0 *v5;  // rdi
    struct_0 *v6;  // rdi
    struct_0 *v7;  // rax
    struct_0 *ptr3;  // rax
    long long v11;  // rsi
    long long v12;  // rsi
    char v1;  // [bp+0x30]

    if (!v3)
        goto LABEL_0x1000688e1;
    v5 = *(ptr);
    if (!*(ptr))
        v5 = sub_100066bf8(ptr);
    if (!v5->field_10)
        sub_1000640d4(); /* do not return */
    v6 = *(ptr);
    if (v6)
        v7 = v6;
    else
        v7 = sub_100066bf8(ptr);
    ptr3 = v7;
    if (ptr3->field_18)
        v11 = ptr3->field_18;
    else
        v11 = vvar_55{r56|8b};
    v12 = v11;
    if (!v6)
        v6 = sub_100066bf8(ptr);
    if (!v6->field_10)
        sub_1000640d4(); /* do not return */
    if ((int)sub_10003a0f0(&v1, 520, L"%s%s.cab", v6->field_10, v12) < 0)
        goto LABEL_0x1000688e1;
    v13 = *(ptr);
    if (!*(ptr))
        v13 = sub_100066bf8(ptr);
    if ((int)sub_100052cbc((struct struct_0 *)&v13->field_78, &v1) < 0)
        goto LABEL_0x1000688e1;
    v14 = *(ptr);
    if (v14)
        v15 = v14;
    else
        v15 = sub_100066bf8(ptr);
    p = v15;
    if (p->field_78)
        v18 = p->field_78;
    if (!v14)
        v14 = sub_100066bf8(ptr);
    if ((int)sub_100067800(ptr, v14->field_48, v18) < 0)
        goto LABEL_0x1000688e1;
    addr = *(ptr);
    if (!*(ptr))
        addr = sub_100066bf8(ptr);
    addr->field_12c = 1;
    v20 = *(ptr);
    if (!*(ptr))
        v20 = sub_100066bf8(ptr);
    if (!v20->field_10)
        sub_1000640d4(); /* do not return */
    v21 = *(ptr);
    if (!*(ptr))
        v21 = sub_100066bf8(ptr);
    sub_100052cbc((struct struct_0 *)&v21->field_80, v20->field_10);
}
