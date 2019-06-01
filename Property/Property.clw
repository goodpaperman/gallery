; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMainFrame
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Property.h"
LastPage=0

ClassCount=12
Class1=CPropertyApp
Class3=CMainFrame
Class4=CAboutDlg

ResourceCount=11
Resource1=IDD_PROPPAGE1
Resource2=IDD_PROPPAGE21
Resource8=IDD_PROPPAGE11
Class2=CChildView
Class5=CMyPropertySheet
Class6=CPreviewWnd
Class7=CMyPropertyPage1
Class8=CMyPropertyPage2
Resource9=IDR_MAINFRAME
Resource10=IDD_ABOUTBOX
Class9=CMyPropertySheet1
Class10=CPreviewWnd1
Class11=CMyPropertyPage11
Class12=CMyPropertyPage21
Resource11=IDD_PROPPAGE2

[CLS:CPropertyApp]
Type=0
HeaderFile=Property.h
ImplementationFile=Property.cpp
Filter=N

[CLS:CChildView]
Type=0
HeaderFile=ChildView.h
ImplementationFile=ChildView.cpp
Filter=N

[CLS:CMainFrame]
Type=0
HeaderFile=MainFrm.h
ImplementationFile=MainFrm.cpp
Filter=T
BaseClass=CFrameWnd
VirtualFilter=fWC
LastObject=ID_VIEW_WIZARD




[CLS:CAboutDlg]
Type=0
HeaderFile=Property.cpp
ImplementationFile=Property.cpp
Filter=D

[DLG:IDD_ABOUTBOX]
Type=1
Class=CAboutDlg
ControlCount=4
Control1=IDC_STATIC,static,1342177283
Control2=IDC_STATIC,static,1342308480
Control3=IDC_STATIC,static,1342308352
Control4=IDOK,button,1342373889

[MNU:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_APP_EXIT
Command2=ID_EDIT_UNDO
Command3=ID_EDIT_CUT
Command4=ID_EDIT_COPY
Command5=ID_EDIT_PASTE
Command6=ID_VIEW_TOOLBAR
Command7=ID_VIEW_STATUS_BAR
Command8=ID_VIEW_PROPERTY
Command9=ID_VIEW_WIZARD
Command10=ID_APP_ABOUT
CommandCount=10

[ACL:IDR_MAINFRAME]
Type=1
Class=CMainFrame
Command1=ID_EDIT_COPY
Command2=ID_EDIT_PASTE
Command3=ID_EDIT_UNDO
Command4=ID_EDIT_CUT
Command5=ID_NEXT_PANE
Command6=ID_PREV_PANE
Command7=ID_EDIT_COPY
Command8=ID_EDIT_PASTE
Command9=ID_EDIT_CUT
Command10=ID_EDIT_UNDO
CommandCount=10

[TB:IDR_MAINFRAME]
Type=1
Class=?
Command1=ID_EDIT_CUT
Command2=ID_EDIT_COPY
Command3=ID_EDIT_PASTE
Command4=ID_FILE_PRINT
Command5=ID_APP_ABOUT
CommandCount=5

[DLG:IDD_PROPPAGE1]
Type=1
Class=CMyPropertyPage1
ControlCount=2
Control1=IDC_STATIC,static,1342308352
Control2=IDC_CHECK1,button,1342242819

[DLG:IDD_PROPPAGE2]
Type=1
Class=CMyPropertyPage2
ControlCount=3
Control1=IDC_STATIC,static,1342308352
Control2=IDC_RADIO1,button,1342177289
Control3=IDC_RADIO2,button,1342177289

[CLS:CMyPropertySheet]
Type=0
HeaderFile=MyPropertySheet.h
ImplementationFile=MyPropertySheet.cpp
BaseClass=CPropertySheet

[CLS:CPreviewWnd]
Type=0
HeaderFile=PreviewWnd.h
ImplementationFile=PreviewWnd.cpp
BaseClass=CWnd

[CLS:CMyPropertyPage1]
Type=0
HeaderFile=MyPropertyPage1.h
ImplementationFile=MyPropertyPage1.cpp
BaseClass=CPropertyPage

[CLS:CMyPropertyPage2]
Type=0
HeaderFile=MyPropertyPage1.h
ImplementationFile=MyPropertyPage1.cpp
BaseClass=CPropertyPage

[DLG:IDD_PROPPAGE11]
Type=1
Class=CMyPropertyPage11
ControlCount=2
Control1=IDC_STATIC,static,1342308352
Control2=IDC_EDIT1,edit,1350631552

[DLG:IDD_PROPPAGE21]
Type=1
Class=CMyPropertyPage21
ControlCount=2
Control1=IDC_STATIC,static,1342308352
Control2=IDC_BUTTON1,button,1342242816

[CLS:CMyPropertySheet1]
Type=0
HeaderFile=MyPropertySheet1.h
ImplementationFile=MyPropertySheet1.cpp
BaseClass=CPropertySheet

[CLS:CPreviewWnd1]
Type=0
HeaderFile=PreviewWnd1.h
ImplementationFile=PreviewWnd1.cpp
BaseClass=CWnd

[CLS:CMyPropertyPage11]
Type=0
HeaderFile=MyPropertyPage11.h
ImplementationFile=MyPropertyPage11.cpp
BaseClass=CPropertyPage

[CLS:CMyPropertyPage21]
Type=0
HeaderFile=MyPropertyPage11.h
ImplementationFile=MyPropertyPage11.cpp
BaseClass=CPropertyPage

