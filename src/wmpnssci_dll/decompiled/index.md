# Decompiled function index — `bin/wmpnssci.dll`

* Decompiler: angr 9.2.213 (CFGFast + Decompiler), run 2026-10-14 21:55:39Z.
* Module digest: `3a3871983f2d9a57739c70365dc3f417d9bf02f5c0c4cc3272ea9f3d380ef962`
* CFG: 4459 functions, 0 call edges, built in 22.77s.
* Selection: forced (entry+exports), then size desc, min_blocks=2, cap=60 — 60 of 4459 CFG functions emitted.
* All emitted `.c` files are decompiler output; see each file header for provenance.

| # | Address | Name | Blocks | Size | Decompiled | File |
|---|---------|------|--------|------|-----------|------|
| 1 | `0x7ff3b135434` | `DllGetClassObject` | 31 | 381 | yes | [`0001_7ff3b135434_dllgetclassobject.c`](0001_7ff3b135434_dllgetclassobject.c) |
| 2 | `0x7ff3b163a48` | `_start` | 10 | 170 | yes | [`0002_7ff3b163a48_start.c`](0002_7ff3b163a48_start.c) |
| 3 | `0x7ff3b1355e0` | `DllRegisterServer` | 4 | 77 | yes | [`0003_7ff3b1355e0_dllregisterserver.c`](0003_7ff3b1355e0_dllregisterserver.c) |
| 4 | `0x7ff3b135390` | `DllCanUnloadNow` | 4 | 73 | yes | [`0004_7ff3b135390_dllcanunloadnow.c`](0004_7ff3b135390_dllcanunloadnow.c) |
| 5 | `0x7ff3b135774` | `DllUnregisterServer` | 4 | 67 | yes | [`0005_7ff3b135774_dllunregisterserver.c`](0005_7ff3b135774_dllunregisterserver.c) |
| 6 | `0x7ff3b159049` | `sub_7ff3b159049` | 237 | 2805 | yes | [`0006_7ff3b159049_sub_7ff3b159049.c`](0006_7ff3b159049_sub_7ff3b159049.c) |
| 7 | `0x7ff3b16ef14` | `sub_7ff3b16ef14` | 223 | 3714 | yes | [`0007_7ff3b16ef14_sub_7ff3b16ef14.c`](0007_7ff3b16ef14_sub_7ff3b16ef14.c) |
| 8 | `0x7ff3b1710a2` | `sub_7ff3b1710a2` | 129 | 1467 | yes | [`0008_7ff3b1710a2_sub_7ff3b1710a2.c`](0008_7ff3b1710a2_sub_7ff3b1710a2.c) |
| 9 | `0x7ff3b16c43d` | `sub_7ff3b16c43d` | 110 | 1752 | yes | [`0009_7ff3b16c43d_sub_7ff3b16c43d.c`](0009_7ff3b16c43d_sub_7ff3b16c43d.c) |
| 10 | `0x7ff3b16ce39` | `sub_7ff3b16ce39` | 110 | 1752 | yes | [`0010_7ff3b16ce39_sub_7ff3b16ce39.c`](0010_7ff3b16ce39_sub_7ff3b16ce39.c) |
| 11 | `0x7ff3b15a078` | `sub_7ff3b15a078` | 101 | 1227 | yes | [`0011_7ff3b15a078_sub_7ff3b15a078.c`](0011_7ff3b15a078_sub_7ff3b15a078.c) |
| 12 | `0x7ff3b16a41c` | `sub_7ff3b16a41c` | 84 | 1420 | yes | [`0012_7ff3b16a41c_sub_7ff3b16a41c.c`](0012_7ff3b16a41c_sub_7ff3b16a41c.c) |
| 13 | `0x7ff3b16ff4e` | `sub_7ff3b16ff4e` | 68 | 871 | yes | [`0013_7ff3b16ff4e_sub_7ff3b16ff4e.c`](0013_7ff3b16ff4e_sub_7ff3b16ff4e.c) |
| 14 | `0x7ff3b134a00` | `sub_7ff3b134a00` | 62 | 947 | yes | [`0014_7ff3b134a00_sub_7ff3b134a00.c`](0014_7ff3b134a00_sub_7ff3b134a00.c) |
| 15 | `0x7ff3b15a558` | `sub_7ff3b15a558` | 61 | 619 | yes | [`0015_7ff3b15a558_sub_7ff3b15a558.c`](0015_7ff3b15a558_sub_7ff3b15a558.c) |
| 16 | `0x7ff3b140190` | `sub_7ff3b140190` | 59 | 614 | yes | [`0016_7ff3b140190_sub_7ff3b140190.c`](0016_7ff3b140190_sub_7ff3b140190.c) |
| 17 | `0x7ff3b170ab2` | `sub_7ff3b170ab2` | 57 | 873 | yes | [`0017_7ff3b170ab2_sub_7ff3b170ab2.c`](0017_7ff3b170ab2_sub_7ff3b170ab2.c) |
| 18 | `0x7ff3b15bdd4` | `sub_7ff3b15bdd4` | 54 | 637 | yes | [`0018_7ff3b15bdd4_sub_7ff3b15bdd4.c`](0018_7ff3b15bdd4_sub_7ff3b15bdd4.c) |
| 19 | `0x7ff3b16eb58` | `sub_7ff3b16eb58` | 50 | 949 | yes | [`0019_7ff3b16eb58_sub_7ff3b16eb58.c`](0019_7ff3b16eb58_sub_7ff3b16eb58.c) |
| 20 | `0x7ff3b162c88` | `sub_7ff3b162c88` | 50 | 798 | yes | [`0020_7ff3b162c88_sub_7ff3b162c88.c`](0020_7ff3b162c88_sub_7ff3b162c88.c) |
| 21 | `0x7ff3b16e850` | `sub_7ff3b16e850` | 50 | 769 | yes | [`0021_7ff3b16e850_sub_7ff3b16e850.c`](0021_7ff3b16e850_sub_7ff3b16e850.c) |
| 22 | `0x7ff3b15aaa0` | `sub_7ff3b15aaa0` | 49 | 668 | yes | [`0022_7ff3b15aaa0_sub_7ff3b15aaa0.c`](0022_7ff3b15aaa0_sub_7ff3b15aaa0.c) |
| 23 | `0x7ff3b16d878` | `sub_7ff3b16d878` | 46 | 643 | yes | [`0023_7ff3b16d878_sub_7ff3b16d878.c`](0023_7ff3b16d878_sub_7ff3b16d878.c) |
| 24 | `0x7ff3b167fa0` | `sub_7ff3b167fa0` | 42 | 670 | yes | [`0024_7ff3b167fa0_sub_7ff3b167fa0.c`](0024_7ff3b167fa0_sub_7ff3b167fa0.c) |
| 25 | `0x7ff3b16bdbc` | `sub_7ff3b16bdbc` | 41 | 641 | yes | [`0025_7ff3b16bdbc_sub_7ff3b16bdbc.c`](0025_7ff3b16bdbc_sub_7ff3b16bdbc.c) |
| 26 | `0x7ff3b1606dd` | `sub_7ff3b1606dd` | 41 | 284 | yes | [`0026_7ff3b1606dd_sub_7ff3b1606dd.c`](0026_7ff3b1606dd_sub_7ff3b1606dd.c) |
| 27 | `0x7ff3b14ba28` | `sub_7ff3b14ba28` | 38 | 533 | yes | [`0027_7ff3b14ba28_sub_7ff3b14ba28.c`](0027_7ff3b14ba28_sub_7ff3b14ba28.c) |
| 28 | `0x7ff3b15a87c` | `sub_7ff3b15a87c` | 38 | 532 | yes | [`0028_7ff3b15a87c_sub_7ff3b15a87c.c`](0028_7ff3b15a87c_sub_7ff3b15a87c.c) |
| 29 | `0x7ff3b1572ac` | `sub_7ff3b1572ac` | 38 | 463 | yes | [`0029_7ff3b1572ac_sub_7ff3b1572ac.c`](0029_7ff3b1572ac_sub_7ff3b1572ac.c) |
| 30 | `0x7ff3b16781e` | `sub_7ff3b16781e` | 36 | 699 | yes | [`0030_7ff3b16781e_sub_7ff3b16781e.c`](0030_7ff3b16781e_sub_7ff3b16781e.c) |
| 31 | `0x7ff3b14e639` | `sub_7ff3b14e639` | 36 | 397 | yes | [`0031_7ff3b14e639_sub_7ff3b14e639.c`](0031_7ff3b14e639_sub_7ff3b14e639.c) |
| 32 | `0x7ff3b14e0fc` | `sub_7ff3b14e0fc` | 35 | 499 | yes | [`0032_7ff3b14e0fc_sub_7ff3b14e0fc.c`](0032_7ff3b14e0fc_sub_7ff3b14e0fc.c) |
| 33 | `0x7ff3b137b17` | `sub_7ff3b137b17` | 35 | 473 | yes | [`0033_7ff3b137b17_sub_7ff3b137b17.c`](0033_7ff3b137b17_sub_7ff3b137b17.c) |
| 34 | `0x7ff3b13b975` | `sub_7ff3b13b975` | 35 | 466 | yes | [`0034_7ff3b13b975_sub_7ff3b13b975.c`](0034_7ff3b13b975_sub_7ff3b13b975.c) |
| 35 | `0x7ff3b14caec` | `sub_7ff3b14caec` | 35 | 421 | yes | [`0035_7ff3b14caec_sub_7ff3b14caec.c`](0035_7ff3b14caec_sub_7ff3b14caec.c) |
| 36 | `0x7ff3b14de0c` | `sub_7ff3b14de0c` | 35 | 421 | yes | [`0036_7ff3b14de0c_sub_7ff3b14de0c.c`](0036_7ff3b14de0c_sub_7ff3b14de0c.c) |
| 37 | `0x7ff3b159dec` | `sub_7ff3b159dec` | 34 | 562 | yes | [`0037_7ff3b159dec_sub_7ff3b159dec.c`](0037_7ff3b159dec_sub_7ff3b159dec.c) |
| 38 | `0x7ff3b16e664` | `sub_7ff3b16e664` | 34 | 483 | yes | [`0038_7ff3b16e664_sub_7ff3b16e664.c`](0038_7ff3b16e664_sub_7ff3b16e664.c) |
| 39 | `0x7ff3b16367c` | `sub_7ff3b16367c` | 34 | 373 | yes | [`0039_7ff3b16367c_sub_7ff3b16367c.c`](0039_7ff3b16367c_sub_7ff3b16367c.c) |
| 40 | `0x7ff3b16bb4c` | `sub_7ff3b16bb4c` | 33 | 624 | yes | [`0040_7ff3b16bb4c_sub_7ff3b16bb4c.c`](0040_7ff3b16bb4c_sub_7ff3b16bb4c.c) |
| 41 | `0x7ff3b14d984` | `sub_7ff3b14d984` | 33 | 461 | yes | [`0041_7ff3b14d984_sub_7ff3b14d984.c`](0041_7ff3b14d984_sub_7ff3b14d984.c) |
| 42 | `0x7ff3b16e490` | `sub_7ff3b16e490` | 33 | 459 | yes | [`0042_7ff3b16e490_sub_7ff3b16e490.c`](0042_7ff3b16e490_sub_7ff3b16e490.c) |
| 43 | `0x7ff3b15ce27` | `sub_7ff3b15ce27` | 32 | 399 | yes | [`0043_7ff3b15ce27_sub_7ff3b15ce27.c`](0043_7ff3b15ce27_sub_7ff3b15ce27.c) |
| 44 | `0x7ff3b14c534` | `sub_7ff3b14c534` | 31 | 369 | yes | [`0044_7ff3b14c534_sub_7ff3b14c534.c`](0044_7ff3b14c534_sub_7ff3b14c534.c) |
| 45 | `0x7ff3b13b17d` | `sub_7ff3b13b17d` | 30 | 444 | yes | [`0045_7ff3b13b17d_sub_7ff3b13b17d.c`](0045_7ff3b13b17d_sub_7ff3b13b17d.c) |
| 46 | `0x7ff3b13bc2b` | `sub_7ff3b13bc2b` | 30 | 418 | yes | [`0046_7ff3b13bc2b_sub_7ff3b13bc2b.c`](0046_7ff3b13bc2b_sub_7ff3b13bc2b.c) |
| 47 | `0x7ff3b156a24` | `sub_7ff3b156a24` | 30 | 363 | yes | [`0047_7ff3b156a24_sub_7ff3b156a24.c`](0047_7ff3b156a24_sub_7ff3b156a24.c) |
| 48 | `0x7ff3b15f198` | `sub_7ff3b15f198` | 30 | 238 | yes | [`0048_7ff3b15f198_sub_7ff3b15f198.c`](0048_7ff3b15f198_sub_7ff3b15f198.c) |
| 49 | `0x7ff3b13c848` | `sub_7ff3b13c848` | 29 | 529 | yes | [`0049_7ff3b13c848_sub_7ff3b13c848.c`](0049_7ff3b13c848_sub_7ff3b13c848.c) |
| 50 | `0x7ff3b1587e4` | `sub_7ff3b1587e4` | 29 | 442 | yes | [`0050_7ff3b1587e4_sub_7ff3b1587e4.c`](0050_7ff3b1587e4_sub_7ff3b1587e4.c) |
| 51 | `0x7ff3b14f660` | `sub_7ff3b14f660` | 29 | 383 | yes | [`0051_7ff3b14f660_sub_7ff3b14f660.c`](0051_7ff3b14f660_sub_7ff3b14f660.c) |
| 52 | `0x7ff3b15adcc` | `sub_7ff3b15adcc` | 29 | 372 | yes | [`0052_7ff3b15adcc_sub_7ff3b15adcc.c`](0052_7ff3b15adcc_sub_7ff3b15adcc.c) |
| 53 | `0x7ff3b14ea71` | `sub_7ff3b14ea71` | 28 | 379 | yes | [`0053_7ff3b14ea71_sub_7ff3b14ea71.c`](0053_7ff3b14ea71_sub_7ff3b14ea71.c) |
| 54 | `0x7ff3b141738` | `sub_7ff3b141738` | 28 | 330 | yes | [`0054_7ff3b141738_sub_7ff3b141738.c`](0054_7ff3b141738_sub_7ff3b141738.c) |
| 55 | `0x7ff3b150602` | `sub_7ff3b150602` | 28 | 277 | yes | [`0055_7ff3b150602_sub_7ff3b150602.c`](0055_7ff3b150602_sub_7ff3b150602.c) |
| 56 | `0x7ff3b170524` | `sub_7ff3b170524` | 27 | 463 | yes | [`0056_7ff3b170524_sub_7ff3b170524.c`](0056_7ff3b170524_sub_7ff3b170524.c) |
| 57 | `0x7ff3b16924c` | `sub_7ff3b16924c` | 27 | 399 | yes | [`0057_7ff3b16924c_sub_7ff3b16924c.c`](0057_7ff3b16924c_sub_7ff3b16924c.c) |
| 58 | `0x7ff3b1449e4` | `sub_7ff3b1449e4` | 27 | 384 | yes | [`0058_7ff3b1449e4_sub_7ff3b1449e4.c`](0058_7ff3b1449e4_sub_7ff3b1449e4.c) |
| 59 | `0x7ff3b1482e0` | `sub_7ff3b1482e0` | 27 | 383 | yes | [`0059_7ff3b1482e0_sub_7ff3b1482e0.c`](0059_7ff3b1482e0_sub_7ff3b1482e0.c) |
| 60 | `0x7ff3b14a430` | `sub_7ff3b14a430` | 27 | 383 | yes | [`0060_7ff3b14a430_sub_7ff3b14a430.c`](0060_7ff3b14a430_sub_7ff3b14a430.c) |
