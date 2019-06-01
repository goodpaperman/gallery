// XCtrl.h : main header file for the XCTRL application
//

#if !defined(AFX_XCTRL_H__FC95E76A_8D6A_4C61_B613_A0577403E6F5__INCLUDED_)
#define AFX_XCTRL_H__FC95E76A_8D6A_4C61_B613_A0577403E6F5__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CXCtrlApp:
// See XCtrl.cpp for the implementation of this class
//

class CXCtrlApp : public CWinApp
{
public:
	CXCtrlApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXCtrlApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CXCtrlApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XCTRL_H__FC95E76A_8D6A_4C61_B613_A0577403E6F5__INCLUDED_)
