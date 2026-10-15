/* sub_100036bf7 @ 0x100036bf7
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100036bf7  (202 bytes, 20 basic blocks)
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
    char padding_0[8];
    long long field_8;
} struct_0;

long long sub_100036bf7(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10)
{
    long long v2;  // r12
    unsigned long long v3;  // rsi
    unsigned long v10;  // rax
    unsigned long v11;  // rax
    struct_0 *v4;  // rdi
    struct_0 *v5;  // rsi
    long long v6;  // rbx
    long long v7;  // rdx
    long long ptr;  // rdx
    char v9;  // al
    long long v1;  // [bp+0x20]

    v2 = -2147483647;
    if (v3 == 18446744071562067969)
    {
        v5 = &v4->field_8;
    }
    else
    {
        v2 = -2147483646;
        if (v3 != 18446744071562067970)
            return _INSERT(v10, 0, v6);
        v5 = v4 + 1;
    }
    if (v5->padding_0 != v6)
        return _INSERT(v10, 0, v6);
    sub_10002fbf0(&v1);
    sub_10002fd60();
    if (v1 != v6)
    {
        v7 = v1;
        if (v4[2].field_8 != v6)
        {
            sub_10002fe84(&v1, v4[2].field_8, 4294967295);
            v7 = v1;
        }
        ptr = v7;
        if (ptr == v6)
            goto LABEL_100036c83;
        v9 = *((short *)ptr) != (unsigned short)v6;
    }
    else
    {
LABEL_100036c83:
        v9 = v6;
    }
    if (v9 == (char)v6)
    {
        v11 = _INSERT(sub_100030020(&v1), 0, v6);
        return v11;
    }
    sub_100036a38(v2); /* do not return */
}
