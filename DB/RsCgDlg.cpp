// RsCgDlg.cpp : implementation file
//

#include "stdafx.h"
#include "RsCgDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CRsCgDlg dialog


CRsCgDlg::CRsCgDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CRsCgDlg::IDD, pParent)
{
	m_strConnection = _T("Provider=MSDASQL.1;Persist Security Info=False;Data Source=ELISEN");
	m_strCmdText = _T("ToolInformation");

	m_pRs = NULL;
	
	//{{AFX_DATA_INIT(CRsCgDlg)
	m_lDlgID = 0;
	m_strDlgName = _T("");
	m_strDlgRemark = _T("");
	m_strDlgImagePath = _T("");
	m_strDlgSN = _T("");
	m_fDlgLength = 0;
	m_strDlgLengthUnit = _T("");
	m_fDlgWeight = 0;
	m_strDlgWeightUnit = _T("");
	m_fDlgOutterDiameter = 0;
	m_strDlgOutterDiameterUnit = _T("");
	m_fDlgInnerDiameter = 0;
	m_strDlgInnerDiameterUnit = _T("");
	m_fDlgTemperatureEndure = 0;
	m_strDlgTemperatureEndureUnit = _T("");
	m_fDlgPressureEndure = 0;
	m_strDlgPressureEndureUnit = _T("");
	m_fDlgMaxSpeed = 0;
	m_strDlgMaxSpeedUnit = _T("");
	m_sDlgDisplayMask = 0;
	m_strDlgTopTransformer = _T("");
	m_strDlgBottomTransformer = _T("");
	//}}AFX_DATA_INIT
}

CRsCgDlg::~CRsCgDlg()
{
	m_pRs = NULL;
}

BOOL CRsCgDlg::OnInitDialog()
{
	HRESULT hr = NOERROR;
	IADORecordBinding *piAdoRecordBinding = NULL;

	CDialog::OnInitDialog();

	try
	{
		m_pRs.CreateInstance(__uuidof(Recordset));

		m_pRs->CursorLocation = adUseClient;
		m_pRs->Open((LPCTSTR)m_strCmdText, (LPCTSTR)m_strConnection, adOpenStatic, 
			adLockReadOnly, adCmdTableDirect);

		if (FAILED(hr = m_pRs->QueryInterface(__uuidof(IADORecordBinding), (LPVOID *)&piAdoRecordBinding)))
			_com_issue_error(hr);
		if (FAILED(hr = piAdoRecordBinding->BindToRecordset(this)))
			_com_issue_error(hr);

		RefreshBoundData();
	}
	catch (_com_error &e)
	{
		GenerateError(e.Error(), e.Description());
	}

	if (piAdoRecordBinding)
		piAdoRecordBinding->Release();

	return TRUE;
}

void CRsCgDlg::RefreshBoundData()
{
	if (adFldOK == lIDStatus)
		m_lDlgID = m_lID;
	else
		m_lDlgID = 0;
	if (adFldOK == lNameStatus)
		m_strDlgName = m_wszName;
	else
		m_strDlgName = _T("");
	if (adFldOK == lRemarkStatus)
		m_strDlgRemark = m_wszRemark;
	else
		m_strDlgRemark = _T("");
	if (adFldOK == lImagePathStatus)
		m_strDlgImagePath = m_wszImagePath;
	else
		m_strDlgImagePath = _T("");
	if (adFldOK == lSNStatus)
		m_strDlgSN = m_wszSN;
	else
		m_strDlgSN = _T("");
	if (adFldOK == lLengthStatus)
		m_fDlgLength = m_fLength;
	else
		m_fDlgLength = 0;
	if (adFldOK == lLengthUnitStatus)
		m_strDlgLengthUnit = m_wszLengthUnit;
	else
		m_strDlgLengthUnit = _T("");
	if (adFldOK == lWeightStatus)
		m_fDlgWeight = m_fWeight;
	else
		m_fDlgWeight = 0;
	if (adFldOK == lWeightUnitStatus)
		m_strDlgWeightUnit = m_wszWeightUnit;
	else
		m_strDlgWeightUnit = _T("");
	if (adFldOK == lOutterDiameterStatus)
		m_fDlgOutterDiameter = m_fOutterDiameter;
	else
		m_fDlgOutterDiameter = 0;
	if (adFldOK == lOutterDiameterUnitStatus)
		m_strDlgOutterDiameterUnit = m_wszOutterDiameterUnit;
	else
		m_strDlgOutterDiameterUnit = _T("");
	if (adFldOK == lInnerDiameterStatus)
		m_fDlgInnerDiameter = m_fInnerDiameter;
	else
		m_fDlgInnerDiameter = 0;
	if (adFldOK == lInnerDiameterUnitStatus)
		m_strDlgInnerDiameterUnit = m_wszInnerDiameterUnit;
	else
		m_strDlgInnerDiameterUnit = _T("");
	if (adFldOK == lTemperatureEndureStatus)
		m_fDlgTemperatureEndure = m_fTemperatureEndure;
	else
		m_fDlgTemperatureEndure = 0;
	if (adFldOK == lTemperatureEndureUnitStatus)
		m_strDlgTemperatureEndureUnit = m_wszTemperatureEndureUnit;
	else
		m_strDlgTemperatureEndureUnit = _T("");
	if (adFldOK == lPressureEndureStatus)
		m_fDlgPressureEndure = m_fPressureEndure;
	else
		m_fDlgPressureEndure = 0;
	if (adFldOK == lPressureEndureUnitStatus)
		m_strDlgPressureEndureUnit = m_wszPressureEndureUnit;
	else
		m_strDlgPressureEndureUnit = _T("");
	if (adFldOK == lMaxSpeedStatus)
		m_fDlgMaxSpeed = m_fMaxSpeed;
	else
		m_fDlgMaxSpeed = 0;
	if (adFldOK == lMaxSpeedUnitStatus)
		m_strDlgMaxSpeedUnit = m_wszMaxSpeedUnit;
	else
		m_strDlgMaxSpeedUnit = _T("");
	if (adFldOK == lDisplayMaskStatus)
		m_sDlgDisplayMask = m_sDisplayMask;
	else
		m_sDlgDisplayMask = 0;
	if (adFldOK == lTopTransformerStatus)
		m_strDlgTopTransformer = m_wszTopTransformer;
	else
		m_strDlgTopTransformer = _T("");
	if (adFldOK == lBottomTransformerStatus)
		m_strDlgBottomTransformer = m_wszBottomTransformer;
	else
		m_strDlgBottomTransformer = _T("");

	UpdateData(FALSE);
}

