// MyPropertySheet1.cpp : implementation file
//

#include "stdafx.h"
#include "resource.h"
#include "MyPropertySheet1.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMyPropertySheet1

IMPLEMENT_DYNAMIC(CMyPropertySheet1, CPropertySheet)

CMyPropertySheet1::CMyPropertySheet1(CWnd* pWndParent)
	 : CPropertySheet(IDS_PROPSHT_CAPTION1, pWndParent)
{
	// Add all of the property pages here.  Note that
	// the order that they appear in here will be
	// the order they appear in on screen.  By default,
	// the first page of the set is the active one.
	// One way to make a different property page the 
	// active one is to call SetActivePage().

	AddPage(&m_Page1);
	AddPage(&m_Page2);

	SetWizardMode();
}

CMyPropertySheet1::~CMyPropertySheet1()
{
}


BEGIN_MESSAGE_MAP(CMyPropertySheet1, CPropertySheet)
	//{{AFX_MSG_MAP(CMyPropertySheet1)
		// NOTE - the ClassWizard will add and remove mapping macros here.
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CMyPropertySheet1 message handlers

BOOL CMyPropertySheet1::OnInitDialog()
{
	BOOL bResult = CPropertySheet::OnInitDialog();

	// add a preview window to the property sheet.
	CRect rectWnd;
	GetWindowRect(rectWnd);
	SetWindowPos(NULL, 0, 0,
		rectWnd.Width() + 100,
		rectWnd.Height(),
		SWP_NOMOVE | SWP_NOZORDER | SWP_NOACTIVATE);
	CRect rectPreview(rectWnd.Width() + 25, 25,
		rectWnd.Width()+75, 75);

	m_wndPreview.Create(NULL, NULL, WS_CHILD|WS_VISIBLE,
		rectPreview, this, 0x1000);

	CenterWindow();
	return bResult;
}


