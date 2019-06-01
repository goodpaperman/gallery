// SplitterView.cpp : implementation of the CSplitterView class
//

#include "stdafx.h"
#include "Splitter.h"

#include "SplitterDoc.h"
#include "SplitterView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSplitterView

IMPLEMENT_DYNCREATE(CSplitterView, CView)

BEGIN_MESSAGE_MAP(CSplitterView, CView)
	//{{AFX_MSG_MAP(CSplitterView)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSplitterView construction/destruction

CSplitterView::CSplitterView()
{
}

CSplitterView::~CSplitterView()
{
}

BOOL CSplitterView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CSplitterView drawing

void CSplitterView::OnDraw(CDC* pDC)
{
	CSplitterDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
}

/////////////////////////////////////////////////////////////////////////////
// CSplitterView diagnostics

#ifdef _DEBUG
void CSplitterView::AssertValid() const
{
	CView::AssertValid();
}

void CSplitterView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSplitterDoc* CSplitterView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSplitterDoc)));
	return (CSplitterDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSplitterView message handlers
