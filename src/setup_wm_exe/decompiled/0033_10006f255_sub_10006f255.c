/* sub_10006f255 @ 0x10006f255
 *
 * MODULE   : setup_wm_exe  (bin/setup_wm.exe)
 * ADDRESS  : 0x10006f255  (423 bytes, 39 basic blocks)
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

int sub_10006f255(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, unsigned long a4, unsigned long a5, unsigned long a6, unsigned long a7, unsigned long a8, unsigned long long a9, unsigned long a10, unsigned long a11, unsigned long a12, unsigned long a13, unsigned long a14, unsigned long a15, unsigned long a16, unsigned long a17, unsigned long a18, long long *a19, unsigned long a20, unsigned long a21, unsigned long a22, unsigned short i)
{
    unsigned short *ptr;  // rax
    unsigned short *iter;  // rbx
    unsigned long long v4;  // rdx
    unsigned short *cur;  // rcx
    unsigned long long v6;  // rdx
    unsigned int v8;  // eax
    long long v10;  // r12
    char v1;  // [bp+0x4e0]

    iter = ptr;
    if (ptr)
    {
        iter += 1;
        *(ptr) = 0;
        v4 = 260;
        cur = &v1;
        do
        {
        } while (v4 + 2147483386 && *((short *)(iter - &v1 + (char *)cur)) && (*(cur) = (unsigned short)*((short *)((char *)iter - (char *)&v1 + (char *)cur)), cur += 2, v6 = v4 - 1, v4 -= 1, v4 != 1));
        if (!v4)
            cur += 1;
        *(cur) = 0;
    }
    if (a19)
    {
        v8 = sub_100053148(&i);
        if (!v8)
            4298113688();
        if (!(int)sub_10006b620(v8, &i, *(a19)))
            goto LABEL_10006f33d;
    }
    if (!(int)sub_10006b6dc(&i, 520))
    {
LABEL_10006f33d:
        if (iter)
        {
            if (&i)
                4298115984();
            do
            {
                if (false)
                    break;
            } while (i);
            sub_100039ee4(&i, 260 - (~(18446744073709551615) - 1), &v1);
        }
        if (a9 && !&i)
            sub_100053480(&i); /* do not return */
        if (&i)
            4298115984();
        sub_1000527f4(4, " Assigned destination: '%S' to '%S'.\r\n", &i, v10);
    }
    4295490210();
}
