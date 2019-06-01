// Tip.h : main header file for the TIP application
//

#if !defined(AFX_TIP_H__1005FC7D_74ED_4506_AFB8_0082BCF7945E__INCLUDED_)
#define AFX_TIP_H__1005FC7D_74ED_4506_AFB8_0082BCF7945E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CTipApp:
// See Tip.cpp for the implementation of this class
//

class CTipApp : public CWinApp
{
public:
	CTipApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CTipApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CTipApp)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_TIP_H__1005FC7D_74ED_4506_AFB8_0082BCF7945E__INCLUDED_)
