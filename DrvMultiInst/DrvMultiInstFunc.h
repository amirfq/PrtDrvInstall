#pragma once

#ifdef DRVMULTIINST_EXPORT
#define API_CALL_STYLE __declspec(dllexport)
#else 
#define API_CALL_STYLE __declspec(dllimport) 
#endif

#ifndef TRACE_LOG
#define TRACE_LOG(x) printf("%s\n", x)
#endif

class CDrvMultiInstFunc
{
public:
	CDrvMultiInstFunc();

	static API_CALL_STYLE bool AddDriver();
};