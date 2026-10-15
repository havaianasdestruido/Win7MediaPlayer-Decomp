/* sub_100006f65 @ 0x100006f65
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x100006f65  (402 bytes, 36 basic blocks)
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

int sub_100006f65(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, char a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, char a16, char a17, char a18, char a19, unsigned long a20, unsigned long long a21, unsigned long a22, unsigned long a23, unsigned long a24, unsigned long a25, unsigned long a26, unsigned long a27, unsigned long a28, unsigned long a29, unsigned long a30, unsigned long a31)
{
    unsigned int flag;  // esi
    struct_0 *v4;  // r15
    unsigned short *v5;  // rbx
    unsigned int choice;  // esi
    struct_0 *v7;  // rcx
    unsigned short *v8;  // rax
    long long *v9;  // r12
    unsigned short *v0;  // [bp+0x0]
    char v2;  // [bp+0x7c]

    if (flag == 1)
    {
        if (g_10000b160 != v4 && (g_10000b160->field_1c & 2) && g_10000b160->field_19 >= 4)
            sub_1000067a0(g_10000b160->field_10, flag + 19, &g_1000018c0, v0); /* do not return */
        a15 = 7;
        sub_100005b14(&vvar_16);
        sub_100005b14(&vvar_17);
        sub_100005b14(&vvar_18);
        sub_100005b14(&vvar_19);
        v2 = *((char *)&v5);
        if (v0 != v5)
            sub_100006ae4(&vvar_5, v0); /* do not return */
        choice = *((char *)&v5);
        v7 = g_10000b160;
        if (g_10000b160 != v4 && (g_10000b160->field_1c & 2) && g_10000b160->field_19 >= 4)
            sub_10000205c(g_10000b160->field_10, 21, &g_1000018c0, choice & 255); /* do not return */
        if (flag == 1)
        {
            v8 = sub_100006dc4(&vvar_5);
            if (v8 != v5)
            {
                do
                {
                    if (false)
                        break;
                } while (*(v8));
            }
            sub_100005ce4(v9);
            v7 = g_10000b160;
            if (g_10000b160 == v4)
            {
                sub_100006a40(&vvar_5);
                return sub_100007a20(a21 ^ &v0);
            }
            else if ((g_10000b160->field_1c & 2) && g_10000b160->field_19 >= 4)
            {
                sub_1000067a0(g_10000b160->field_10, 22, &g_1000018c0, *(v9)); /* do not return */
            }
        }
    }
    else
    {
        v7 = g_10000b160;
    }
    if (v7 != v4 && (v7->field_1c & 1) && v7->field_19 >= 5)
        sub_10000205c(v7->field_10, 23, &g_1000018c0, choice); /* do not return */
    sub_100006a40(&vvar_5);
    return sub_100007a20(a21 ^ &v0);
}
