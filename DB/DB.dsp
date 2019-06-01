# Microsoft Developer Studio Project File - Name="DB" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=DB - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "DB.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "DB.mak" CFG="DB - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "DB - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE "DB - Win32 Debug" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe

!IF  "$(CFG)" == "DB - Win32 Release"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /c
# ADD CPP /nologo /MD /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /c
# ADD BASE MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "NDEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "NDEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /machine:I386
# ADD LINK32 /nologo /subsystem:windows /machine:I386

!ELSEIF  "$(CFG)" == "DB - Win32 Debug"

# PROP BASE Use_MFC 6
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 6
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /Yu"stdafx.h" /FD /GZ  /c
# ADD CPP /nologo /MDd /W3 /Gm /GX /ZI /Od /D "WIN32" /D "_DEBUG" /D "_WINDOWS" /D "_AFXDLL" /D "_MBCS" /Yu"stdafx.h" /FD /GZ   /c
# ADD BASE MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD MTL /nologo /D "_DEBUG" /mktyplib203 /win32
# ADD BASE RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
# ADD RSC /l 0x804 /d "_DEBUG" /d "_AFXDLL"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept
# ADD LINK32 /nologo /subsystem:windows /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "DB - Win32 Release"
# Name "DB - Win32 Debug"
# Begin Group "Source Files"

# PROP Default_Filter "cpp;c;cxx;rc;def;r;odl;idl;hpj;bat"
# Begin Source File

SOURCE=.\ChildView.cpp
# End Source File
# Begin Source File

SOURCE=.\DB.cpp
# End Source File
# Begin Source File

SOURCE=.\DB.rc
# End Source File
# Begin Source File

SOURCE=.\MainFrm.cpp
# End Source File
# Begin Source File

SOURCE=.\RsCgDlg.cpp
# End Source File
# Begin Source File

SOURCE=.\StdAfx.cpp
# ADD CPP /Yc"stdafx.h"
# End Source File
# End Group
# Begin Group "Header Files"

# PROP Default_Filter "h;hpp;hxx;hm;inl"
# Begin Source File

SOURCE=.\ChildView.h
# End Source File
# Begin Source File

SOURCE=.\DB.h
# End Source File
# Begin Source File

SOURCE=.\MainFrm.h
# End Source File
# Begin Source File

SOURCE=.\Resource.h
# End Source File
# Begin Source File

SOURCE=.\RsCgDlg.h
# End Source File
# Begin Source File

SOURCE=.\StdAfx.h
# End Source File
# End Group
# Begin Group "Resource Files"

# PROP Default_Filter "ico;cur;bmp;dlg;rc2;rct;bin;rgs;gif;jpg;jpeg;jpe"
# Begin Source File

SOURCE=.\res\DB.ico
# End Source File
# Begin Source File

SOURCE=.\res\DB.rc2
# End Source File
# Begin Source File

SOURCE=.\res\Toolbar.bmp
# End Source File
# End Group
# End Target
# End Project
# Section DB : {4DFBB93C-4FB1-11D1-ADC1-00A0C9055D8F}
# 	1:26:IDC_EDIT_INNERDIAMETERUNIT:130
# 	1:15:IDC_EDIT_REMARK:108
# 	1:23:IDC_STATIC_MAXSPEEDUNIT:141
# 	1:29:IDC_STATIC_PRESSUREENDUREUNIT:137
# 	1:11:IDC_EDIT_SN:112
# 	1:11:IDC_EDIT_ID:104
# 	1:32:IDC_STATIC_TEMPERATUREENDUREUNIT:133
# 	1:15:IDC_STATIC_NAME:105
# 	1:22:IDC_STATIC_DISPLAYMASK:143
# 	1:17:IDC_EDIT_MAXSPEED:140
# 	1:28:IDC_STATIC_INNERDIAMETERUNIT:127
# 	1:19:IDC_EDIT_WEIGHTUNIT:120
# 	1:26:IDC_EDIT_TEMPERATUREENDURE:132
# 	1:13:IDC_STATIC_SN:111
# 	1:17:IDC_STATIC_REMARK:107
# 	1:13:IDC_STATIC_ID:103
# 	1:25:IDC_STATIC_PRESSUREENDURE:135
# 	1:19:IDC_EDIT_LENGTHUNIT:116
# 	1:15:IDC_EDIT_LENGTH:114
# 	1:20:IDC_STATIC_IMAGEPATH:109
# 	1:19:IDC_STATIC_MAXSPEED:139
# 	1:15:IDC_EDIT_WEIGHT:118
# 	1:25:IDC_STATIC_TOPTRANSFORMER:145
# 	1:20:IDC_EDIT_DISPLAYMASK:144
# 	1:23:IDC_EDIT_PRESSUREENDURE:136
# 	1:28:IDC_STATIC_TEMPERATUREENDURE:131
# 	1:22:IDC_EDIT_INNERDIAMETER:126
# 	1:25:IDC_STATIC_OUTTERDIAMETER:121
# 	1:13:IDC_EDIT_NAME:106
# 	1:23:IDC_EDIT_TOPTRANSFORMER:146
# 	1:21:IDC_EDIT_MAXSPEEDUNIT:142
# 	1:23:IDC_EDIT_OUTTERDIAMETER:122
# 	1:17:IDC_STATIC_LENGTH:113
# 	1:17:IDC_STATIC_WEIGHT:117
# 	1:26:IDC_EDIT_BOTTOMTRANSFORMER:148
# 	1:27:IDC_EDIT_OUTTERDIAMETERUNIT:124
# 	1:21:IDC_STATIC_WEIGHTUNIT:119
# 	1:30:IDC_EDIT_TEMPERATUREENDUREUNIT:134
# 	1:29:IDC_STATIC_OUTTERDIAMETERUNIT:123
# 	1:21:IDC_STATIC_LENGTHUNIT:115
# 	1:28:IDC_STATIC_BOTTOMTRANSFORMER:147
# 	1:27:IDC_EDIT_PRESSUREENDUREUNIT:138
# 	1:24:IDC_STATIC_INNERDIAMETER:125
# 	1:18:IDC_EDIT_IMAGEPATH:110
# 	1:16:CG_IDD_RECORDSET:102
# 	2:14:CG_ADO_APPLIED:YUP
# End Section
