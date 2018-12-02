
#include "stdafx.h"
#include "DrvMultiInstFunc.h"
#include "Winspool.h"

#define DRVMULTIINST_EXPORT 1

CDrvMultiInstFunc::CDrvMultiInstFunc()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}

extern "C" bool CDrvMultiInstFunc::AddDriver()
{
	TRACE_LOG("AddDriver function started ...");

	bool bResult;
	
	TRACE_LOG("AddPrinterDriver function Stared ...");
	DRIVER_INFO_3 driverInfo3;

	memset(&driverInfo3, 0, sizeof(driverInfo3));
	driverInfo3.cVersion = 4;
	driverInfo3.pName = _T("ThinPrint Gateway");
	driverInfo3.pEnvironment = NULL; //Windows NT x86
	driverInfo3.pDriverPath = _T("TPG.inf");
	driverInfo3.pDataFile = _T("TPG.gpd");
	driverInfo3.pConfigFile = _T("TPG-manifest.ini");
	driverInfo3.pHelpFile = _T("TPG.hlp");
	driverInfo3.pDependentFiles = NULL;
	driverInfo3.pMonitorName = NULL;
	driverInfo3.pDefaultDataType = _T("");
	//driverInfo6.pszzPreviousNames = _T("");
	//driverInfo6.ftDriverDate = ;
	//driverInfo6.dwlDriverVersion = 1001;
	//driverInfo6.pszMfgName = _T("");
	//driverInfo6.pszOEMUrl = _T("www.ThinPrint.com");
	//driverInfo6.pszHardwareID = _T("");
	//driverInfo6.pszProvider = _T("ThinPrint");

	bResult = AddPrinterDriver(NULL, 3, (LPBYTE)&driverInfo3);
	TRACE_LOG("AddPrinterDriver function finished!");

	bResult = AddPrinterDriverEx(NULL, 3, (LPBYTE)&driverInfo3, APD_COPY_ALL_FILES);

	return TRUE;
}