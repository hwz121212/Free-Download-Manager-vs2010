

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0595 */
/* at Mon Apr 28 18:11:01 2014
 */
/* Compiler settings for c:/builds/moz2_slave/rel-m-beta-xr_w32_bld-00000000/build/other-licenses/ia2/AccessibleEventId.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0595 
    protocol : dce , ms_ext, app_config, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __AccessibleEventId_h__
#define __AccessibleEventId_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifdef __cplusplus
extern "C"{
#endif 


/* interface __MIDL_itf_AccessibleEventId_0000_0000 */
/* [local] */ 


enum IA2EventID
    {
        IA2_EVENT_ACTION_CHANGED	= 0x101,
        IA2_EVENT_ACTIVE_DECENDENT_CHANGED	= ( IA2_EVENT_ACTION_CHANGED + 1 ) ,
        IA2_EVENT_ACTIVE_DESCENDANT_CHANGED	= IA2_EVENT_ACTIVE_DECENDENT_CHANGED,
        IA2_EVENT_DOCUMENT_ATTRIBUTE_CHANGED	= ( IA2_EVENT_ACTIVE_DESCENDANT_CHANGED + 1 ) ,
        IA2_EVENT_DOCUMENT_CONTENT_CHANGED	= ( IA2_EVENT_DOCUMENT_ATTRIBUTE_CHANGED + 1 ) ,
        IA2_EVENT_DOCUMENT_LOAD_COMPLETE	= ( IA2_EVENT_DOCUMENT_CONTENT_CHANGED + 1 ) ,
        IA2_EVENT_DOCUMENT_LOAD_STOPPED	= ( IA2_EVENT_DOCUMENT_LOAD_COMPLETE + 1 ) ,
        IA2_EVENT_DOCUMENT_RELOAD	= ( IA2_EVENT_DOCUMENT_LOAD_STOPPED + 1 ) ,
        IA2_EVENT_HYPERLINK_END_INDEX_CHANGED	= ( IA2_EVENT_DOCUMENT_RELOAD + 1 ) ,
        IA2_EVENT_HYPERLINK_NUMBER_OF_ANCHORS_CHANGED	= ( IA2_EVENT_HYPERLINK_END_INDEX_CHANGED + 1 ) ,
        IA2_EVENT_HYPERLINK_SELECTED_LINK_CHANGED	= ( IA2_EVENT_HYPERLINK_NUMBER_OF_ANCHORS_CHANGED + 1 ) ,
        IA2_EVENT_HYPERTEXT_LINK_ACTIVATED	= ( IA2_EVENT_HYPERLINK_SELECTED_LINK_CHANGED + 1 ) ,
        IA2_EVENT_HYPERTEXT_LINK_SELECTED	= ( IA2_EVENT_HYPERTEXT_LINK_ACTIVATED + 1 ) ,
        IA2_EVENT_HYPERLINK_START_INDEX_CHANGED	= ( IA2_EVENT_HYPERTEXT_LINK_SELECTED + 1 ) ,
        IA2_EVENT_HYPERTEXT_CHANGED	= ( IA2_EVENT_HYPERLINK_START_INDEX_CHANGED + 1 ) ,
        IA2_EVENT_HYPERTEXT_NLINKS_CHANGED	= ( IA2_EVENT_HYPERTEXT_CHANGED + 1 ) ,
        IA2_EVENT_OBJECT_ATTRIBUTE_CHANGED	= ( IA2_EVENT_HYPERTEXT_NLINKS_CHANGED + 1 ) ,
        IA2_EVENT_PAGE_CHANGED	= ( IA2_EVENT_OBJECT_ATTRIBUTE_CHANGED + 1 ) ,
        IA2_EVENT_SECTION_CHANGED	= ( IA2_EVENT_PAGE_CHANGED + 1 ) ,
        IA2_EVENT_TABLE_CAPTION_CHANGED	= ( IA2_EVENT_SECTION_CHANGED + 1 ) ,
        IA2_EVENT_TABLE_COLUMN_DESCRIPTION_CHANGED	= ( IA2_EVENT_TABLE_CAPTION_CHANGED + 1 ) ,
        IA2_EVENT_TABLE_COLUMN_HEADER_CHANGED	= ( IA2_EVENT_TABLE_COLUMN_DESCRIPTION_CHANGED + 1 ) ,
        IA2_EVENT_TABLE_MODEL_CHANGED	= ( IA2_EVENT_TABLE_COLUMN_HEADER_CHANGED + 1 ) ,
        IA2_EVENT_TABLE_ROW_DESCRIPTION_CHANGED	= ( IA2_EVENT_TABLE_MODEL_CHANGED + 1 ) ,
        IA2_EVENT_TABLE_ROW_HEADER_CHANGED	= ( IA2_EVENT_TABLE_ROW_DESCRIPTION_CHANGED + 1 ) ,
        IA2_EVENT_TABLE_SUMMARY_CHANGED	= ( IA2_EVENT_TABLE_ROW_HEADER_CHANGED + 1 ) ,
        IA2_EVENT_TEXT_ATTRIBUTE_CHANGED	= ( IA2_EVENT_TABLE_SUMMARY_CHANGED + 1 ) ,
        IA2_EVENT_TEXT_CARET_MOVED	= ( IA2_EVENT_TEXT_ATTRIBUTE_CHANGED + 1 ) ,
        IA2_EVENT_TEXT_CHANGED	= ( IA2_EVENT_TEXT_CARET_MOVED + 1 ) ,
        IA2_EVENT_TEXT_COLUMN_CHANGED	= ( IA2_EVENT_TEXT_CHANGED + 1 ) ,
        IA2_EVENT_TEXT_INSERTED	= ( IA2_EVENT_TEXT_COLUMN_CHANGED + 1 ) ,
        IA2_EVENT_TEXT_REMOVED	= ( IA2_EVENT_TEXT_INSERTED + 1 ) ,
        IA2_EVENT_TEXT_UPDATED	= ( IA2_EVENT_TEXT_REMOVED + 1 ) ,
        IA2_EVENT_TEXT_SELECTION_CHANGED	= ( IA2_EVENT_TEXT_UPDATED + 1 ) ,
        IA2_EVENT_VISIBLE_DATA_CHANGED	= ( IA2_EVENT_TEXT_SELECTION_CHANGED + 1 ) 
    } ;


extern RPC_IF_HANDLE __MIDL_itf_AccessibleEventId_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_AccessibleEventId_0000_0000_v0_0_s_ifspec;

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


