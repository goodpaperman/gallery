// ClipboardView.cpp : implementation of the CClipboardView class
//

#include "stdafx.h"
#include "Clipboard.h"

#include "ClipboardDoc.h"
#include "ClipboardView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClipboardView

IMPLEMENT_DYNCREATE(CClipboardView, CFormView)

BEGIN_MESSAGE_MAP(CClipboardView, CFormView)
	ON_UPDATE_COMMAND_UI(ID_EDIT_COPY, OnUpdateEditCopyCut)
	ON_UPDATE_COMMAND_UI(ID_EDIT_CUT, OnUpdateEditCopyCut)
	ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE, OnUpdateEditPaste)
	ON_UPDATE_COMMAND_UI(ID_EDIT_UNDO, OnUpdateEditUndo)
	ON_COMMAND(ID_EDIT_COPY, OnEditCopy)
	ON_COMMAND(ID_EDIT_CUT, OnEditCut)
	ON_COMMAND(ID_EDIT_PASTE, OnEditPaste)
	ON_COMMAND(ID_EDIT_UNDO, OnEditUndo)
	//{{AFX_MSG_MAP(CClipboardView)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CClipboardView construction/destruction

CClipboardView::CClipboardView()
	: CFormView(CClipboardView::IDD)
{
	//{{AFX_DATA_INIT(CClipboardView)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CClipboardView::~CClipboardView()
{
}

void CClipboardView::DoDataExchange(CDataExchange* pDX)
{
	CFormView::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CClipboardView)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BOOL CClipboardView::PreCreateWindow(CREATESTRUCT& cs)
{
	return CFormView::PreCreateWindow(cs);
}

void CClipboardView::OnInitialUpdate()
{
	CFormView::OnInitialUpdate();
	GetParentFrame()->RecalcLayout();
	ResizeParentToFit();

}

/////////////////////////////////////////////////////////////////////////////
// CClipboardView diagnostics

#ifdef _DEBUG
void CClipboardView::AssertValid() const
{
	CFormView::AssertValid();
}

void CClipboardView::Dump(CDumpContext& dc) const
{
	CFormView::Dump(dc);
}

CClipboardDoc* CClipboardView::GetDocument() // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CClipboardDoc)));
	return (CClipboardDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CClipboardView message handlers

BOOL CClipboardView::IsEditCtrl(CWnd* pWnd)
{
	// CG: This function was added by the Clipboard Assistant component
	ASSERT_VALID(pWnd);

	TCHAR lpClassName[32];
	::GetClassName(pWnd->GetSafeHwnd(), lpClassName, 32);

	if (!_tcscmp(lpClassName, _T("Edit")))
		return TRUE;

	return FALSE;
}

void CClipboardView::OnUpdateEditCopyCut(CCmdUI* pCmdUI)
{
	// CG: This block was added by the Clipboard Assistant component
	{
		CWnd* pWnd = CWnd::GetFocus();

		if (pWnd != NULL)
		{
			if (IsEditCtrl(pWnd))
			{
				int nStart, nEnd;
				((CEdit*)pWnd)->GetSel(nStart, nEnd);
				pCmdUI->Enable(nStart != nEnd);
				return;
			}
		}
	}

	pCmdUI->Enable(FALSE);
}

void CClipboardView::OnUpdateEditPaste(CCmdUI* pCmdUI)
{
	// CG: This block was added by the Clipboard Assistant component
	{
		CWnd* pWnd = CWnd::GetFocus();

		if (pWnd != NULL)
		{
			if (IsEditCtrl(pWnd))
			{
				pCmdUI->Enable(::IsClipboardFormatAvailable(CF_TEXT));
				return;
			}
		}
	}

	pCmdUI->Enable(FALSE);
}

void CClipboardView::OnUpdateEditUndo(CCmdUI* pCmdUI)
{
	// CG: This block was added by the Clipboard Assistant component
	{
		CWnd* pWnd = CWnd::GetFocus();

		if (pWnd != NULL)
		{
			if (IsEditCtrl(pWnd))
			{
				pCmdUI->Enable(((CEdit*)pWnd)->CanUndo());
				return;
			}
		}
	}

	pCmdUI->Enable(FALSE);
}

void CClipboardView::OnEditCopy()
{
	// CG: This block was added by the Clipboard Assistant component
	{
		CEdit* pEdit = (CEdit*)CWnd::GetFocus();
		pEdit->Copy();
	}
}

void CClipboardView::OnEditCut()
{
	// CG: This block was added by the Clipboard Assistant component
	{
		CEdit* pEdit = (CEdit*)CWnd::GetFocus();
		pEdit->Cut();
	}
}

void CClipboardView::OnEditPaste()
{
	// CG: This block was added by the Clipboard Assistant component
	{
		CEdit* pEdit = (CEdit*)CWnd::GetFocus();
		pEdit->Paste();
	}
}

void CClipboardView::OnEditUndo()
{
	// CG: This block was added by the Clipboard Assistant component
	{
		CEdit* pEdit = (CEdit*)CWnd::GetFocus();
		pEdit->Undo();
	}
}
