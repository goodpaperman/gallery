// SplitterView.h : interface of the CSplitterView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SPLITTERVIEW_H__E3D268B2_E74F_426D_9AB6_276C66645534__INCLUDED_)
#define AFX_SPLITTERVIEW_H__E3D268B2_E74F_426D_9AB6_276C66645534__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSplitterView : public CView
{
protected: // create from serialization only
	CSplitterView();
	DECLARE_DYNCREATE(CSplitterView)

// Attributes
public:
	CSplitterDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSplitterView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSplitterView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSplitterView)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in SplitterView.cpp
inline CSplitterDoc* CSplitterView::GetDocument()
   { return (CSplitterDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLITTERVIEW_H__E3D268B2_E74F_426D_9AB6_276C66645534__INCLUDED_)
