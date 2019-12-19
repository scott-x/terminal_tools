#ifndef __SCOTT_TASK_H__
#define __SCOTT_TASK_H__

#include <iostream>
class Task
{
public:
	Task(std::string task_name)
    :name(task_name) 
	{

	};
	~Task();
private:
	std::string name;
    void task();
};

#endif