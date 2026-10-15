/* sub_1000034bc @ 0x1000034bc
 *
 * MODULE   : wmpnscfg_exe  (bin/wmpnscfg.exe)
 * ADDRESS  : 0x1000034bc  (151 bytes, 13 basic blocks)
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

void sub_1000034bc(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned int a15)
{
    unsigned int v3;  // eax
    unsigned long v4;  // r12
    unsigned short *v12;  // cc_dep1
    unsigned long long v13;  // cc_dep2
    unsigned long v14;  // rbx
    unsigned int v5;  // edi
    unsigned short *iter;  // r8
    unsigned long long idx;  // rax
    unsigned short *cur;  // rcx
    unsigned long long v9;  // cc_ndep
    unsigned short v10;  // dx
    unsigned long long v11;  // cc_op
    unsigned short v1;  // [bp+0x290]
    unsigned short v2;  // [bp+0x6a0]

    if (v3 == (unsigned int)v4)
    {
        sub_100005ea0(); /* do not return */
    }
    else if (v3 != v5)
    {
        iter = &vvar_15;
        idx = v4 & 4294967295;
        cur = &v1;
        do
        {
            v10 = *(iter);
            if (v10 == (unsigned short)v4)
                break;
            *(cur) = v10;
            v11 = 6;
            v12 = v10;
            v13 = 39;
            if (v10 == 39)
            {
                v11 = 7;
                v12 = idx & 4294967295;
                v13 = 518;
                if ((unsigned int)idx < 518)
                {
                    v9 = (unsigned int)v12 < 518;
                    idx = (unsigned int)idx + 1;
                    v11 = 4;
                    v12 = cur;
                    v13 = 2;
                    cur += 1;
                    *(cur) = 39;
                }
            }
            v9 = _ccall(v11, v12, v13, v9);
            idx = (unsigned int)idx + 1;
            iter += 1;
            cur += 1;
        } while ((unsigned int)idx < 519);
        (&v1)[idx] = v4;
        if (v14 == v4)
        {
            v2 = 34;
            4296016672();
        }
        4296016696();
    }
}
