// DocView.cpp : implementation of the CDocView class
//

#include "stdafx.h"
#include "Doc.h"

#include "DocDoc.h"
#include "DocView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CDocView

IMPLEMENT_DYNCREATE(CDocView, CListView)

BEGIN_MESSAGE_MAP(CDocView, CListView)
	//{{AFX_MSG_MAP(CDocView)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CDocView construction/destruction

CDocView::CDocView()
{
}

CDocView::~CDocView()
{
}

BOOL CDocView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CListView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CDocView drawing

void CDocView::OnDraw(CDC* pDC)
{
	CDocDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	CListCtrl& refCtrl = GetListCtrl();
	refCtrl.InsertItem(0, "Item!");
}

void CDocView::OnInitialUpdate()
{
	CListView::OnInitialUpdate();

}

/////////////////////////////////////////////////////////////////////////////
// CDocView diagnostics

#ifdef _DEBUG
void CDocView::AssertValid() const
{
	CListView::AssertValid();
}

void CDocView::Dump(CDumpContext& dc) const
{
	CListView::Dump(dc);
}

CDocDoc* CDocView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CDocDoc)));
	return (CDocDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CDocView message handlers
void CDocView::OnStyleChanged(int nStyleType, LPSTYLESTRUCT lpStyleStruct)
{
}
