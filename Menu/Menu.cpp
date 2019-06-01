// Menu.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Menu.h"
#include "MenuDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMenuApp

BEGIN_MESSAGE_MAP(CMenuApp, CWinApp)
	//{{AFX_MSG_MAP(CMenuApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMenuApp construction

CMenuApp::CMenuApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CMenuApp object

CMenuApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CMenuApp initialization

BOOL CMenuApp::InitInstance()
{
	// Standard initialization

	CMenuDlg dlg;
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
