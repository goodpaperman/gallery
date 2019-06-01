// SplitterDoc.cpp : implementation of the CSplitterDoc class
//

#include "stdafx.h"
#include "Splitter.h"

#include "SplitterDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CSplitterDoc

IMPLEMENT_DYNCREATE(CSplitterDoc, CDocument)

BEGIN_MESSAGE_MAP(CSplitterDoc, CDocument)
	//{{AFX_MSG_MAP(CSplitterDoc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CSplitterDoc construction/destruction

CSplitterDoc::CSplitterDoc()
{
}

CSplitterDoc::~CSplitterDoc()
{
}

BOOL CSplitterDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CSplitterDoc serialization

void CSplitterDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}

/////////////////////////////////////////////////////////////////////////////
// CSplitterDoc diagnostics

#ifdef _DEBUG
void CSplitterDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CSplitterDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CSplitterDoc commands
