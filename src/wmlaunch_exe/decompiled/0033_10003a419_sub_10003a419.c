/* sub_10003a419 @ 0x10003a419
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10003a419  (326 bytes, 24 basic blocks)
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

long long sub_10003a419(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, long long a4, unsigned short a5, unsigned int a6, unsigned long long *a7, unsigned long cur, long long a9, char a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, char a24)
{
    unsigned short *v3;  // rax
    unsigned long long *p;  // r10
    void* ptr;  // rsi
    unsigned long v6;  // rdi
    char v7;  // cl
    unsigned long long v8;  // rdi
    unsigned int v9;  // ebx
    unsigned int v1;  // [bp+0x34]
    char v2;  // [bp+0x58]

    if (!v3)
        goto LABEL_0x10003a574;
    if (!*(v3))
        goto LABEL_0x10003a574;
    p = a7;
    *((unsigned short *)ptr) = *((short *)ptr) + (unsigned short)(v3 - L"0123456789ABCDEF" >> 1);
    *(p) = *(p) + v6;
    if (!a24)
        goto LABEL_0x10003a586;
    v7 = *((short *)ptr);
    if (v7 >= 0)
        goto LABEL_0x10003a586;
    if ((v7 & 224) != 192)
    {
        if ((v7 & 240) == 224)
        {
            v8 = 3;
        }
        else if ((v7 & 248) == 240)
        {
            v8 = 4;
        }
        else if ((v7 & 252) == 248)
        {
            v8 = 5;
        }
        else
        {
            if ((v7 & 254) != 252)
                goto LABEL_0x10003a574;
            v8 = 6;
        }
    }
    v1 = 1;
    v2 = *((char *)ptr);
    if ((unsigned int)v8 <= 1)
        4296016312();
    cur = &vvar_10;
    do
    {
        *((char *)&a4) = 0;
        if ((int)sub_10003a334(p, a9, &a5, 1, 0, a4) < 0)
            goto LABEL_0x10003a579;
        if ((a5 & 0xff00) || ((char)a5 & 192) != 128)
        {
            v9 = 3222082351;
            break;
        }
    } while ((p = a7, *(cur) = (char)a5, cur += 1, v1 += 1, v1 < (unsigned int)v8));
    if (v9 < 0)
        goto LABEL_0x10003a579;
    4296016312();
}
