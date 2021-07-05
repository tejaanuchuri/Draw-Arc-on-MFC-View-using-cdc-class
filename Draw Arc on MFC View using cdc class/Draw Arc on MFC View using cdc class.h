
// Draw Arc on MFC View using cdc class.h : main header file for the Draw Arc on MFC View using cdc class application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"       // main symbols


// CDrawArconMFCViewusingcdcclassApp:
// See Draw Arc on MFC View using cdc class.cpp for the implementation of this class
//

class CDrawArconMFCViewusingcdcclassApp : public CWinAppEx
{
public:
	CDrawArconMFCViewusingcdcclassApp() noexcept;


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CDrawArconMFCViewusingcdcclassApp theApp;
