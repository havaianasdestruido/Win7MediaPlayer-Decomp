# Decompiled function index — `bin/WMPNSSUI.dll`

* Decompiler: angr 9.2.213 (CFGFast + Decompiler), run 2026-10-14 21:55:25Z.
* Module digest: `28d793e5077afb34b57fd3ac404413a60f06a3985fcc4aa16cccb8525411f8bb`
* CFG: 415 functions, 64 call edges, built in 0.87s.
* Selection: forced (entry+exports), then size desc, min_blocks=2, cap=60 — 60 of 415 CFG functions emitted.
* All emitted `.c` files are decompiler output; see each file header for provenance.

| # | Address | Name | Blocks | Size | Decompiled | File |
|---|---------|------|--------|------|-----------|------|
| 1 | `0x7ff24f95d5c` | `_start` | 10 | 170 | yes | [`0001_7ff24f95d5c_start.c`](0001_7ff24f95d5c_start.c) |
| 2 | `0x7ff24f92318` | `DllGetClassObject` | 1 | 53 | yes | [`0002_7ff24f92318_dllgetclassobject.c`](0002_7ff24f92318_dllgetclassobject.c) |
| 3 | `0x7ff24f92304` | `DllCanUnloadNow` | 1 | 12 | yes | [`0003_7ff24f92304_dllcanunloadnow.c`](0003_7ff24f92304_dllcanunloadnow.c) |
| 4 | `0x7ff24f923bc` | `DllUnregisterServer` | 1 | 3 | yes | [`0004_7ff24f923bc_dllunregisterserver.c`](0004_7ff24f923bc_dllunregisterserver.c) |
| 5 | `0x7ff24f95990` | `sub_7ff24f95990` | 34 | 373 | yes | [`0005_7ff24f95990_sub_7ff24f95990.c`](0005_7ff24f95990_sub_7ff24f95990.c) |
| 6 | `0x7ff24f95bd5` | `sub_7ff24f95bd5` | 23 | 227 | yes | [`0006_7ff24f95bd5_sub_7ff24f95bd5.c`](0006_7ff24f95bd5_sub_7ff24f95bd5.c) |
| 7 | `0x7ff24f920dc` | `sub_7ff24f920dc` | 22 | 237 | yes | [`0007_7ff24f920dc_sub_7ff24f920dc.c`](0007_7ff24f920dc_sub_7ff24f920dc.c) |
| 8 | `0x7ff24f93609` | `sub_7ff24f93609` | 21 | 268 | yes | [`0008_7ff24f93609_sub_7ff24f93609.c`](0008_7ff24f93609_sub_7ff24f93609.c) |
| 9 | `0x7ff24f94cf4` | `sub_7ff24f94cf4` | 20 | 286 | yes | [`0009_7ff24f94cf4_sub_7ff24f94cf4.c`](0009_7ff24f94cf4_sub_7ff24f94cf4.c) |
| 10 | `0x7ff24f94025` | `sub_7ff24f94025` | 18 | 206 | yes | [`0010_7ff24f94025_sub_7ff24f94025.c`](0010_7ff24f94025_sub_7ff24f94025.c) |
| 11 | `0x7ff24f94a5c` | `sub_7ff24f94a5c` | 17 | 297 | yes | [`0011_7ff24f94a5c_sub_7ff24f94a5c.c`](0011_7ff24f94a5c_sub_7ff24f94a5c.c) |
| 12 | `0x7ff24f92dcc` | `sub_7ff24f92dcc` | 17 | 280 | yes | [`0012_7ff24f92dcc_sub_7ff24f92dcc.c`](0012_7ff24f92dcc_sub_7ff24f92dcc.c) |
| 13 | `0x7ff24f93e70` | `sub_7ff24f93e70` | 16 | 211 | yes | [`0013_7ff24f93e70_sub_7ff24f93e70.c`](0013_7ff24f93e70_sub_7ff24f93e70.c) |
| 14 | `0x7ff24f93504` | `sub_7ff24f93504` | 14 | 312 | yes | [`0014_7ff24f93504_sub_7ff24f93504.c`](0014_7ff24f93504_sub_7ff24f93504.c) |
| 15 | `0x7ff24f94213` | `sub_7ff24f94213` | 13 | 133 | yes | [`0015_7ff24f94213_sub_7ff24f94213.c`](0015_7ff24f94213_sub_7ff24f94213.c) |
| 16 | `0x7ff24f942c7` | `sub_7ff24f942c7` | 13 | 130 | yes | [`0016_7ff24f942c7_sub_7ff24f942c7.c`](0016_7ff24f942c7_sub_7ff24f942c7.c) |
| 17 | `0x7ff24f92e89` | `sub_7ff24f92e89` | 11 | 126 | yes | [`0017_7ff24f92e89_sub_7ff24f92e89.c`](0017_7ff24f92e89_sub_7ff24f92e89.c) |
| 18 | `0x7ff24f94974` | `sub_7ff24f94974` | 10 | 120 | yes | [`0018_7ff24f94974_sub_7ff24f94974.c`](0018_7ff24f94974_sub_7ff24f94974.c) |
| 19 | `0x7ff24f9507e` | `sub_7ff24f9507e` | 10 | 112 | yes | [`0019_7ff24f9507e_sub_7ff24f9507e.c`](0019_7ff24f9507e_sub_7ff24f9507e.c) |
| 20 | `0x7ff24f94b42` | `sub_7ff24f94b42` | 10 | 108 | yes | [`0020_7ff24f94b42_sub_7ff24f94b42.c`](0020_7ff24f94b42_sub_7ff24f94b42.c) |
| 21 | `0x7ff24f94ec8` | `sub_7ff24f94ec8` | 9 | 125 | yes | [`0021_7ff24f94ec8_sub_7ff24f94ec8.c`](0021_7ff24f94ec8_sub_7ff24f94ec8.c) |
| 22 | `0x7ff24f9285c` | `sub_7ff24f9285c` | 9 | 124 | yes | [`0022_7ff24f9285c_sub_7ff24f9285c.c`](0022_7ff24f9285c_sub_7ff24f9285c.c) |
| 23 | `0x7ff24f957ca` | `sub_7ff24f957ca` | 9 | 93 | yes | [`0023_7ff24f957ca_sub_7ff24f957ca.c`](0023_7ff24f957ca_sub_7ff24f957ca.c) |
| 24 | `0x7ff24f92426` | `sub_7ff24f92426` | 8 | 132 | yes | [`0024_7ff24f92426_sub_7ff24f92426.c`](0024_7ff24f92426_sub_7ff24f92426.c) |
| 25 | `0x7ff24f924aa` | `sub_7ff24f924aa` | 8 | 101 | yes | [`0025_7ff24f924aa_sub_7ff24f924aa.c`](0025_7ff24f924aa_sub_7ff24f924aa.c) |
| 26 | `0x7ff24f913d1` | `sub_7ff24f913d1` | 7 | 226 | yes | [`0026_7ff24f913d1_sub_7ff24f913d1.c`](0026_7ff24f913d1_sub_7ff24f913d1.c) |
| 27 | `0x7ff24f93da0` | `sub_7ff24f93da0` | 7 | 208 | yes | [`0027_7ff24f93da0_sub_7ff24f93da0.c`](0027_7ff24f93da0_sub_7ff24f93da0.c) |
| 28 | `0x7ff24f927d4` | `sub_7ff24f927d4` | 7 | 136 | yes | [`0028_7ff24f927d4_sub_7ff24f927d4.c`](0028_7ff24f927d4_sub_7ff24f927d4.c) |
| 29 | `0x7ff24f939de` | `sub_7ff24f939de` | 7 | 116 | yes | [`0029_7ff24f939de_sub_7ff24f939de.c`](0029_7ff24f939de_sub_7ff24f939de.c) |
| 30 | `0x7ff24f9412b` | `sub_7ff24f9412b` | 7 | 104 | yes | [`0030_7ff24f9412b_sub_7ff24f9412b.c`](0030_7ff24f9412b_sub_7ff24f9412b.c) |
| 31 | `0x7ff24f93fb8` | `sub_7ff24f93fb8` | 7 | 100 | yes | [`0031_7ff24f93fb8_sub_7ff24f93fb8.c`](0031_7ff24f93fb8_sub_7ff24f93fb8.c) |
| 32 | `0x7ff24f93f38` | `sub_7ff24f93f38` | 7 | 90 | yes | [`0032_7ff24f93f38_sub_7ff24f93f38.c`](0032_7ff24f93f38_sub_7ff24f93f38.c) |
| 33 | `0x7ff24f9349c` | `sub_7ff24f9349c` | 7 | 89 | yes | [`0033_7ff24f9349c_sub_7ff24f9349c.c`](0033_7ff24f9349c_sub_7ff24f9349c.c) |
| 34 | `0x7ff24f9362b` | `sub_7ff24f9362b` | 7 | 74 | yes | [`0034_7ff24f9362b_sub_7ff24f9362b.c`](0034_7ff24f9362b_sub_7ff24f9362b.c) |
| 35 | `0x7ff24f95b0b` | `sub_7ff24f95b0b` | 7 | 62 | yes | [`0035_7ff24f95b0b_sub_7ff24f95b0b.c`](0035_7ff24f95b0b_sub_7ff24f95b0b.c) |
| 36 | `0x7ff24f91fa5` | `sub_7ff24f91fa5` | 7 | 47 | yes | [`0036_7ff24f91fa5_sub_7ff24f91fa5.c`](0036_7ff24f91fa5_sub_7ff24f91fa5.c) |
| 37 | `0x7ff24f937a4` | `sub_7ff24f937a4` | 6 | 125 | yes | [`0037_7ff24f937a4_sub_7ff24f937a4.c`](0037_7ff24f937a4_sub_7ff24f937a4.c) |
| 38 | `0x7ff24f928ec` | `sub_7ff24f928ec` | 6 | 122 | yes | [`0038_7ff24f928ec_sub_7ff24f928ec.c`](0038_7ff24f928ec_sub_7ff24f928ec.c) |
| 39 | `0x7ff24f92c05` | `sub_7ff24f92c05` | 6 | 121 | yes | [`0039_7ff24f92c05_sub_7ff24f92c05.c`](0039_7ff24f92c05_sub_7ff24f92c05.c) |
| 40 | `0x7ff24f95184` | `sub_7ff24f95184` | 6 | 105 | yes | [`0040_7ff24f95184_sub_7ff24f95184.c`](0040_7ff24f95184_sub_7ff24f95184.c) |
| 41 | `0x7ff24f92181` | `sub_7ff24f92181` | 6 | 103 | yes | [`0041_7ff24f92181_sub_7ff24f92181.c`](0041_7ff24f92181_sub_7ff24f92181.c) |
| 42 | `0x7ff24f94742` | `sub_7ff24f94742` | 6 | 94 | yes | [`0042_7ff24f94742_sub_7ff24f94742.c`](0042_7ff24f94742_sub_7ff24f94742.c) |
| 43 | `0x7ff24f94d9b` | `sub_7ff24f94d9b` | 6 | 94 | yes | [`0043_7ff24f94d9b_sub_7ff24f94d9b.c`](0043_7ff24f94d9b_sub_7ff24f94d9b.c) |
| 44 | `0x7ff24f9234d` | `sub_7ff24f9234d` | 6 | 92 | yes | [`0044_7ff24f9234d_sub_7ff24f9234d.c`](0044_7ff24f9234d_sub_7ff24f9234d.c) |
| 45 | `0x7ff24f922a0` | `sub_7ff24f922a0` | 6 | 90 | yes | [`0045_7ff24f922a0_sub_7ff24f922a0.c`](0045_7ff24f922a0_sub_7ff24f922a0.c) |
| 46 | `0x7ff24f948ec` | `sub_7ff24f948ec` | 6 | 79 | yes | [`0046_7ff24f948ec_sub_7ff24f948ec.c`](0046_7ff24f948ec_sub_7ff24f948ec.c) |
| 47 | `0x7ff24f94e5e` | `sub_7ff24f94e5e` | 6 | 74 | yes | [`0047_7ff24f94e5e_sub_7ff24f94e5e.c`](0047_7ff24f94e5e_sub_7ff24f94e5e.c) |
| 48 | `0x7ff24f91f63` | `sub_7ff24f91f63` | 6 | 70 | yes | [`0048_7ff24f91f63_sub_7ff24f91f63.c`](0048_7ff24f91f63_sub_7ff24f91f63.c) |
| 49 | `0x7ff24f95e40` | `sub_7ff24f95e40` | 6 | 70 | yes | [`0049_7ff24f95e40_sub_7ff24f95e40.c`](0049_7ff24f95e40_sub_7ff24f95e40.c) |
| 50 | `0x7ff24f93141` | `sub_7ff24f93141` | 6 | 69 | yes | [`0050_7ff24f93141_sub_7ff24f93141.c`](0050_7ff24f93141_sub_7ff24f93141.c) |
| 51 | `0x7ff24f95e8c` | `sub_7ff24f95e8c` | 6 | 63 | yes | [`0051_7ff24f95e8c_sub_7ff24f95e8c.c`](0051_7ff24f95e8c_sub_7ff24f95e8c.c) |
| 52 | `0x7ff24f95db0` | `sub_7ff24f95db0` | 6 | 57 | yes | [`0052_7ff24f95db0_sub_7ff24f95db0.c`](0052_7ff24f95db0_sub_7ff24f95db0.c) |
| 53 | `0x7ff24f92692` | `sub_7ff24f92692` | 6 | 36 | yes | [`0053_7ff24f92692_sub_7ff24f92692.c`](0053_7ff24f92692_sub_7ff24f92692.c) |
| 54 | `0x7ff24f94930` | `sub_7ff24f94930` | 6 | 24 | yes | [`0054_7ff24f94930_sub_7ff24f94930.c`](0054_7ff24f94930_sub_7ff24f94930.c) |
| 55 | `0x7ff24f953a0` | `sub_7ff24f953a0` | 5 | 141 | yes | [`0055_7ff24f953a0_sub_7ff24f953a0.c`](0055_7ff24f953a0_sub_7ff24f953a0.c) |
| 56 | `0x7ff24f965ac` | `sub_7ff24f965ac` | 5 | 101 | yes | [`0056_7ff24f965ac_sub_7ff24f965ac.c`](0056_7ff24f965ac_sub_7ff24f965ac.c) |
| 57 | `0x7ff24f92ce0` | `sub_7ff24f92ce0` | 5 | 100 | yes | [`0057_7ff24f92ce0_sub_7ff24f92ce0.c`](0057_7ff24f92ce0_sub_7ff24f92ce0.c) |
| 58 | `0x7ff24f9613c` | `sub_7ff24f9613c` | 5 | 99 | yes | [`0058_7ff24f9613c_sub_7ff24f9613c.c`](0058_7ff24f9613c_sub_7ff24f9613c.c) |
| 59 | `0x7ff24f945b0` | `sub_7ff24f945b0` | 5 | 93 | yes | [`0059_7ff24f945b0_sub_7ff24f945b0.c`](0059_7ff24f945b0_sub_7ff24f945b0.c) |
| 60 | `0x7ff24f93c8c` | `sub_7ff24f93c8c` | 5 | 83 | yes | [`0060_7ff24f93c8c_sub_7ff24f93c8c.c`](0060_7ff24f93c8c_sub_7ff24f93c8c.c) |
