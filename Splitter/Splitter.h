// Splitter.h : main header file for the SPLITTER application
//

#if !defined(AFX_SPLITTER_H__D622B0AD_8AA4_43A0_B73A_4B550C5AC167__INCLUDED_)
#define AFX_SPLITTER_H__D622B0AD_8AA4_43A0_B73A_4B550C5AC167__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CSplitterApp:
// See Splitter.cpp for the implementation of this class
//

class CSplitterApp : public CWinApp
{
public:
	CSplitterApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSplitterApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CSplitterApp)
	afx_msg void OnAppAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLITTER_H__D622B0AD_8AA4_43A0_B73A_4B550C5AC167__INCLUDED_)
