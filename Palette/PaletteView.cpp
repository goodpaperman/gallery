// PaletteView.cpp : implementation of the CPaletteView class
//

#include "stdafx.h"
#include "Palette.h"

#include "PaletteDoc.h"
#include "PaletteView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPaletteView

IMPLEMENT_DYNCREATE(CPaletteView, CView)

BEGIN_MESSAGE_MAP(CPaletteView, CView)
	//{{AFX_MSG_MAP(CPaletteView)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPaletteView construction/destruction

CPaletteView::CPaletteView()
{
}

CPaletteView::~CPaletteView()
{
}

BOOL CPaletteView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CPaletteView drawing

void CPaletteView::OnDraw(CDC* pDC)
{
	CPaletteDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
}

/////////////////////////////////////////////////////////////////////////////
// CPaletteView diagnostics

#ifdef _DEBUG
void CPaletteView::AssertValid() const
{
	CView::AssertValid();
}

void CPaletteView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CPaletteDoc* CPaletteView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CPaletteDoc)));
	return (CPaletteDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPaletteView message handlers

void CPaletteView::OnActivateView(BOOL bActivate, CView* pActivateView, CView* pDeactiveView) 
{
	// TODO: Add your specialized code here and/or call the base class
	
	CView::OnActivateView(bActivate, pActivateView, pDeactiveView);
}
