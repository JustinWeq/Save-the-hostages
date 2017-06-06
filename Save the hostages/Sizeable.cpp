#include "Sizeable.h"

//defualt constructor--creates a new instance of Sizeable with defualt parameters
Sizeable::Sizeable(int height = 0, int width = 0)
{
	m_height = height;
	m_width = width;
}

//returns the width of this instance
int Sizeable::GetWidth()
{
	return m_width;
}
//returns the height of this instance
int Sizeable::GetHeight()
{
	return m_height;
}