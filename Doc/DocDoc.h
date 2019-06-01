// DocDoc.h : interface of the CDocDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_DOCDOC_H__B87E4E2D_67DA_4047_ACDC_728E614950D2__INCLUDED_)
#define AFX_DOCDOC_H__B87E4E2D_67DA_4047_ACDC_728E614950D2__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CDocDoc : public CDocument
{
protected: // create from serialization only
	CDocDoc();
	DECLARE_DYNCREATE(CDocDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CDocDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CDocDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CDocDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DOCDOC_H__B87E4E2D_67DA_4047_ACDC_728E614950D2__INCLUDED_)
