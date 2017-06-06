#include "Form.h"
//overloaded constructor-- constructs a new instance of Form with overloaded parameters
//name- the name of the form
//height- the height of the form
//fullscreen- a bool indicating whether this form is to be fullscreen or not
Form::Form(LPCWSTR name, int width, int height, bool fullscreen): Initable()
{
	//store the passed in variables
	m_name = name;
	m_width = width;
	m_height = height;
	m_fullscreen = fullscreen;
}
// called to initlize the form, the form will not work if this is not called
bool Form::Init()
{
	bool result;
	//set up the windows form by calling init windows
	result = InitWindows();
	//set initialized
	initialze();
	return result;
}
//called to delete the form
void Form::Delete()
{
	//delete the windows form stuff
}
//returns the hwnd for the form
HWND Form::GetHWND()
{
	//return the hwnd
	return m_hwnd;
}
//returns the fullscreen status for the form
bool Form::GetFullscreenStatus()
{
	//return the fullscreen status
	return m_fullscreen;
}
//returns the name for the form
LPCWSTR Form::GetName()
{
	//return the name of this form instance
	return m_name;
}

