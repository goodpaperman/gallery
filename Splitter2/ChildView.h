// ChildView.h : interface of the CChildView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CHILDVIEW_H__72CEC46D_D656_4956_B0CB_FF819012D2FF__INCLUDED_)
#define AFX_CHILDVIEW_H__72CEC46D_D656_4956_B0CB_FF819012D2FF__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CChildView window

class CChildView : public CWnd
{
    DECLARE_DYNCREATE(CChildView)
// Construction
public:
	CChildView();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CChildView)
	protected:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CChildView();

	// Generated message map functions
protected:
	//{{AFX_MSG(CChildView)
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CHILDVIEW_H__72CEC46D_D656_4956_B0CB_FF819012D2FF__INCLUDED_)
