// Mail.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "Mail.h"

#include "MainFrm.h"
#include "MailDoc.h"
#include "MailView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMailApp

BEGIN_MESSAGE_MAP(CMailApp, CWinApp)
	//{{AFX_MSG_MAP(CMailApp)
	ON_COMMAND(ID_APP_ABOUT, OnAppAbout)
	//}}AFX_MSG_MAP
	// Standard file based document commands
	ON_COMMAND(ID_FILE_NEW, CWinApp::OnFileNew)
	ON_COMMAND(ID_FILE_OPEN, CWinApp::OnFileOpen)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMailApp construction

CMailApp::CMailApp()
{
}

/////////////////////////////////////////////////////////////////////////////
// The one and only CMailApp object

CMailApp theApp;

/////////////////////////////////////////////////////////////////////////////
// CMailApp initialization

BOOL CMailApp::InitInstance()
{
	AfxEnableControlContainer();

	// Standard initialization

	// Change the registry key under which our settings are stored.
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	LoadStdProfileSettings();  // Load standard INI file options (including MRU)

	// Register document templates

	CSingleDocTemplate* pDocTemplate;
	pDocTemplate = new CSingleDocTemplate(
		IDR_MAINFRAME,
		RUNTIME_CLASS(CMailDoc),
		RUNTIME_CLASS(CMainFrame),       // main SDI frame window
		RUNTIME_CLASS(CMailView));
	AddDocTemplate(pDocTemplate);

	// Parse command line for standard shell commands, DDE, file open
	CCommandLineInfo cmdInfo;
	ParseCommandLine(cmdInfo);

	// Dispatch commands specified on the command line
	if (!ProcessShellCommand(cmdInfo))
		return FALSE;
	m_pMainWnd->ShowWindow(SW_SHOW);
	m_pMainWnd->UpdateWindow();

	// CG: This block was added by the MAPI component
	{
		// TODO: Add a menu item for sending mail:
		//   1. In ResourceView, open your application's menu resource
		//   2. Select the File submenu
		//   3. Double-click on the blank item at the bottom of the submenu
		//   4. Assign the new item an ID: ID_FILE_SEND_MAIL
		//   5. Assign the item a Caption: Sen&d...

        //// TODO: Delete this entire block of code.
        //// The code below is only for temporary use, until the above
        //// instructions have been carried out. This code will not work
        //// correctly if your application has multiple menus or is an
        //// MDI application and starts up maximized.

        //CMenu* pMenu = NULL;
        //CMenu* pFileMenu = NULL;
        //if ((m_pMainWnd != NULL) &&
        //    ((pMenu = m_pMainWnd->GetMenu()) != NULL) &&
        //    ((pFileMenu = pMenu->GetSubMenu(0)) != NULL))
        //{
        //    // Locate the "Sen&d..." menu item
        //    for (int i = 0, nLength = pFileMenu->GetMenuItemCount();
        //        i<nLength; i++)
        //    {
        //        CString strSend;
        //        pFileMenu->GetMenuString(i, strSend, MF_BYPOSITION);
        //        if (strSend == _T("Sen&d...")) break;
        //    }

        //    if (i == nLength)
        //    {
        //        // Didn't find Sen&d... menu item, so add one.
        //        pFileMenu->InsertMenu(nLength-1, MF_BYPOSITION);
        //        pFileMenu->InsertMenu(nLength-1, MF_BYPOSITION,
        //        ID_FILE_SEND_MAIL, _T("Sen&d..."));
        //    }
        //}
	}

	return TRUE;
}


/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
		// No message handlers
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

// App command to run the dialog
void CMailApp::OnAppAbout()
{
	CAboutDlg aboutDlg;
	aboutDlg.DoModal();
}

/////////////////////////////////////////////////////////////////////////////
// CMailApp message handlers

