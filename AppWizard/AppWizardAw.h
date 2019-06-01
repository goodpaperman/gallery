#if !defined(AFX_APPWIZARDAW_H__45270783_7F66_4DB1_8B66_3D150D9A177E__INCLUDED_)
#define AFX_APPWIZARDAW_H__45270783_7F66_4DB1_8B66_3D150D9A177E__INCLUDED_

// AppWizardaw.h : header file
//

class CDialogChooser;

// All function calls made by mfcapwz.dll to this custom AppWizard (except for
//  GetCustomAppWizClass-- see AppWizard.cpp) are through this class.  You may
//  choose to override more of the CCustomAppWiz virtual functions here to
//  further specialize the behavior of this custom AppWizard.
class CAppWizardAppWiz : public CCustomAppWiz
{
public:
	virtual CAppWizStepDlg* Next(CAppWizStepDlg* pDlg);
	virtual CAppWizStepDlg* Back(CAppWizStepDlg* pDlg);
		
	virtual void InitCustomAppWiz();
	virtual void ExitCustomAppWiz();
	virtual void CustomizeProject(IBuildProject* pProject);

protected:
	CDialogChooser* m_pChooser;
};

// This declares the one instance of the CAppWizardAppWiz class.  You can access
//  m_Dictionary and any other public members of this class through the
//  global AppWizardaw.  (Its definition is in AppWizardaw.cpp.)
extern CAppWizardAppWiz AppWizardaw;

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_APPWIZARDAW_H__45270783_7F66_4DB1_8B66_3D150D9A177E__INCLUDED_)
