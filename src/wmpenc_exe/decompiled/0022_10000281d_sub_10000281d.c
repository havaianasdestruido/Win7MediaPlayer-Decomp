/* sub_10000281d @ 0x10000281d
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x10000281d  (152 bytes, 12 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): b8b174ae012a8a25a9d706f7f169e7a2553ab8ffe0ccef2beb34fe803ec0634a
 *   Evidence: analysis/report/rea-evidence/wmpenc_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

void sub_10000281d(void)
{
    int v3;  // r11d
    long long v4;  // r9
    unsigned int v13;  // r14d
    long long v5;  // r13
    int v6;  // r11d
    unsigned long ptr;  // rdi
    unsigned int v8;  // r8d
    unsigned int v9;  // eax
    char v10;  // r8b
    int v11;  // r11d
    unsigned long long v12;  // r12
    unsigned long long v1;  // [bp+0x20]
    unsigned int v2;  // [bp+0x28]

    v3 = 0;
    v4 = 0;
    if ((int)v5 > 0)
    {
        do
        {
            v6 = v3;
            v8 = *((short *)(ptr + v4 * 2));
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
            v10 = 0;
        } while ((v4 = (long long)(v4 + 1), v11 = (int)(v6 + 1), *((char *)((long long)(v6 / 2) + v12)) = *((char *)((long long)(v6 / 2) + v12)) | (char)((unsigned long long)v10 << ((char)(4 - (v6 & 1) * 4) & 31)), v3 = (int)(v6 + 1), v4 < v5));
    }
    v2 = v13;
    v1 = v12;
    4296015928();
}
