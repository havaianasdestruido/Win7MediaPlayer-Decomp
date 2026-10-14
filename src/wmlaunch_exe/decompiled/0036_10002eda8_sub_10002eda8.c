/* sub_10002eda8 @ 0x10002eda8
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10002eda8  (264 bytes, 23 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
    unsigned long long field_8;
    struct struct_1 *field_10;
} struct_0;

typedef struct struct_2 {
    char padding_0[8];
    struct struct_3 *field_8;
} struct_2;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_3 {
    unsigned long long field_0;
} struct_3;

int sub_10002eda8(void)
{
    unsigned long long flag;  // rdi
    unsigned int v2[4];  // r8
    unsigned int v3[4];  // rsi
    struct_0 *p;  // rdx
    struct_0 *cur;  // rbx
    unsigned long long v6;  // rcx
    unsigned long long *ptr;  // r9
    struct_2 **v8;  // rbx
    unsigned long long v9;  // rcx
    struct_2 **v10;  // rcx

    flag = 0;
    v3 = v2;
    cur = p;
    if (!v6 || !p)
        return;
    if (!ptr)
        return;
    *(ptr) = 0;
    if (!v2[0] && !v2[1] && v2[2] == 192 && v2[3] == 0x46000000)
    {
        v8 = v6 + p->field_8;
        v10 = v8;
        *(v8)->field_8();
    }
    if (!p->field_10)
        return;
    do
    {
        v9 = cur->field_0;
        if (!v9 || *((int *)v9) == v2[0] && *((int *)(v9 + 4)) == v2[1] && *((int *)(v9 + 8)) == v2[2] && *((int *)(v9 + 12)) == v2[3])
        {
            if (cur->field_10 != 0x1)
                cur->field_10();
            v8 = v6 + cur->field_8;
            v10 = v8;
            *(v8)->field_8();
        }
    } while ((cur += 24, cur->field_10));
    return;
    return;
}
