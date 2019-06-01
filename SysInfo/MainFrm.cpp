// MainFrm.cpp : implementation of the CMainFrame class
//

#include "stdafx.h"
#include "SysInfo.h"

#include "MainFrm.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CMainFrame

IMPLEMENT_DYNAMIC(CMainFrame, CFrameWnd)

BEGIN_MESSAGE_MAP(CMainFrame, CFrameWnd)
	ON_WM_INITMENUPOPUP()
	ON_WM_MENUSELECT()
	ON_UPDATE_COMMAND_UI(ID_INDICATOR_DATE, OnUpdateDate)
	ON_UPDATE_COMMAND_UI(ID_INDICATOR_TIME, OnUpdateTime)
	//{{AFX_MSG_MAP(CMainFrame)
	ON_WM_CREATE()
	ON_WM_SETFOCUS()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CMainFrame construction/destruction

CMainFrame::CMainFrame()
{
	// CG: The following block was inserted by 'Status Bar' component.
	{
		m_nStatusPane1Width = -1;
		m_bMenuSelect = FALSE;
	}

}

CMainFrame::~CMainFrame()
{
}

int CMainFrame::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;
	// create a view to occupy the client area of the frame
	if (!m_wndView.Create(NULL, NULL, AFX_WS_DEFAULT_VIEW,
		CRect(0, 0, 0, 0), this, AFX_IDW_PANE_FIRST, NULL))
	{
		TRACE0("Failed to create view window\n");
		return -1;
	}
	
	if (!m_wndToolBar.CreateEx(this, TBSTYLE_FLAT, WS_CHILD | WS_VISIBLE | CBRS_TOP
		| CBRS_GRIPPER | CBRS_TOOLTIPS | CBRS_FLYBY | CBRS_SIZE_DYNAMIC) ||
		!m_wndToolBar.LoadToolBar(IDR_MAINFRAME))
	{
		TRACE0("Failed to create toolbar\n");
		return -1;      // fail to create
	}

	m_wndToolBar.EnableDocking(CBRS_ALIGN_ANY);
	EnableDocking(CBRS_ALIGN_ANY);
	DockControlBar(&m_wndToolBar);

	// CG: The following block was inserted by 'Status Bar' component.
	{	
		// Create an array for status bar indicators
		UINT pIndicators[3] = { ID_SEPARATOR };
		if (!m_wndStatusBar.Create(this) ||
			!InitStatusBar(pIndicators, 1, 60))
		{
			TRACE0("Failed to create Status Bar\n");
			return -1;
		}

		// TODO: If you have a call to EnableDocking() and DockControlBar()
		// before this line, move them to right after this comment.  This
		// insures that the docking area remains above the status bar.
	}

	return 0;
}

BOOL CMainFrame::PreCreateWindow(CREATESTRUCT& cs)
{
	if( !CFrameWnd::PreCreateWindow(cs) )
		return FALSE;
	cs.dwExStyle &= ~WS_EX_CLIENTEDGE;
	cs.lpszClass = AfxRegisterWndClass(0);
	return TRUE;
}

/////////////////////////////////////////////////////////////////////////////
// CMainFrame diagnostics

#ifdef _DEBUG
void CMainFrame::AssertValid() const
{
	CFrameWnd::AssertValid();
}

void CMainFrame::Dump(CDumpContext& dc) const
{
	CFrameWnd::Dump(dc);
}

#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CMainFrame message handlers
void CMainFrame::OnSetFocus(CWnd* pOldWnd)
{
	// forward focus to the view window
	m_wndView.SetFocus();
}

BOOL CMainFrame::OnCmdMsg(UINT nID, int nCode, void* pExtra, AFX_CMDHANDLERINFO* pHandlerInfo)
{
	// let the view have first crack at the command
	if (m_wndView.OnCmdMsg(nID, nCode, pExtra, pHandlerInfo))
		return TRUE;

	// otherwise, do default handling
	return CFrameWnd::OnCmdMsg(nID, nCode, pExtra, pHandlerInfo);
}


