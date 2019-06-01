// Idle.h : main header file for the IDLE application
//

#if !defined(AFX_IDLE_H__D3025CD7_0B95_41E0_B3F7_DCD6ECC22329__INCLUDED_)
#define AFX_IDLE_H__D3025CD7_0B95_41E0_B3F7_DCD6ECC22329__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CIdleApp:
// See Idle.cpp for the implementation of this class
//

class CIdleApp : public CWinApp
{
public:
	virtual BOOL OnIdle(LONG lCount);
	CIdleApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIdleApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CIdleApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IDLE_H__D3025CD7_0B95_41E0_B3F7_DCD6ECC22329__INCLUDED_)
