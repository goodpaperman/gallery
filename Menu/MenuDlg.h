// MenuDlg.h : header file
//

#if !defined(AFX_MENUDLG_H__B5503BB0_CD71_426F_AB73_12C4197FFE8E__INCLUDED_)
#define AFX_MENUDLG_H__B5503BB0_CD71_426F_AB73_12C4197FFE8E__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CMenuDlg dialog

class CMenuDlg : public CDialog
{
// Construction
public:
	CMenuDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CMenuDlg)
	enum { IDD = IDD_MENU_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMenuDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	afx_msg void OnContextMenu(CWnd*, CPoint point);
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CMenuDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnEditCopy();
	afx_msg void OnEditCut();
	afx_msg void OnEditPaste();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MENUDLG_H__B5503BB0_CD71_426F_AB73_12C4197FFE8E__INCLUDED_)
