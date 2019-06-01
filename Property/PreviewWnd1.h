// PreviewWnd1.h : header file
//
// This file contains the preview window used by the 
// CMyPropertySheet1 property sheet.

/////////////////////////////////////////////////////////////////////////////
// CPreviewWnd1 window

#ifndef __PREVIEWWND1_H__
#define __PREVIEWWND1_H__

class CPreviewWnd1 : public CWnd
{
// Construction
public:
	CPreviewWnd1();

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPreviewWnd1)
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPreviewWnd1();

	// Generated message map functions
protected:
	//{{AFX_MSG(CPreviewWnd1)
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

#endif		// __PREVIEWWND1_H__