; CLW file contains information for the MFC ClassWizard

[General Info]
Version=1
LastClass=CClipboardDlg
LastTemplate=CDialog
NewFileInclude1=#include "stdafx.h"
NewFileInclude2=#include "Clipboard.h"

ClassCount=4
Class1=CClipboardApp
Class2=CClipboardDlg

ResourceCount=4
Resource2=IDR_MAINFRAME
Resource3=IDD_CLIPBOARD_DIALOG
Resource4=IDR_MAIN

[CLS:CClipboardApp]
Type=0
HeaderFile=Clipboard.h
ImplementationFile=Clipboard.cpp
Filter=N

[CLS:CClipboardDlg]
Type=0
HeaderFile=ClipboardDlg.h
ImplementationFile=ClipboardDlg.cpp
Filter=D



[DLG:IDD_CLIPBOARD_DIALOG]
Type=1
Class=CClipboardDlg
ControlCount=7
Control1=IDOK,button,1342242817
Control2=IDCANCEL,button,1342242816
Control3=IDC_EDIT2,edit,1350631552
Control4=IDC_COMBO1,combobox,1344340226
Control5=IDC_CHECK1,button,1342242819
Control6=IDC_RADIO1,button,1342177289
Control7=IDC_RADIO2,button,1342177289

[MNU:IDR_MAIN]
Type=1
Class=?
Command1=ID_EDIT_UNDO
Command2=ID_EDIT_CUT
Command3=ID_EDIT_COPY
Command4=ID_EDIT_PASTE
CommandCount=4

