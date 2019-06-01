// Property.h : main header file for the PROPERTY application
//

#if !defined(AFX_PROPERTY_H__DCB7B403_765F_491D_8524_9FBE205F285C__INCLUDED_)
#define AFX_PROPERTY_H__DCB7B403_765F_491D_8524_9FBE205F285C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CPropertyApp:
// See Property.cpp for the implementation of this class
//

class CPropertyApp : public CWinApp
{
public:
	CPropertyApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPropertyApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

public:
	//{{AFX_MSG(CPropertyApp)
	afx_msg void OnAppAbout();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PROPERTY_H__DCB7B403_765F_491D_8524_9FBE205F285C__INCLUDED_)
