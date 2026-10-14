/* DllGetClassObject @ 0x7ff371175ac
 *
 * MODULE   : wmpdmccore_dll  (bin/WMPDMCCore.dll)
 * ADDRESS  : 0x7ff371175ac  (289 bytes, 25 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 9334fde75c4e6d018f3c698b0a6b5d415f65d71716906af037147b61b3911242
 *   Evidence: analysis/report/rea-evidence/wmpdmccore_dll/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

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

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

typedef struct struct_5 {
    struct struct_2 *field_0;
} struct_5;

extern long long g_7ff3710c9e0;
extern struct_0 *g_7ff37153600;
extern unsigned int g_7ff371538b0;
extern struct_5 *g_7ff371538c0;
extern char g_7ff371538c8;

int DllGetClassObject(void)
{
    unsigned int v1[4];  // rcx
    unsigned int v2[4];  // rdi
    unsigned long long *p;  // r8
    struct_2 **cur;  // rcx
    struct_2 *ptr;  // rsi
    unsigned long v6;  // rdx
    unsigned long long v7;  // rcx
    unsigned long long *v8;  // r8
    unsigned long long v9;  // rdx
    unsigned long long v10;  // rdx

    v2 = v1;
    if (g_7ff37153600 != &g_7ff37153600 && (g_7ff37153600->field_1c & 1) && g_7ff37153600->field_19 >= 7)
        sub_7ff37117208(g_7ff37153600->field_10, 14, &g_7ff3710c9e0); /* do not return */
    if (!g_7ff371538b0)
    {
        return;
    }
    else if (!p)
    {
        return;
    }
    else
    {
        *(p) = 0;
        cur = g_7ff371538c0;
        while (cur < *((long long *)&g_7ff371538c8))
        {
            ptr = *(cur);
            if (!ptr || !ptr->field_10 || (v6 = (unsigned long)ptr->field_0, v1[0] != *((int *)v6) || v1[1] != *((int *)(v6 + 4)) || v1[2] != *((int *)(v6 + 8)) || v1[3] != *((int *)(v6 + 12))))
            {
                cur += 1;
            }
            else if (!ptr->field_20)
            {
                8792722899728();
            }
            else if (ptr->field_20)
            {
                v7 = ptr->field_20;
                v8 = p;
                v10 = v9;
                ptr->field_20->field_0->field_0();
            }
            else if (!*(p))
            {
                break;
            }
            else
            {
                return;
            }
        }
        return;
    }
}
