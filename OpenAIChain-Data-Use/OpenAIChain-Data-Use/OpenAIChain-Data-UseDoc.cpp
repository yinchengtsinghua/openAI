// 这段 MFC 示例源代码演示如何使用 MFC Microsoft Office Fluent 用户界面
// (“Fluent UI”)。该示例仅供参考，
// 用以补充《Microsoft 基础类参考》和
// MFC C++ 库软件随附的相关电子文档。
// 复制、使用或分发 Fluent UI 的许可条款是单独提供的。
// 若要了解有关 Fluent UI 许可计划的详细信息，请访问
// https://go.microsoft.com/fwlink/?LinkId=238214.
//
// 版权所有(C) Microsoft Corporation
// 保留所有权利。

// OpenAIChain-Data-UseDoc.cpp: COpenAIChainDataUseDoc 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "OpenAIChain-Data-Use.h"
#endif

#include "OpenAIChain-Data-UseDoc.h"

#include <propkey.h>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

// COpenAIChainDataUseDoc

IMPLEMENT_DYNCREATE(COpenAIChainDataUseDoc, CDocument)

BEGIN_MESSAGE_MAP(COpenAIChainDataUseDoc, CDocument)
	ON_COMMAND(ID_FILE_SEND_MAIL, &COpenAIChainDataUseDoc::OnFileSendMail)
	ON_UPDATE_COMMAND_UI(ID_FILE_SEND_MAIL, &COpenAIChainDataUseDoc::OnUpdateFileSendMail)
END_MESSAGE_MAP()

BEGIN_DISPATCH_MAP(COpenAIChainDataUseDoc, CDocument)
END_DISPATCH_MAP()

// 注意: 我们添加了对 IID_IOpenAIChainDataUse 的支持来支持类型安全绑定
//  以支持来自 VBA 的类型安全绑定。  此 IID 必须同附加到 .IDL 文件中的
//  调度接口的 GUID 匹配。

// {ee50fa58-570c-4da2-90b8-3875b2ac6060}
static const IID IID_IOpenAIChainDataUse =
{0xee50fa58,0x570c,0x4da2,{0x90,0xb8,0x38,0x75,0xb2,0xac,0x60,0x60}};

BEGIN_INTERFACE_MAP(COpenAIChainDataUseDoc, CDocument)
	INTERFACE_PART(COpenAIChainDataUseDoc, IID_IOpenAIChainDataUse, Dispatch)
END_INTERFACE_MAP()


// COpenAIChainDataUseDoc 构造/析构

COpenAIChainDataUseDoc::COpenAIChainDataUseDoc()
{
	// TODO: 在此添加一次性构造代码

	EnableAutomation();

	AfxOleLockApp();
}

COpenAIChainDataUseDoc::~COpenAIChainDataUseDoc()
{
	AfxOleUnlockApp();
}

BOOL COpenAIChainDataUseDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// TODO: 在此添加重新初始化代码
	// (SDI 文档将重用该文档)

	return TRUE;
}




// COpenAIChainDataUseDoc 序列化

void COpenAIChainDataUseDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// TODO: 在此添加存储代码
	}
	else
	{
		// TODO: 在此添加加载代码
	}
}

#ifdef SHARED_HANDLERS

// 缩略图的支持
void COpenAIChainDataUseDoc::OnDrawThumbnail(CDC& dc, LPRECT lprcBounds)
{
	// 修改此代码以绘制文档数据
	dc.FillSolidRect(lprcBounds, RGB(255, 255, 255));

	CString strText = _T("TODO: implement thumbnail drawing here");
	LOGFONT lf;

	CFont* pDefaultGUIFont = CFont::FromHandle((HFONT) GetStockObject(DEFAULT_GUI_FONT));
	pDefaultGUIFont->GetLogFont(&lf);
	lf.lfHeight = 36;

	CFont fontDraw;
	fontDraw.CreateFontIndirect(&lf);

	CFont* pOldFont = dc.SelectObject(&fontDraw);
	dc.DrawText(strText, lprcBounds, DT_CENTER | DT_WORDBREAK);
	dc.SelectObject(pOldFont);
}

// 搜索处理程序的支持
void COpenAIChainDataUseDoc::InitializeSearchContent()
{
	CString strSearchContent;
	// 从文档数据设置搜索内容。
	// 内容部分应由“;”分隔

	// 例如:     strSearchContent = _T("point;rectangle;circle;ole object;")；
	SetSearchContent(strSearchContent);
}

void COpenAIChainDataUseDoc::SetSearchContent(const CString& value)
{
	if (value.IsEmpty())
	{
		RemoveChunk(PKEY_Search_Contents.fmtid, PKEY_Search_Contents.pid);
	}
	else
	{
		CMFCFilterChunkValueImpl *pChunk = nullptr;
		ATLTRY(pChunk = new CMFCFilterChunkValueImpl);
		if (pChunk != nullptr)
		{
			pChunk->SetTextValue(PKEY_Search_Contents, value, CHUNK_TEXT);
			SetChunkValue(pChunk);
		}
	}
}

#endif // SHARED_HANDLERS

// COpenAIChainDataUseDoc 诊断

#ifdef _DEBUG
void COpenAIChainDataUseDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void COpenAIChainDataUseDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG


// COpenAIChainDataUseDoc 命令
