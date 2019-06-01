// SplitterDoc.h : interface of the CSplitterDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_SPLITTERDOC_H__89F6D82D_313F_4034_A9B6_3ACE84F9EDAE__INCLUDED_)
#define AFX_SPLITTERDOC_H__89F6D82D_313F_4034_A9B6_3ACE84F9EDAE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CSplitterDoc : public CDocument
{
protected: // create from serialization only
	CSplitterDoc();
	DECLARE_DYNCREATE(CSplitterDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CSplitterDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CSplitterDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CSplitterDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SPLITTERDOC_H__89F6D82D_313F_4034_A9B6_3ACE84F9EDAE__INCLUDED_)
