// IdleDlg.h : header file
//

#if !defined(AFX_IDLEDLG_H__0F186FEC_F3EB_46DE_96E4_372DF4DD85A8__INCLUDED_)
#define AFX_IDLEDLG_H__0F186FEC_F3EB_46DE_96E4_372DF4DD85A8__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CIdleDlg dialog

class CIdleDlg : public CDialog
{
// Construction
public:
	CIdleDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CIdleDlg)
	enum { IDD = IDD_IDLE_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CIdleDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CIdleDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_IDLEDLG_H__0F186FEC_F3EB_46DE_96E4_372DF4DD85A8__INCLUDED_)
