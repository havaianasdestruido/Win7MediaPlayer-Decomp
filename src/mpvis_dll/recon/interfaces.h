/* interfaces.h — vtables recovered from the type libraries in mpvis.DLL.
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

/* IToleranceVis = {9A85D909-C64A-4608-8DC4-76254D869553} (TKIND_DISPATCH, 10 recovered functions, first recovered slot 7) */
typedef struct IToleranceVis IToleranceVis;
typedef struct IToleranceVis_Vtbl {
    /* slots 0-2: IUnknown (standard) */
    wmp_hresult (*QueryInterface)(wmp_iunknown *self, const wmp_guid *riid, void **ppv);
    unsigned long (*AddRef)(wmp_iunknown *self);
    unsigned long (*Release)(wmp_iunknown *self);
    /* slots 3-6: IDispatch (standard) */
    wmp_hresult (*GetTypeInfoCount)(wmp_iunknown *self, unsigned int *pctinfo);
    wmp_hresult (*GetTypeInfo)(wmp_iunknown *self, unsigned int iTInfo, unsigned long lcid, void **ppTInfo);
    wmp_hresult (*GetIDsOfNames)(wmp_iunknown *self, const wmp_guid *riid, wchar_t **rgszNames, unsigned int cNames, unsigned long lcid, long *rgDispId);
    wmp_hresult (*Invoke)(wmp_iunknown *self, long dispIdMember, const wmp_guid *riid, unsigned long lcid, unsigned short wFlags, wmp_variant *pDispParams, wmp_variant *pVarResult, wmp_variant *pExcepInfo, unsigned int *puArgErr);
    /* slot   7  memid      200  INVOKE_PROPERTYGET   CC_STDCALL   foregroundColor */
    wmp_hresult (*foregroundColor_get)(void *self, wmp_bstr* pVal);
    /* slot   8  memid      200  INVOKE_PROPERTYPUT   CC_STDCALL   foregroundColor */
    wmp_hresult (*foregroundColor_put)(void *self, wmp_bstr _unnamed_);
    /* slot   9  memid      203  INVOKE_PROPERTYGET   CC_STDCALL   backgroundColor */
    wmp_hresult (*backgroundColor_get)(void *self, wmp_bstr* pVal);
    /* slot  10  memid      203  INVOKE_PROPERTYPUT   CC_STDCALL   backgroundColor */
    wmp_hresult (*backgroundColor_put)(void *self, wmp_bstr _unnamed_);
    /* slot  11  memid      204  INVOKE_PROPERTYGET   CC_STDCALL   miniMode */
    wmp_hresult (*miniMode_get)(void *self, wmp_bstr* pVal);
    /* slot  12  memid      204  INVOKE_PROPERTYPUT   CC_STDCALL   miniMode */
    wmp_hresult (*miniMode_put)(void *self, wmp_bstr _unnamed_);
    /* slot  13  memid      205  INVOKE_PROPERTYGET   CC_STDCALL   alpha */
    wmp_hresult (*alpha_get)(void *self, long* pVal);
    /* slot  14  memid      205  INVOKE_PROPERTYPUT   CC_STDCALL   alpha */
    wmp_hresult (*alpha_put)(void *self, long _unnamed_);
    /* slot  15  memid      201  INVOKE_FUNC          CC_STDCALL   GetProperty */
    wmp_hresult (*GetProperty)(void *self, wmp_bstr bstrName, wmp_variant* pvarProperty);
    /* slot  16  memid      202  INVOKE_FUNC          CC_STDCALL   SetProperty */
    wmp_hresult (*SetProperty)(void *self, wmp_bstr bstrName, wmp_variant* pvarProperty);
} IToleranceVis_Vtbl;

_Static_assert(sizeof(IToleranceVis_Vtbl) / sizeof(void *) >= 17,
                "IToleranceVis: recovered slots must cover the vtable prefix");

#endif /* WMP_RECON_INTERFACES_H */
