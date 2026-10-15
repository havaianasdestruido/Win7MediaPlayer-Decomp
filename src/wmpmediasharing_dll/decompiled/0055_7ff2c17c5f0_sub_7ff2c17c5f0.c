/* sub_7ff2c17c5f0 @ 0x7ff2c17c5f0
 *
 * MODULE   : wmpmediasharing_dll  (bin/WMPMediaSharing.dll)
 * ADDRESS  : 0x7ff2c17c5f0  (342 bytes, 21 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413
 *   Evidence: analysis/report/rea-evidence/wmpmediasharing_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern long long g_7ff2c1616ca;

unsigned int sub_7ff2c17c5f0(unsigned long a0, unsigned long a1, long long a2, char *a3, unsigned long a4, unsigned int *a5, long long a6)
{
    long long v5;  // rbx
    void* v6;  // rcx
    long long v7;  // rax
    long long v8;  // rax
    long long v9;  // rax
    long long v10;  // rax
    unsigned int v11;  // ebx
    long long v12;  // rcx
    unsigned int *v0;  // [bp-0x58]
    unsigned long v1;  // [bp-0x50]
    unsigned int flag;  // [bp-0x48]
    unsigned long long choice;  // [bp+0x30]

    v0 = a5;
    v5 = a2;
    v1 = a2 * 9 + 6;
    flag = 0;
    if (!((int)sub_7ff2c17a49c(&v0, 0, a6) && (int)sub_7ff2c179f24(a0, a1, v5, 0, a6)))
    {
LABEL_7ff2c17c71c:
        v11 = 0;
    }
    else if (v5)
    {
        v6 = a0 + v5 * 4 - 4;
        v7 = v5;
        do
        {
            v9 = v7;
        } while (!*((int *)v6) && (v6 -= 4, v10 = (long long)(v8 - 1), v9 = v10, v7 = v10, v8 != 1));
        if (!v9)
            goto LABEL_7ff2c17c704;
        choice = 0;
        if (!sub_7ff2c17b768(a0, v5, a1, v5, a3, NULL, v0, NULL, &vvar_5, &v0[v5], a6))
            goto LABEL_7ff2c17c71c;
        v11 = 1;
        if (choice != 1 || *(v0) != 1)
        {
            v12 = 9;
LABEL_7ff2c17c709:
            v11 = 0;
            sub_7ff2c17a4fc(v12, &g_7ff2c1616ca, a6);
        }
    }
    else
    {
LABEL_7ff2c17c704:
        v12 = 2;
        goto LABEL_7ff2c17c709;
    }
    if (flag == 1)
        sub_7ff2c17a470(v0, 0, a6);
    return v11;
}
