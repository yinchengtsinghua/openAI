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

// OpenAIChain-Data-CollectView.cpp: COpenAIChainDataCollectView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
#ifndef SHARED_HANDLERS
#include "OpenAIChain-Data-Collect.h"
#endif

#include "OpenAIChain-Data-CollectDoc.h"
#include "OpenAIChain-Data-CollectView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// COpenAIChainDataCollectView

IMPLEMENT_DYNCREATE(COpenAIChainDataCollectView, CHtmlView)

BEGIN_MESSAGE_MAP(COpenAIChainDataCollectView, CHtmlView)
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CHtmlView::OnFilePrint)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
	ON_COMMAND(ID_OLE_INSERT_NEW, &COpenAIChainDataCollectView::OnOleInsertNew)
	ON_COMMAND(ID_BUTTON2, &COpenAIChainDataCollectView::OnButton2)
	ON_COMMAND(ID_BUTTON3, &COpenAIChainDataCollectView::OnButton3)
	ON_COMMAND(ID_BUTTON4, &COpenAIChainDataCollectView::OnButton4)
	ON_COMMAND(ID_BUTTON5, &COpenAIChainDataCollectView::OnButton5)
	ON_COMMAND(ID_BUTTON6, &COpenAIChainDataCollectView::OnButton6)
	ON_COMMAND(ID_BUTTON7, &COpenAIChainDataCollectView::OnButton7)
	ON_COMMAND(ID_BUTTON9, &COpenAIChainDataCollectView::OnButton9)
	ON_COMMAND(ID_BUTTON8, &COpenAIChainDataCollectView::OnButton8)
END_MESSAGE_MAP()

// COpenAIChainDataCollectView 构造/析构

COpenAIChainDataCollectView::COpenAIChainDataCollectView()
{
	EnableActiveAccessibility();
	// TODO: 在此处添加构造代码

}

COpenAIChainDataCollectView::~COpenAIChainDataCollectView()
{
}

BOOL COpenAIChainDataCollectView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

	return CHtmlView::PreCreateWindow(cs);
}

void COpenAIChainDataCollectView::OnInitialUpdate()
{
	CHtmlView::OnInitialUpdate();
	LPITEMIDLIST list;
	
	//Navigate2(L"http://www.msdn.microsoft.com/visualc/",0, 0,0,0,0);
	
	//Navigate2(L"C:\\Users\\TF\\Desktop\\1.swf", 0, 0, 0, 0, 0);
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\2.swf";


	Navigate2(mypath, 0, 0, 0, 0, 0);

}


// COpenAIChainDataCollectView 打印


void COpenAIChainDataCollectView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}


void COpenAIChainDataCollectView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void COpenAIChainDataCollectView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// COpenAIChainDataCollectView 诊断

#ifdef _DEBUG
void COpenAIChainDataCollectView::AssertValid() const
{
	CHtmlView::AssertValid();
}

void COpenAIChainDataCollectView::Dump(CDumpContext& dc) const
{
	CHtmlView::Dump(dc);
}

COpenAIChainDataCollectDoc* COpenAIChainDataCollectView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(COpenAIChainDataCollectDoc)));
	return (COpenAIChainDataCollectDoc*)m_pDocument;
}
#endif //_DEBUG


// COpenAIChainDataCollectView 消息处理程序


void COpenAIChainDataCollectView::OnOleInsertNew()
{
	// TODO: 在此添加命令处理程序代码
}


void COpenAIChainDataCollectView::OnButton2()
{
	// TODO: 在此添加命令处理程序代码
	//Navigate2(L"C:\\Users\\TF\\Desktop\\1.swf", 0, 0, 0, 0, 0);
	VoiceDialog dlg;        // 定义对话框类CAdditionDlg的对象dlg     
	INT_PTR nResponse = dlg.DoModal();
}


void COpenAIChainDataCollectView::OnButton3()
{
	// TODO: 在此添加命令处理程序代码
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\1.swf";

	Navigate2(mypath, 0, 0, 0, 0, 0);
}


void COpenAIChainDataCollectView::OnButton4()
{
	// TODO: 在此添加命令处理程序代码
	textDialog dlg;        // 定义对话框类CAdditionDlg的对象dlg     
	INT_PTR nResponse = dlg.DoModal();
}


void COpenAIChainDataCollectView::OnButton5()
{
	// TODO: 在此添加命令处理程序代码
	//Navigate2(L"E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Collect\\Debug\\4.swf", 0, 0, 0, 0, 0);
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\4.swf";

	Navigate2(mypath, 0, 0, 0, 0, 0);
}


void COpenAIChainDataCollectView::OnButton6()
{
	// TODO: 在此添加命令处理程序代码
	//Navigate2(L"E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Collect\\Debug\\8.swf", 0, 0, 0, 0, 0);
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\8.swf";

	Navigate2(mypath, 0, 0, 0, 0, 0);
}


void COpenAIChainDataCollectView::OnButton7()
{
	// TODO: 在此添加命令处理程序代码
	//Navigate2(L"E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Collect\\Debug\\3.swf", 0, 0, 0, 0, 0);
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\3.swf";

	Navigate2(mypath, 0, 0, 0, 0, 0);
}


void COpenAIChainDataCollectView::OnButton9()
{
	// TODO: 在此添加命令处理程序代码
	//Navigate2(L"E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Collect\\Debug\\9.swf", 0, 0, 0, 0, 0);
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\9.swf";

	Navigate2(mypath, 0, 0, 0, 0, 0);
}


void COpenAIChainDataCollectView::OnButton8()
{
	// TODO: 在此添加命令处理程序代码
	//Navigate2(L"E:\\数字资产\\OpenAIChain\\OpenAIChain-Data-Collect\\Debug\\7.swf", 0, 0, 0, 0, 0);
	wchar_t pBuf[MAX_PATH];
	GetCurrentDirectory(MAX_PATH, pBuf);
	CString mypath = pBuf;
	mypath += "\\7.swf";

	Navigate2(mypath, 0, 0, 0, 0, 0);
}
