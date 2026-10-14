/* sub_1000028fc @ 0x1000028fc
 *
 * MODULE   : wmpenc_exe  (bin/wmpenc.exe)
 * ADDRESS  : 0x1000028fc  (234 bytes, 23 basic blocks)
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

typedef struct struct_0 {
    char padding_0[8];
    unsigned long long field_8;
} struct_0;

void sub_1000028fc(void)
{
    unsigned short *v3;  // rax
    unsigned short *v4;  // r14
    struct_0 *v5;  // r13
    unsigned short *v6;  // rdi
    unsigned short *v7;  // rsi
    unsigned short *ptr;  // r15
    unsigned short *v1;  // [bp+0x100008]
    unsigned short *v2;  // [bp+0x100030]

    v2 = v3;
    if (v3 == v4)
    {
        4296016408();
    }
    else if (*((int *)(v5->field_8 + 8)) > (unsigned int)v4)
    {
        4296016152();
    }
    else
    {
        v7 = v6;
        if (v4)
        {
            if (*(v4))
            {
                if (*(v6))
                {
                    if (*(v7))
                    {
                        if (!*(v4))
                            goto LABEL_100002ac1;
                        if (*(v7) == *(v4))
                            4296016320();
                    }
                    if (*(v4))
                        4296016320();
LABEL_100002ac1:
                    ptr = v2;
                }
                else
                {
                    v7 = NULL;
                }
            }
            if (v7)
            {
                if (v7 != v1)
                    4296016328();
                *(ptr) = 0;
                4296016088();
            }
        }
    }
}
