// XCtrlDlg.h : header file
//

#if !defined(AFX_XCTRLDLG_H__D13BCDAD_9168_43A7_8950_21665FA08B22__INCLUDED_)
#define AFX_XCTRLDLG_H__D13BCDAD_9168_43A7_8950_21665FA08B22__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "OwnList.h"
#include "OwnCombo.h"

/////////////////////////////////////////////////////////////////////////////
// CXCtrlDlg dialog

class CXCtrlDlg : public CDialog
{
// Construction
public:
	CXCtrlDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CXCtrlDlg)
	enum { IDD = IDD_XCTRL_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CXCtrlDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;
	COwnerDrawListBox m_wndList; 
	COwnerDrawComboBox m_wndCombo; 

	// Generated message map functions
	//{{AFX_MSG(CXCtrlDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_XCTRLDLG_H__D13BCDAD_9168_43A7_8950_21665FA08B22__INCLUDED_)
