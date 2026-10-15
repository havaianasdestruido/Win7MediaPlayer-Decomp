/* sub_7ff3b162c88 @ 0x7ff3b162c88
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b162c88  (798 bytes, 50 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962
 *   Evidence: analysis/report/rea-evidence/wmpnssci_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern unsigned long long g_7ff3b17a138;

int sub_7ff3b162c88(void)
{
    long long v8;  // rcx
    unsigned int v9;  // edx
    unsigned long long v18;  // rcx
    char *cur;  // rdi
    unsigned long long v20;  // rcx
    unsigned long v10;  // r14
    long long v11;  // rbx
    long long v12;  // r8
    long long v13;  // r13
    long long v14;  // rbp
    long long v15;  // rbx
    long long v16;  // r13
    char *iter;  // rdi
    char v0;  // [bp-0x128]
    char v1;  // [bp-0x108]
    char v2;  // [bp-0x98]
    char v3;  // [bp-0x84]
    char v4;  // [bp-0x70]
    char v5;  // [bp-0x5c]
    unsigned long long v6;  // [bp-0x48]

    v6 = g_7ff3b17a138 ^ &v0;
    if (v8)
    {
        v10 = v9 >> 2;
        if ((unsigned int)v10)
        {
            v11 = v10 + v8;
            v13 = v12 + 20;
            sub_7ff3b167f5c(&v1);
            sub_7ff3b167fa0(v12, 20, &v1);
            sub_7ff3b167fa0(v8, v10 & 4294967295, &v1);
            sub_7ff3b167fa0(v13, 20, &v1);
            sub_7ff3b167fa0(v11, v10 & 4294967295, &v1);
            sub_7ff3b168244(&v1, &v2);
            sub_7ff3b167f5c(&v1);
            sub_7ff3b167fa0(v13, 20, &v1);
            sub_7ff3b167fa0(v11, v10 & 4294967295, &v1);
            sub_7ff3b167fa0(v12, 20, &v1);
            sub_7ff3b167fa0(v8, v10 & 4294967295, &v1);
            sub_7ff3b168244(&v1, &v3);
            v14 = v10 + v11;
            v15 = v10 + v14;
            sub_7ff3b167f5c(&v1);
            sub_7ff3b167fa0(v13 + 20, 20, &v1);
            sub_7ff3b167fa0(v14, v10 & 4294967295, &v1);
            sub_7ff3b167fa0(v13 + 40, 20, &v1);
            sub_7ff3b167fa0(v15, v10 & 4294967295, &v1);
            sub_7ff3b168244(&v1, &v4);
            sub_7ff3b167f5c(&v1);
            sub_7ff3b167fa0(v13 + 40, 20, &v1);
            sub_7ff3b167fa0(v15, v10 & 4294967295, &v1);
            sub_7ff3b167fa0(v13 + 20, 20, &v1);
            sub_7ff3b167fa0(v14, v10 & 4294967295, &v1);
            sub_7ff3b168244(&v1, &v5);
            sub_7ff3b167f5c(&v1);
            sub_7ff3b167fa0(&v2, 20, &v1);
            sub_7ff3b167fa0(&v4, 20, &v1);
            sub_7ff3b168244(&v1, v12);
            sub_7ff3b167f5c(&v1);
            sub_7ff3b167fa0(&v3, 20, &v1);
            sub_7ff3b167fa0(&v5, 20, &v1);
            sub_7ff3b168244(&v1, v13);
            v16 = v13 + 20;
            sub_7ff3b167f5c(&v1);
            sub_7ff3b167fa0(&v4, 20, &v1);
            sub_7ff3b167fa0(&v2, 20, &v1);
            sub_7ff3b168244(&v1, v16);
            sub_7ff3b167f5c(&v1);
            sub_7ff3b167fa0(&v5, 20, &v1);
            sub_7ff3b167fa0(&v3, 20, &v1);
            sub_7ff3b168244(&v1, v16 + 20);
            iter = &v1;
            for (v18 = 112; v18; iter += 1)
            {
                v18 -= 1;
                *(iter) = 0;
            }
            cur = &v2;
            for (v20 = 80; v20; cur += 1)
            {
                v20 -= 1;
                *(cur) = 0;
            }
            sub_7ff3b163ab0(v6 ^ &v0);
            return;
        }
    }
    sub_7ff3b163ab0(v6 ^ &v0);
    return;
}
