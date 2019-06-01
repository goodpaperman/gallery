// MailDoc.h : interface of the CMailDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_MAILDOC_H__D48AE17D_9F29_4DC4_9B6B_0B493CDDA22B__INCLUDED_)
#define AFX_MAILDOC_H__D48AE17D_9F29_4DC4_9B6B_0B493CDDA22B__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CMailDoc : public CDocument
{
protected: // create from serialization only
	CMailDoc();
	DECLARE_DYNCREATE(CMailDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMailDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CMailDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CMailDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MAILDOC_H__D48AE17D_9F29_4DC4_9B6B_0B493CDDA22B__INCLUDED_)
