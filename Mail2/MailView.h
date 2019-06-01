// MailView.h : interface of the CMailView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAILVIEW_H__BADACB5E_A1AA_4E82_986E_1D73D80EC5AB__INCLUDED_)
#define AFX_MAILVIEW_H__BADACB5E_A1AA_4E82_986E_1D73D80EC5AB__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMailView : public CView
{
protected: // create from serialization only
	CMailView();
	DECLARE_DYNCREATE(CMailView)

// Attributes
public:
	CMailDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMailView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMailView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMailView)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in MailView.cpp
inline CMailDoc* CMailView::GetDocument()
   { return (CMailDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAILVIEW_H__BADACB5E_A1AA_4E82_986E_1D73D80EC5AB__INCLUDED_)
