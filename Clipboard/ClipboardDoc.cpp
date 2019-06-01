// ClipboardDoc.cpp : implementation of the CClipboardDoc class
//

#include "stdafx.h"
#include "Clipboard.h"

#include "ClipboardDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CClipboardDoc

IMPLEMENT_DYNCREATE(CClipboardDoc, CDocument)

BEGIN_MESSAGE_MAP(CClipboardDoc, CDocument)
	//{{AFX_MSG_MAP(CClipboardDoc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CClipboardDoc construction/destruction

CClipboardDoc::CClipboardDoc()
{
}

CClipboardDoc::~CClipboardDoc()
{
}

BOOL CClipboardDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CClipboardDoc serialization

void CClipboardDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}

/////////////////////////////////////////////////////////////////////////////
// CClipboardDoc diagnostics

#ifdef _DEBUG
void CClipboardDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CClipboardDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CClipboardDoc commands
