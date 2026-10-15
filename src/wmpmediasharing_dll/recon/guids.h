/* guids.h — every COM GUID/UUID recovered from WMPMediaSharing.dll.
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

/* {01F5F85E-0A81-40DA-A7C8-21EF3AF8440C} — typelib @0x11a8 */
static const wmp_guid GUID_IWINDOWSMEDIALIBRARYSHARINGSERVICES = { 0x01F5F85E, 0x0A81, 0x40DA, { 0xA7, 0xC8, 0x21, 0xEF, 0x3A, 0xF8, 0x44, 0x0C } };

/* {1803F9D6-FE6D-4546-BF5B-992FE8EC12D1} — typelib @0x18c0 */
static const wmp_guid GUID_IWINDOWSMEDIALIBRARYSHARINGDEVICES = { 0x1803F9D6, 0xFE6D, 0x4546, { 0xBF, 0x5B, 0x99, 0x2F, 0xE8, 0xEC, 0x12, 0xD1 } };

/* {3DCCC293-4FD9-4191-A25B-8E57C5D27BD4} — typelib @0x25df4 */
static const wmp_guid GUID_IWINDOWSMEDIALIBRARYSHARINGDEVICE = { 0x3DCCC293, 0x4FD9, 0x4191, { 0xA2, 0x5B, 0x8E, 0x57, 0xC5, 0xD2, 0x7B, 0xD4 } };

/* {81E26927-7A7D-40A7-81D4-BDDC02960E3E} — typelib @0x25d94 */
static const wmp_guid GUID_IWINDOWSMEDIALIBRARYSHARINGDEVICEPROPERTY = { 0x81E26927, 0x7A7D, 0x40A7, { 0x81, 0xD4, 0xBD, 0xDC, 0x02, 0x96, 0x0E, 0x3E } };

/* {AD581B00-7B64-4E59-A38D-D2C5BF51DDB3} — typelib @0x1188 */
static const wmp_guid GUID_WINDOWSMEDIALIBRARYSHARINGSERVICES = { 0xAD581B00, 0x7B64, 0x4E59, { 0xA3, 0x8D, 0xD2, 0xC5, 0xBF, 0x51, 0xDD, 0xB3 } };

/* {C21E9CE5-B317-463B-A1B1-B5E36EED59D0} — typelib @0x10f0 */
static const wmp_guid GUID__LIBRARY_ = { 0xC21E9CE5, 0xB317, 0x463B, { 0xA1, 0xB1, 0xB5, 0xE3, 0x6E, 0xED, 0x59, 0xD0 } };

/* {C4623214-6B06-40C5-A623-B2FF4C076BFD} — typelib @0x25ddc */
static const wmp_guid GUID_IWINDOWSMEDIALIBRARYSHARINGDEVICEPROPERTIES = { 0xC4623214, 0x6B06, 0x40C5, { 0xA6, 0x23, 0xB2, 0xFF, 0x4C, 0x07, 0x6B, 0xFD } };

typedef struct wmp_guid_fact {
    const char *name;
    const wmp_guid *value;
    const unsigned char *packed;   /* 16 bytes, on-disk order */
    int         binary_confirmed;  /* 1 = found as bytes in the image */
} wmp_guid_fact;

#define WMP_GUID_COUNT 7u

static const unsigned char WMP_GUID_0_PACKED[16] = {
    0x5E, 0xF8, 0xF5, 0x01, 0x81, 0x0A, 0xDA, 0x40, 0xA7, 0xC8, 0x21, 0xEF,
    0x3A, 0xF8, 0x44, 0x0C,
};
static const unsigned char WMP_GUID_1_PACKED[16] = {
    0xD6, 0xF9, 0x03, 0x18, 0x6D, 0xFE, 0x46, 0x45, 0xBF, 0x5B, 0x99, 0x2F,
    0xE8, 0xEC, 0x12, 0xD1,
};
static const unsigned char WMP_GUID_2_PACKED[16] = {
    0x93, 0xC2, 0xCC, 0x3D, 0xD9, 0x4F, 0x91, 0x41, 0xA2, 0x5B, 0x8E, 0x57,
    0xC5, 0xD2, 0x7B, 0xD4,
};
static const unsigned char WMP_GUID_3_PACKED[16] = {
    0x27, 0x69, 0xE2, 0x81, 0x7D, 0x7A, 0xA7, 0x40, 0x81, 0xD4, 0xBD, 0xDC,
    0x02, 0x96, 0x0E, 0x3E,
};
static const unsigned char WMP_GUID_4_PACKED[16] = {
    0x00, 0x1B, 0x58, 0xAD, 0x64, 0x7B, 0x59, 0x4E, 0xA3, 0x8D, 0xD2, 0xC5,
    0xBF, 0x51, 0xDD, 0xB3,
};
static const unsigned char WMP_GUID_5_PACKED[16] = {
    0xE5, 0x9C, 0x1E, 0xC2, 0x17, 0xB3, 0x3B, 0x46, 0xA1, 0xB1, 0xB5, 0xE3,
    0x6E, 0xED, 0x59, 0xD0,
};
static const unsigned char WMP_GUID_6_PACKED[16] = {
    0x14, 0x32, 0x62, 0xC4, 0x06, 0x6B, 0xC5, 0x40, 0xA6, 0x23, 0xB2, 0xFF,
    0x4C, 0x07, 0x6B, 0xFD,
};

static const wmp_guid_fact WMP_GUIDS[WMP_GUID_COUNT ? WMP_GUID_COUNT : 1] = {
    { "{01F5F85E-0A81-40DA-A7C8-21EF3AF8440C}", &GUID_IWINDOWSMEDIALIBRARYSHARINGSERVICES, WMP_GUID_0_PACKED, 1 },
    { "{1803F9D6-FE6D-4546-BF5B-992FE8EC12D1}", &GUID_IWINDOWSMEDIALIBRARYSHARINGDEVICES, WMP_GUID_1_PACKED, 1 },
    { "{3DCCC293-4FD9-4191-A25B-8E57C5D27BD4}", &GUID_IWINDOWSMEDIALIBRARYSHARINGDEVICE, WMP_GUID_2_PACKED, 1 },
    { "{81E26927-7A7D-40A7-81D4-BDDC02960E3E}", &GUID_IWINDOWSMEDIALIBRARYSHARINGDEVICEPROPERTY, WMP_GUID_3_PACKED, 1 },
    { "{AD581B00-7B64-4E59-A38D-D2C5BF51DDB3}", &GUID_WINDOWSMEDIALIBRARYSHARINGSERVICES, WMP_GUID_4_PACKED, 1 },
    { "{C21E9CE5-B317-463B-A1B1-B5E36EED59D0}", &GUID__LIBRARY_, WMP_GUID_5_PACKED, 1 },
    { "{C4623214-6B06-40C5-A623-B2FF4C076BFD}", &GUID_IWINDOWSMEDIALIBRARYSHARINGDEVICEPROPERTIES, WMP_GUID_6_PACKED, 1 },
};

#endif /* WMP_RECON_GUIDS_H */
