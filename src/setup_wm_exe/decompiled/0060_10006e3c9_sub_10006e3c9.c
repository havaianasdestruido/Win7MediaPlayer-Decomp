/* sub_10006e3c9 @ 0x10006e3c9
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10006e3c9  (348 bytes, 29 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): f069226052de289452ef5ff9dd67557193c15308c5351bc7b70b6692b350951b
 *   Evidence: analysis/report/rea-evidence/setup_wm_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

void sub_10006e3c9(void)
{
    unsigned int choice;  // r12d
    char *v4;  // r14
    char *v13;  // rdx
    char *v14;  // rdx
    char *v15;  // rdx
    unsigned int flag;  // ecx
    char *v7;  // rdx
    void* cur;  // rcx
    char *v9;  // rdx
    char *v10;  // rdx
    char *v11;  // rdx
    char v2;  // [bp+0x13e]

    if (choice != (unsigned int)v4)
    {
        flag = choice - 1;
        if (choice != 1)
        {
            if (flag == 1)
                goto LABEL_10006e48d;
            if (flag - 1 != 1)
                goto LABEL_10006e528;
        }
        if ((&v2 + 530 == v4 ? (unsigned int)v4 : (int)sub_100053354(&v2 + 530)) != (unsigned int)v4)
            4298113520();
        v7 = 0x103;
        cur = &v2 + 2;
        do
        {
            v9 = v7;
            v10 = v9;
            if (v10 + 2147483387 == v4 || !((v10 = v9, (short)cur[528] != *((unsigned short *)(void*)&v4))))
                break;
        } while ((*((short *)cur) = (short)cur[528], cur += 2, v11 = v9 - 1, v10 = v11, v7 = v11, v9 != 0x1));
    }
    else
    {
LABEL_10006e48d:
        if ((&v2 + 530 == v4 ? (unsigned int)v4 : (int)sub_100053354(&v2 + 530)) != (unsigned int)v4)
            4298113632();
        v13 = 0x103;
        cur = &v2 + 2;
        do
        {
            v14 = v13;
            v10 = v14;
            if (v10 + 2147483387 == v4 || !((v10 = v14, (short)cur[528] != *((unsigned short *)(void*)&v4))))
                break;
        } while ((*((short *)cur) = (short)cur[528], cur += 2, v15 = v14 - 1, v10 = v15, v13 = v15, v14 != 0x1));
    }
    if (v10 == v4)
        cur -= 2;
    *((unsigned short *)cur) = *((unsigned short *)&v4);
LABEL_10006e528:
    4298114152();
}
