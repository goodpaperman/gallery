# Microsoft Developer Studio Project File - Name="AppWizard" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Dynamic-Link Library" 0x0102

CFG=AppWizard - Win32 Pseudo-Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "AppWizard.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "AppWizard.mak" CFG="AppWizard - Win32 Pseudo-Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "AppWizard - Win32 Release" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE "AppWizard - Win32 Pseudo-Debug" (based on "Win32 (x86) Dynamic-Link Library")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "AppWizard - Win32 Release"

# PROP BASE Use_MFC 2
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Ext "awx"
# PROP BASE Target_Dir ""
# PROP Use_MFC 2
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Ext "awx"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_WINDLL" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_WINDLL" /D "_AFXDLL" /D "_MBCS" /D "_AFXEXT" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /dll /machine:I386
# ADD LINK32 /nologo /subsystem:windows /dll /machine:I386
# Begin Custom Build - Copying custom AppWizard to Template directory...
TargetPath=.\Release\AppWizard.awx
TargetName=AppWizard
InputPath=.\Release\AppWizard.awx
SOURCE="$(InputPath)"

"$(MSDEVDIR)\Template\$(TargetName).awx" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	if not exist "$(MSDEVDIR)\Template\nul" md "$(MSDEVDIR)\Template" 
	copy "$(TargetPath)" "$(MSDEVDIR)\Template" 
	
# End Custom Build

!ELSEIF  "$(CFG)" == "AppWizard - Win32 Pseudo-Debug"

# PROP BASE Use_MFC 2
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Ext "awx"
# PROP BASE Target_Dir ""
# PROP Use_MFC 2
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Ext "awx"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /Gm /GX /Zi /Od /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_PSEUDO_DEBUG" /D "_WINDLL" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /Gm /GX /Zi /Od /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_PSEUDO_DEBUG" /D "_WINDLL" /D "_AFXDLL" /D "_MBCS" /D "_AFXEXT" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_PSEUDO_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_PSEUDO_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /dll /incremental:yes /debug /machine:I386
# ADD LINK32 /nologo /subsystem:windows /dll /incremental:yes /debug /machine:I386
# Begin Custom Build - Copying custom AppWizard to Template directory...
TargetPath=.\Debug\AppWizard.awx
TargetName=AppWizard
InputPath=.\Debug\AppWizard.awx
SOURCE="$(InputPath)"

"$(MSDEVDIR)\Template\$(TargetName).awx" : $(SOURCE) "$(INTDIR)" "$(OUTDIR)"
	if not exist "$(MSDEVDIR)\Template\nul" md "$(MSDEVDIR)\Template" 
	copy "$(TargetPath)" "$(MSDEVDIR)\Template" 
	
# End Custom Build

!ENDIF 

# Begin Target

# Name "AppWizard - Win32 Release"
# Name "AppWizard - Win32 Pseudo-Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\AppWizard.cpp
# End Source File
# Begin Source File

SOURCE=.\AppWizard.rc
# End Source File
# Begin Source File

SOURCE=.\AppWizardAw.cpp
# End Source File
# Begin Source File

SOURCE=.\Chooser.cpp
# End Source File
# Begin Source File

SOURCE=.\ClassDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\Cstm1Dlg.cpp
# End Source File
# Begin Source File

SOURCE=.\Debug.cpp
# End Source File
# Begin Source File

SOURCE=.\Names.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# Begin Source File

SOURCE=.\WizUtil.cpp
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\AppWizard.h
# End Source File
# Begin Source File

SOURCE=.\AppWizardAw.h
# End Source File
# Begin Source File

SOURCE=.\Chooser.h
# End Source File
# Begin Source File

SOURCE=.\ClassDlg.h
# End Source File
# Begin Source File

SOURCE=.\Cstm1Dlg.h
# End Source File
# Begin Source File

SOURCE=.\Debug.h
# End Source File
# Begin Source File

SOURCE=.\Names.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# Begin Source File

SOURCE=.\WizUtil.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\AppWizard.ico
# End Source File
# End Group
# Begin Group "Template Files"

# PROP Default_Filter "<templates>"
# Begin Source File

SOURCE=.\Template\confirm.inf
# PROP Exclude_From_Scan -1
# PROP BASE Exclude_From_Build 1
# PROP Exclude_From_Build 1
# End Source File
# Begin Source File

SOURCE=.\Template\newproj.inf
# PROP Exclude_From_Scan -1
# PROP BASE Exclude_From_Build 1
# PROP Exclude_From_Build 1
# End Source File
# End Group
# Begin Source File

SOURCE=.\AwxTools.txt
# End Source File
# Begin Source File

SOURCE=.\ReadMe.txt
# End Source File
# End Target
# End Project
# Section AppWizard : {72ADFD49-2C39-11D0-9903-00A0C91BC942}
# 	1:21:CG_IDS_DUPLICATE_FILE:109
# 	1:22:CG_IDS_DUPLICATE_CLASS:108
# 	1:20:CG_IDS_INVALID_CLASS:107
# 	1:24:CG_IDS_INVALID_EXTENSION:106
# 	1:23:CG_IDS_INVALID_FILENAME:105
# 	1:14:CG_IDD_CLASSES:102
# 	2:11:UTIL_HEADER:WizUtil.h
# 	2:12:CAWCLASS_VAR:AppWizardaw
# 	2:21:CG_IDS_DUPLICATE_FILE:CG_IDS_DUPLICATE_FILE
# 	2:11:PROJ_HEADER:AppWizard.h
# 	2:22:CG_IDS_DUPLICATE_CLASS:CG_IDS_DUPLICATE_CLASS
# 	2:20:CG_IDS_INVALID_CLASS:CG_IDS_INVALID_CLASS
# 	2:24:CG_IDS_INVALID_EXTENSION:CG_IDS_INVALID_EXTENSION
# 	2:23:CG_IDS_INVALID_FILENAME:CG_IDS_INVALID_FILENAME
# 	2:10:NAMESARRAY:CNamesArray
# 	2:10:DLG_HEADER:ClassDlg.h
# 	2:6:DLG_ID:CG_IDD_CLASSES
# 	2:13:NAMES_PREPROC:__NAMES_H__
# 	2:10:NAMES_IMPL:Names.cpp
# 	2:12:NAMES_HEADER:Names.h
# 	2:8:DLG_IMPL:ClassDlg.cpp
# 	2:11:NAMES_CLASS:CNames
# 	2:15:CAWCLASS_HEADER:AppWizardAw.h
# 	2:9:UTIL_IMPL:WizUtil.cpp
# 	2:9:DLG_CLASS:CClassesDlg
# End Section
