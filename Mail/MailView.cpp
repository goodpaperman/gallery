// MailView.cpp : implementation of the CMailView class
//

#include "stdafx.h"
#include "Mail.h"

#include "MailDoc.h"
#include "MailView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMailView

IMPLEMENT_DYNCREATE(CMailView, CView)

BEGIN_MESSAGE_MAP(CMailView, CView)
	//{{AFX_MSG_MAP(CMailView)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMailView construction/destruction

CMailView::CMailView()
{
}

CMailView::~CMailView()
{
}

BOOL CMailView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CMailView drawing

void CMailView::OnDraw(CDC* pDC)
{
	CMailDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
}

/////////////////////////////////////////////////////////////////////////////
// CMailView diagnostics

#ifdef _DEBUG
void CMailView::AssertValid() const
{
	CView::AssertValid();
}

void CMailView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CMailDoc* CMailView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CMailDoc)));
	return (CMailDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMailView message handlers
