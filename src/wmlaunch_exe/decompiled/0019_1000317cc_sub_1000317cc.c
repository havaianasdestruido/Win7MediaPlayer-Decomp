/* sub_1000317cc @ 0x1000317cc
 *
 * MODULE   : wmlaunch_exe  (bin/wmlaunch.exe)
 * ADDRESS  : 0x1000317cc  (349 bytes, 31 basic blocks)
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

int sub_1000317cc(void)
{
    long long v11;  // r8
    unsigned int v12;  // eax
    char v0;  // [bp-0xc8]
    unsigned long v1;  // [bp-0xb8]
    char v2;  // [bp-0xa8]
    char v3;  // [bp-0x98]
    char v4;  // [bp-0x88]
    char v5;  // [bp-0x70]
    char v6;  // [bp-0x60]
    char v7;  // [bp-0x50]
    char v8;  // [bp-0x40]
    char v9;  // [bp-0x30]

    sub_100033184(&v3);
    sub_10002fbf0(&v2);
    sub_1000332c8(v11);
    sub_10002fbf0(&v1);
    v12 = sub_10003022c(&v1, L"SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\App Paths\\%s", L"wmplayer.exe");
    if (v12 >= 0)
    {
        sub_10002fbf0(&v0);
        sub_100030020(&v0);
        v12 = (!v1 ? 2147942487 : (int)sub_100030254(&v0, -2147483646));
        if (v12 >= 0)
            v12 = sub_10003343c(v11, 0, v0);
        sub_100030020(&v0);
    }
    sub_100030020(&v1);
    if (v12 >= 0)
        sub_1000340b0(v11, L"wmplayer.exe", 4294967295);
    sub_100030020(&v2);
    sub_10002f874(&v9);
    sub_100030020(&v8);
    sub_100030020(&v7);
    sub_100030020(&v6);
    sub_100030020(&v5);
    sub_100030020(&v4);
    sub_100030020(&v3);
    return;
}
