/* interfaces.h — vtables recovered from the type libraries in WMPMediaSharing.dll.
 *
 * Each structure lists the vtable in slot order exactly as the type library
 * numbers it.  Slots 0-2 are IUnknown and (for dispinterfaces) slots 3-6 are
 * IDispatch; those are standard and are reproduced here for completeness, not
 * recovered from the library.  Every function below that point is a record of
 * the shipped library: name, memid, invocation kind, calling convention and the
 * rendered parameter list.  A parameter whose type could not be rendered from
 * the library's TYPEDESC is ``void *`` and carries a comment, and the total is
 * reported in analysis/report/validation.md.
 */
#ifndef WMP_RECON_INTERFACES_H
#define WMP_RECON_INTERFACES_H

#include "wmp_compat.h"

/* IWindowsMediaLibrarySharingDeviceProperty = {81E26927-7A7D-40A7-81D4-BDDC02960E3E} (TKIND_INTERFACE, 2 recovered functions, first recovered slot 7) */
typedef struct IWindowsMediaLibrarySharingDeviceProperty IWindowsMediaLibrarySharingDeviceProperty;
typedef struct IWindowsMediaLibrarySharingDeviceProperty_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid        1  INVOKE_PROPERTYGET   CC_STDCALL   Name */
    wmp_hresult (*Name_get)(void *self, wmp_bstr* Name);
    /* slot   8  memid        0  INVOKE_PROPERTYGET   CC_STDCALL   Value */
    wmp_hresult (*Value_get)(void *self, wmp_variant* Value);
} IWindowsMediaLibrarySharingDeviceProperty_Vtbl;

_Static_assert(sizeof(IWindowsMediaLibrarySharingDeviceProperty_Vtbl) / sizeof(void *) >= 9,
                "IWindowsMediaLibrarySharingDeviceProperty: recovered slots must cover the vtable prefix");

/* IWindowsMediaLibrarySharingDeviceProperties = {C4623214-6B06-40C5-A623-B2FF4C076BFD} (TKIND_INTERFACE, 3 recovered functions, first recovered slot 7) */
typedef struct IWindowsMediaLibrarySharingDeviceProperties IWindowsMediaLibrarySharingDeviceProperties;
typedef struct IWindowsMediaLibrarySharingDeviceProperties_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid        0  INVOKE_PROPERTYGET   CC_STDCALL   Item */
    wmp_hresult (*Item_get)(void *self, long index, IWindowsMediaLibrarySharingDeviceProperty** property);
    /* slot   8  memid        1  INVOKE_PROPERTYGET   CC_STDCALL   Count */
    wmp_hresult (*Count_get)(void *self, long* Count);
    /* slot   9  memid        2  INVOKE_FUNC          CC_STDCALL   GetProperty */
    wmp_hresult (*GetProperty)(void *self, wmp_bstr Name, IWindowsMediaLibrarySharingDeviceProperty** property);
} IWindowsMediaLibrarySharingDeviceProperties_Vtbl;

_Static_assert(sizeof(IWindowsMediaLibrarySharingDeviceProperties_Vtbl) / sizeof(void *) >= 10,
                "IWindowsMediaLibrarySharingDeviceProperties: recovered slots must cover the vtable prefix");

