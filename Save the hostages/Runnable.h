#pragma once
#include <thread>
//a pure virtual class intended to be implemented by objects that are threadable
class Runnable {
public:
	//defualt constructor-- creates a new instance of Runnable with defualt parameters
	Runnable();
	// runs the this instance of runnable
	void Run();
	//a boolean used to indicate whether this thread is finished or not
	bool IsRunning();
	//locks the thread in a loop untill it is finished
	void Lock();
protected:
	//this must be overridden as it is the actual thing that will be called
	virtual void run() = 0;
private:
	//a bool indicating whether this instance of runnable is running or not
	bool m_isRunning;
};
