// MailDoc.cpp : implementation of the CMailDoc class
//

#include "stdafx.h"
#include "Mail.h"

#include "MailDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMailDoc

IMPLEMENT_DYNCREATE(CMailDoc, CDocument)

BEGIN_MESSAGE_MAP(CMailDoc, CDocument)
	ON_COMMAND(ID_FILE_SEND_MAIL, OnFileSendMail)
	ON_UPDATE_COMMAND_UI(ID_FILE_SEND_MAIL, OnUpdateFileSendMail)
	//{{AFX_MSG_MAP(CMailDoc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMailDoc construction/destruction

CMailDoc::CMailDoc()
{
}

CMailDoc::~CMailDoc()
{
}

BOOL CMailDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CMailDoc serialization

void CMailDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}

/////////////////////////////////////////////////////////////////////////////
// CMailDoc diagnostics

#ifdef _DEBUG
void CMailDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CMailDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMailDoc commands
