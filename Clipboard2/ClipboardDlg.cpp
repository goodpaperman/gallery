// ClipboardDlg.cpp : implementation file
//

#include "stdafx.h"
#include "Clipboard.h"
#include "ClipboardDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClipboardDlg dialog

CClipboardDlg::CClipboardDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CClipboardDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CClipboardDlg)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CClipboardDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CClipboardDlg)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CClipboardDlg, CDialog)
	//{{AFX_MSG_MAP(CClipboardDlg)
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_UPDATE_COMMAND_UI(ID_EDIT_COPY, OnUpdateEditCopyCut)
	ON_UPDATE_COMMAND_UI(ID_EDIT_CUT, OnUpdateEditCopyCut)
	ON_UPDATE_COMMAND_UI(ID_EDIT_PASTE, OnUpdateEditPaste)
	ON_UPDATE_COMMAND_UI(ID_EDIT_UNDO, OnUpdateEditUndo)
	ON_COMMAND(ID_EDIT_COPY, OnEditCopy)
	ON_COMMAND(ID_EDIT_CUT, OnEditCut)
	ON_COMMAND(ID_EDIT_PASTE, OnEditPaste)
	ON_COMMAND(ID_EDIT_UNDO, OnEditUndo)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CClipboardDlg message handlers

BOOL CClipboardDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CClipboardDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

HCURSOR CClipboardDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}


BOOL CClipboardDlg::IsEditCtrl(CWnd* pWnd)
{
	// CG: This function was added by the Clipboard Assistant component
	ASSERT_VALID(pWnd);

	TCHAR lpClassName[32];
	::GetClassName(pWnd->GetSafeHwnd(), lpClassName, 32);

	if (!_tcscmp(lpClassName, _T("Edit")))
		return TRUE;

	return FALSE;
}

void CClipboardDlg::OnUpdateEditCopyCut(CCmdUI* pCmdUI)
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

void CClipboardDlg::OnUpdateEditPaste(CCmdUI* pCmdUI)
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

void CClipboardDlg::OnUpdateEditUndo(CCmdUI* pCmdUI)
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

void CClipboardDlg::OnEditCopy()
{
	// CG: This block was added by the Clipboard Assistant component
	{
		CEdit* pEdit = (CEdit*)CWnd::GetFocus();
		pEdit->Copy();
	}
}

void CClipboardDlg::OnEditCut()
{
	// CG: This block was added by the Clipboard Assistant component
	{
		CEdit* pEdit = (CEdit*)CWnd::GetFocus();
		pEdit->Cut();
	}
}

void CClipboardDlg::OnEditPaste()
{
	// CG: This block was added by the Clipboard Assistant component
	{
		CEdit* pEdit = (CEdit*)CWnd::GetFocus();
		pEdit->Paste();
	}
}

void CClipboardDlg::OnEditUndo()
{
	// CG: This block was added by the Clipboard Assistant component
	{
		CEdit* pEdit = (CEdit*)CWnd::GetFocus();
		pEdit->Undo();
	}
}