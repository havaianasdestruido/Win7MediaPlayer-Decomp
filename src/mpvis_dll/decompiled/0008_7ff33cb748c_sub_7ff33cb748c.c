/* sub_7ff33cb748c @ 0x7ff33cb748c
 *
 * MODULE   : mpvis_dll  (bin/mpvis.DLL)
 * ADDRESS  : 0x7ff33cb748c  (561 bytes, 68 basic blocks)
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
    char padding_0[56];
    struct struct_1 *field_38;
} struct_0;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

extern unsigned long long g_7ff33ca29c0;
extern unsigned long long g_7ff33ca31c4;

int sub_7ff33cb748c(void)
{
    unsigned int *v8;  // r8
    unsigned int *v9;  // rdx
    unsigned int v18;  // edi
    unsigned int v19;  // ebx
    unsigned int *ptr;  // r8
    unsigned int v21;  // r13d
    unsigned int v22;  // ebx
    unsigned long long v23;  // rdi
    unsigned int v24;  // ebx
    unsigned int v25;  // edi
    char *v26;  // rdx
    struct_0 **v27;  // rcx
    struct_0 **v10;  // rcx
    unsigned int v28;  // r13d
    unsigned int j;  // eax
    unsigned long long v30;  // rcx
    unsigned long long v31;  // rax
    unsigned int k;  // edx
    unsigned int v35;  // eax
    unsigned int v11;  // ebp
    unsigned int i;  // esi
    unsigned long long v13;  // r9
    unsigned int v14;  // eax
    unsigned long long v15;  // rsi
    unsigned int *p;  // r9
    unsigned int *addr;  // r10
    char v0;  // [bp-0x168]
    unsigned int v1;  // [bp-0x12c]
    unsigned int *v3;  // [bp+0x10]
    unsigned int *v4;  // [bp+0x18]
    unsigned int *v5;  // [bp+0x28]
    unsigned int *ptr3;  // [bp+0x38]
    unsigned int flag;  // [bp+0x40]

    v4 = v8;
    v3 = v9;
    if (!v10)
        return;
    v11 = 1;
    if (!flag || flag == 1 || flag == 2 || flag == 3 || flag == 6)
    {
        i = (!ptr3 ? 0 : *(ptr3));
        if (flag != 3)
        {
            v13 = &g_7ff33ca29c0;
            while (i != *((int *)v13))
            {
                if (v13 + 36 >= &g_7ff33ca31c4)
                    break;
            }
            v14 = sub_7ff33cb734c();
            v15 = v14;
            if (!v14)
                return;
            p = v4;
            addr = v3;
        }
        else
        {
            v15 = (!i ? 21 : i);
            p = v8;
            addr = v9;
        }
        v18 = (!addr ? 4294967295 : *(addr));
        v19 = (!p ? 4294967295 : *(p));
        ptr = v5;
        v21 = (!ptr ? 4294967295 : *(ptr));
        if (v18 == 4294967295)
        {
            if (v19 == 4294967295)
            {
                v22 = 0x100;
                v23 = 0x100;
            }
            else
            {
                v24 = v19;
                v25 = v19;
LABEL_7ff33cb75b7:
                v22 = v24;
                v23 = (!v25 ? 1 : v25);
                if (!v22)
                    v22 = 1;
            }
        }
        else
        {
            if (v19 == 4294967295)
            {
                v24 = v18;
                v25 = v18;
                goto LABEL_7ff33cb75b7;
            }
            else
            {
                v24 = v19;
                v25 = v18;
                goto LABEL_7ff33cb75b7;
            }
        }
        if (flag != 3)
        {
            v26 = &v0;
            v27 = v10;
            *(v10)->field_38();
        }
        if ((unsigned int)v15 == 827611204 || (unsigned int)v15 == 844388420 || (unsigned int)v15 == 861165636 || (unsigned int)v15 == 877942852 || (unsigned int)v15 == 894720068)
        {
            v23 = (unsigned int)v23 + 3 & 0xfffffffc;
            v22 = v22 + 3 & 0xfffffffc;
        }
        if (flag != 3 && (!((char)(v1 >> 14) & 1) || ((char)(v1 >> 8) & 1) && (((unsigned int)(v23 - 1) & (unsigned int)v23) || (v22 - 1 & v22))))
        {
            v28 = 1;
        }
        else
        {
            j = v23;
            v30 = 0;
            if ((unsigned int)v23)
            {
                do
                {
                    j >>= 1;
                    v30 += 1;
                } while (j);
            }
            v31 = 0;
            k = v22;
            if (k)
            {
                do
                {
                    v31 += 1;
                    k >>= 1;
                } while (k);
            }
            do
            {
                v11 >>= 1;
            } while (v11 >> 1);
            v35 = ((unsigned int)v31 < (unsigned int)v30 ? (unsigned int)v30 : (unsigned int)v31);
            if (v21 > v35 || (v28 = v21, !v28))
                v28 = v35;
        }
        if (addr)
            *(addr) = v23;
        if (p)
            *(p) = v22;
        if (ptr)
            *(ptr) = v28;
        if (!ptr3)
            return;
        *(ptr3) = v15;
        return;
    }
    return;
}
