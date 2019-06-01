// Mail.h : main header file for the MAIL application
//

#if !defined(AFX_MAIL_H__A7823CF5_C458_45B3_BF5B_7CA9223DB8F0__INCLUDED_)
#define AFX_MAIL_H__A7823CF5_C458_45B3_BF5B_7CA9223DB8F0__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMailApp:
// See Mail.cpp for the implementation of this class
//

class CMailApp : public CWinApp
{
public:
	CMailApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMailApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMailApp)
	afx_msg void OnAppAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAIL_H__A7823CF5_C458_45B3_BF5B_7CA9223DB8F0__INCLUDED_)
