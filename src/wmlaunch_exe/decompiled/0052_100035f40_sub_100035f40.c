/* sub_100035f40 @ 0x100035f40
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x100035f40  (220 bytes, 19 basic blocks)
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

extern long long g_10003d198;

unsigned int sub_100035f40(unsigned long a0, unsigned short *a1)
{
    unsigned short *v1;  // rdi
    long long *v2;  // rbp
    unsigned int v3;  // edi

    v1 = a1;
    do
    {
        if (false)
            break;
    } while (*(v1));
    v2 = &g_10003d198;
    v3 = 0;
    do
    {
        if ((char)sub_10002fb24(*(v2), a1))
            return 0;
    } while ((v3 += 1, v2 += 8, v3 < 7));
    if ((char)sub_10002fb24(a1, L"http"))
    {
        return 0;
    }
    else if ((char)sub_10002fb24(a1, L"https"))
    {
        return 0;
    }
    else if ((char)sub_10002fb24(a1, L"rtsp"))
    {
        return 0;
    }
    else if ((char)sub_10002fb24(a1, L"dlna-playsingle"))
    {
        return 0;
    }
    else if (!(char)sub_10002fb24(a1, L"dlna-playcontainer"))
    {
        sub_100032fd0(a1); /* do not return */
    }
    else
    {
        return 0;
    }
}
