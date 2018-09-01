

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for OpenAIChainDataCollect.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.01.0622 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */



/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 500
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif /* __RPCNDR_H_VERSION__ */


#ifndef __OpenAIChain2DData2DCollect_h_h__
#define __OpenAIChain2DData2DCollect_h_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IOpenAIChainDataCollect_FWD_DEFINED__
#define __IOpenAIChainDataCollect_FWD_DEFINED__
typedef interface IOpenAIChainDataCollect IOpenAIChainDataCollect;

#endif 	/* __IOpenAIChainDataCollect_FWD_DEFINED__ */


#ifndef __COpenAIChainDataCollectDoc_FWD_DEFINED__
#define __COpenAIChainDataCollectDoc_FWD_DEFINED__

#ifdef __cplusplus
typedef class COpenAIChainDataCollectDoc COpenAIChainDataCollectDoc;
#else
typedef struct COpenAIChainDataCollectDoc COpenAIChainDataCollectDoc;
#endif /* __cplusplus */

#endif 	/* __COpenAIChainDataCollectDoc_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __OpenAIChainDataCollect_LIBRARY_DEFINED__
#define __OpenAIChainDataCollect_LIBRARY_DEFINED__

/* library OpenAIChainDataCollect */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_OpenAIChainDataCollect;

#ifndef __IOpenAIChainDataCollect_DISPINTERFACE_DEFINED__
#define __IOpenAIChainDataCollect_DISPINTERFACE_DEFINED__

/* dispinterface IOpenAIChainDataCollect */
/* [uuid] */ 


EXTERN_C const IID DIID_IOpenAIChainDataCollect;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("03779e8b-52bc-4ab9-bfcc-6199c0b1188b")
    IOpenAIChainDataCollect : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct IOpenAIChainDataCollectVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IOpenAIChainDataCollect * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IOpenAIChainDataCollect * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IOpenAIChainDataCollect * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            IOpenAIChainDataCollect * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            IOpenAIChainDataCollect * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            IOpenAIChainDataCollect * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            IOpenAIChainDataCollect * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        END_INTERFACE
    } IOpenAIChainDataCollectVtbl;

    interface IOpenAIChainDataCollect
    {
        CONST_VTBL struct IOpenAIChainDataCollectVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IOpenAIChainDataCollect_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IOpenAIChainDataCollect_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IOpenAIChainDataCollect_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define IOpenAIChainDataCollect_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define IOpenAIChainDataCollect_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define IOpenAIChainDataCollect_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define IOpenAIChainDataCollect_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* __IOpenAIChainDataCollect_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_COpenAIChainDataCollectDoc;

#ifdef __cplusplus

class DECLSPEC_UUID("0f310c6f-0376-4e1d-a0d0-84ae12f48e02")
COpenAIChainDataCollectDoc;
#endif
#endif /* __OpenAIChainDataCollect_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


