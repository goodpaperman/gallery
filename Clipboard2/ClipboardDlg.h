// ClipboardDlg.h : header file
//

#if !defined(AFX_CLIPBOARDDLG_H__4B7CBB8C_E175_4094_97D9_1001B64E30B7__INCLUDED_)
#define AFX_CLIPBOARDDLG_H__4B7CBB8C_E175_4094_97D9_1001B64E30B7__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CClipboardDlg dialog

class CClipboardDlg : public CDialog
{
// Construction
public:
	CClipboardDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CClipboardDlg)
	enum { IDD = IDD_CLIPBOARD_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CClipboardDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
public:
	BOOL IsEditCtrl(CWnd* pWnd);
	afx_msg void OnUpdateEditCopyCut(CCmdUI* pCmdUI);
	afx_msg void OnUpdateEditPaste(CCmdUI* pCmdUI);
	afx_msg void OnUpdateEditUndo(CCmdUI* pCmdUI);
	afx_msg void OnEditCopy();
	afx_msg void OnEditCut();
	afx_msg void OnEditPaste();
	afx_msg void OnEditUndo();

protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CClipboardDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CLIPBOARDDLG_H__4B7CBB8C_E175_4094_97D9_1001B64E30B7__INCLUDED_)
