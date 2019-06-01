// MyPropertySheet1.h : header file
//
// This class defines custom modal property sheet 
// CMyPropertySheet1.
 // CMyPropertySheet1 has been customized to include
// a preview window.
 
#ifndef __MYPROPERTYSHEET1_H__
#define __MYPROPERTYSHEET1_H__

#include "MyPropertyPage11.h"
#include "PreviewWnd1.h"

/////////////////////////////////////////////////////////////////////////////
// CMyPropertySheet1

class CMyPropertySheet1 : public CPropertySheet
{
	DECLARE_DYNAMIC(CMyPropertySheet1)

// Construction
public:
	CMyPropertySheet1(CWnd* pWndParent = NULL);

// Attributes
public:
	CMyPropertyPage11 m_Page1;
	CMyPropertyPage21 m_Page2;
	CPreviewWnd1 m_wndPreview;

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMyPropertySheet1)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMyPropertySheet1();
		 virtual BOOL OnInitDialog();

// Generated message map functions
protected:
	//{{AFX_MSG(CMyPropertySheet1)
		// NOTE - the ClassWizard will add and remove member functions here.
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

#endif	// __MYPROPERTYSHEET1_H__
