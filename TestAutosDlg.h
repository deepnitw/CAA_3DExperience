

// BEGIN OF HEADER CODE
// ----------------------------------------
    
#ifndef TestAutosDlg_h
#define TestAutosDlg_h

#include "CATDlgDialog.h"
class CATDlgLabel;
class CATDlgLabel;
class CATDlgEditor;
class CATDlgEditor;

// Begin of User Code

// End of User Code

class  TestAutosDlg : public CATDlgDialog {
DeclareResource(TestAutosDlg, CATDlgDialog)

public:
	TestAutosDlg(CATDialog * iParent, const CATString& iDialogName);
	
	virtual ~TestAutosDlg();
	void Build();

	// Copy ctor and assignment operators are declared but not defined by infra
	TestAutosDlg(const TestAutosDlg&);
	TestAutosDlg& operator= (const TestAutosDlg&);
	
private:
CATDlgLabel* _pFirstLbl;
CATDlgLabel* _psecondlbl;
CATDlgEditor* _pFPEdtr;
CATDlgEditor* _pSecondPoint;

// Begin of User Code
public:
	HRESULT setFPName(CATUnicodeString strFPMesg);
	HRESULT setSPName(CATUnicodeString strSPMesg);
// End of User Code

};

#endif
