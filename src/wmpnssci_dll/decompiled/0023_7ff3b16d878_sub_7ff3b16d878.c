/* sub_7ff3b16d878 @ 0x7ff3b16d878
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b16d878  (643 bytes, 46 basic blocks)
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

typedef struct struct_0 {
    long long field_0;
    char padding_8[48];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_1 {
    unsigned int field_0;
} struct_1;

extern long long g_7ff3b131a90;

unsigned int sub_7ff3b16d878(char *a0, unsigned int a1, char *a2, struct_0 *ptr, long long a4)
{
    long long v2;  // rbp
    unsigned long iter;  // r12
    unsigned int v11;  // ecx
    unsigned int j;  // edi
    unsigned int v12;  // r15d
    unsigned long long v13;  // r15
    unsigned int v14;  // eax
    char *v4;  // rax
    unsigned long long v5;  // rcx
    char *i;  // rsi
    char *cur;  // rdi
    unsigned long long v8;  // r14
    unsigned int v9;  // eax
    unsigned int v10;  // eax
    unsigned int v0;  // [bp+0x8]
    unsigned int v1;  // [bp+0x10]

    v2 = ptr->field_0;
    iter = a1;
    v4 = a0;
    if (a0 != a2)
    {
        v5 = v2 * 4;
        i = v4;
        for (cur = a2; v5; i += 1)
        {
            v5 -= 1;
            *(cur) = *(i);
            cur += 1;
        }
    }
    if (!(int)sub_7ff3b169070(v4, ptr->field_38, v2, 0, a4))
        return 0;
    j = 1;
    if ((unsigned int)iter < 0 && ((char)~(ptr->field_38->field_0) & 1))
    {
        sub_7ff3b16d738(5, &g_7ff3b131a90, a4);
        return 0;
    }
    do
    {
        if ((unsigned int)iter <= 0)
            break;
        v1 = 0;
        v8 = (32 < (unsigned int)iter ? 32 : iter & 4294967295);
        if (j && sub_7ff3b168be8(a2, v8 & 4294967295, a2, v2, &v1, a4))
        {
            j = 1;
            v9 = sub_7ff3b16e314(v1, *((int *)&a2[4 + 4 * v2]));
            v10 = sub_7ff3b168ba4(ptr->field_38, v9, a2, v2, a4);
            v1 -= v10;
            if (v1 == v10 && (int)sub_7ff3b168fe0(a2, ptr->field_38, v2) < 0)
            {
                v11 = v1;
            }
            else
            {
                v11 = v1 - sub_7ff3b169020(a2, ptr->field_38, a2, v2);
                v1 = v11;
            }
            if (v11)
            {
                j = 0;
                sub_7ff3b16d738(4, &g_7ff3b131a90, a4);
            }
        }
        else
        {
            j = 0;
        }
        iter -= v8;
    } while (j);
    for (; j; iter += v13)
    {
        if ((unsigned int)iter >= 0)
            return j;
        v12 = -((unsigned int)iter);
        v1 = 0;
        v13 = (32 < v12 ? 32 : v12);
        v0 = 32 - v13;
        v14 = sub_7ff3b168b64();
        if (j && sub_7ff3b168be8(a2, -((unsigned int)v13), a2, v2, &v1, a4))
            j = 1;
        else
            j = 0;
        *((unsigned int *)&a2[4 + 4 * v2]) = *((int *)&a2[4 + 4 * v2]) | v14 << ((char)v0 & 31);
        if (j && v1)
        {
            j = 0;
            sub_7ff3b16d738(4, &g_7ff3b131a90, a4);
        }
    }
    return j;
}
