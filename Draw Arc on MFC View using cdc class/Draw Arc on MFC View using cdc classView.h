
// Draw Arc on MFC View using cdc classView.h : interface of the CDrawArconMFCViewusingcdcclassView class
//

#pragma once


class CDrawArconMFCViewusingcdcclassView : public CView
{
protected: // create from serialization only
	CDrawArconMFCViewusingcdcclassView() noexcept;
	DECLARE_DYNCREATE(CDrawArconMFCViewusingcdcclassView)

// Attributes
public:
	CDrawArconMFCViewusingcdcclassDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CDrawArconMFCViewusingcdcclassView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Draw Arc on MFC View using cdc classView.cpp
inline CDrawArconMFCViewusingcdcclassDoc* CDrawArconMFCViewusingcdcclassView::GetDocument() const
   { return reinterpret_cast<CDrawArconMFCViewusingcdcclassDoc*>(m_pDocument); }
#endif

