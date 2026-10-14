# Decompiled function index — `bin/mpvis.DLL`

* Decompiler: angr 9.2.213 (CFGFast + Decompiler), run 2026-10-14 21:57:39Z.
* Module digest: `5b1cf8de17dc039349e1af0bc0d728e3de3c0a96d9c50e81fc909b8ceb4927e0`
* CFG: 3695 functions, 0 call edges, built in 13.92s.
* Selection: forced (entry+exports), then size desc, min_blocks=2, cap=60 — 60 of 3695 CFG functions emitted.
* All emitted `.c` files are decompiler output; see each file header for provenance.

| # | Address | Name | Blocks | Size | Decompiled | File |
|---|---------|------|--------|------|-----------|------|
| 1 | `0x7ff33ca6f44` | `DllGetClassObject` | 23 | 273 | yes | [`0001_7ff33ca6f44_dllgetclassobject.c`](0001_7ff33ca6f44_dllgetclassobject.c) |
| 2 | `0x7ff33ca7014` | `DllUnregisterServer` | 13 | 137 | yes | [`0002_7ff33ca7014_dllunregisterserver.c`](0002_7ff33ca7014_dllunregisterserver.c) |
| 3 | `0x7ff33cc0b00` | `_start` | 10 | 170 | yes | [`0003_7ff33cc0b00_start.c`](0003_7ff33cc0b00_start.c) |
| 4 | `0x7ff33ca6f60` | `DllRegisterServer` | 7 | 87 | yes | [`0004_7ff33ca6f60_dllregisterserver.c`](0004_7ff33ca6f60_dllregisterserver.c) |
| 5 | `0x7ff33ca6e98` | `DllMain` | 5 | 104 | yes | [`0005_7ff33ca6e98_dllmain.c`](0005_7ff33ca6e98_dllmain.c) |
| 6 | `0x7ff33ca6f30` | `DllCanUnloadNow` | 1 | 12 | yes | [`0006_7ff33ca6f30_dllcanunloadnow.c`](0006_7ff33ca6f30_dllcanunloadnow.c) |
| 7 | `0x7ff33ca5bbf` | `sub_7ff33ca5bbf` | 114 | 536 | yes | [`0007_7ff33ca5bbf_sub_7ff33ca5bbf.c`](0007_7ff33ca5bbf_sub_7ff33ca5bbf.c) |
| 8 | `0x7ff33cb748c` | `sub_7ff33cb748c` | 68 | 561 | yes | [`0008_7ff33cb748c_sub_7ff33cb748c.c`](0008_7ff33cb748c_sub_7ff33cb748c.c) |
| 9 | `0x7ff33caf2b0` | `sub_7ff33caf2b0` | 61 | 499 | yes | [`0009_7ff33caf2b0_sub_7ff33caf2b0.c`](0009_7ff33caf2b0_sub_7ff33caf2b0.c) |
| 10 | `0x7ff33cad12d` | `sub_7ff33cad12d` | 50 | 619 | yes | [`0010_7ff33cad12d_sub_7ff33cad12d.c`](0010_7ff33cad12d_sub_7ff33cad12d.c) |
| 11 | `0x7ff33ca9ce4` | `sub_7ff33ca9ce4` | 41 | 517 | yes | [`0011_7ff33ca9ce4_sub_7ff33ca9ce4.c`](0011_7ff33ca9ce4_sub_7ff33ca9ce4.c) |
| 12 | `0x7ff33cb2d84` | `sub_7ff33cb2d84` | 35 | 524 | yes | [`0012_7ff33cb2d84_sub_7ff33cb2d84.c`](0012_7ff33cb2d84_sub_7ff33cb2d84.c) |
| 13 | `0x7ff33cac78c` | `sub_7ff33cac78c` | 34 | 376 | yes | [`0013_7ff33cac78c_sub_7ff33cac78c.c`](0013_7ff33cac78c_sub_7ff33cac78c.c) |
| 14 | `0x7ff33cc0734` | `sub_7ff33cc0734` | 34 | 373 | yes | [`0014_7ff33cc0734_sub_7ff33cc0734.c`](0014_7ff33cc0734_sub_7ff33cc0734.c) |
| 15 | `0x7ff33cb6bbc` | `sub_7ff33cb6bbc` | 34 | 323 | yes | [`0015_7ff33cb6bbc_sub_7ff33cb6bbc.c`](0015_7ff33cb6bbc_sub_7ff33cb6bbc.c) |
| 16 | `0x7ff33c92e27` | `sub_7ff33c92e27` | 33 | 3145 | yes | [`0016_7ff33c92e27_sub_7ff33c92e27.c`](0016_7ff33c92e27_sub_7ff33c92e27.c) |
| 17 | `0x7ff33c91d0e` | `sub_7ff33c91d0e` | 32 | 2131 | yes | [`0017_7ff33c91d0e_sub_7ff33c91d0e.c`](0017_7ff33c91d0e_sub_7ff33c91d0e.c) |
| 18 | `0x7ff33caf614` | `sub_7ff33caf614` | 32 | 633 | yes | [`0018_7ff33caf614_sub_7ff33caf614.c`](0018_7ff33caf614_sub_7ff33caf614.c) |
| 19 | `0x7ff33ca5d68` | `sub_7ff33ca5d68` | 32 | 118 | yes | [`0019_7ff33ca5d68_sub_7ff33ca5d68.c`](0019_7ff33ca5d68_sub_7ff33ca5d68.c) |
| 20 | `0x7ff33cb44d8` | `sub_7ff33cb44d8` | 29 | 668 | yes | [`0020_7ff33cb44d8_sub_7ff33cb44d8.c`](0020_7ff33cb44d8_sub_7ff33cb44d8.c) |
| 21 | `0x7ff33cb71db` | `sub_7ff33cb71db` | 29 | 179 | yes | [`0021_7ff33cb71db_sub_7ff33cb71db.c`](0021_7ff33cb71db_sub_7ff33cb71db.c) |
| 22 | `0x7ff33cb21c0` | `sub_7ff33cb21c0` | 27 | 595 | yes | [`0022_7ff33cb21c0_sub_7ff33cb21c0.c`](0022_7ff33cb21c0_sub_7ff33cb21c0.c) |
| 23 | `0x7ff33ca8eb5` | `sub_7ff33ca8eb5` | 25 | 210 | yes | [`0023_7ff33ca8eb5_sub_7ff33ca8eb5.c`](0023_7ff33ca8eb5_sub_7ff33ca8eb5.c) |
| 24 | `0x7ff33cb0be8` | `sub_7ff33cb0be8` | 24 | 304 | yes | [`0024_7ff33cb0be8_sub_7ff33cb0be8.c`](0024_7ff33cb0be8_sub_7ff33cb0be8.c) |
| 25 | `0x7ff33ca6c8f` | `sub_7ff33ca6c8f` | 24 | 240 | yes | [`0025_7ff33ca6c8f_sub_7ff33ca6c8f.c`](0025_7ff33ca6c8f_sub_7ff33ca6c8f.c) |
| 26 | `0x7ff33ca87c0` | `sub_7ff33ca87c0` | 23 | 264 | yes | [`0026_7ff33ca87c0_sub_7ff33ca87c0.c`](0026_7ff33ca87c0_sub_7ff33ca87c0.c) |
| 27 | `0x7ff33ca9140` | `sub_7ff33ca9140` | 23 | 234 | yes | [`0027_7ff33ca9140_sub_7ff33ca9140.c`](0027_7ff33ca9140_sub_7ff33ca9140.c) |
| 28 | `0x7ff33cc0979` | `sub_7ff33cc0979` | 23 | 227 | yes | [`0028_7ff33cc0979_sub_7ff33cc0979.c`](0028_7ff33cc0979_sub_7ff33cc0979.c) |
| 29 | `0x7ff33cbfbdc` | `sub_7ff33cbfbdc` | 22 | 518 | yes | [`0029_7ff33cbfbdc_sub_7ff33cbfbdc.c`](0029_7ff33cbfbdc_sub_7ff33cbfbdc.c) |
| 30 | `0x7ff33cb992c` | `sub_7ff33cb992c` | 22 | 478 | yes | [`0030_7ff33cb992c_sub_7ff33cb992c.c`](0030_7ff33cb992c_sub_7ff33cb992c.c) |
| 31 | `0x7ff33cb734c` | `sub_7ff33cb734c` | 22 | 261 | yes | [`0031_7ff33cb734c_sub_7ff33cb734c.c`](0031_7ff33cb734c_sub_7ff33cb734c.c) |
| 32 | `0x7ff33caa6f7` | `sub_7ff33caa6f7` | 22 | 205 | yes | [`0032_7ff33caa6f7_sub_7ff33caa6f7.c`](0032_7ff33caa6f7_sub_7ff33caa6f7.c) |
| 33 | `0x7ff33cb9bdc` | `sub_7ff33cb9bdc` | 21 | 666 | yes | [`0033_7ff33cb9bdc_sub_7ff33cb9bdc.c`](0033_7ff33cb9bdc_sub_7ff33cb9bdc.c) |
| 34 | `0x7ff33cb960c` | `sub_7ff33cb960c` | 20 | 627 | yes | [`0034_7ff33cb960c_sub_7ff33cb960c.c`](0034_7ff33cb960c_sub_7ff33cb960c.c) |
| 35 | `0x7ff33cb4890` | `sub_7ff33cb4890` | 20 | 569 | yes | [`0035_7ff33cb4890_sub_7ff33cb4890.c`](0035_7ff33cb4890_sub_7ff33cb4890.c) |
| 36 | `0x7ff33cafd7f` | `sub_7ff33cafd7f` | 20 | 393 | yes | [`0036_7ff33cafd7f_sub_7ff33cafd7f.c`](0036_7ff33cafd7f_sub_7ff33cafd7f.c) |
| 37 | `0x7ff33caf4b0` | `sub_7ff33caf4b0` | 20 | 349 | yes | [`0037_7ff33caf4b0_sub_7ff33caf4b0.c`](0037_7ff33caf4b0_sub_7ff33caf4b0.c) |
| 38 | `0x7ff33cade0c` | `sub_7ff33cade0c` | 20 | 264 | yes | [`0038_7ff33cade0c_sub_7ff33cade0c.c`](0038_7ff33cade0c_sub_7ff33cade0c.c) |
| 39 | `0x7ff33cb1720` | `sub_7ff33cb1720` | 19 | 381 | yes | [`0039_7ff33cb1720_sub_7ff33cb1720.c`](0039_7ff33cb1720_sub_7ff33cb1720.c) |
| 40 | `0x7ff33cb6068` | `sub_7ff33cb6068` | 19 | 324 | yes | [`0040_7ff33cb6068_sub_7ff33cb6068.c`](0040_7ff33cb6068_sub_7ff33cb6068.c) |
| 41 | `0x7ff33caf128` | `sub_7ff33caf128` | 19 | 299 | yes | [`0041_7ff33caf128_sub_7ff33caf128.c`](0041_7ff33caf128_sub_7ff33caf128.c) |
| 42 | `0x7ff33cb163a` | `sub_7ff33cb163a` | 19 | 285 | yes | [`0042_7ff33cb163a_sub_7ff33cb163a.c`](0042_7ff33cb163a_sub_7ff33cb163a.c) |
| 43 | `0x7ff33cb32d0` | `sub_7ff33cb32d0` | 19 | 137 | yes | [`0043_7ff33cb32d0_sub_7ff33cb32d0.c`](0043_7ff33cb32d0_sub_7ff33cb32d0.c) |
| 44 | `0x7ff33cbfec0` | `sub_7ff33cbfec0` | 18 | 339 | yes | [`0044_7ff33cbfec0_sub_7ff33cbfec0.c`](0044_7ff33cbfec0_sub_7ff33cbfec0.c) |
| 45 | `0x7ff33cb9378` | `sub_7ff33cb9378` | 18 | 321 | yes | [`0045_7ff33cb9378_sub_7ff33cb9378.c`](0045_7ff33cb9378_sub_7ff33cb9378.c) |
| 46 | `0x7ff33cb0e12` | `sub_7ff33cb0e12` | 18 | 253 | yes | [`0046_7ff33cb0e12_sub_7ff33cb0e12.c`](0046_7ff33cb0e12_sub_7ff33cb0e12.c) |
| 47 | `0x7ff33cac4b0` | `sub_7ff33cac4b0` | 18 | 239 | yes | [`0047_7ff33cac4b0_sub_7ff33cac4b0.c`](0047_7ff33cac4b0_sub_7ff33cac4b0.c) |
| 48 | `0x7ff33cacd6c` | `sub_7ff33cacd6c` | 18 | 213 | yes | [`0048_7ff33cacd6c_sub_7ff33cacd6c.c`](0048_7ff33cacd6c_sub_7ff33cacd6c.c) |
| 49 | `0x7ff33ca9b94` | `sub_7ff33ca9b94` | 18 | 183 | yes | [`0049_7ff33ca9b94_sub_7ff33ca9b94.c`](0049_7ff33ca9b94_sub_7ff33ca9b94.c) |
| 50 | `0x7ff33caa8f0` | `sub_7ff33caa8f0` | 18 | 180 | yes | [`0050_7ff33caa8f0_sub_7ff33caa8f0.c`](0050_7ff33caa8f0_sub_7ff33caa8f0.c) |
| 51 | `0x7ff33ca9944` | `sub_7ff33ca9944` | 18 | 172 | yes | [`0051_7ff33ca9944_sub_7ff33ca9944.c`](0051_7ff33ca9944_sub_7ff33ca9944.c) |
| 52 | `0x7ff33cb12c8` | `sub_7ff33cb12c8` | 17 | 231 | yes | [`0052_7ff33cb12c8_sub_7ff33cb12c8.c`](0052_7ff33cb12c8_sub_7ff33cb12c8.c) |
| 53 | `0x7ff33caca35` | `sub_7ff33caca35` | 17 | 169 | yes | [`0053_7ff33caca35_sub_7ff33caca35.c`](0053_7ff33caca35_sub_7ff33caca35.c) |
| 54 | `0x7ff33ca98ad` | `sub_7ff33ca98ad` | 17 | 136 | yes | [`0054_7ff33ca98ad_sub_7ff33ca98ad.c`](0054_7ff33ca98ad_sub_7ff33ca98ad.c) |
| 55 | `0x7ff33c928c7` | `sub_7ff33c928c7` | 16 | 1375 | yes | [`0055_7ff33c928c7_sub_7ff33c928c7.c`](0055_7ff33c928c7_sub_7ff33c928c7.c) |
| 56 | `0x7ff33cc01d8` | `sub_7ff33cc01d8` | 16 | 1288 | yes | [`0056_7ff33cc01d8_sub_7ff33cc01d8.c`](0056_7ff33cc01d8_sub_7ff33cc01d8.c) |
| 57 | `0x7ff33cbcc0c` | `sub_7ff33cbcc0c` | 16 | 474 | yes | [`0057_7ff33cbcc0c_sub_7ff33cbcc0c.c`](0057_7ff33cbcc0c_sub_7ff33cbcc0c.c) |
| 58 | `0x7ff33cb3f82` | `sub_7ff33cb3f82` | 16 | 213 | yes | [`0058_7ff33cb3f82_sub_7ff33cb3f82.c`](0058_7ff33cb3f82_sub_7ff33cb3f82.c) |
| 59 | `0x7ff33cb1033` | `sub_7ff33cb1033` | 16 | 211 | yes | [`0059_7ff33cb1033_sub_7ff33cb1033.c`](0059_7ff33cb1033_sub_7ff33cb1033.c) |
| 60 | `0x7ff33cbace7` | `sub_7ff33cbace7` | 16 | 173 | yes | [`0060_7ff33cbace7_sub_7ff33cbace7.c`](0060_7ff33cbace7_sub_7ff33cbace7.c) |
