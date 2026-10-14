/* sub_100039e78 @ 0x100039e78
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100039e78  (311 bytes, 27 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 8ea713b95f32c31a11bb1dded4cc8b9620014600f122fff3852c082d9af67b1b
 *   Evidence: analysis/report/rea-evidence/wmlaunch_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

extern unsigned long long g_10003d110;

int sub_100039e78(unsigned short *a0, unsigned short *ptr, unsigned int *p)
{
    unsigned short *v7;  // r9
    int v8;  // edx
    unsigned int iter;  // esi
    unsigned short *v10;  // rdi
    unsigned short *v11;  // r12
    unsigned short *v12;  // r9
    unsigned int v13;  // edi
    unsigned short *cur;  // rcx
    char v15[2];  // r8
    char v0;  // [bp-0x78]
    long long v1;  // [bp-0x50]
    char v2;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned short *v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x30]

    v5 = g_10003d110 ^ &v0;
    v7 = a0;
    v3 = a0;
    v8 = 0;
    iter = 0;
    if (!p)
        return sub_10003a9b0(v5 ^ &v0);
    v10 = v7;
    do
    {
        if (false)
            break;
    } while (*(v10));
    v11 = &v7[~(18446744073709551615) - 1 & 4294967295];
    v12 = v7;
    while (true)
    {
        if (v12 < v11)
        {
            *((char *)&v1) = 1;
            v8 = sub_10003a334(&v3, v11, &v4, 4, &v2, v1);
            if (v8 < 0)
                goto LABEL_100039f78;
            if (ptr)
            {
                v13 = 0;
                if (iter < *(p) - 1)
                {
                    cur = &ptr[iter];
                    v15 = &v4;
                    do
                    {
                        if (v13 >= v2)
                            break;
                    } while ((iter += 1, v13 += 1, *((char [2])cur) = *(v15), cur += 2, v15 += 2, iter < *(p) - 1));
                }
            }
            else
            {
                iter += v2;
            }
            v12 = v3;
        }
        else
        {
            if (v8 >= 0)
            {
                if (ptr)
                {
                    if (iter < *(p))
                        ptr[iter] = 0;
                    else
                        *(ptr) = 0;
                }
                *(p) = iter + 1;
                break;
            }
LABEL_100039f78:
            if (ptr)
                *(ptr) = 0;
            *(p) = 0;
            break;
        }
    }
    return sub_10003a9b0(v5 ^ &v0);
}
