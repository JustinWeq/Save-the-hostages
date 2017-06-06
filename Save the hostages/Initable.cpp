#include "Initable.h"

//defualt constructor-- creates a new instance of Initable with defualt parameters
Initable::Initable() {
	//set the defualt values
	m_errorMessage = 0;
	m_inititailzed = false;
}


//returns a bool saying whether this instance has been initilized or not
bool Initable::GetInitialzedStatus()
{
	return m_inititailzed;
}
//returns the error status
//status- a pointer to a string to output the status to
bool Initable::GetErrorStatus(char* status)
{
	status = m_errorMessage;
	return status != 0;
}
