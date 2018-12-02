// DrvMultiInst.h : main header file for the DrvMultiInst DLL
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols

// CDrvMultiInstApp
// See DrvMultiInst.cpp for the implementation of this class
//

class CDrvMultiInstApp : public CWinApp
{
public:
	CDrvMultiInstApp();

	// Overrides
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
