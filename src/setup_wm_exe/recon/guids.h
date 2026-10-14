/* guids.h — every COM GUID/UUID recovered from setup_wm.exe.
 *
 * Sources are named per constant:
 *   [typelib @0x...]  GUID and file offset read from the module's own MSFT
 *                     type library and confirmed as a 16-byte constant at that
 *                     offset by analysis/tools/typelib.py;
 *   [rgs]             GUID named by an ATL registrar script (text form);
 *   [string]          GUID found as a text literal by strings_scan.py.
 */
#ifndef WMP_RECON_GUIDS_H
#define WMP_RECON_GUIDS_H

#include "wmp_compat.h"

/* E33D49A9-409C-4ACD-A1F5-DA7DBB99EB30 — string */
static const wmp_guid GUID_STRING_LITERAL = { 0xE33D49A9, 0x409C, 0x4acd, { 0xA1, 0xF5, 0xDA, 0x7D, 0xBB, 0x99, 0xEB, 0x30 } };

/* E31E09CB-B1D4-4B2C-B088-0AA51C598562 — string */
static const wmp_guid GUID_STRING_LITERAL_2 = { 0xe31e09cb, 0xb1d4, 0x4b2c, { 0xB0, 0x88, 0x0A, 0xA5, 0x1C, 0x59, 0x85, 0x62 } };

/* E88A19FB-A847-4E3D-9AE2-13C2B84F58A6 — string */
static const wmp_guid GUID_STRING_LITERAL_3 = { 0xe88a19fb, 0xa847, 0x4e3d, { 0x9A, 0xE2, 0x13, 0xC2, 0xB8, 0x4F, 0x58, 0xA6 } };

/* {CE3FB1D1-02AE-4A5F-A6E9-D9F1B4073E6C} — string */
static const wmp_guid GUID_STRING_LITERAL_4 = { 0xCE3FB1D1, 0x02AE, 0x4a5f, { 0xA6, 0xE9, 0xD9, 0xF1, 0xB4, 0x07, 0x3E, 0x6C } };

typedef struct wmp_guid_fact {
    const char *name;
    const wmp_guid *value;
    const unsigned char *packed;   /* 16 bytes, on-disk order */
    int         binary_confirmed;  /* 1 = found as bytes in the image */
} wmp_guid_fact;

#define WMP_GUID_COUNT 4u

static const unsigned char WMP_GUID_0_PACKED[16] = {
    0xA9, 0x49, 0x3D, 0xE3, 0x9C, 0x40, 0xCD, 0x4A, 0xA1, 0xF5, 0xDA, 0x7D,
    0xBB, 0x99, 0xEB, 0x30,
};
static const unsigned char WMP_GUID_1_PACKED[16] = {
    0xCB, 0x09, 0x1E, 0xE3, 0xD4, 0xB1, 0x2C, 0x4B, 0xB0, 0x88, 0x0A, 0xA5,
    0x1C, 0x59, 0x85, 0x62,
};
static const unsigned char WMP_GUID_2_PACKED[16] = {
    0xFB, 0x19, 0x8A, 0xE8, 0x47, 0xA8, 0x3D, 0x4E, 0x9A, 0xE2, 0x13, 0xC2,
    0xB8, 0x4F, 0x58, 0xA6,
};
static const unsigned char WMP_GUID_3_PACKED[16] = {
    0xD1, 0xB1, 0x3F, 0xCE, 0xAE, 0x02, 0x5F, 0x4A, 0xA6, 0xE9, 0xD9, 0xF1,
    0xB4, 0x07, 0x3E, 0x6C,
};

static const wmp_guid_fact WMP_GUIDS[WMP_GUID_COUNT ? WMP_GUID_COUNT : 1] = {
    { "E33D49A9-409C-4ACD-A1F5-DA7DBB99EB30", &GUID_STRING_LITERAL, WMP_GUID_0_PACKED, 0 },
    { "E31E09CB-B1D4-4B2C-B088-0AA51C598562", &GUID_STRING_LITERAL_2, WMP_GUID_1_PACKED, 0 },
    { "E88A19FB-A847-4E3D-9AE2-13C2B84F58A6", &GUID_STRING_LITERAL_3, WMP_GUID_2_PACKED, 0 },
    { "{CE3FB1D1-02AE-4A5F-A6E9-D9F1B4073E6C}", &GUID_STRING_LITERAL_4, WMP_GUID_3_PACKED, 0 },
};

#endif /* WMP_RECON_GUIDS_H */
