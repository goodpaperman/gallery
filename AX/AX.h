// AX.h : main header file for the AX application
//

#if !defined(AFX_AX_H__20053580_53D8_4304_96B6_668135933E9D__INCLUDED_)
#define AFX_AX_H__20053580_53D8_4304_96B6_668135933E9D__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CAXApp:
// See AX.cpp for the implementation of this class
//

class CAXApp : public CWinApp
{
public:
	CAXApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAXApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

public:
	//{{AFX_MSG(CAXApp)
	afx_msg void OnAppAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_AX_H__20053580_53D8_4304_96B6_668135933E9D__INCLUDED_)
