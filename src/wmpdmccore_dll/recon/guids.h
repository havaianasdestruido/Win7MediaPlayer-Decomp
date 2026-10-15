/* guids.h — every COM GUID/UUID recovered from WMPDMCCore.dll.
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

/* No GUIDs were recovered from this module. */
typedef struct wmp_guid_fact {
    const char *name;
    const wmp_guid *value;
    const unsigned char *packed;   /* 16 bytes, on-disk order */
    int         binary_confirmed;  /* 1 = found as bytes in the image */
} wmp_guid_fact;

#define WMP_GUID_COUNT 0u


static const wmp_guid_fact WMP_GUIDS[WMP_GUID_COUNT ? WMP_GUID_COUNT : 1] = {
    { "", 0, 0, 0 },
};

#endif /* WMP_RECON_GUIDS_H */