void CRsCgDlg::GenerateError(HRESULT hr, PWSTR pwszDescription)
{
	CString strError;

	strError.Format("Run-time error '%d (%x)'", hr, hr);
	strError += "\n\n";
	strError += pwszDescription;

	AfxMessageBox(strError);
}

void CRsCgDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CRsCgDlg)
	DDX_Text(pDX, IDC_EDIT_ID, m_lDlgID);
	DDX_Text(pDX, IDC_EDIT_NAME, m_strDlgName);
	DDX_Text(pDX, IDC_EDIT_REMARK, m_strDlgRemark);
	DDX_Text(pDX, IDC_EDIT_IMAGEPATH, m_strDlgImagePath);
	DDX_Text(pDX, IDC_EDIT_SN, m_strDlgSN);
	DDX_Text(pDX, IDC_EDIT_LENGTH, m_fDlgLength);
	DDX_Text(pDX, IDC_EDIT_LENGTHUNIT, m_strDlgLengthUnit);
	DDX_Text(pDX, IDC_EDIT_WEIGHT, m_fDlgWeight);
	DDX_Text(pDX, IDC_EDIT_WEIGHTUNIT, m_strDlgWeightUnit);
	DDX_Text(pDX, IDC_EDIT_OUTTERDIAMETER, m_fDlgOutterDiameter);
	DDX_Text(pDX, IDC_EDIT_OUTTERDIAMETERUNIT, m_strDlgOutterDiameterUnit);
	DDX_Text(pDX, IDC_EDIT_INNERDIAMETER, m_fDlgInnerDiameter);
	DDX_Text(pDX, IDC_EDIT_INNERDIAMETERUNIT, m_strDlgInnerDiameterUnit);
	DDX_Text(pDX, IDC_EDIT_TEMPERATUREENDURE, m_fDlgTemperatureEndure);
	DDX_Text(pDX, IDC_EDIT_TEMPERATUREENDUREUNIT, m_strDlgTemperatureEndureUnit);
	DDX_Text(pDX, IDC_EDIT_PRESSUREENDURE, m_fDlgPressureEndure);
	DDX_Text(pDX, IDC_EDIT_PRESSUREENDUREUNIT, m_strDlgPressureEndureUnit);
	DDX_Text(pDX, IDC_EDIT_MAXSPEED, m_fDlgMaxSpeed);
	DDX_Text(pDX, IDC_EDIT_MAXSPEEDUNIT, m_strDlgMaxSpeedUnit);
	DDX_Text(pDX, IDC_EDIT_DISPLAYMASK, m_sDlgDisplayMask);
	DDX_Text(pDX, IDC_EDIT_TOPTRANSFORMER, m_strDlgTopTransformer);
	DDX_Text(pDX, IDC_EDIT_BOTTOMTRANSFORMER, m_strDlgBottomTransformer);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CRsCgDlg, CDialog)
	//{{AFX_MSG_MAP(CRsCgDlg)
	ON_BN_CLICKED(ID_BTN_MOVEFIRST, OnBtnMoveFirst)
	ON_BN_CLICKED(ID_BTN_MOVELAST, OnBtnMoveLast)
	ON_BN_CLICKED(ID_BTN_MOVENEXT, OnBtnMoveNext)
	ON_BN_CLICKED(ID_BTN_MOVEPREVIOUS, OnBtnMovePrevious)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CRsCgDlg message handlers

void CRsCgDlg::OnBtnMoveFirst() 
{
	try
	{
		m_pRs->MoveFirst();
		RefreshBoundData();
	}
	catch (_com_error &e)
	{
		GenerateError(e.Error(), e.Description());
	}
}

void CRsCgDlg::OnBtnMoveLast() 
{
	try
	{
		m_pRs->MoveLast();
		RefreshBoundData();
	}
	catch (_com_error &e)
	{
		GenerateError(e.Error(), e.Description());
	}
}

void CRsCgDlg::OnBtnMoveNext() 
{
	try
	{
		m_pRs->MoveNext();
		RefreshBoundData();
	}
	catch (_com_error &e)
	{
		GenerateError(e.Error(), e.Description());
	}
}

void CRsCgDlg::OnBtnMovePrevious() 
{
	try
	{
		m_pRs->MovePrevious();
		RefreshBoundData();
	}
	catch (_com_error &e)
	{
		GenerateError(e.Error(), e.Description());
	}
}
