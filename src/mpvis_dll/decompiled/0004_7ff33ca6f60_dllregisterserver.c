/* DllRegisterServer @ 0x7ff33ca6f60
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33ca6f60  (87 bytes, 7 basic blocks)
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
    struct struct_1 *field_8;
    char padding_10[32];
    struct struct_2 *field_30;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_2 {
    unsigned long long field_0;
} struct_2;

extern long long g_7ff33ccecb0;
extern struct_0 *g_7ff33ccecd0;

int DllRegisterServer(void)
{
    struct_0 *v1;  // rdi
    unsigned long long flag;  // rsi
    unsigned long long choice;  // rcx

    v1 = g_7ff33ccecd0;
    if (!g_7ff33ccecd0)
        return;
    flag = 0;
    if (!g_7ff33ccecd0->field_0)
    {
        sub_7ff33ca81e8(&g_7ff33ccecb0, 0); /* do not return */
    }
    else if (g_7ff33ccecd0->field_30)
    {
        g_7ff33ccecd0->field_30();
    }
    else
    {
        choice = 1;
        g_7ff33ccecd0->field_8();
    }
}
