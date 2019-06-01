// ClipboardView.h : interface of the CClipboardView class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CLIPBOARDVIEW_H__02AE44A9_5F1A_486D_95BE_819841A148CE__INCLUDED_)
#define AFX_CLIPBOARDVIEW_H__02AE44A9_5F1A_486D_95BE_819841A148CE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CClipboardView : public CFormView
{
protected: // create from serialization only
	CClipboardView();
	DECLARE_DYNCREATE(CClipboardView)

public:
	//{{AFX_DATA(CClipboardView)
	enum{ IDD = IDD_CLIPBOARD_FORM };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

// Attributes
public:
	CClipboardDoc* GetDocument();

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClipboardView)
	public:
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual void OnInitialUpdate(); // called first time after construct
	//}}AFX_VIRTUAL

// Implementation
public:
	BOOL IsEditCtrl(CWnd* pWnd);
	afx_msg void OnUpdateEditCopyCut(CCmdUI* pCmdUI);
	afx_msg void OnUpdateEditPaste(CCmdUI* pCmdUI);
	afx_msg void OnUpdateEditUndo(CCmdUI* pCmdUI);
	afx_msg void OnEditCopy();
	afx_msg void OnEditCut();
	afx_msg void OnEditPaste();
	afx_msg void OnEditUndo();
	virtual ~CClipboardView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CClipboardView)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in ClipboardView.cpp
inline CClipboardDoc* CClipboardView::GetDocument()
   { return (CClipboardDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLIPBOARDVIEW_H__02AE44A9_5F1A_486D_95BE_819841A148CE__INCLUDED_)
