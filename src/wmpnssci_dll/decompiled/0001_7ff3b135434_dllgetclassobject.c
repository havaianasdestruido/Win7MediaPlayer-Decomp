/* DllGetClassObject @ 0x7ff3b135434
 *
 * MODULE   : wmpnssci_dll  (bin/wmpnssci.dll)
 * ADDRESS  : 0x7ff3b135434  (381 bytes, 31 basic blocks)
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
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_2 {
    unsigned long long field_0;
    char padding_8[8];
    unsigned long long field_10;
    char padding_18[8];
    struct struct_3 *field_20;
} struct_2;

typedef struct struct_3 {
    struct struct_4 *field_0;
} struct_3;

typedef struct struct_4 {
    struct struct_1 *field_0;
} struct_4;

typedef struct struct_1 {
    unsigned long long field_0;
} struct_1;

typedef struct struct_5 {
    struct struct_2 *field_0;
} struct_5;

extern long long g_7ff3b132070;
extern struct_0 *g_7ff3b17be78;
extern unsigned int g_7ff3b17c9f0;
extern struct_5 *g_7ff3b17ca00;
extern char g_7ff3b17ca08;

int DllGetClassObject(void)
{
    unsigned int v3[4];  // rcx
    unsigned int v4[4];  // rdi
    unsigned long long v13;  // rcx
    unsigned long long *v14;  // r8
    unsigned long long v15;  // rdx
    struct_0 *v5;  // rax
    unsigned long long *p;  // r8
    unsigned int v7[4];  // r9
    unsigned long long v8;  // rdx
    int v9;  // ebx
    struct_2 **cur;  // rcx
    struct_2 *ptr;  // rsi
    unsigned long v12;  // rdx
    unsigned long long v0;  // [bp-0x28]
    unsigned long long *v1;  // [bp-0x20]

    v4 = v3;
    v5 = g_7ff3b17be78;
    if (g_7ff3b17be78 != &g_7ff3b17be78 && (g_7ff3b17be78->field_1c & 1) && g_7ff3b17be78->field_19 >= 5)
    {
        v1 = p;
        v7 = v3;
        v0 = v8;
        sub_7ff3b134fac(g_7ff3b17be78->field_10, 15, &g_7ff3b132070, v7);
        v5 = g_7ff3b17be78;
    }
    if (!g_7ff3b17c9f0)
    {
        v9 = -2147418113;
    }
    else if (!p)
    {
        v9 = -2147467261;
    }
    else
    {
        *(p) = 0;
        cur = g_7ff3b17ca00;
        for (v9 = 0; cur < *((long long *)&g_7ff3b17ca08); cur += 1)
        {
            ptr = *(cur);
            if (ptr && ptr->field_10 && !((v12 = (unsigned long)ptr->field_0, v3[0] != *((int *)v12) || v3[1] != *((int *)(v12 + 4)) || v3[2] != *((int *)(v12 + 8)) || v3[3] != *((int *)(v12 + 12)))))
            {
                if (!ptr->field_20)
                    8792790009296();
                if (ptr->field_20)
                {
                    v13 = ptr->field_20;
                    v14 = p;
                    v15 = v8;
                    ptr->field_20->field_0->field_0();
                }
                if (*(p) || false)
                    goto LABEL_7ff3b13557c;
                break;
            }
        }
        v9 = -2147221231;
LABEL_7ff3b13557c:
        v5 = g_7ff3b17be78;
    }
    if (v5 == &g_7ff3b17be78)
    {
        return;
    }
    else if (!(v5->field_1c & 1))
    {
        return;
    }
    else if (v5->field_19 >= (v9 >= 0 ? 5 : 2))
    {
        sub_7ff3b1388d4(v5->field_10, 16, &g_7ff3b132070, v9); /* do not return */
    }
    else
    {
        return;
    }
}
