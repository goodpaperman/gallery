// Clipboard.cpp : Defines the class behaviors for the application.
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
// CClipboardApp

BEGIN_MESSAGE_MAP(CClipboardApp, CWinApp)
	//{{AFX_MSG_MAP(CClipboardApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CClipboardApp construction

CClipboardApp::CClipboardApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CClipboardApp object

CClipboardApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CClipboardApp initialization

BOOL CClipboardApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization

	CClipboardDlg dlg;
	m_pMainWnd = &dlg;
	int nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
	}
	else if (nResponse == IDCANCEL)
	{
	}

	// Since the dialog has been closed, return FALSE so that we exit the
	//  application, rather than start the application's message pump.
	return FALSE;
}
