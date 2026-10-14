# Decompiled function index — `bin/WMPMediaSharing.dll`

* Decompiler: angr 9.2.213 (CFGFast + Decompiler), run 2026-10-14 21:54:14Z.
* Module digest: `714d193de7f062968c11a8a946f1fa066d03e1fc5a7bd90dbabc372605416413`
* CFG: 1679 functions, 1085 call edges, built in 4.97s.
* Selection: forced (entry+exports), then size desc, min_blocks=2, cap=60 — 60 of 1679 CFG functions emitted.
* All emitted `.c` files are decompiler output; see each file header for provenance.

| # | Address | Name | Blocks | Size | Decompiled | File |
|---|---------|------|--------|------|-----------|------|
| 1 | `0x7ff2c1639d0` | `DllGetClassObject` | 31 | 381 | yes | [`0001_7ff2c1639d0_dllgetclassobject.c`](0001_7ff2c1639d0_dllgetclassobject.c) |
| 2 | `0x7ff2c17871c` | `_start` | 10 | 170 | yes | [`0002_7ff2c17871c_start.c`](0002_7ff2c17871c_start.c) |
| 3 | `0x7ff2c16392c` | `DllCanUnloadNow` | 4 | 73 | yes | [`0003_7ff2c16392c_dllcanunloadnow.c`](0003_7ff2c16392c_dllcanunloadnow.c) |
| 4 | `0x7ff2c17b768` | `sub_7ff2c17b768` | 223 | 3714 | yes | [`0004_7ff2c17b768_sub_7ff2c17b768.c`](0004_7ff2c17b768_sub_7ff2c17b768.c) |
| 5 | `0x7ff2c174439` | `sub_7ff2c174439` | 122 | 1409 | yes | [`0005_7ff2c174439_sub_7ff2c174439.c`](0005_7ff2c174439_sub_7ff2c174439.c) |
| 6 | `0x7ff2c17548c` | `sub_7ff2c17548c` | 101 | 1227 | yes | [`0006_7ff2c17548c_sub_7ff2c17548c.c`](0006_7ff2c17548c_sub_7ff2c17548c.c) |
| 7 | `0x7ff2c17467a` | `sub_7ff2c17467a` | 72 | 793 | yes | [`0007_7ff2c17467a_sub_7ff2c17467a.c`](0007_7ff2c17467a_sub_7ff2c17467a.c) |
| 8 | `0x7ff2c17596c` | `sub_7ff2c17596c` | 61 | 619 | yes | [`0008_7ff2c17596c_sub_7ff2c17596c.c`](0008_7ff2c17596c_sub_7ff2c17596c.c) |
| 9 | `0x7ff2c17b3ac` | `sub_7ff2c17b3ac` | 50 | 949 | yes | [`0009_7ff2c17b3ac_sub_7ff2c17b3ac.c`](0009_7ff2c17b3ac_sub_7ff2c17b3ac.c) |
| 10 | `0x7ff2c17b0a4` | `sub_7ff2c17b0a4` | 50 | 769 | yes | [`0010_7ff2c17b0a4_sub_7ff2c17b0a4.c`](0010_7ff2c17b0a4_sub_7ff2c17b0a4.c) |
| 11 | `0x7ff2c175eb4` | `sub_7ff2c175eb4` | 49 | 668 | yes | [`0011_7ff2c175eb4_sub_7ff2c175eb4.c`](0011_7ff2c175eb4_sub_7ff2c175eb4.c) |
| 12 | `0x7ff2c17a5f8` | `sub_7ff2c17a5f8` | 46 | 643 | yes | [`0012_7ff2c17a5f8_sub_7ff2c17a5f8.c`](0012_7ff2c17a5f8_sub_7ff2c17a5f8.c) |
| 13 | `0x7ff2c1670ec` | `sub_7ff2c1670ec` | 46 | 635 | yes | [`0013_7ff2c1670ec_sub_7ff2c1670ec.c`](0013_7ff2c1670ec_sub_7ff2c1670ec.c) |
| 14 | `0x7ff2c176af5` | `sub_7ff2c176af5` | 41 | 284 | yes | [`0014_7ff2c176af5_sub_7ff2c176af5.c`](0014_7ff2c176af5_sub_7ff2c176af5.c) |
| 15 | `0x7ff2c175c90` | `sub_7ff2c175c90` | 38 | 532 | yes | [`0015_7ff2c175c90_sub_7ff2c175c90.c`](0015_7ff2c175c90_sub_7ff2c175c90.c) |
| 16 | `0x7ff2c167803` | `sub_7ff2c167803` | 38 | 484 | yes | [`0016_7ff2c167803_sub_7ff2c167803.c`](0016_7ff2c167803_sub_7ff2c167803.c) |
| 17 | `0x7ff2c167bc8` | `sub_7ff2c167bc8` | 37 | 554 | yes | [`0017_7ff2c167bc8_sub_7ff2c167bc8.c`](0017_7ff2c167bc8_sub_7ff2c167bc8.c) |
| 18 | `0x7ff2c16ad79` | `sub_7ff2c16ad79` | 37 | 482 | yes | [`0018_7ff2c16ad79_sub_7ff2c16ad79.c`](0018_7ff2c16ad79_sub_7ff2c16ad79.c) |
| 19 | `0x7ff2c167ea4` | `sub_7ff2c167ea4` | 37 | 480 | yes | [`0019_7ff2c167ea4_sub_7ff2c167ea4.c`](0019_7ff2c167ea4_sub_7ff2c167ea4.c) |
| 20 | `0x7ff2c175200` | `sub_7ff2c175200` | 34 | 562 | yes | [`0020_7ff2c175200_sub_7ff2c175200.c`](0020_7ff2c175200_sub_7ff2c175200.c) |
| 21 | `0x7ff2c17aeb8` | `sub_7ff2c17aeb8` | 34 | 483 | yes | [`0021_7ff2c17aeb8_sub_7ff2c17aeb8.c`](0021_7ff2c17aeb8_sub_7ff2c17aeb8.c) |
| 22 | `0x7ff2c16810c` | `sub_7ff2c16810c` | 34 | 479 | yes | [`0022_7ff2c16810c_sub_7ff2c16810c.c`](0022_7ff2c16810c_sub_7ff2c16810c.c) |
| 23 | `0x7ff2c165ef4` | `sub_7ff2c165ef4` | 34 | 474 | yes | [`0023_7ff2c165ef4_sub_7ff2c165ef4.c`](0023_7ff2c165ef4_sub_7ff2c165ef4.c) |
| 24 | `0x7ff2c1651cc` | `sub_7ff2c1651cc` | 34 | 466 | yes | [`0024_7ff2c1651cc_sub_7ff2c1651cc.c`](0024_7ff2c1651cc_sub_7ff2c1651cc.c) |
| 25 | `0x7ff2c178350` | `sub_7ff2c178350` | 34 | 373 | yes | [`0025_7ff2c178350_sub_7ff2c178350.c`](0025_7ff2c178350_sub_7ff2c178350.c) |
| 26 | `0x7ff2c1692bc` | `sub_7ff2c1692bc` | 33 | 510 | yes | [`0026_7ff2c1692bc_sub_7ff2c1692bc.c`](0026_7ff2c1692bc_sub_7ff2c1692bc.c) |
| 27 | `0x7ff2c17ace4` | `sub_7ff2c17ace4` | 33 | 459 | yes | [`0027_7ff2c17ace4_sub_7ff2c17ace4.c`](0027_7ff2c17ace4_sub_7ff2c17ace4.c) |
| 28 | `0x7ff2c166480` | `sub_7ff2c166480` | 33 | 449 | yes | [`0028_7ff2c166480_sub_7ff2c166480.c`](0028_7ff2c166480_sub_7ff2c166480.c) |
| 29 | `0x7ff2c165b6c` | `sub_7ff2c165b6c` | 33 | 431 | yes | [`0029_7ff2c165b6c_sub_7ff2c165b6c.c`](0029_7ff2c165b6c_sub_7ff2c165b6c.c) |
| 30 | `0x7ff2c171e57` | `sub_7ff2c171e57` | 32 | 399 | yes | [`0030_7ff2c171e57_sub_7ff2c171e57.c`](0030_7ff2c171e57_sub_7ff2c171e57.c) |
| 31 | `0x7ff2c166c70` | `sub_7ff2c166c70` | 31 | 527 | yes | [`0031_7ff2c166c70_sub_7ff2c166c70.c`](0031_7ff2c166c70_sub_7ff2c166c70.c) |
| 32 | `0x7ff2c167400` | `sub_7ff2c167400` | 30 | 502 | yes | [`0032_7ff2c167400_sub_7ff2c167400.c`](0032_7ff2c167400_sub_7ff2c167400.c) |
| 33 | `0x7ff2c1732d8` | `sub_7ff2c1732d8` | 30 | 363 | yes | [`0033_7ff2c1732d8_sub_7ff2c1732d8.c`](0033_7ff2c1732d8_sub_7ff2c1732d8.c) |
| 34 | `0x7ff2c164568` | `sub_7ff2c164568` | 30 | 356 | yes | [`0034_7ff2c164568_sub_7ff2c164568.c`](0034_7ff2c164568_sub_7ff2c164568.c) |
| 35 | `0x7ff2c173fc0` | `sub_7ff2c173fc0` | 29 | 442 | yes | [`0035_7ff2c173fc0_sub_7ff2c173fc0.c`](0035_7ff2c173fc0_sub_7ff2c173fc0.c) |
| 36 | `0x7ff2c1761e0` | `sub_7ff2c1761e0` | 29 | 372 | yes | [`0036_7ff2c1761e0_sub_7ff2c1761e0.c`](0036_7ff2c1761e0_sub_7ff2c1761e0.c) |
| 37 | `0x7ff2c16c4dc` | `sub_7ff2c16c4dc` | 29 | 357 | yes | [`0037_7ff2c16c4dc_sub_7ff2c16c4dc.c`](0037_7ff2c16c4dc_sub_7ff2c16c4dc.c) |
| 38 | `0x7ff2c169c55` | `sub_7ff2c169c55` | 28 | 538 | yes | [`0038_7ff2c169c55_sub_7ff2c169c55.c`](0038_7ff2c169c55_sub_7ff2c169c55.c) |
| 39 | `0x7ff2c17a100` | `sub_7ff2c17a100` | 27 | 399 | yes | [`0039_7ff2c17a100_sub_7ff2c17a100.c`](0039_7ff2c17a100_sub_7ff2c17a100.c) |
| 40 | `0x7ff2c17feaf` | `sub_7ff2c17feaf` | 27 | 341 | yes | [`0040_7ff2c17feaf_sub_7ff2c17feaf.c`](0040_7ff2c17feaf_sub_7ff2c17feaf.c) |
| 41 | `0x7ff2c163708` | `sub_7ff2c163708` | 26 | 441 | yes | [`0041_7ff2c163708_sub_7ff2c163708.c`](0041_7ff2c163708_sub_7ff2c163708.c) |
| 42 | `0x7ff2c165d44` | `sub_7ff2c165d44` | 26 | 418 | yes | [`0042_7ff2c165d44_sub_7ff2c165d44.c`](0042_7ff2c165d44_sub_7ff2c165d44.c) |
| 43 | `0x7ff2c1715ec` | `sub_7ff2c1715ec` | 26 | 332 | yes | [`0043_7ff2c1715ec_sub_7ff2c1715ec.c`](0043_7ff2c1715ec_sub_7ff2c1715ec.c) |
| 44 | `0x7ff2c179bd4` | `sub_7ff2c179bd4` | 26 | 289 | yes | [`0044_7ff2c179bd4_sub_7ff2c179bd4.c`](0044_7ff2c179bd4_sub_7ff2c179bd4.c) |
| 45 | `0x7ff2c17a304` | `sub_7ff2c17a304` | 25 | 298 | yes | [`0045_7ff2c17a304_sub_7ff2c17a304.c`](0045_7ff2c17a304_sub_7ff2c17a304.c) |
| 46 | `0x7ff2c168980` | `sub_7ff2c168980` | 24 | 442 | yes | [`0046_7ff2c168980_sub_7ff2c168980.c`](0046_7ff2c168980_sub_7ff2c168980.c) |
| 47 | `0x7ff2c1659c4` | `sub_7ff2c1659c4` | 24 | 349 | yes | [`0047_7ff2c1659c4_sub_7ff2c1659c4.c`](0047_7ff2c1659c4_sub_7ff2c1659c4.c) |
| 48 | `0x7ff2c17248b` | `sub_7ff2c17248b` | 24 | 239 | yes | [`0048_7ff2c17248b_sub_7ff2c17248b.c`](0048_7ff2c17248b_sub_7ff2c17248b.c) |
| 49 | `0x7ff2c169908` | `sub_7ff2c169908` | 23 | 438 | yes | [`0049_7ff2c169908_sub_7ff2c169908.c`](0049_7ff2c169908_sub_7ff2c169908.c) |
| 50 | `0x7ff2c16fe44` | `sub_7ff2c16fe44` | 23 | 329 | yes | [`0050_7ff2c16fe44_sub_7ff2c16fe44.c`](0050_7ff2c16fe44_sub_7ff2c16fe44.c) |
| 51 | `0x7ff2c16c176` | `sub_7ff2c16c176` | 23 | 285 | yes | [`0051_7ff2c16c176_sub_7ff2c16c176.c`](0051_7ff2c16c176_sub_7ff2c16c176.c) |
| 52 | `0x7ff2c16dd54` | `sub_7ff2c16dd54` | 23 | 264 | yes | [`0052_7ff2c16dd54_sub_7ff2c16dd54.c`](0052_7ff2c16dd54_sub_7ff2c16dd54.c) |
| 53 | `0x7ff2c178595` | `sub_7ff2c178595` | 23 | 227 | yes | [`0053_7ff2c178595_sub_7ff2c178595.c`](0053_7ff2c178595_sub_7ff2c178595.c) |
| 54 | `0x7ff2c171c2a` | `sub_7ff2c171c2a` | 22 | 279 | yes | [`0054_7ff2c171c2a_sub_7ff2c171c2a.c`](0054_7ff2c171c2a_sub_7ff2c171c2a.c) |
| 55 | `0x7ff2c17c5f0` | `sub_7ff2c17c5f0` | 21 | 342 | yes | [`0055_7ff2c17c5f0_sub_7ff2c17c5f0.c`](0055_7ff2c17c5f0_sub_7ff2c17c5f0.c) |
| 56 | `0x7ff2c166a7b` | `sub_7ff2c166a7b` | 21 | 312 | yes | [`0056_7ff2c166a7b_sub_7ff2c166a7b.c`](0056_7ff2c166a7b_sub_7ff2c166a7b.c) |
| 57 | `0x7ff2c165803` | `sub_7ff2c165803` | 21 | 287 | yes | [`0057_7ff2c165803_sub_7ff2c165803.c`](0057_7ff2c165803_sub_7ff2c165803.c) |
| 58 | `0x7ff2c1741bc` | `sub_7ff2c1741bc` | 21 | 253 | yes | [`0058_7ff2c1741bc_sub_7ff2c1741bc.c`](0058_7ff2c1741bc_sub_7ff2c1741bc.c) |
| 59 | `0x7ff2c16a0fc` | `sub_7ff2c16a0fc` | 21 | 248 | yes | [`0059_7ff2c16a0fc_sub_7ff2c16a0fc.c`](0059_7ff2c16a0fc_sub_7ff2c16a0fc.c) |
| 60 | `0x7ff2c16499c` | `sub_7ff2c16499c` | 20 | 358 | yes | [`0060_7ff2c16499c_sub_7ff2c16499c.c`](0060_7ff2c16499c_sub_7ff2c16499c.c) |
