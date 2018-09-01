

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.01.0622 */
/* at Tue Jan 19 11:14:07 2038
 */
/* Compiler settings for OpenAIChainDataCollectHandlers.idl:
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

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __OpenAIChainDataCollectHandlers_i_h__
#define __OpenAIChainDataCollectHandlers_i_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __IPreview_FWD_DEFINED__
#define __IPreview_FWD_DEFINED__
typedef interface IPreview IPreview;

#endif 	/* __IPreview_FWD_DEFINED__ */


#ifndef __IThumbnail_FWD_DEFINED__
#define __IThumbnail_FWD_DEFINED__
typedef interface IThumbnail IThumbnail;

#endif 	/* __IThumbnail_FWD_DEFINED__ */


#ifndef __ISearch_FWD_DEFINED__
#define __ISearch_FWD_DEFINED__
typedef interface ISearch ISearch;

#endif 	/* __ISearch_FWD_DEFINED__ */


#ifndef __Preview_FWD_DEFINED__
#define __Preview_FWD_DEFINED__

#ifdef __cplusplus
typedef class Preview Preview;
#else
typedef struct Preview Preview;
#endif /* __cplusplus */

#endif 	/* __Preview_FWD_DEFINED__ */


#ifndef __Thumbnail_FWD_DEFINED__
#define __Thumbnail_FWD_DEFINED__

#ifdef __cplusplus
typedef class Thumbnail Thumbnail;
#else
typedef struct Thumbnail Thumbnail;
#endif /* __cplusplus */

#endif 	/* __Thumbnail_FWD_DEFINED__ */


#ifndef __Search_FWD_DEFINED__
#define __Search_FWD_DEFINED__

#ifdef __cplusplus
typedef class Search Search;
#else
typedef struct Search Search;
#endif /* __cplusplus */

#endif 	/* __Search_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"
#include "shobjidl.h"
#include "thumbcache.h"
#include "filter.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __IPreview_INTERFACE_DEFINED__
#define __IPreview_INTERFACE_DEFINED__

/* interface IPreview */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IPreview;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("965e56b6-de11-461c-9bbb-a09809464a0f")
    IPreview : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IPreviewVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IPreview * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IPreview * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IPreview * This);
        
        END_INTERFACE
    } IPreviewVtbl;

    interface IPreview
    {
        CONST_VTBL struct IPreviewVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IPreview_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IPreview_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IPreview_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IPreview_INTERFACE_DEFINED__ */


#ifndef __IThumbnail_INTERFACE_DEFINED__
#define __IThumbnail_INTERFACE_DEFINED__

/* interface IThumbnail */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_IThumbnail;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("b924b036-f605-4fea-8e92-fb9d60ddcf1e")
    IThumbnail : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct IThumbnailVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            IThumbnail * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            IThumbnail * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            IThumbnail * This);
        
        END_INTERFACE
    } IThumbnailVtbl;

    interface IThumbnail
    {
        CONST_VTBL struct IThumbnailVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define IThumbnail_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define IThumbnail_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define IThumbnail_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __IThumbnail_INTERFACE_DEFINED__ */


#ifndef __ISearch_INTERFACE_DEFINED__
#define __ISearch_INTERFACE_DEFINED__

/* interface ISearch */
/* [unique][uuid][object] */ 


EXTERN_C const IID IID_ISearch;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("e9131175-4467-4380-8b1f-4e322a4cf3a7")
    ISearch : public IUnknown
    {
    public:
    };
    
    
#else 	/* C style interface */

    typedef struct ISearchVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            ISearch * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            ISearch * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            ISearch * This);
        
        END_INTERFACE
    } ISearchVtbl;

    interface ISearch
    {
        CONST_VTBL struct ISearchVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define ISearch_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define ISearch_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define ISearch_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __ISearch_INTERFACE_DEFINED__ */



#ifndef __OpenAIChainDataCollectHandlersLib_LIBRARY_DEFINED__
#define __OpenAIChainDataCollectHandlersLib_LIBRARY_DEFINED__

/* library OpenAIChainDataCollectHandlersLib */
/* [version][uuid] */ 


EXTERN_C const IID LIBID_OpenAIChainDataCollectHandlersLib;

EXTERN_C const CLSID CLSID_Preview;

#ifdef __cplusplus

class DECLSPEC_UUID("7332bc04-880f-477c-b476-8742b0a924ef")
Preview;
#endif

EXTERN_C const CLSID CLSID_Thumbnail;

#ifdef __cplusplus

class DECLSPEC_UUID("52f43a2c-4a0e-493d-8e41-ca537bd0ee85")
Thumbnail;
#endif

EXTERN_C const CLSID CLSID_Search;

#ifdef __cplusplus

class DECLSPEC_UUID("b6ac930c-7e2c-4f25-9dec-e63c72453b05")
Search;
#endif
#endif /* __OpenAIChainDataCollectHandlersLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


