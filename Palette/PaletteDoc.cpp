// PaletteDoc.cpp : implementation of the CPaletteDoc class
//

#include "stdafx.h"
#include "Palette.h"

#include "PaletteDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CPaletteDoc

IMPLEMENT_DYNCREATE(CPaletteDoc, CDocument)

BEGIN_MESSAGE_MAP(CPaletteDoc, CDocument)
	//{{AFX_MSG_MAP(CPaletteDoc)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CPaletteDoc construction/destruction

CPaletteDoc::CPaletteDoc()
{
}

CPaletteDoc::~CPaletteDoc()
{
}

BOOL CPaletteDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CPaletteDoc serialization

void CPaletteDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
	}
	else
	{
	}
}

/////////////////////////////////////////////////////////////////////////////
// CPaletteDoc diagnostics

#ifdef _DEBUG
void CPaletteDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CPaletteDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CPaletteDoc commands
