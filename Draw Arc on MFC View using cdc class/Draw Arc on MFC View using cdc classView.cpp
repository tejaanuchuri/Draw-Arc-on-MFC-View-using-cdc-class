
// Draw Arc on MFC View using cdc classView.cpp : implementation of the CDrawArconMFCViewusingcdcclassView class
//

#include "pch.h"
#include "framework.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Draw Arc on MFC View using cdc class.h"
#endif

#include "Draw Arc on MFC View using cdc classDoc.h"
#include "Draw Arc on MFC View using cdc classView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CDrawArconMFCViewusingcdcclassView

IMPLEMENT_DYNCREATE(CDrawArconMFCViewusingcdcclassView, CView)

BEGIN_MESSAGE_MAP(CDrawArconMFCViewusingcdcclassView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CDrawArconMFCViewusingcdcclassView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CDrawArconMFCViewusingcdcclassView construction/destruction

CDrawArconMFCViewusingcdcclassView::CDrawArconMFCViewusingcdcclassView() noexcept
{
	// TODO: add construction code here

}

CDrawArconMFCViewusingcdcclassView::~CDrawArconMFCViewusingcdcclassView()
{
}

BOOL CDrawArconMFCViewusingcdcclassView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CDrawArconMFCViewusingcdcclassView drawing

void CDrawArconMFCViewusingcdcclassView::OnDraw(CDC* pDC)
{
	CDrawArconMFCViewusingcdcclassDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;
	pDC->SetArcDirection(AD_COUNTERCLOCKWISE);
	pDC->Arc(40, 20, 226, 144, 155, 32, 202, 115);
	// TODO: add draw code for native data here
}


// CDrawArconMFCViewusingcdcclassView printing


void CDrawArconMFCViewusingcdcclassView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CDrawArconMFCViewusingcdcclassView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CDrawArconMFCViewusingcdcclassView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CDrawArconMFCViewusingcdcclassView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CDrawArconMFCViewusingcdcclassView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CDrawArconMFCViewusingcdcclassView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CDrawArconMFCViewusingcdcclassView diagnostics

#ifdef _DEBUG
void CDrawArconMFCViewusingcdcclassView::AssertValid() const
{
	CView::AssertValid();
}

void CDrawArconMFCViewusingcdcclassView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CDrawArconMFCViewusingcdcclassDoc* CDrawArconMFCViewusingcdcclassView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDrawArconMFCViewusingcdcclassDoc)));
	return (CDrawArconMFCViewusingcdcclassDoc*)m_pDocument;
}
#endif //_DEBUG


// CDrawArconMFCViewusingcdcclassView message handlers
