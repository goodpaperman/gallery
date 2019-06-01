// ClipboardDoc.h : interface of the CClipboardDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_CLIPBOARDDOC_H__50B06759_2ADC_451A_8F52_CB854F816E9E__INCLUDED_)
#define AFX_CLIPBOARDDOC_H__50B06759_2ADC_451A_8F52_CB854F816E9E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CClipboardDoc : public CDocument
{
protected: // create from serialization only
	CClipboardDoc();
	DECLARE_DYNCREATE(CClipboardDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClipboardDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CClipboardDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CClipboardDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLIPBOARDDOC_H__50B06759_2ADC_451A_8F52_CB854F816E9E__INCLUDED_)
