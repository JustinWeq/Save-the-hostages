#pragma once
// a upre virtual class that is used for objects that are made using lazy initialization
class Initable {
public:
	//defualt constructor-- creates a new instance of Initable with defualt parameters
	Initable();
	//a pure virtual function used to initialize a class
	virtual bool Init() = 0;
	//a pure virtual function used to delete a class
	virtual void Delete() = 0;
	//returns a bool saying whether this instance has been initilized or not
	bool GetInitialzedStatus();
	//returns the error status
	//status- a pointer to a string to output the status to
	bool GetErrorStatus(char* status);
protected:
	//call this at the end of a init function, it sets the initilized status to true
	void initialze();
	//call this when ever a error happens to set the error message
	void SetError(const char* errorMessage);
protected:
private:
	//a bool indicating whether this instance has been initialized or not
	bool m_inititailzed;
	//a string indicating an error message if there is one
	char* m_errorMessage;
};
