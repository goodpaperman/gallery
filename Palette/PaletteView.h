// PaletteView.h : interface of the CPaletteView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PALETTEVIEW_H__9C802096_110E_48CE_9AAF_2754A2055990__INCLUDED_)
#define AFX_PALETTEVIEW_H__9C802096_110E_48CE_9AAF_2754A2055990__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CPaletteView : public CView
{
protected: // create from serialization only
	CPaletteView();
	DECLARE_DYNCREATE(CPaletteView)

// Attributes
public:
	CPaletteDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPaletteView)
	public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnActivateView(BOOL bActivate, CView* pActivateView, CView* pDeactiveView);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPaletteView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPaletteView)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in PaletteView.cpp
inline CPaletteDoc* CPaletteView::GetDocument()
   { return (CPaletteDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PALETTEVIEW_H__9C802096_110E_48CE_9AAF_2754A2055990__INCLUDED_)
