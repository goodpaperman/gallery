; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CMenuDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Menu.h"

ClassCount=2
Class1=CMenuApp
Class2=CMenuDlg

ResourceCount=4
Resource2=IDR_MAINFRAME
Resource3=IDD_MENU_DIALOG
Resource4=CG_IDR_POPUP_MENU_DLG

[CLS:CMenuApp]
Type=0
HeaderFile=Menu.h
ImplementationFile=Menu.cpp
Filter=N

[CLS:CMenuDlg]
Type=0
HeaderFile=MenuDlg.h
ImplementationFile=MenuDlg.cpp
Filter=D
BaseClass=CDialog
VirtualFilter=dWC
LastObject=ID_EDIT_PASTE



[DLG:IDD_MENU_DIALOG]
Type=1
Class=CMenuDlg
ControlCount=3
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_STATIC,static,1342308352

[MNU:CG_IDR_POPUP_MENU_DLG]
Type=1
Class=?
Command1=ID_EDIT_CUT
Command2=ID_EDIT_COPY
Command3=ID_EDIT_PASTE
CommandCount=3

