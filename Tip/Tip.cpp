// Tip.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Tip.h"
#include "TipDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CTipApp

BEGIN_MESSAGE_MAP(CTipApp, CWinApp)
	//{{AFX_MSG_MAP(CTipApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CTipApp construction

CTipApp::CTipApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CTipApp object

CTipApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CTipApp initialization

BOOL CTipApp::InitInstance()
{
	// CG: The following block was added by the Windows Sockets component.
	{
		if (!AfxSocketInit())
		{
			AfxMessageBox(CG_IDS_SOCKETS_INIT_FAILED);
			return FALSE;
		}

	}
	// Standard initialization

	CTipDlg dlg;
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
