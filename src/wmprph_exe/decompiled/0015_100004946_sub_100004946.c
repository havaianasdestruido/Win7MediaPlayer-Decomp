/* sub_100004946 @ 0x100004946
 *
 * MODULE   : wmprph_exe  (bin/wmprph.exe)
 * ADDRESS  : 0x100004946  (287 bytes, 24 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 395fce3d66ab1ed9a4fb2238172eaefc5cf78fc7a8b34c30686d638d16d9efca
 *   Evidence: analysis/report/rea-evidence/wmprph_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_2 {
    struct struct_1 *field_0;
} struct_2;

typedef struct struct_1 {
    struct struct_0 *field_0;
} struct_1;

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

long long sub_100004946(unsigned long a0, unsigned long a1, char *a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long flag, unsigned long flag2, long long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long choice, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned long a31, uint128_t *a32)
{
    void* ptr;  // r12
    unsigned int v2;  // r13d
    unsigned int v3;  // eax
    unsigned int v4;  // edi
    struct_2 **p;  // r14
    char v6;  // r13b
    long long v7;  // rbx
    unsigned int v8;  // edi
    long long v9;  // r8
    unsigned long long v10;  // r15

    *((unsigned int *)&ptr[228]) = (int)ptr[228] & v2;
    *((unsigned int *)&ptr[228]) = (int)ptr[228] | (v3 & v4) * 16;
    if (!(int)ptr[232])
        4296016832();
    *(p) = NULL;
    v6 = 0;
    flag = 0;
    if (v7)
    {
        a2 = &flag;
        v6 = flag;
        v8 = sub_100003810(v7, p, &flag);
    }
    else
    {
        v8 = 0;
    }
    if (v8 >= 0)
    {
        v9 = _INSERT(a2, 0, v8 == 1);
        v8 = sub_100006514(ptr - 64, *(p), v9, a9);
    }
    *((uint128_t *)&ptr[160]) = *(a32);
    if (v8 >= 0)
    {
        if (*(p) && v10)
        {
            choice = 0;
            flag2 = 0;
            *(p)->field_0->field_0();
        }
        if (v6 && *(p))
            4296016760();
        if (v8 >= 0)
            if ((long long)ptr[96])
                goto LABEL_0x100004e1f;
    }
    sub_1000043c0(ptr - 64);
    if (!(long long)ptr[56])
        goto LABEL_0x100004e1f;
    4296016808();
}
