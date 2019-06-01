// PaletteDoc.h : interface of the CPaletteDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_PALETTEDOC_H__D4EAF984_33FE_4F7A_B960_BE6A8847812E__INCLUDED_)
#define AFX_PALETTEDOC_H__D4EAF984_33FE_4F7A_B960_BE6A8847812E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CPaletteDoc : public CDocument
{
protected: // create from serialization only
	CPaletteDoc();
	DECLARE_DYNCREATE(CPaletteDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CPaletteDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CPaletteDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CPaletteDoc)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_PALETTEDOC_H__D4EAF984_33FE_4F7A_B960_BE6A8847812E__INCLUDED_)
