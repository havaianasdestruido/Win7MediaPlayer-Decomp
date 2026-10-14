/* sub_10003786f @ 0x10003786f
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x10003786f  (364 bytes, 38 basic blocks)
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

extern char g_10003e292;

long long sub_10003786f(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, long long a5)
{
    unsigned int v2;  // eax
    unsigned int ptr[35];  // rsi
    unsigned int v4;  // eax
    unsigned long v5;  // rbx
    unsigned int v6;  // ebp
    char v7;  // r12b
    char v1;  // [bp+0x20]

    v4 = v2 - ptr[34];
    if ((v4 ^ v4 >> 31) - (v4 >> 31) > 5000)
        goto LABEL_0x100037881;
    if (ptr[33] != vvar_87{r56|4b})
        if (!((char)ptr[33] & 16))
            goto LABEL_1000378ac;
        else
            goto LABEL_0x100037839;
LABEL_1000378ac:
    if ((int)sub_100033554(ptr) == 128)
        goto LABEL_0x100037839;
    sub_10002fbf0(&a5);
    v6 = v5;
    if (sub_100033688(ptr, &a5) >= (unsigned int)v5)
    {
        if (&(unsigned int)v5 != v5)
        {
            sub_10003751c(a5, &(unsigned int)v5);
            v6 = v5;
        }
        if (!((char)(v6 >> 3) & v7))
        {
            if (((char)v6 & v7) && (char)sub_1000337d0(ptr, 15) != (char)v5)
            {
                sub_10002fbf0(&v1);
                sub_100030020(&v1);
            }
            else if (g_10003e292 != (char)v5)
            {
                sub_10002fbf0(&v1);
                if (sub_100033688(ptr, &v1) >= (unsigned int)v5)
                    sub_100037a40(v1);
                sub_100030020(&v1);
            }
        }
    }
    sub_100030020(&a5);
}
