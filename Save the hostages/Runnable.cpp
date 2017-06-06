#include "Runnable.h"
//defualt constructor-- creates a new instance of Runnable with defualt parameters
Runnable::Runnable()
{
	m_isRunning = false;
}
// runs the this instance of runnable
void Runnable::Run()
{
	if (!m_isRunning)
	{
		m_isRunning = true;
		std::thread(Run());
	}
	else
	{
		run();
		m_isRunning = false;
	}
}
//a boolean used to indicate whether this thread is finished or not
bool Runnable::IsRunning() {
	return m_isRunning;
}
//locks the thread in a loop untill it is finished
void Runnable::Lock()
{
	while (IsRunning);
}