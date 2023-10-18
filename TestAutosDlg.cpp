

// ----------------------------------------
// BEGIN OF IMPLEMENTATION CODE
// ----------------------------------------
#include "TestAutosDlg.h"
#include "CATDlgGridConstraints.h"
#include "CATMsgCatalog.h"
#include "CATRscCatalog.h"
#include "CATDlgLabel.h"
#include "CATDlgLabel.h"
#include "CATDlgEditor.h"
#include "CATDlgEditor.h"

// Begin of User Code
#include "CATUnicodeString.h"
// End of User Code

TestAutosDlg::TestAutosDlg(CATDialog* iParent, const CATString& iName)
    :CATDlgDialog(iParent,iName,0
|CATDlgWndOK
|CATDlgWndCANCEL
| CATDlgGridLayout
)
{

_pFirstLbl = NULL;
_psecondlbl = NULL;
_pFPEdtr = NULL;
_pSecondPoint = NULL;

// Begin of User Code

// End of User Code

}

TestAutosDlg::~TestAutosDlg()
{

// Begin of User Code

// End of User Code
_pFirstLbl = NULL;
_psecondlbl = NULL;
_pFPEdtr = NULL;
_pSecondPoint = NULL;

}



void TestAutosDlg::Build() 
{
int style=0;

// Begin of User Code

// End of User Code
_pFirstLbl=new CATDlgLabel(this,(const char*)"pFirstLbl",0);
_psecondlbl=new CATDlgLabel(this,(const char*)"psecondlbl",0);
_pFPEdtr=new CATDlgEditor(this,(const char*)"pFPEdtr",0);
_pSecondPoint=new CATDlgEditor(this,(const char*)"pSecondPoint",0);

CATUnicodeString catalog = "TestAutosDlg";
CATUnicodeString sol="";

CATUnicodeString key="Title";
sol = CATMsgCatalog::BuildMessage((const char*)catalog, (const char*)key);
if (sol!="") this->SetTitle(sol);

key="CancelBtnTitle";
sol = CATMsgCatalog::BuildMessage((const char*)catalog, (const char*)key);
if (sol!="") this->SetCANCELTitle(sol);

key="OKBtnTitle";
sol = CATMsgCatalog::BuildMessage((const char*)catalog, (const char*)key);
if (sol!="") this->SetOKTitle(sol);

key="PreviewBtnTitle";
sol = CATMsgCatalog::BuildMessage((const char*)catalog, (const char*)key);
if (sol!="") this->SetPREVIEWTitle(sol);

key="ApplyBtnTitle";
sol = CATMsgCatalog::BuildMessage((const char*)catalog, (const char*)key);
if (sol!="") this->SetAPPLYTitle(sol);

key="FinishBtnTitle";
sol = CATMsgCatalog::BuildMessage((const char*)catalog, (const char*)key);
if (sol!="") this->SetFINISHTitle(sol); 

key="Help";
sol = CATMsgCatalog::BuildMessage((const char*)catalog, (const char*)key);
if (sol!="")this->SetHelp(sol);

key="ShortHelp";
sol = CATMsgCatalog::BuildMessage((const char*)catalog, (const char*)key);
if (sol!="") this->SetShortHelp(sol);

key="LongHelp";
sol = CATMsgCatalog::BuildMessage((const char*)catalog, (const char*)key);
if (sol!="") this->SetLongHelp(sol);

key="Accelerator";
sol = CATMsgCatalog::BuildMessage((const char*)catalog, (const char*)key);
if (sol!="") this->SetAcceleratorString(sol);

CATUnicodeString iconKey= "Icon";
CATUnicodeString iconSelKey= "IconSel";
CATUnicodeString iconFocusKey= "IconFocus";

CATString iconName,iconSelName,iconFocusName;
CATRscCatalog::BuildResource((const char*)catalog, (const char*)iconKey, iconName);
CATRscCatalog::BuildResource((const char*)catalog, (const char*)iconSelKey, iconSelName);
CATRscCatalog::BuildResource((const char*)catalog, (const char*)iconFocusKey, iconFocusName);
this->SetIconName(iconName, iconSelName, iconFocusName);
this->SetHELPSensitivity(CATDlgDisable);
_pFirstLbl->SetGridConstraints(0,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_psecondlbl->SetGridConstraints(1,0,1,1,0|CATGRID_LEFT|CATGRID_TOP);
_pFPEdtr->SetGridConstraints(0,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);
_pSecondPoint->SetGridConstraints(1,1,1,1,0|CATGRID_LEFT|CATGRID_RIGHT|CATGRID_TOP);

// Begin of User Code

// End of User Code

}


// You can put here the implementation of class methods

// Begin of User Code
HRESULT TestAutosDlg::setFPName(CATUnicodeString strFPMesg)
{
    _pFPEdtr->SetText(strFPMesg);

    return S_OK;
}
HRESULT TestAutosDlg::setSPName(CATUnicodeString strSPMesg)
{
    _pSecondPoint->SetText(strSPMesg);

    return S_OK;
}

// End of User Code


// End of implementation of class methods
