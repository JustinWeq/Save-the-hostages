#pragma once

class Sizeable {
public:
	//defualt constructor--creates a new instance of Sizeable with defualt parameters
	Sizeable(int height = 0,int width = 0);

	//returns the width of this instance
	int GetWidth();
	//returns the height of this instance
	int GetHeight();
protected:
	//the width ofthis instance
	int m_width;
	//the height of this instance
	int m_height;
};