// Idle.h : main header file for the IDLE application
//

#if !defined(AFX_IDLE_H__EC22A3EC_06CF_4FCE_A48A_47ABB02EB665__INCLUDED_)
#define AFX_IDLE_H__EC22A3EC_06CF_4FCE_A48A_47ABB02EB665__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CIdleApp:
// See Idle.cpp for the implementation of this class
//

class CIdleApp : public CWinApp
{
public:
	CIdleApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIdleApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

public:
	virtual BOOL OnIdle(LONG lCount);
	//{{AFX_MSG(CIdleApp)
	afx_msg void OnAppAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IDLE_H__EC22A3EC_06CF_4FCE_A48A_47ABB02EB665__INCLUDED_)
