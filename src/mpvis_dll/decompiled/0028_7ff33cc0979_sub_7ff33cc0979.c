/* sub_7ff33cc0979 @ 0x7ff33cc0979
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cc0979  (227 bytes, 23 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0
 *   Evidence: analysis/report/rea-evidence/mpvis_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    unsigned long long field_0;
} struct_0;

extern unsigned int g_7ff33cc6100;
extern unsigned int g_7ff33cce6f4;
extern struct_0 *g_7ff33cd1318;

unsigned int sub_7ff33cc0979(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, unsigned long a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned long a31, unsigned long a32, unsigned long a33, unsigned long a34, unsigned long a35, unsigned long a36, unsigned long a37, unsigned long a38, unsigned long a39, unsigned long a40, unsigned long a41, unsigned long a42, unsigned long a43, unsigned long a44, unsigned long long a45)
{
    unsigned int v2;  // eax
    unsigned int v3;  // ebx
    long long v4;  // rsi
    unsigned int flag2;  // edi
    unsigned long long flag;  // r8
    unsigned long long choice;  // rdx
    long long v8;  // rcx
    unsigned long long v9;  // r8
    unsigned long v10;  // rdx
    long long v11;  // rcx
    unsigned int v1;  // [bp+0x20]

    v3 = v2;
    v1 = v2;
    if (v3)
    {
        v3 = sub_7ff33cc0734(v4, flag2, a45);
        v1 = v3;
    }
    if (v3)
    {
        v3 = DllMain(v4, flag2);
        v1 = v3;
        if (flag2 == 1 && !v3)
        {
            DllMain(v4, 0);
            sub_7ff33cc0734(v4, 0, 0);
            if (g_7ff33cd1318)
            {
                flag = 0;
                choice = 0;
                v8 = v4;
                g_7ff33cd1318();
            }
        }
        if (!flag2 || flag2 == 3)
        {
            v3 = sub_7ff33cc0734(v4, flag2, a45);
            v1 = v3;
            if (g_7ff33cd1318 && g_7ff33cce6f4)
            {
                v9 = a45;
                v10 = flag2;
                v11 = v4;
                g_7ff33cd1318();
            }
        }
    }
    g_7ff33cc6100 = 4294967295;
    return v3;
}
