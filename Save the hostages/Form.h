#pragma once
#include "Initable.h"
#include "Sizeable.h"
#include <Windows.h>
class Form : Initable, Sizeable {
public:
	//overloaded constructor-- constructs a new instance of Form with overloaded parameters
	//name- the name of the form
	//height- the height of the form
	//fullscreen- a bool indicating whether this form is to be fullscreen or not
	Form(LPCWSTR name, int width, int height,bool fullscreen);
	// called to initlize the form, the form will not work if this is not called
	virtual bool Init() override;
	//called to delete the form
	virtual void Delete() override;
	//returns the hwnd for the form
	HWND GetHWND();
	//returns the fullscreen status for the form
	bool GetFullscreenStatus();
	//returns the name for the form
	LPCWSTR GetName();
private:
	//initializes windows
	bool InitWindows();
private:
	//indicates whether the app is fullscreen or not
	bool m_fullscreen;
	//the hwnd that this windows form is registered to
	HWND m_hwnd;
	//the name of the windows app
	LPCWSTR m_name;
	
};