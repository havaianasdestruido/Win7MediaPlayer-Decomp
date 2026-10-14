/* sub_1000045a7 @ 0x1000045a7
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000045a7  (161 bytes, 13 basic blocks)
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

void sub_1000045a7(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long long a13)
{
    long long v3;  // rbx
    unsigned int v4;  // r11d
    long long v5;  // r8
    unsigned int v6;  // edi
    long long v7;  // r9
    unsigned int v8;  // edx
    unsigned int v9;  // eax
    char v10;  // dl
    unsigned int v11;  // esi
    unsigned long long v1;  // [bp+0x20]
    char v2;  // [bp+0x180]

    v4 = v3;
    v5 = v3;
    v7 = v6;
    if (v7 > v3)
    {
        do
        {
            v8 = *((short *)&(&v2)[2 * v5]);
            v9 = v8 & 65535;
            if (v8 >= 48)
            {
                if (v9 <= 57)
                {
                    v10 = (char)v8 - 48;
                    continue;
                }
                else if (v9 > 64)
                {
                    if (v9 <= 70)
                    {
                        v10 = (char)v8 - 55;
                        continue;
                    }
                    else if (v9 - 97 <= 5)
                    {
                        v10 = (char)v8 - 87;
                        continue;
                    }
                }
            }
            v10 = v3;
        } while ((*((char *)((long long)(int)(v4 / 2) + a13)) = *((char *)((long long)(int)(v4 / 2) + a13)) | (char)((unsigned long long)v10 << ((char)(4 - (v4 & 1) * 4) & 31)), v4 += 1, v5 = (long long)(v5 + 1), v5 < v7));
    }
    a4 = v11;
    v1 = a13;
    4296016240();
}
