/* guids.h — every COM GUID/UUID recovered from wmpnetwk.exe.
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

/* {4250D219-06C7-4957-AEC3-6DA09B84BA22} — typelib @0x1db28 */
static const wmp_guid GUID_IUPNPSERVICE_MEDIARECEIVERREGISTRAR = { 0x4250D219, 0x06C7, 0x4957, { 0xAE, 0xC3, 0x6D, 0xA0, 0x9B, 0x84, 0xBA, 0x22 } };

/* {73C381A8-548C-49F8-8AD3-C845D12D3C22} — typelib @0x1daf8 */
static const wmp_guid GUID__LIBRARY_ = { 0x73C381A8, 0x548C, 0x49F8, { 0x8A, 0xD3, 0xC8, 0x45, 0xD1, 0x2D, 0x3C, 0x22 } };

/* {84535BBA-A68E-4839-82CF-2DCCAB12910A} — typelib @0x1db18 */
static const wmp_guid GUID_IUPNPSERVICE_CONTENTDIRECTORY = { 0x84535BBA, 0xA68E, 0x4839, { 0x82, 0xCF, 0x2D, 0xCC, 0xAB, 0x12, 0x91, 0x0A } };

/* {B78EA491-BC9E-446D-9A46-57C6D9D0FC7A} — typelib @0x1db08 */
static const wmp_guid GUID_IUPNPSERVICE_CONNECTIONMANAGER = { 0xB78EA491, 0xBC9E, 0x446D, { 0x9A, 0x46, 0x57, 0xC6, 0xD9, 0xD0, 0xFC, 0x7A } };

typedef struct wmp_guid_fact {
    const char *name;
    const wmp_guid *value;
    const unsigned char *packed;   /* 16 bytes, on-disk order */
    int         binary_confirmed;  /* 1 = found as bytes in the image */
} wmp_guid_fact;

#define WMP_GUID_COUNT 4u

static const unsigned char WMP_GUID_0_PACKED[16] = {
    0x19, 0xD2, 0x50, 0x42, 0xC7, 0x06, 0x57, 0x49, 0xAE, 0xC3, 0x6D, 0xA0,
    0x9B, 0x84, 0xBA, 0x22,
};
static const unsigned char WMP_GUID_1_PACKED[16] = {
    0xA8, 0x81, 0xC3, 0x73, 0x8C, 0x54, 0xF8, 0x49, 0x8A, 0xD3, 0xC8, 0x45,
    0xD1, 0x2D, 0x3C, 0x22,
};
static const unsigned char WMP_GUID_2_PACKED[16] = {
    0xBA, 0x5B, 0x53, 0x84, 0x8E, 0xA6, 0x39, 0x48, 0x82, 0xCF, 0x2D, 0xCC,
    0xAB, 0x12, 0x91, 0x0A,
};
static const unsigned char WMP_GUID_3_PACKED[16] = {
    0x91, 0xA4, 0x8E, 0xB7, 0x9E, 0xBC, 0x6D, 0x44, 0x9A, 0x46, 0x57, 0xC6,
    0xD9, 0xD0, 0xFC, 0x7A,
};

static const wmp_guid_fact WMP_GUIDS[WMP_GUID_COUNT ? WMP_GUID_COUNT : 1] = {
    { "{4250D219-06C7-4957-AEC3-6DA09B84BA22}", &GUID_IUPNPSERVICE_MEDIARECEIVERREGISTRAR, WMP_GUID_0_PACKED, 1 },
    { "{73C381A8-548C-49F8-8AD3-C845D12D3C22}", &GUID__LIBRARY_, WMP_GUID_1_PACKED, 1 },
    { "{84535BBA-A68E-4839-82CF-2DCCAB12910A}", &GUID_IUPNPSERVICE_CONTENTDIRECTORY, WMP_GUID_2_PACKED, 1 },
    { "{B78EA491-BC9E-446D-9A46-57C6D9D0FC7A}", &GUID_IUPNPSERVICE_CONNECTIONMANAGER, WMP_GUID_3_PACKED, 1 },
};

#endif /* WMP_RECON_GUIDS_H */