/* IWindowsMediaLibrarySharingDevice = {3DCCC293-4FD9-4191-A25B-8E57C5D27BD4} (TKIND_INTERFACE, 4 recovered functions, first recovered slot 7) */
typedef struct IWindowsMediaLibrarySharingDevice IWindowsMediaLibrarySharingDevice;
typedef struct IWindowsMediaLibrarySharingDevice_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid        1  INVOKE_PROPERTYGET   CC_STDCALL   DeviceID */
    wmp_hresult (*DeviceID_get)(void *self, wmp_bstr* DeviceID);
    /* slot   8  memid        2  INVOKE_PROPERTYGET   CC_STDCALL   Authorization */
    wmp_hresult (*Authorization_get)(void *self, WindowsMediaLibrarySharingDeviceAuthorizationStatus* Authorization);
    /* slot   9  memid        2  INVOKE_PROPERTYPUT   CC_STDCALL   Authorization */
    wmp_hresult (*Authorization_put)(void *self, WindowsMediaLibrarySharingDeviceAuthorizationStatus _unnamed_);
    /* slot  10  memid        3  INVOKE_PROPERTYGET   CC_STDCALL   Properties */
    wmp_hresult (*Properties_get)(void *self, IWindowsMediaLibrarySharingDeviceProperties** deviceProperties);
} IWindowsMediaLibrarySharingDevice_Vtbl;

_Static_assert(sizeof(IWindowsMediaLibrarySharingDevice_Vtbl) / sizeof(void *) >= 11,
                "IWindowsMediaLibrarySharingDevice: recovered slots must cover the vtable prefix");

/* IWindowsMediaLibrarySharingDevices = {1803F9D6-FE6D-4546-BF5B-992FE8EC12D1} (TKIND_INTERFACE, 3 recovered functions, first recovered slot 7) */
typedef struct IWindowsMediaLibrarySharingDevices IWindowsMediaLibrarySharingDevices;
typedef struct IWindowsMediaLibrarySharingDevices_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid        0  INVOKE_PROPERTYGET   CC_STDCALL   Item */
    wmp_hresult (*Item_get)(void *self, long index, IWindowsMediaLibrarySharingDevice** device);
    /* slot   8  memid        1  INVOKE_PROPERTYGET   CC_STDCALL   Count */
    wmp_hresult (*Count_get)(void *self, long* Count);
    /* slot   9  memid        2  INVOKE_FUNC          CC_STDCALL   GetDevice */
    wmp_hresult (*GetDevice)(void *self, wmp_bstr DeviceID, IWindowsMediaLibrarySharingDevice** device);
} IWindowsMediaLibrarySharingDevices_Vtbl;

_Static_assert(sizeof(IWindowsMediaLibrarySharingDevices_Vtbl) / sizeof(void *) >= 10,
                "IWindowsMediaLibrarySharingDevices: recovered slots must cover the vtable prefix");

