// Idle.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Idle.h"
#include "IdleDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CIdleApp

BEGIN_MESSAGE_MAP(CIdleApp, CWinApp)
	//{{AFX_MSG_MAP(CIdleApp)
	//}}AFX_MSG
	ON_COMMAND(ID_HELP, CWinApp::OnHelp)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CIdleApp construction

CIdleApp::CIdleApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CIdleApp object

CIdleApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CIdleApp initialization

BOOL CIdleApp::InitInstance()
{
	// Standard initialization

	CIdleDlg dlg;
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

BOOL CIdleApp::OnIdle(LONG lCount)
{
	// CG: The following code inserted by 'Idle Time Processing' component.

	// Note: Do not perform lengthy tasks during OnIdle because your
	// application cannot process user input until OnIdle returns.

	// call the base class
	BOOL bBaseIdle = CWinApp::OnIdle(lCount);

	BOOL bMoreIdle = TRUE;
	if (lCount == 0)
	{
		// TODO: add code to perform important idle time processing
		TRACE("Idle: %d", lCount); 
	}
	else if (lCount == 100)
	{
		// TODO: add code to perform less important tasks during idle
		TRACE("Idle: %d", lCount); 
	}
	else if (lCount == 1000)
	{
		// TODO: add code to perform occasional tasks during idle
		bMoreIdle = bBaseIdle;
		TRACE("Idle: %d", lCount); 
	}

	// return FALSE when there is no more idle processing to do
	return bMoreIdle;
}
