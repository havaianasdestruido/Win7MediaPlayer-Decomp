/* wmp_compat.h — platform-neutral COM-ish types for the reconstruction harness.
 *
 * Part of the clean-room reconstruction of the Windows Media Player 12 for
 * Windows 7 binary set.  These typedefs exist so that the *recovered* type
 * surface (enums, vtables, GUIDs) can be expressed and compile-checked without
 * a Windows SDK.  They are not claimed to be Microsoft's headers.
 */
#ifndef WMP_RECON_COMPAT_H
#define WMP_RECON_COMPAT_H

#include <stddef.h>

typedef long                 wmp_hresult;      /* HRESULT: 32-bit on Win64 */
typedef unsigned long        wmp_ulong;
typedef void                *wmp_handle;
typedef wchar_t             *wmp_bstr;         /* BSTR */
typedef short                wmp_variant_bool; /* VARIANT_BOOL */
typedef struct wmp_variant   { unsigned char raw[16]; } wmp_variant;  /* opaque here */
typedef struct wmp_iunknown  wmp_iunknown;     /* COM IUnknown, opaque */
typedef struct wmp_safearray wmp_safearray;    /* SAFEARRAY, opaque */

#define WMP_S_OK               ((wmp_hresult)0)
#define WMP_E_NOTIMPL          ((wmp_hresult)0x80004001L)
#define WMP_E_FAIL             ((wmp_hresult)0x80004005L)

typedef struct wmp_guid {
    unsigned long  Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char  Data4[8];
} wmp_guid;

#endif /* WMP_RECON_COMPAT_H */