/* IWindowsMediaLibrarySharingServices = {01F5F85E-0A81-40DA-A7C8-21EF3AF8440C} (TKIND_INTERFACE, 19 recovered functions, first recovered slot 7) */
typedef struct IWindowsMediaLibrarySharingServices IWindowsMediaLibrarySharingServices;
typedef struct IWindowsMediaLibrarySharingServices_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid 1610743808  INVOKE_FUNC          CC_STDCALL   showShareMediaCPL */
    wmp_hresult (*showShareMediaCPL)(void *self, wmp_bstr device);
    /* slot   8  memid 1610743809  INVOKE_PROPERTYGET   CC_STDCALL   userHomeMediaSharingState */
    wmp_hresult (*userHomeMediaSharingState_get)(void *self, wmp_variant_bool* sharingEnabled);
    /* slot   9  memid 1610743809  INVOKE_PROPERTYPUT   CC_STDCALL   userHomeMediaSharingState */
    wmp_hresult (*userHomeMediaSharingState_put)(void *self, wmp_variant_bool _unnamed_);
    /* slot  10  memid 1610743811  INVOKE_PROPERTYGET   CC_STDCALL   userHomeMediaSharingLibraryName */
    wmp_hresult (*userHomeMediaSharingLibraryName_get)(void *self, wmp_bstr* libraryName);
    /* slot  11  memid 1610743811  INVOKE_PROPERTYPUT   CC_STDCALL   userHomeMediaSharingLibraryName */
    wmp_hresult (*userHomeMediaSharingLibraryName_put)(void *self, wmp_bstr _unnamed_);
    /* slot  12  memid 1610743813  INVOKE_PROPERTYGET   CC_STDCALL   computerHomeMediaSharingAllowedState */
    wmp_hresult (*computerHomeMediaSharingAllowedState_get)(void *self, wmp_variant_bool* sharingAllowed);
    /* slot  13  memid 1610743813  INVOKE_PROPERTYPUT   CC_STDCALL   computerHomeMediaSharingAllowedState */
    wmp_hresult (*computerHomeMediaSharingAllowedState_put)(void *self, wmp_variant_bool _unnamed_);
    /* slot  14  memid 1610743815  INVOKE_PROPERTYGET   CC_STDCALL   userInternetMediaSharingState */
    wmp_hresult (*userInternetMediaSharingState_get)(void *self, wmp_variant_bool* sharingEnabled);
    /* slot  15  memid 1610743815  INVOKE_PROPERTYPUT   CC_STDCALL   userInternetMediaSharingState */
    wmp_hresult (*userInternetMediaSharingState_put)(void *self, wmp_variant_bool _unnamed_);
    /* slot  16  memid 1610743817  INVOKE_PROPERTYGET   CC_STDCALL   computerInternetMediaSharingAllowedState */
    wmp_hresult (*computerInternetMediaSharingAllowedState_get)(void *self, wmp_variant_bool* sharingAllowed);
    /* slot  17  memid 1610743817  INVOKE_PROPERTYPUT   CC_STDCALL   computerInternetMediaSharingAllowedState */
    wmp_hresult (*computerInternetMediaSharingAllowedState_put)(void *self, wmp_variant_bool _unnamed_);
    /* slot  18  memid 1610743819  INVOKE_PROPERTYGET   CC_STDCALL   internetMediaSharingSecurityGroup */
    wmp_hresult (*internetMediaSharingSecurityGroup_get)(void *self, wmp_bstr* securityGroup);
    /* slot  19  memid 1610743819  INVOKE_PROPERTYPUT   CC_STDCALL   internetMediaSharingSecurityGroup */
    wmp_hresult (*internetMediaSharingSecurityGroup_put)(void *self, wmp_bstr _unnamed_);
    /* slot  20  memid 1610743821  INVOKE_PROPERTYGET   CC_STDCALL   allowSharingToAllDevices */
    wmp_hresult (*allowSharingToAllDevices_get)(void *self, wmp_variant_bool* sharingEnabled);
    /* slot  21  memid 1610743821  INVOKE_PROPERTYPUT   CC_STDCALL   allowSharingToAllDevices */
    wmp_hresult (*allowSharingToAllDevices_put)(void *self, wmp_variant_bool _unnamed_);
    /* slot  22  memid 1610743823  INVOKE_FUNC          CC_STDCALL   setDefaultAuthorization */
    wmp_hresult (*setDefaultAuthorization)(void *self, wmp_bstr MACAddresses, wmp_bstr friendlyName, wmp_variant_bool Authorization);
    /* slot  23  memid 1610743824  INVOKE_FUNC          CC_STDCALL   setAuthorizationState */
    wmp_hresult (*setAuthorizationState)(void *self, wmp_bstr MACAddress, wmp_variant_bool authorizationState);
    /* slot  24  memid 1610743825  INVOKE_FUNC          CC_STDCALL   getAllDevices */
    wmp_hresult (*getAllDevices)(void *self, IWindowsMediaLibrarySharingDevices** devices);
    /* slot  25  memid 1610743826  INVOKE_PROPERTYGET   CC_STDCALL   customSettingsApplied */
    wmp_hresult (*customSettingsApplied_get)(void *self, wmp_variant_bool* customSettingsApplied);
} IWindowsMediaLibrarySharingServices_Vtbl;

_Static_assert(sizeof(IWindowsMediaLibrarySharingServices_Vtbl) / sizeof(void *) >= 26,
                "IWindowsMediaLibrarySharingServices: recovered slots must cover the vtable prefix");

#endif /* WMP_RECON_INTERFACES_H */