void CMainFrame::OnMenuSelect(UINT nItemID, UINT nFlags, HMENU hSysMenu)
{
  	CFrameWnd::OnMenuSelect(nItemID, nFlags, hSysMenu);
  
	// CG: The following block was inserted by 'Status Bar' component.
	{
		// Restore first pane of the statusbar?
		if (nFlags == 0xFFFF && hSysMenu == 0 && m_nStatusPane1Width != -1)
		{
			m_bMenuSelect = FALSE;
			m_wndStatusBar.SetPaneInfo(0, 
				m_nStatusPane1ID, m_nStatusPane1Style, m_nStatusPane1Width);
			m_nStatusPane1Width = -1;   // Set it to illegal value
		}
		else 
		{
			m_bMenuSelect = TRUE;
		}
	}

}

void CMainFrame::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu)
{
  	CFrameWnd::OnInitMenuPopup(pPopupMenu, nIndex, bSysMenu);
  
	// CG: The following block was inserted by 'Status Bar' component.
	{
		// store width of first pane and its style
		if (m_nStatusPane1Width == -1 && m_bMenuSelect)
		{
			m_wndStatusBar.GetPaneInfo(0, m_nStatusPane1ID, 
				m_nStatusPane1Style, m_nStatusPane1Width);
			m_wndStatusBar.SetPaneInfo(0, m_nStatusPane1ID, 
				SBPS_NOBORDERS|SBPS_STRETCH, 16384);
		}
	}

}

void CMainFrame::OnUpdateDate(CCmdUI* pCmdUI)
{
	// CG: This function was inserted by 'Status Bar' component.

	// Get current date and format it
	CTime time = CTime::GetCurrentTime();
	CString strDate = time.Format(_T(" %Y-%m-%d"));

	// BLOCK: compute the width of the date string
	CSize size;
	{
		HGDIOBJ hOldFont = NULL;
		HFONT hFont = (HFONT)m_wndStatusBar.SendMessage(WM_GETFONT);
		CClientDC dc(NULL);
		if (hFont != NULL) 
			hOldFont = dc.SelectObject(hFont);
		size = dc.GetTextExtent(strDate);
		if (hOldFont != NULL) 
			dc.SelectObject(hOldFont);
	}

	// Update the pane to reflect the current date
	UINT nID, nStyle;
	int nWidth;
	m_wndStatusBar.GetPaneInfo(m_nDatePaneNo, nID, nStyle, nWidth);
	m_wndStatusBar.SetPaneInfo(m_nDatePaneNo, nID, nStyle, size.cx);
	pCmdUI->SetText(strDate);
	pCmdUI->Enable(TRUE);

}

void CMainFrame::OnUpdateTime(CCmdUI* pCmdUI)
{
	// CG: This function was inserted by 'Status Bar' component.

	// Get current date and format it
	CTime time = CTime::GetCurrentTime();
	CString strTime = time.Format(_T("%I:%M :%S "));
	strTime = (time.GetHour() < 12 ? _T("") : _T(""))+ strTime +(time.GetHour() < 12 ? _T("AM "):_T("PM "));


	// BLOCK: compute the width of the time string
	CSize size;
	{
		HGDIOBJ hOldFont = NULL;
		HFONT hFont = (HFONT)m_wndStatusBar.SendMessage(WM_GETFONT);
		CClientDC dc(NULL);
		if (hFont != NULL) 
			hOldFont = dc.SelectObject(hFont);
		size = dc.GetTextExtent(strTime);
		if (hOldFont != NULL) 
			dc.SelectObject(hOldFont);
	}

	// Update the pane to reflect the current time
	UINT nID, nStyle;
	int nWidth;
	m_wndStatusBar.GetPaneInfo(m_nTimePaneNo, nID, nStyle, nWidth);
	m_wndStatusBar.SetPaneInfo(m_nTimePaneNo, nID, nStyle, size.cx);
	pCmdUI->SetText(strTime);
	pCmdUI->Enable(TRUE);

}

BOOL CMainFrame::InitStatusBar(UINT *pIndicators, int nSize, int nSeconds)
{
	// CG: This function was inserted by 'Status Bar' component.

	// Create an index for the DATE pane
	m_nDatePaneNo = nSize++;
	pIndicators[m_nDatePaneNo] = ID_INDICATOR_DATE;
	// Create an index for the TIME pane
	m_nTimePaneNo = nSize++;
	nSeconds = 1;
	pIndicators[m_nTimePaneNo] = ID_INDICATOR_TIME;

	// TODO: Select an appropriate time interval for updating
	// the status bar when idling.
	m_wndStatusBar.SetTimer(0x1000, nSeconds * 1000, NULL);

	return m_wndStatusBar.SetIndicators(pIndicators, nSize);

}
