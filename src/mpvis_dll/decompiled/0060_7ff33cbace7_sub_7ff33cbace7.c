/* sub_7ff33cbace7 @ 0x7ff33cbace7
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cbace7  (173 bytes, 16 basic blocks)
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

extern struct_0 *g_7ff33ccd688;

int sub_7ff33cbace7(void)
{
    unsigned int p[3];  // r13
    unsigned int v6;  // ymm0
    unsigned int v7;  // ymm7
    unsigned int v8;  // ymm6
    unsigned int v9;  // eax
    unsigned long off;  // rbp
    unsigned long ptr;  // rdx
    unsigned long long idx;  // rcx
    char v1;  // [bp+0x30]
    char v2;  // [bp+0x90]
    char v3;  // [bp+0x94]
    char v4;  // [bp+0x98]

    p[2] = v6;
    if (((CmpF(v7, v8) & 69 | (char)((CmpF(v7, v8) & 69) >> 6)) & 1) != 1)
    {
        if (((CmpF(v6, v7) & 69 | (char)((CmpF(v6, v7) & 69) >> 6)) & 1) != 1)
        {
            v9 = 2;
            goto LABEL_7ff33cbad45;
        }
        else
        {
            v9 = 1;
        }
    }
    else
    {
        if (((CmpF(v6, v8) & 69 | (char)((CmpF(v6, v8) & 69) >> 6)) & 1) != 1)
        {
            v9 = 2;
            goto LABEL_7ff33cbad37;
        }
        else
        {
            v9 = 0;
            if (((CmpF(v6, v7) & 69 | (char)((CmpF(v6, v7) & 69) >> 6)) & 1) != 1)
LABEL_7ff33cbad37:
            else
            LABEL_7ff33cbad45:
        }
    }
    off = v9;
    if (((CmpF(953267991, p[off]) & 69 | (char)((CmpF(953267991, p[off]) & 69) >> 6)) & 1) != 1)
    {
        ptr = *((long long *)&(&v1)[8 * off]);
        idx = off * 3;
        *((int *)ptr) = *((int *)&(&v2)[4 * idx]);
        *((int *)(ptr + 4)) = *((int *)&(&v3)[4 * idx]);
        *((int *)(ptr + 8)) = *((int *)&(&v4)[4 * idx]);
    }
    g_7ff33ccd688();
}
