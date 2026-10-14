/* sub_100001924 @ 0x100001924
 *
 * MODULE   : wmplayer_exe  (bin/wmplayer.exe)
 * ADDRESS  : 0x100001924  (103 bytes, 12 basic blocks)
 * ORIGIN   : angr CFGFast function recovery + angr Decompiler pseudo-C
 *
 * PROVENANCE / CONFIDENCE
 *   This file is DECOMPILER OUTPUT (angr 9.2.213 decompiler), normalized for
 *   readability only.  It is NOT original source code and must not be treated
 *   as such.  Recovered type names, struct layouts and local names are the
 *   decompiler's reconstruction; fields it could not type are shown as
 *   ``field_<offset>``/``struct_<n>`` and are explicitly unverified.
 *   Artifact digest (SHA-256): 883d9616dfc7586fa88c58013f70e055df9328f3cfc3ef39898c15c6970fb0db
 *   Evidence: analysis/report/rea-evidence/wmplayer_exe/ (objdump symbols/relocations; raw disassembly) + analysis/tools/decompile.py
 */

unsigned short * sub_100001924(unsigned short *cur, unsigned short *a1)
{
    unsigned long v1;  // rax
    unsigned short *v2;  // r9
    unsigned short *iter;  // rdx

    if (!*(a1))
        return cur;
    v1 = *(cur);
    if (!(unsigned short)v1)
        return NULL;
    v2 = cur - a1;
    while (true)
    {
        iter = a1;
        if ((unsigned short)v1)
        {
            do
            {
                if (!*(iter))
                    return cur;
            } while ((v1 = (unsigned long)(unsigned long long)*(iter), (unsigned int)(unsigned short)*((short *)(v2 + iter)) == (unsigned int)v1 && (iter += 2, *((short *)(v2 + iter)))));
        }
        if (!*(iter))
            return cur;
        cur += 1;
        v2 += 1;
        v1 = _INSERT(v1, 0, *(cur));
        if (!(unsigned short)v1)
            return NULL;
    }
}
