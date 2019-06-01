// Bar.h : main header file for the BAR application
//

#if !defined(AFX_BAR_H__A3B00B0C_054F_4CE9_A2D7_903EDB9ED719__INCLUDED_)
#define AFX_BAR_H__A3B00B0C_054F_4CE9_A2D7_903EDB9ED719__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CBarApp:
// See Bar.cpp for the implementation of this class
//

class CBarApp : public CWinApp
{
public:
	CBarApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CBarApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

public:
	//{{AFX_MSG(CBarApp)
	afx_msg void OnAppAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BAR_H__A3B00B0C_054F_4CE9_A2D7_903EDB9ED719__INCLUDED_)
