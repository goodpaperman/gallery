#ifndef _RsCgDlg_H_
#define _RsCgDlg_H_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

#include "resource.h"
// CG : In order to use this code against a different version of ADO, the appropriate
// ADO library needs to be used in the #import statement
#import "C:\Program Files\Common Files\system\ado\msado15.dll" rename_namespace("ADOCG") rename("EOF", "EndOfFile")
using namespace ADOCG;
#include "icrsint.h"

// RsCgDlg.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CCustomRs class

class CCustomRs : 
	public CADORecordBinding
{
BEGIN_ADO_BINDING(CCustomRs)
	ADO_FIXED_LENGTH_ENTRY(1, adInteger, m_lID, lIDStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(2, adVarWChar, m_wszName, sizeof(m_wszName), lNameStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(3, adLongVarWChar, m_wszRemark, sizeof(m_wszRemark), lRemarkStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(4, adLongVarWChar, m_wszImagePath, sizeof(m_wszImagePath), lImagePathStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(5, adLongVarWChar, m_wszSN, sizeof(m_wszSN), lSNStatus, FALSE)
	ADO_FIXED_LENGTH_ENTRY(6, adSingle, m_fLength, lLengthStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(7, adVarWChar, m_wszLengthUnit, sizeof(m_wszLengthUnit), lLengthUnitStatus, FALSE)
	ADO_FIXED_LENGTH_ENTRY(8, adSingle, m_fWeight, lWeightStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(9, adVarWChar, m_wszWeightUnit, sizeof(m_wszWeightUnit), lWeightUnitStatus, FALSE)
	ADO_FIXED_LENGTH_ENTRY(10, adSingle, m_fOutterDiameter, lOutterDiameterStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(11, adVarWChar, m_wszOutterDiameterUnit, sizeof(m_wszOutterDiameterUnit), lOutterDiameterUnitStatus, FALSE)
	ADO_FIXED_LENGTH_ENTRY(12, adSingle, m_fInnerDiameter, lInnerDiameterStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(13, adVarWChar, m_wszInnerDiameterUnit, sizeof(m_wszInnerDiameterUnit), lInnerDiameterUnitStatus, FALSE)
	ADO_FIXED_LENGTH_ENTRY(14, adSingle, m_fTemperatureEndure, lTemperatureEndureStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(15, adVarWChar, m_wszTemperatureEndureUnit, sizeof(m_wszTemperatureEndureUnit), lTemperatureEndureUnitStatus, FALSE)
	ADO_FIXED_LENGTH_ENTRY(16, adSingle, m_fPressureEndure, lPressureEndureStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(17, adVarWChar, m_wszPressureEndureUnit, sizeof(m_wszPressureEndureUnit), lPressureEndureUnitStatus, FALSE)
	ADO_FIXED_LENGTH_ENTRY(18, adSingle, m_fMaxSpeed, lMaxSpeedStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(19, adVarWChar, m_wszMaxSpeedUnit, sizeof(m_wszMaxSpeedUnit), lMaxSpeedUnitStatus, FALSE)
	ADO_FIXED_LENGTH_ENTRY(20, adSmallInt, m_sDisplayMask, lDisplayMaskStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(21, adVarWChar, m_wszTopTransformer, sizeof(m_wszTopTransformer), lTopTransformerStatus, FALSE)
	ADO_VARIABLE_LENGTH_ENTRY2(22, adVarWChar, m_wszBottomTransformer, sizeof(m_wszBottomTransformer), lBottomTransformerStatus, FALSE)
END_ADO_BINDING()

protected:
	LONG m_lID;
	ULONG lIDStatus;
	WCHAR m_wszName[51];
	ULONG lNameStatus;
	WCHAR m_wszRemark[8192];
	ULONG lRemarkStatus;
	WCHAR m_wszImagePath[8192];
	ULONG lImagePathStatus;
	WCHAR m_wszSN[8192];
	ULONG lSNStatus;
	FLOAT m_fLength;
	ULONG lLengthStatus;
	WCHAR m_wszLengthUnit[51];
	ULONG lLengthUnitStatus;
	FLOAT m_fWeight;
	ULONG lWeightStatus;
	WCHAR m_wszWeightUnit[51];
	ULONG lWeightUnitStatus;
	FLOAT m_fOutterDiameter;
	ULONG lOutterDiameterStatus;
	WCHAR m_wszOutterDiameterUnit[51];
	ULONG lOutterDiameterUnitStatus;
	FLOAT m_fInnerDiameter;
	ULONG lInnerDiameterStatus;
	WCHAR m_wszInnerDiameterUnit[51];
	ULONG lInnerDiameterUnitStatus;
	FLOAT m_fTemperatureEndure;
	ULONG lTemperatureEndureStatus;
	WCHAR m_wszTemperatureEndureUnit[51];
	ULONG lTemperatureEndureUnitStatus;
	FLOAT m_fPressureEndure;
	ULONG lPressureEndureStatus;
	WCHAR m_wszPressureEndureUnit[51];
	ULONG lPressureEndureUnitStatus;
	FLOAT m_fMaxSpeed;
	ULONG lMaxSpeedStatus;
	WCHAR m_wszMaxSpeedUnit[51];
	ULONG lMaxSpeedUnitStatus;
	SHORT m_sDisplayMask;
	ULONG lDisplayMaskStatus;
	WCHAR m_wszTopTransformer[256];
	ULONG lTopTransformerStatus;
	WCHAR m_wszBottomTransformer[256];
	ULONG lBottomTransformerStatus;
};

//
// TODO : These definitions should be moved to the resource header.
//
#define ID_BTN_MOVEPREVIOUS			201
#define ID_BTN_MOVENEXT				202
#define ID_BTN_MOVELAST				203
#define ID_BTN_MOVEFIRST				204
#define IDC_STATIC_ID		1001
#define IDC_EDIT_ID		2001
#define IDC_STATIC_NAME		1002
#define IDC_EDIT_NAME		2002
#define IDC_STATIC_REMARK		1003
#define IDC_EDIT_REMARK		2003
#define IDC_STATIC_IMAGEPATH		1004
#define IDC_EDIT_IMAGEPATH		2004
#define IDC_STATIC_SN		1005
#define IDC_EDIT_SN		2005
#define IDC_STATIC_LENGTH		1006
#define IDC_EDIT_LENGTH		2006
#define IDC_STATIC_LENGTHUNIT		1007
#define IDC_EDIT_LENGTHUNIT		2007
#define IDC_STATIC_WEIGHT		1008
#define IDC_EDIT_WEIGHT		2008
#define IDC_STATIC_WEIGHTUNIT		1009
#define IDC_EDIT_WEIGHTUNIT		2009
#define IDC_STATIC_OUTTERDIAMETER		1010
#define IDC_EDIT_OUTTERDIAMETER		2010
#define IDC_STATIC_OUTTERDIAMETERUNIT		1011
#define IDC_EDIT_OUTTERDIAMETERUNIT		2011
#define IDC_STATIC_INNERDIAMETER		1012
#define IDC_EDIT_INNERDIAMETER		2012
#define IDC_STATIC_INNERDIAMETERUNIT		1013
#define IDC_EDIT_INNERDIAMETERUNIT		2013
#define IDC_STATIC_TEMPERATUREENDURE		1014
#define IDC_EDIT_TEMPERATUREENDURE		2014
#define IDC_STATIC_TEMPERATUREENDUREUNIT		1015
#define IDC_EDIT_TEMPERATUREENDUREUNIT		2015
#define IDC_STATIC_PRESSUREENDURE		1016
#define IDC_EDIT_PRESSUREENDURE		2016
#define IDC_STATIC_PRESSUREENDUREUNIT		1017
#define IDC_EDIT_PRESSUREENDUREUNIT		2017
#define IDC_STATIC_MAXSPEED		1018
#define IDC_EDIT_MAXSPEED		2018
#define IDC_STATIC_MAXSPEEDUNIT		1019
#define IDC_EDIT_MAXSPEEDUNIT		2019
#define IDC_STATIC_DISPLAYMASK		1020
#define IDC_EDIT_DISPLAYMASK		2020
#define IDC_STATIC_TOPTRANSFORMER		1021
#define IDC_EDIT_TOPTRANSFORMER		2021
#define IDC_STATIC_BOTTOMTRANSFORMER		1022
#define IDC_EDIT_BOTTOMTRANSFORMER		2022


/////////////////////////////////////////////////////////////////////////////
// CRsCgDlg dialog

class CRsCgDlg : 
	public CDialog, 
	public CCustomRs
{
// Construction
public:
	CRsCgDlg(CWnd* pParent = NULL);
	~CRsCgDlg();

	BOOL OnInitDialog();

// Dialog Data
	//{{AFX_DATA(CRsCgDlg)
	enum { IDD = CG_IDD_RECORDSET };
	LONG m_lDlgID;
	CString m_strDlgName;
	CString m_strDlgRemark;
	CString m_strDlgImagePath;
	CString m_strDlgSN;
	FLOAT m_fDlgLength;
	CString m_strDlgLengthUnit;
	FLOAT m_fDlgWeight;
	CString m_strDlgWeightUnit;
	FLOAT m_fDlgOutterDiameter;
	CString m_strDlgOutterDiameterUnit;
	FLOAT m_fDlgInnerDiameter;
	CString m_strDlgInnerDiameterUnit;
	FLOAT m_fDlgTemperatureEndure;
	CString m_strDlgTemperatureEndureUnit;
	FLOAT m_fDlgPressureEndure;
	CString m_strDlgPressureEndureUnit;
	FLOAT m_fDlgMaxSpeed;
	CString m_strDlgMaxSpeedUnit;
	SHORT m_sDlgDisplayMask;
	CString m_strDlgTopTransformer;
	CString m_strDlgBottomTransformer;
	//}}AFX_DATA
	

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CRsCgDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	void RefreshBoundData();
	void GenerateError(HRESULT hr, PWSTR pwszDescription);

	_RecordsetPtr m_pRs;

	CString m_strConnection;
	CString m_strCmdText;

	// Generated message map functions
	//{{AFX_MSG(CRsCgDlg)
	afx_msg void OnBtnMoveFirst();
	afx_msg void OnBtnMoveLast();
	afx_msg void OnBtnMoveNext();
	afx_msg void OnBtnMovePrevious();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio will insert additional declarations immediately before the previous line.

#endif // !_RsCgDlg_H_
