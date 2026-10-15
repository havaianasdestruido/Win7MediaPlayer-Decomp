/* sub_100006ee7 @ 0x100006ee7
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100006ee7  (135 bytes, 12 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 10888bb9c3799e1e8b010c0f9088ced376aad63a509fce1727c457b022cdc717
 *   Evidence: analysis/report/rea-evidence/wmpnscfg_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

typedef struct struct_0 {
    char padding_0[16];
    long long field_10;
    char padding_18[1];
    char field_19;
    char padding_1a[2];
    char field_1c;
} struct_0;

extern long long g_1000018c0;
extern struct_0 *g_10000b160;

long long sub_100006ee7(void)
{
    struct_0 *v3;  // r15
    char v4;  // al
    void* ptr;  // rdx
    unsigned int v6;  // ecx
    void* v7;  // rdi
    char v1;  // [bp+0x30]
    void* p;  // [bp+0x100008]

    if (g_10000b160 != v3 && (g_10000b160->field_1c & 2) && g_10000b160->field_19 >= 4)
        sub_10000205c(g_10000b160->field_10, 19, &g_1000018c0, v4); /* do not return */
    ptr = p;
    if (!ptr)
    {
        v6 = 0;
    }
    else
    {
        v7 = ptr;
        do
        {
            if (false)
                break;
        } while (*((short *)v7));
        v6 = ~(18446744073709551615) - 1;
        if (v6 < 0)
            4294991632();
    }
    if (v6 <= (int)ptr[12])
    {
        *((unsigned int *)&ptr[16]) = v6;
        *((unsigned short *)((char *)p + 2 * v6)) = 0;
        sub_100006974(&v1); /* do not return */
    }
    4294991632();
}
