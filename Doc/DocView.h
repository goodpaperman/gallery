// DocView.h : interface of the CDocView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DOCVIEW_H__6D2428DD_873B_4D8E_81DF_F921ADC8199F__INCLUDED_)
#define AFX_DOCVIEW_H__6D2428DD_873B_4D8E_81DF_F921ADC8199F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDocView : public CListView
{
protected: // create from serialization only
	CDocView();
	DECLARE_DYNCREATE(CDocView)

// Attributes
public:
	CDocDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDocView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDocView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDocView)
	//}}AFX_MSG
	afx_msg void OnStyleChanged(int nStyleType, LPSTYLESTRUCT lpStyleStruct);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in DocView.cpp
inline CDocDoc* CDocView::GetDocument()
   { return (CDocDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DOCVIEW_H__6D2428DD_873B_4D8E_81DF_F921ADC8199F__INCLUDED_)
