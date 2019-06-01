// SysInfo.h : main header file for the SYSINFO application
//

#if !defined(AFX_SYSINFO_H__10584648_81AC_4BC7_83F3_78E2CCB9E732__INCLUDED_)
#define AFX_SYSINFO_H__10584648_81AC_4BC7_83F3_78E2CCB9E732__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSysInfoApp:
// See SysInfo.cpp for the implementation of this class
//

class CSysInfoApp : public CWinApp
{
public:
	CSysInfoApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSysInfoApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

public:
	//{{AFX_MSG(CSysInfoApp)
	afx_msg void OnAppAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SYSINFO_H__10584648_81AC_4BC7_83F3_78E2CCB9E732__INCLUDED_)
