/* interfaces.h — vtables recovered from the type libraries in wmpnssci.dll.
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

/* INSSProperty = {B27C1EAC-B909-462C-A051-F85DA63D616B} (TKIND_DISPATCH, 2 recovered functions, first recovered slot 7) */
typedef struct INSSProperty INSSProperty;
typedef struct INSSProperty_Vtbl {
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
    wmp_hresult (*Name_get)(void *self, wmp_bstr* pbstrResult);
    /* slot   8  memid        0  INVOKE_PROPERTYGET   CC_STDCALL   Value */
    wmp_hresult (*Value_get)(void *self, wmp_variant* pvResult);
} INSSProperty_Vtbl;

_Static_assert(sizeof(INSSProperty_Vtbl) / sizeof(void *) >= 9,
                "INSSProperty: recovered slots must cover the vtable prefix");

/* INSSProperties = {DF2F700E-48CC-40CE-BBF7-73187286C42D} (TKIND_DISPATCH, 3 recovered functions, first recovered slot 7) */
typedef struct INSSProperties INSSProperties;
typedef struct INSSProperties_Vtbl {
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
    wmp_hresult (*Item_get)(void *self, long Index, INSSProperty** ppResult);
    /* slot   8  memid        1  INVOKE_PROPERTYGET   CC_STDCALL   Count */
    wmp_hresult (*Count_get)(void *self, long* plResult);
    /* slot   9  memid        2  INVOKE_FUNC          CC_STDCALL   GetProperty */
    wmp_hresult (*GetProperty)(void *self, wmp_bstr Name, INSSProperty** ppResult);
} INSSProperties_Vtbl;

_Static_assert(sizeof(INSSProperties_Vtbl) / sizeof(void *) >= 10,
                "INSSProperties: recovered slots must cover the vtable prefix");

/* INSSDevice = {055B0E0E-3113-4CAE-9EEE-6E63211BEE37} (TKIND_DISPATCH, 7 recovered functions, first recovered slot 7) */
typedef struct INSSDevice INSSDevice;
typedef struct INSSDevice_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid        1  INVOKE_PROPERTYGET   CC_STDCALL   MACAddress */
    wmp_hresult (*MACAddress_get)(void *self, wmp_bstr* pbstrResult);
    /* slot   8  memid        2  INVOKE_PROPERTYGET   CC_STDCALL   Authorization */
    wmp_hresult (*Authorization_get)(void *self, AuthorizationStatus* peResult);
    /* slot   9  memid        2  INVOKE_PROPERTYPUT   CC_STDCALL   Authorization */
    wmp_hresult (*Authorization_put)(void *self, AuthorizationStatus _unnamed_);
    /* slot  10  memid        3  INVOKE_PROPERTYGET   CC_STDCALL   Disabled */
    wmp_hresult (*Disabled_get)(void *self, wmp_variant_bool* pbResult);
    /* slot  11  memid        3  INVOKE_PROPERTYPUT   CC_STDCALL   Disabled */
    wmp_hresult (*Disabled_put)(void *self, wmp_variant_bool _unnamed_);
    /* slot  12  memid        4  INVOKE_PROPERTYGET   CC_STDCALL   Properties */
    wmp_hresult (*Properties_get)(void *self, INSSProperties** ppResult);
    /* slot  13  memid        5  INVOKE_FUNC          CC_STDCALL   ShowDevicePropertyPage */
    wmp_hresult (*ShowDevicePropertyPage)(void *self, long long hWnd);
} INSSDevice_Vtbl;

_Static_assert(sizeof(INSSDevice_Vtbl) / sizeof(void *) >= 14,
                "INSSDevice: recovered slots must cover the vtable prefix");

/* INSSDevices = {73DE3C35-FAF7-4934-B337-C260D5926858} (TKIND_DISPATCH, 3 recovered functions, first recovered slot 7) */
typedef struct INSSDevices INSSDevices;
typedef struct INSSDevices_Vtbl {
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
    wmp_hresult (*Item_get)(void *self, long Index, INSSDevice** ppResult);
    /* slot   8  memid        1  INVOKE_PROPERTYGET   CC_STDCALL   Count */
    wmp_hresult (*Count_get)(void *self, long* plResult);
    /* slot   9  memid        2  INVOKE_FUNC          CC_STDCALL   GetDevice */
    wmp_hresult (*GetDevice)(void *self, wmp_bstr MACAddress, INSSDevice** ppResult);
} INSSDevices_Vtbl;

_Static_assert(sizeof(INSSDevices_Vtbl) / sizeof(void *) >= 10,
                "INSSDevices: recovered slots must cover the vtable prefix");

/* INSSNotify = {ADC0EDF5-FE64-48FF-A711-CB4AB0F5C2CA} (TKIND_INTERFACE, 1 recovered functions, first recovered slot 3) */
typedef struct INSSNotify INSSNotify;
typedef struct INSSNotify_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slot   3  memid 1610678272  INVOKE_FUNC          CC_STDCALL   Notify */
    wmp_hresult (*Notify)(void *self, EventReason Reason, wmp_bstr ID, wmp_variant* Data);
} INSSNotify_Vtbl;

_Static_assert(sizeof(INSSNotify_Vtbl) / sizeof(void *) >= 4,
                "INSSNotify: recovered slots must cover the vtable prefix");

/* INSSManager = {204F4950-212A-414F-9B27-73BD87423F25} (TKIND_DISPATCH, 9 recovered functions, first recovered slot 7) */
typedef struct INSSManager INSSManager;
typedef struct INSSManager_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid        1  INVOKE_PROPERTYGET   CC_STDCALL   AllowByDefault */
    wmp_hresult (*AllowByDefault_get)(void *self, wmp_variant_bool* pbResult);
    /* slot   8  memid        1  INVOKE_PROPERTYPUT   CC_STDCALL   AllowByDefault */
    wmp_hresult (*AllowByDefault_put)(void *self, wmp_variant_bool _unnamed_);
    /* slot   9  memid        2  INVOKE_PROPERTYGET   CC_STDCALL   Status */
    wmp_hresult (*Status_get)(void *self, ServiceStatus* peResult);
    /* slot  10  memid        3  INVOKE_FUNC          CC_STDCALL   InitializeLibrarySharing */
    wmp_hresult (*InitializeLibrarySharing)(void *self, wmp_bstr UserSID);
    /* slot  11  memid        4  INVOKE_FUNC          CC_STDCALL   GetAllDevices */
    wmp_hresult (*GetAllDevices)(void *self, INSSDevices** ppResult);
    /* slot  12  memid        5  INVOKE_FUNC          CC_STDCALL   GetDevices */
    wmp_hresult (*GetDevices)(void *self, AuthorizationStatus Authorization, INSSDevices** ppResult);
    /* slot  13  memid        6  INVOKE_FUNC          CC_STDCALL   RemoveDevice */
    wmp_hresult (*RemoveDevice)(void *self, wmp_bstr MACAddress);
    /* slot  14  memid        7  INVOKE_FUNC          CC_STDCALL   Advise */
    wmp_hresult (*Advise)(void *self, struct wmp_iunknown* DeviceNotify, wmp_bstr* pbstrResult);
    /* slot  15  memid        8  INVOKE_FUNC          CC_STDCALL   Unadvise */
    wmp_hresult (*Unadvise)(void *self, wmp_bstr Cookie);
} INSSManager_Vtbl;

_Static_assert(sizeof(INSSManager_Vtbl) / sizeof(void *) >= 16,
                "INSSManager: recovered slots must cover the vtable prefix");

#endif /* WMP_RECON_INTERFACES_H */
