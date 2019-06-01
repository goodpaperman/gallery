// XCtrl.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "XCtrl.h"
#include "XCtrlDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CXCtrlApp

BEGIN_MESSAGE_MAP(CXCtrlApp, CWinApp)
	//{{AFX_MSG_MAP(CXCtrlApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CXCtrlApp construction

CXCtrlApp::CXCtrlApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CXCtrlApp object

CXCtrlApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CXCtrlApp initialization

BOOL CXCtrlApp::InitInstance()
{
	// Standard initialization

	CXCtrlDlg dlg;
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
