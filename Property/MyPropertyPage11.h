// MyPropertyPage11.h : header file
//

#ifndef __MYPROPERTYPAGE11_H__
#define __MYPROPERTYPAGE11_H__

/////////////////////////////////////////////////////////////////////////////
// CMyPropertyPage11 dialog

class CMyPropertyPage11 : public CPropertyPage
{
	DECLARE_DYNCREATE(CMyPropertyPage11)

// Construction
public:
	CMyPropertyPage11();
	~CMyPropertyPage11();

// Dialog Data
	//{{AFX_DATA(CMyPropertyPage11)
	enum { IDD = IDD_PROPPAGE11 };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CMyPropertyPage11)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CMyPropertyPage11)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};


/////////////////////////////////////////////////////////////////////////////
// CMyPropertyPage21 dialog

class CMyPropertyPage21 : public CPropertyPage
{
	DECLARE_DYNCREATE(CMyPropertyPage21)

// Construction
public:
	CMyPropertyPage21();
	~CMyPropertyPage21();

// Dialog Data
	//{{AFX_DATA(CMyPropertyPage21)
	enum { IDD = IDD_PROPPAGE21 };
		// NOTE - ClassWizard will add data members here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_DATA


// Overrides
	// ClassWizard generate virtual function overrides
	//{{AFX_VIRTUAL(CMyPropertyPage21)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	// Generated message map functions
	//{{AFX_MSG(CMyPropertyPage21)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};



#endif // __MYPROPERTYPAGE11_H__
