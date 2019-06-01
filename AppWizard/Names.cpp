// Names.cpp : implementation file
// CG: This file was added by the AppWizard Tools component

#include "stdafx.h"
#include "WizUtil.h"
#include "Names.h"
#include "AppWizardAw.h"


void AFXAPI ConstructElements(CNames* pElements, int nCount)
{
	for (int i = 0; i < nCount; i++, pElements++)
	{
		// call CNames default constructor directly
		new( pElements )CNames;
	}
}


////////////////////////////////////////////////////////////////////////////////
// CNames

void CNames::Init(LPCTSTR szMacroName, LPCTSTR szName, 
	LPCTSTR szBaseClass, BOOL bPrefixWithRoot /* = TRUE */)
{
	if (bPrefixWithRoot)
	{
		CString strRoot;

		// Base class name off of root
		VERIFY(AppWizardaw.m_Dictionary.Lookup(_T("safe_root"), strRoot));
		if (strRoot.IsEmpty())
			strRoot = _T("My");

		// Capitalize first letter
		strRoot.SetAt(0, toupper(strRoot[0]));

		m_strClass.Format(_T("C%s%s"), (LPCTSTR) strRoot, szName);
	}
	else
	{
		// Don't prefix with root; just use szName
		m_strClass.Format(_T("C%s"), szName);
	}

	// Do files
	UpdateFiles();

	// Remember other values for later
	m_strMacro = szMacroName;
	m_strBaseClass = szBaseClass;
}

void CNames::UpdateFiles()
{
	if (!m_bTrackIFile && !m_bTrackHFile)
		return;

	// Get filename from classname, minus leading 'C'
	CString strFile;
	strFile = (!m_strClass.IsEmpty() && m_strClass[0] == _T('C')) ? m_strClass.Mid(1) : m_strClass;

	// Update HFile if we should
	if (m_bTrackHFile)
		m_strHFile = strFile + _T(".h");

	// Update IFile if we should
	if (m_bTrackIFile)
		m_strIFile = strFile + _T(".cpp");
}

void CNames::DefineMacros()
{
	DefineStringMacro(m_strMacro + _T("_CLASS"), m_strClass);
	DefineStringMacro(m_strMacro + _T("_HFILE"), m_strHFile);
	DefineStringMacro(m_strMacro + _T("_IFILE"), m_strIFile);
}
