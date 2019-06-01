// MyPropertyPage11.cpp : implementation file
//

#include "stdafx.h"
#include "resource.h"
#include "MyPropertyPage11.h"

#ifdef _DEBUG
#undef THIS_FILE
static char BASED_CODE THIS_FILE[] = __FILE__;
#endif

IMPLEMENT_DYNCREATE(CMyPropertyPage11, CPropertyPage)
IMPLEMENT_DYNCREATE(CMyPropertyPage21, CPropertyPage)


/////////////////////////////////////////////////////////////////////////////
// CMyPropertyPage11 property page

CMyPropertyPage11::CMyPropertyPage11() : CPropertyPage(CMyPropertyPage11::IDD)
{
	//{{AFX_DATA_INIT(CMyPropertyPage11)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CMyPropertyPage11::~CMyPropertyPage11()
{
}

void CMyPropertyPage11::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyPropertyPage11)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMyPropertyPage11, CPropertyPage)
	//{{AFX_MSG_MAP(CMyPropertyPage11)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


/////////////////////////////////////////////////////////////////////////////
// CMyPropertyPage21 property page

CMyPropertyPage21::CMyPropertyPage21() : CPropertyPage(CMyPropertyPage21::IDD)
{
	//{{AFX_DATA_INIT(CMyPropertyPage21)
		// NOTE: the ClassWizard will add member initialization here
	//}}AFX_DATA_INIT
}

CMyPropertyPage21::~CMyPropertyPage21()
{
}

void CMyPropertyPage21::DoDataExchange(CDataExchange* pDX)
{
	CPropertyPage::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CMyPropertyPage21)
		// NOTE: the ClassWizard will add DDX and DDV calls here
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CMyPropertyPage21, CPropertyPage)
	//{{AFX_MSG_MAP(CMyPropertyPage21)
		// NOTE: the ClassWizard will add message map macros here
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()


