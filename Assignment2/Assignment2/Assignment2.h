// Assignment2.h : main header file for the Assignment1 DLL
//

#pragma once

#ifndef __AFXWIN_H__
#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols
#include <Windows.h>
#include<arxHeaders.h>
#include <dbents.h>

// CAssignment2App
// See Assignment2.cpp for the implementation of this class
//
class CAssignment2App : public CWinApp
{
public:
	CAssignment2App();

	// Overrides
public:
	virtual BOOL InitInstance();

	// Member function to add a line
	static void AddLine();

	// Entry point function

	DECLARE_MESSAGE_MAP()
};
//static int AcRxEntryPoint(AcRx::AppMsgCode Msg, void* pkt);
