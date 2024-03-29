#if !defined(AFX_BARCODECTRL_H__6F3F9CAD_0FB4_47CF_909C_C6D3BAC60AF1__INCLUDED_)
#define AFX_BARCODECTRL_H__6F3F9CAD_0FB4_47CF_909C_C6D3BAC60AF1__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Machine generated IDispatch wrapper class(es) created by Microsoft Visual C++

// NOTE: Do not modify the contents of this file.  If this class is regenerated by
//  Microsoft Visual C++, your modifications will be overwritten.

/////////////////////////////////////////////////////////////////////////////
// CBarCodeCtrl wrapper class

class CBarCodeCtrl : public CWnd
{
protected:
	DECLARE_DYNCREATE(CBarCodeCtrl)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0xd9347033, 0x9612, 0x11d1, { 0x9d, 0x75, 0x0, 0xc0, 0x4f, 0xcc, 0x8c, 0xdc } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attributes
public:

// Operations
public:
	void SetBackColor(unsigned long newValue);
	unsigned long GetBackColor();
	void SetForeColor(unsigned long newValue);
	unsigned long GetForeColor();
	short GetStyle();
	void SetStyle(short nNewValue);
	short GetSubStyle();
	void SetSubStyle(short nNewValue);
	short GetValidation();
	void SetValidation(short nNewValue);
	short GetLineWeight();
	void SetLineWeight(short nNewValue);
	short GetDirection();
	void SetDirection(short nNewValue);
	long GetShowData();
	void SetShowData(long nNewValue);
	VARIANT GetValue();
	void SetValue(const VARIANT& newValue);
	void AboutBox();
	void Refresh();
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_BARCODECTRL_H__6F3F9CAD_0FB4_47CF_909C_C6D3BAC60AF1__INCLUDED_)
